/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayAccessLog.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents logging information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayLogging">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayLogging
  {
  public:
    AWS_APPMESH_API VirtualGatewayLogging() = default;
    AWS_APPMESH_API VirtualGatewayLogging(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayLogging& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The access log configuration.</p>
     */
    inline const VirtualGatewayAccessLog& GetAccessLog() const { return m_accessLog; }
    inline bool AccessLogHasBeenSet() const { return m_accessLogHasBeenSet; }
    template<typename AccessLogT = VirtualGatewayAccessLog>
    void SetAccessLog(AccessLogT&& value) { m_accessLogHasBeenSet = true; m_accessLog = std::forward<AccessLogT>(value); }
    template<typename AccessLogT = VirtualGatewayAccessLog>
    VirtualGatewayLogging& WithAccessLog(AccessLogT&& value) { SetAccessLog(std::forward<AccessLogT>(value)); return *this;}
    ///@}
  private:

    VirtualGatewayAccessLog m_accessLog;
    bool m_accessLogHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
