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
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceDiscovery
{
namespace Model
{
  class AWS_SERVICEDISCOVERY_API DeregisterInstanceResult
  {
  public:
    DeregisterInstanceResult();
    DeregisterInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeregisterInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A value that you can use to determine whether the request completed
     * successfully. For more information, see <a>GetOperation</a>.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>A value that you can use to determine whether the request completed
     * successfully. For more information, see <a>GetOperation</a>.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationId = value; }

    /**
     * <p>A value that you can use to determine whether the request completed
     * successfully. For more information, see <a>GetOperation</a>.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationId = std::move(value); }

    /**
     * <p>A value that you can use to determine whether the request completed
     * successfully. For more information, see <a>GetOperation</a>.</p>
     */
    inline void SetOperationId(const char* value) { m_operationId.assign(value); }

    /**
     * <p>A value that you can use to determine whether the request completed
     * successfully. For more information, see <a>GetOperation</a>.</p>
     */
    inline DeregisterInstanceResult& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>A value that you can use to determine whether the request completed
     * successfully. For more information, see <a>GetOperation</a>.</p>
     */
    inline DeregisterInstanceResult& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>A value that you can use to determine whether the request completed
     * successfully. For more information, see <a>GetOperation</a>.</p>
     */
    inline DeregisterInstanceResult& WithOperationId(const char* value) { SetOperationId(value); return *this;}

  private:

    Aws::String m_operationId;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
