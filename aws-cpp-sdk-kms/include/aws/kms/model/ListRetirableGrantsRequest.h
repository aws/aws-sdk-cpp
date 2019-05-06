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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRetirableGrants"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Use this parameter to specify the maximum number of items to return. When
     * this value is present, AWS KMS does not return more than the specified number of
     * items, but it might return fewer.</p> <p>This value is optional. If you include
     * a value, it must be between 1 and 100, inclusive. If you do not include a value,
     * it defaults to 50.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Use this parameter to specify the maximum number of items to return. When
     * this value is present, AWS KMS does not return more than the specified number of
     * items, but it might return fewer.</p> <p>This value is optional. If you include
     * a value, it must be between 1 and 100, inclusive. If you do not include a value,
     * it defaults to 50.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>Use this parameter to specify the maximum number of items to return. When
     * this value is present, AWS KMS does not return more than the specified number of
     * items, but it might return fewer.</p> <p>This value is optional. If you include
     * a value, it must be between 1 and 100, inclusive. If you do not include a value,
     * it defaults to 50.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Use this parameter to specify the maximum number of items to return. When
     * this value is present, AWS KMS does not return more than the specified number of
     * items, but it might return fewer.</p> <p>This value is optional. If you include
     * a value, it must be between 1 and 100, inclusive. If you do not include a value,
     * it defaults to 50.</p>
     */
    inline ListRetirableGrantsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextMarker</code> from the
     * truncated response you just received.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextMarker</code> from the
     * truncated response you just received.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextMarker</code> from the
     * truncated response you just received.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextMarker</code> from the
     * truncated response you just received.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextMarker</code> from the
     * truncated response you just received.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextMarker</code> from the
     * truncated response you just received.</p>
     */
    inline ListRetirableGrantsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextMarker</code> from the
     * truncated response you just received.</p>
     */
    inline ListRetirableGrantsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextMarker</code> from the
     * truncated response you just received.</p>
     */
    inline ListRetirableGrantsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The retiring principal for which to list grants.</p> <p>To specify the
     * retiring principal, use the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax for specifying a principal, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline const Aws::String& GetRetiringPrincipal() const{ return m_retiringPrincipal; }

    /**
     * <p>The retiring principal for which to list grants.</p> <p>To specify the
     * retiring principal, use the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax for specifying a principal, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline bool RetiringPrincipalHasBeenSet() const { return m_retiringPrincipalHasBeenSet; }

    /**
     * <p>The retiring principal for which to list grants.</p> <p>To specify the
     * retiring principal, use the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax for specifying a principal, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetRetiringPrincipal(const Aws::String& value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal = value; }

    /**
     * <p>The retiring principal for which to list grants.</p> <p>To specify the
     * retiring principal, use the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax for specifying a principal, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetRetiringPrincipal(Aws::String&& value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal = std::move(value); }

    /**
     * <p>The retiring principal for which to list grants.</p> <p>To specify the
     * retiring principal, use the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax for specifying a principal, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetRetiringPrincipal(const char* value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal.assign(value); }

    /**
     * <p>The retiring principal for which to list grants.</p> <p>To specify the
     * retiring principal, use the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax for specifying a principal, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline ListRetirableGrantsRequest& WithRetiringPrincipal(const Aws::String& value) { SetRetiringPrincipal(value); return *this;}

    /**
     * <p>The retiring principal for which to list grants.</p> <p>To specify the
     * retiring principal, use the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax for specifying a principal, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline ListRetirableGrantsRequest& WithRetiringPrincipal(Aws::String&& value) { SetRetiringPrincipal(std::move(value)); return *this;}

    /**
     * <p>The retiring principal for which to list grants.</p> <p>To specify the
     * retiring principal, use the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax for specifying a principal, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
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
