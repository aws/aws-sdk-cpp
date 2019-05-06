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
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The <a>GetOperationDetail</a> request includes the following
   * element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetOperationDetailRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API GetOperationDetailRequest : public Route53DomainsRequest
  {
  public:
    GetOperationDetailRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOperationDetail"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier for the operation for which you want to get the status. Amazon
     * Route 53 returned the identifier in the response to the original request.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>The identifier for the operation for which you want to get the status. Amazon
     * Route 53 returned the identifier in the response to the original request.</p>
     */
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }

    /**
     * <p>The identifier for the operation for which you want to get the status. Amazon
     * Route 53 returned the identifier in the response to the original request.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>The identifier for the operation for which you want to get the status. Amazon
     * Route 53 returned the identifier in the response to the original request.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = std::move(value); }

    /**
     * <p>The identifier for the operation for which you want to get the status. Amazon
     * Route 53 returned the identifier in the response to the original request.</p>
     */
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }

    /**
     * <p>The identifier for the operation for which you want to get the status. Amazon
     * Route 53 returned the identifier in the response to the original request.</p>
     */
    inline GetOperationDetailRequest& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>The identifier for the operation for which you want to get the status. Amazon
     * Route 53 returned the identifier in the response to the original request.</p>
     */
    inline GetOperationDetailRequest& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the operation for which you want to get the status. Amazon
     * Route 53 returned the identifier in the response to the original request.</p>
     */
    inline GetOperationDetailRequest& WithOperationId(const char* value) { SetOperationId(value); return *this;}

  private:

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
