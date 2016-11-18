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
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The GetOperationDetail request includes the following element.</p>
   */
  class AWS_ROUTE53DOMAINS_API GetOperationDetailRequest : public Route53DomainsRequest
  {
  public:
    GetOperationDetailRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The identifier for the operation for which you want to get the status. Amazon
     * Route 53 returned the identifier in the response to the original request.</p>
     * <p>Type: String</p> <p>Default: None</p> <p>Required: Yes</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>The identifier for the operation for which you want to get the status. Amazon
     * Route 53 returned the identifier in the response to the original request.</p>
     * <p>Type: String</p> <p>Default: None</p> <p>Required: Yes</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>The identifier for the operation for which you want to get the status. Amazon
     * Route 53 returned the identifier in the response to the original request.</p>
     * <p>Type: String</p> <p>Default: None</p> <p>Required: Yes</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>The identifier for the operation for which you want to get the status. Amazon
     * Route 53 returned the identifier in the response to the original request.</p>
     * <p>Type: String</p> <p>Default: None</p> <p>Required: Yes</p>
     */
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }

    /**
     * <p>The identifier for the operation for which you want to get the status. Amazon
     * Route 53 returned the identifier in the response to the original request.</p>
     * <p>Type: String</p> <p>Default: None</p> <p>Required: Yes</p>
     */
    inline GetOperationDetailRequest& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>The identifier for the operation for which you want to get the status. Amazon
     * Route 53 returned the identifier in the response to the original request.</p>
     * <p>Type: String</p> <p>Default: None</p> <p>Required: Yes</p>
     */
    inline GetOperationDetailRequest& WithOperationId(Aws::String&& value) { SetOperationId(value); return *this;}

    /**
     * <p>The identifier for the operation for which you want to get the status. Amazon
     * Route 53 returned the identifier in the response to the original request.</p>
     * <p>Type: String</p> <p>Default: None</p> <p>Required: Yes</p>
     */
    inline GetOperationDetailRequest& WithOperationId(const char* value) { SetOperationId(value); return *this;}

  private:
    Aws::String m_operationId;
    bool m_operationIdHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
