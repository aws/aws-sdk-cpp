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
#include <aws/servicediscovery/model/Operation.h>
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
  class AWS_SERVICEDISCOVERY_API GetOperationResult
  {
  public:
    GetOperationResult();
    GetOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A complex type that contains information about the operation.</p>
     */
    inline const Operation& GetOperation() const{ return m_operation; }

    /**
     * <p>A complex type that contains information about the operation.</p>
     */
    inline void SetOperation(const Operation& value) { m_operation = value; }

    /**
     * <p>A complex type that contains information about the operation.</p>
     */
    inline void SetOperation(Operation&& value) { m_operation = std::move(value); }

    /**
     * <p>A complex type that contains information about the operation.</p>
     */
    inline GetOperationResult& WithOperation(const Operation& value) { SetOperation(value); return *this;}

    /**
     * <p>A complex type that contains information about the operation.</p>
     */
    inline GetOperationResult& WithOperation(Operation&& value) { SetOperation(std::move(value)); return *this;}

  private:

    Operation m_operation;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
