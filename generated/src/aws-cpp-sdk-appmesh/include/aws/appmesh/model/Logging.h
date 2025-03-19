/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/AccessLog.h>
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
   * <p>An object that represents the logging information for a virtual
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/Logging">AWS API
   * Reference</a></p>
   */
  class Logging
  {
  public:
    AWS_APPMESH_API Logging() = default;
    AWS_APPMESH_API Logging(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Logging& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The access log configuration for a virtual node.</p>
     */
    inline const AccessLog& GetAccessLog() const { return m_accessLog; }
    inline bool AccessLogHasBeenSet() const { return m_accessLogHasBeenSet; }
    template<typename AccessLogT = AccessLog>
    void SetAccessLog(AccessLogT&& value) { m_accessLogHasBeenSet = true; m_accessLog = std::forward<AccessLogT>(value); }
    template<typename AccessLogT = AccessLog>
    Logging& WithAccessLog(AccessLogT&& value) { SetAccessLog(std::forward<AccessLogT>(value)); return *this;}
    ///@}
  private:

    AccessLog m_accessLog;
    bool m_accessLogHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
