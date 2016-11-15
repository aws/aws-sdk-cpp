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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API GetOpenIDConnectProviderRequest : public IAMRequest
  {
  public:
    GetOpenIDConnectProviderRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the OIDC provider resource object in IAM to
     * get information for. You can get a list of OIDC provider resource ARNs by using
     * the <a>ListOpenIDConnectProviders</a> action.</p> <p>For more information about
     * ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetOpenIDConnectProviderArn() const{ return m_openIDConnectProviderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the OIDC provider resource object in IAM to
     * get information for. You can get a list of OIDC provider resource ARNs by using
     * the <a>ListOpenIDConnectProviders</a> action.</p> <p>For more information about
     * ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline void SetOpenIDConnectProviderArn(const Aws::String& value) { m_openIDConnectProviderArnHasBeenSet = true; m_openIDConnectProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the OIDC provider resource object in IAM to
     * get information for. You can get a list of OIDC provider resource ARNs by using
     * the <a>ListOpenIDConnectProviders</a> action.</p> <p>For more information about
     * ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline void SetOpenIDConnectProviderArn(Aws::String&& value) { m_openIDConnectProviderArnHasBeenSet = true; m_openIDConnectProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the OIDC provider resource object in IAM to
     * get information for. You can get a list of OIDC provider resource ARNs by using
     * the <a>ListOpenIDConnectProviders</a> action.</p> <p>For more information about
     * ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline void SetOpenIDConnectProviderArn(const char* value) { m_openIDConnectProviderArnHasBeenSet = true; m_openIDConnectProviderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the OIDC provider resource object in IAM to
     * get information for. You can get a list of OIDC provider resource ARNs by using
     * the <a>ListOpenIDConnectProviders</a> action.</p> <p>For more information about
     * ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline GetOpenIDConnectProviderRequest& WithOpenIDConnectProviderArn(const Aws::String& value) { SetOpenIDConnectProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the OIDC provider resource object in IAM to
     * get information for. You can get a list of OIDC provider resource ARNs by using
     * the <a>ListOpenIDConnectProviders</a> action.</p> <p>For more information about
     * ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline GetOpenIDConnectProviderRequest& WithOpenIDConnectProviderArn(Aws::String&& value) { SetOpenIDConnectProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the OIDC provider resource object in IAM to
     * get information for. You can get a list of OIDC provider resource ARNs by using
     * the <a>ListOpenIDConnectProviders</a> action.</p> <p>For more information about
     * ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline GetOpenIDConnectProviderRequest& WithOpenIDConnectProviderArn(const char* value) { SetOpenIDConnectProviderArn(value); return *this;}

  private:
    Aws::String m_openIDConnectProviderArn;
    bool m_openIDConnectProviderArnHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
