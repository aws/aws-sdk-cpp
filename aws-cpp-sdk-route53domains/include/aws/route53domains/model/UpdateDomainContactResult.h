/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>The UpdateDomainContact response includes the following element.</p>
   */
  class AWS_ROUTE53DOMAINS_API UpdateDomainContactResult
  {
  public:
    UpdateDomainContactResult();
    UpdateDomainContactResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateDomainContactResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use GetOperationDetail.</p> <p>Type: String</p>
     * <p>Default: None</p> <p>Constraints: Maximum 255 characters.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use GetOperationDetail.</p> <p>Type: String</p>
     * <p>Default: None</p> <p>Constraints: Maximum 255 characters.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationId = value; }

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use GetOperationDetail.</p> <p>Type: String</p>
     * <p>Default: None</p> <p>Constraints: Maximum 255 characters.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationId = value; }

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use GetOperationDetail.</p> <p>Type: String</p>
     * <p>Default: None</p> <p>Constraints: Maximum 255 characters.</p>
     */
    inline void SetOperationId(const char* value) { m_operationId.assign(value); }

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use GetOperationDetail.</p> <p>Type: String</p>
     * <p>Default: None</p> <p>Constraints: Maximum 255 characters.</p>
     */
    inline UpdateDomainContactResult& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use GetOperationDetail.</p> <p>Type: String</p>
     * <p>Default: None</p> <p>Constraints: Maximum 255 characters.</p>
     */
    inline UpdateDomainContactResult& WithOperationId(Aws::String&& value) { SetOperationId(value); return *this;}

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use GetOperationDetail.</p> <p>Type: String</p>
     * <p>Default: None</p> <p>Constraints: Maximum 255 characters.</p>
     */
    inline UpdateDomainContactResult& WithOperationId(const char* value) { SetOperationId(value); return *this;}

  private:
    Aws::String m_operationId;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
