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
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Scope.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class AWS_WAFV2_API GetWebACLRequest : public WAFV2Request
  {
  public:
    GetWebACLRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWebACL"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A friendly name of the Web ACL. You cannot change the name of a Web ACL after
     * you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name of the Web ACL. You cannot change the name of a Web ACL after
     * you create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name of the Web ACL. You cannot change the name of a Web ACL after
     * you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name of the Web ACL. You cannot change the name of a Web ACL after
     * you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name of the Web ACL. You cannot change the name of a Web ACL after
     * you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name of the Web ACL. You cannot change the name of a Web ACL after
     * you create it.</p>
     */
    inline GetWebACLRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name of the Web ACL. You cannot change the name of a Web ACL after
     * you create it.</p>
     */
    inline GetWebACLRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name of the Web ACL. You cannot change the name of a Web ACL after
     * you create it.</p>
     */
    inline GetWebACLRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB) or an API Gateway stage. </p> <p>To work with CloudFront, you must also
     * specify the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI -
     * Specify the region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB) or an API Gateway stage. </p> <p>To work with CloudFront, you must also
     * specify the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI -
     * Specify the region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB) or an API Gateway stage. </p> <p>To work with CloudFront, you must also
     * specify the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI -
     * Specify the region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB) or an API Gateway stage. </p> <p>To work with CloudFront, you must also
     * specify the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI -
     * Specify the region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB) or an API Gateway stage. </p> <p>To work with CloudFront, you must also
     * specify the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI -
     * Specify the region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline GetWebACLRequest& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB) or an API Gateway stage. </p> <p>To work with CloudFront, you must also
     * specify the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI -
     * Specify the region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline GetWebACLRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the Web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the Web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the Web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the Web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the Web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the Web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline GetWebACLRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the Web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline GetWebACLRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline GetWebACLRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Scope m_scope;
    bool m_scopeHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
