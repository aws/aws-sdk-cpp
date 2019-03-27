/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>An object representing the logging information for a virtual
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/Logging">AWS API
   * Reference</a></p>
   */
  class AWS_APPMESH_API Logging
  {
  public:
    Logging();
    Logging(Aws::Utils::Json::JsonView jsonValue);
    Logging& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The access log configuration for a virtual node.</p>
     */
    inline const AccessLog& GetAccessLog() const{ return m_accessLog; }

    /**
     * <p>The access log configuration for a virtual node.</p>
     */
    inline bool AccessLogHasBeenSet() const { return m_accessLogHasBeenSet; }

    /**
     * <p>The access log configuration for a virtual node.</p>
     */
    inline void SetAccessLog(const AccessLog& value) { m_accessLogHasBeenSet = true; m_accessLog = value; }

    /**
     * <p>The access log configuration for a virtual node.</p>
     */
    inline void SetAccessLog(AccessLog&& value) { m_accessLogHasBeenSet = true; m_accessLog = std::move(value); }

    /**
     * <p>The access log configuration for a virtual node.</p>
     */
    inline Logging& WithAccessLog(const AccessLog& value) { SetAccessLog(value); return *this;}

    /**
     * <p>The access log configuration for a virtual node.</p>
     */
    inline Logging& WithAccessLog(AccessLog&& value) { SetAccessLog(std::move(value)); return *this;}

  private:

    AccessLog m_accessLog;
    bool m_accessLogHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
