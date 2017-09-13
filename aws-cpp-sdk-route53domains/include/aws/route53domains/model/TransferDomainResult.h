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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
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
namespace Route53Domains
{
namespace Model
{
  /**
   * <p>The TranserDomain response includes the following element.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/TransferDomainResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API TransferDomainResult
  {
  public:
    TransferDomainResult();
    TransferDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    TransferDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use <a>GetOperationDetail</a>.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use <a>GetOperationDetail</a>.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationId = value; }

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use <a>GetOperationDetail</a>.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationId = std::move(value); }

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use <a>GetOperationDetail</a>.</p>
     */
    inline void SetOperationId(const char* value) { m_operationId.assign(value); }

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use <a>GetOperationDetail</a>.</p>
     */
    inline TransferDomainResult& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use <a>GetOperationDetail</a>.</p>
     */
    inline TransferDomainResult& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use <a>GetOperationDetail</a>.</p>
     */
    inline TransferDomainResult& WithOperationId(const char* value) { SetOperationId(value); return *this;}

  private:

    Aws::String m_operationId;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
