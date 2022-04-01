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
  class AWS_APPMESH_API VirtualGatewayLogging
  {
  public:
    VirtualGatewayLogging();
    VirtualGatewayLogging(Aws::Utils::Json::JsonView jsonValue);
    VirtualGatewayLogging& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The access log configuration.</p>
     */
    inline const VirtualGatewayAccessLog& GetAccessLog() const{ return m_accessLog; }

    /**
     * <p>The access log configuration.</p>
     */
    inline bool AccessLogHasBeenSet() const { return m_accessLogHasBeenSet; }

    /**
     * <p>The access log configuration.</p>
     */
    inline void SetAccessLog(const VirtualGatewayAccessLog& value) { m_accessLogHasBeenSet = true; m_accessLog = value; }

    /**
     * <p>The access log configuration.</p>
     */
    inline void SetAccessLog(VirtualGatewayAccessLog&& value) { m_accessLogHasBeenSet = true; m_accessLog = std::move(value); }

    /**
     * <p>The access log configuration.</p>
     */
    inline VirtualGatewayLogging& WithAccessLog(const VirtualGatewayAccessLog& value) { SetAccessLog(value); return *this;}

    /**
     * <p>The access log configuration.</p>
     */
    inline VirtualGatewayLogging& WithAccessLog(VirtualGatewayAccessLog&& value) { SetAccessLog(std::move(value)); return *this;}

  private:

    VirtualGatewayAccessLog m_accessLog;
    bool m_accessLogHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
