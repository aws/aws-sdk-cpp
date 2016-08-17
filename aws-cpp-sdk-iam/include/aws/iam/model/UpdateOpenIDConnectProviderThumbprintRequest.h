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
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API UpdateOpenIDConnectProviderThumbprintRequest : public IAMRequest
  {
  public:
    UpdateOpenIDConnectProviderThumbprintRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OIDC provider resource object for
     * which you want to update the thumbprint. You can get a list of OIDC provider
     * ARNs by using the <a>ListOpenIDConnectProviders</a> action.</p> <p>For more
     * information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetOpenIDConnectProviderArn() const{ return m_openIDConnectProviderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OIDC provider resource object for
     * which you want to update the thumbprint. You can get a list of OIDC provider
     * ARNs by using the <a>ListOpenIDConnectProviders</a> action.</p> <p>For more
     * information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline void SetOpenIDConnectProviderArn(const Aws::String& value) { m_openIDConnectProviderArnHasBeenSet = true; m_openIDConnectProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OIDC provider resource object for
     * which you want to update the thumbprint. You can get a list of OIDC provider
     * ARNs by using the <a>ListOpenIDConnectProviders</a> action.</p> <p>For more
     * information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline void SetOpenIDConnectProviderArn(Aws::String&& value) { m_openIDConnectProviderArnHasBeenSet = true; m_openIDConnectProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OIDC provider resource object for
     * which you want to update the thumbprint. You can get a list of OIDC provider
     * ARNs by using the <a>ListOpenIDConnectProviders</a> action.</p> <p>For more
     * information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline void SetOpenIDConnectProviderArn(const char* value) { m_openIDConnectProviderArnHasBeenSet = true; m_openIDConnectProviderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OIDC provider resource object for
     * which you want to update the thumbprint. You can get a list of OIDC provider
     * ARNs by using the <a>ListOpenIDConnectProviders</a> action.</p> <p>For more
     * information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline UpdateOpenIDConnectProviderThumbprintRequest& WithOpenIDConnectProviderArn(const Aws::String& value) { SetOpenIDConnectProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OIDC provider resource object for
     * which you want to update the thumbprint. You can get a list of OIDC provider
     * ARNs by using the <a>ListOpenIDConnectProviders</a> action.</p> <p>For more
     * information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline UpdateOpenIDConnectProviderThumbprintRequest& WithOpenIDConnectProviderArn(Aws::String&& value) { SetOpenIDConnectProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OIDC provider resource object for
     * which you want to update the thumbprint. You can get a list of OIDC provider
     * ARNs by using the <a>ListOpenIDConnectProviders</a> action.</p> <p>For more
     * information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline UpdateOpenIDConnectProviderThumbprintRequest& WithOpenIDConnectProviderArn(const char* value) { SetOpenIDConnectProviderArn(value); return *this;}

    /**
     * <p>A list of certificate thumbprints that are associated with the specified IAM
     * OpenID Connect provider. For more information, see
     * <a>CreateOpenIDConnectProvider</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetThumbprintList() const{ return m_thumbprintList; }

    /**
     * <p>A list of certificate thumbprints that are associated with the specified IAM
     * OpenID Connect provider. For more information, see
     * <a>CreateOpenIDConnectProvider</a>. </p>
     */
    inline void SetThumbprintList(const Aws::Vector<Aws::String>& value) { m_thumbprintListHasBeenSet = true; m_thumbprintList = value; }

    /**
     * <p>A list of certificate thumbprints that are associated with the specified IAM
     * OpenID Connect provider. For more information, see
     * <a>CreateOpenIDConnectProvider</a>. </p>
     */
    inline void SetThumbprintList(Aws::Vector<Aws::String>&& value) { m_thumbprintListHasBeenSet = true; m_thumbprintList = value; }

    /**
     * <p>A list of certificate thumbprints that are associated with the specified IAM
     * OpenID Connect provider. For more information, see
     * <a>CreateOpenIDConnectProvider</a>. </p>
     */
    inline UpdateOpenIDConnectProviderThumbprintRequest& WithThumbprintList(const Aws::Vector<Aws::String>& value) { SetThumbprintList(value); return *this;}

    /**
     * <p>A list of certificate thumbprints that are associated with the specified IAM
     * OpenID Connect provider. For more information, see
     * <a>CreateOpenIDConnectProvider</a>. </p>
     */
    inline UpdateOpenIDConnectProviderThumbprintRequest& WithThumbprintList(Aws::Vector<Aws::String>&& value) { SetThumbprintList(value); return *this;}

    /**
     * <p>A list of certificate thumbprints that are associated with the specified IAM
     * OpenID Connect provider. For more information, see
     * <a>CreateOpenIDConnectProvider</a>. </p>
     */
    inline UpdateOpenIDConnectProviderThumbprintRequest& AddThumbprintList(const Aws::String& value) { m_thumbprintListHasBeenSet = true; m_thumbprintList.push_back(value); return *this; }

    /**
     * <p>A list of certificate thumbprints that are associated with the specified IAM
     * OpenID Connect provider. For more information, see
     * <a>CreateOpenIDConnectProvider</a>. </p>
     */
    inline UpdateOpenIDConnectProviderThumbprintRequest& AddThumbprintList(Aws::String&& value) { m_thumbprintListHasBeenSet = true; m_thumbprintList.push_back(value); return *this; }

    /**
     * <p>A list of certificate thumbprints that are associated with the specified IAM
     * OpenID Connect provider. For more information, see
     * <a>CreateOpenIDConnectProvider</a>. </p>
     */
    inline UpdateOpenIDConnectProviderThumbprintRequest& AddThumbprintList(const char* value) { m_thumbprintListHasBeenSet = true; m_thumbprintList.push_back(value); return *this; }

  private:
    Aws::String m_openIDConnectProviderArn;
    bool m_openIDConnectProviderArnHasBeenSet;
    Aws::Vector<Aws::String> m_thumbprintList;
    bool m_thumbprintListHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
