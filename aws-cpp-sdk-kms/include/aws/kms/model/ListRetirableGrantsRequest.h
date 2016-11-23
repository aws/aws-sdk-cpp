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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API ListRetirableGrantsRequest : public KMSRequest
  {
  public:
    ListRetirableGrantsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>When paginating results, specify the maximum number of items to return in the
     * response. If additional items exist beyond the number you specify, the
     * <code>Truncated</code> element in the response is set to true.</p> <p>This value
     * is optional. If you include a value, it must be between 1 and 100, inclusive. If
     * you do not include a value, it defaults to 50.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>When paginating results, specify the maximum number of items to return in the
     * response. If additional items exist beyond the number you specify, the
     * <code>Truncated</code> element in the response is set to true.</p> <p>This value
     * is optional. If you include a value, it must be between 1 and 100, inclusive. If
     * you do not include a value, it defaults to 50.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>When paginating results, specify the maximum number of items to return in the
     * response. If additional items exist beyond the number you specify, the
     * <code>Truncated</code> element in the response is set to true.</p> <p>This value
     * is optional. If you include a value, it must be between 1 and 100, inclusive. If
     * you do not include a value, it defaults to 50.</p>
     */
    inline ListRetirableGrantsRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextMarker</code> from the response you just received.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextMarker</code> from the response you just received.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextMarker</code> from the response you just received.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextMarker</code> from the response you just received.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextMarker</code> from the response you just received.</p>
     */
    inline ListRetirableGrantsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextMarker</code> from the response you just received.</p>
     */
    inline ListRetirableGrantsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextMarker</code> from the response you just received.</p>
     */
    inline ListRetirableGrantsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>The retiring principal for which to list grants.</p> <p>To specify the
     * retiring principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline const Aws::String& GetRetiringPrincipal() const{ return m_retiringPrincipal; }

    /**
     * <p>The retiring principal for which to list grants.</p> <p>To specify the
     * retiring principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetRetiringPrincipal(const Aws::String& value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal = value; }

    /**
     * <p>The retiring principal for which to list grants.</p> <p>To specify the
     * retiring principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetRetiringPrincipal(Aws::String&& value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal = value; }

    /**
     * <p>The retiring principal for which to list grants.</p> <p>To specify the
     * retiring principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetRetiringPrincipal(const char* value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal.assign(value); }

    /**
     * <p>The retiring principal for which to list grants.</p> <p>To specify the
     * retiring principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline ListRetirableGrantsRequest& WithRetiringPrincipal(const Aws::String& value) { SetRetiringPrincipal(value); return *this;}

    /**
     * <p>The retiring principal for which to list grants.</p> <p>To specify the
     * retiring principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline ListRetirableGrantsRequest& WithRetiringPrincipal(Aws::String&& value) { SetRetiringPrincipal(value); return *this;}

    /**
     * <p>The retiring principal for which to list grants.</p> <p>To specify the
     * retiring principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline ListRetirableGrantsRequest& WithRetiringPrincipal(const char* value) { SetRetiringPrincipal(value); return *this;}

  private:
    int m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    Aws::String m_retiringPrincipal;
    bool m_retiringPrincipalHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
