/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/ACMPCARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

  /**
   */
  class PutPolicyRequest : public ACMPCARequest
  {
  public:
    AWS_ACMPCA_API PutPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPolicy"; }

    AWS_ACMPCA_API Aws::String SerializePayload() const override;

    AWS_ACMPCA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Number (ARN) of the private CA to associate with the
     * policy. The ARN of the CA can be found by calling the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListCertificateAuthorities.html">ListCertificateAuthorities</a>
     * action.</p> <p/>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA to associate with the
     * policy. The ARN of the CA can be found by calling the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListCertificateAuthorities.html">ListCertificateAuthorities</a>
     * action.</p> <p/>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA to associate with the
     * policy. The ARN of the CA can be found by calling the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListCertificateAuthorities.html">ListCertificateAuthorities</a>
     * action.</p> <p/>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA to associate with the
     * policy. The ARN of the CA can be found by calling the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListCertificateAuthorities.html">ListCertificateAuthorities</a>
     * action.</p> <p/>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA to associate with the
     * policy. The ARN of the CA can be found by calling the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListCertificateAuthorities.html">ListCertificateAuthorities</a>
     * action.</p> <p/>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA to associate with the
     * policy. The ARN of the CA can be found by calling the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListCertificateAuthorities.html">ListCertificateAuthorities</a>
     * action.</p> <p/>
     */
    inline PutPolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA to associate with the
     * policy. The ARN of the CA can be found by calling the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListCertificateAuthorities.html">ListCertificateAuthorities</a>
     * action.</p> <p/>
     */
    inline PutPolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA to associate with the
     * policy. The ARN of the CA can be found by calling the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListCertificateAuthorities.html">ListCertificateAuthorities</a>
     * action.</p> <p/>
     */
    inline PutPolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The path and file name of a JSON-formatted IAM policy to attach to the
     * specified private CA resource. If this policy does not contain all required
     * statements or if it includes any statement that is not allowed, the
     * <code>PutPolicy</code> action returns an <code>InvalidPolicyException</code>.
     * For information about IAM policy and statement structure, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#access_policies-json">Overview
     * of JSON Policies</a>.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The path and file name of a JSON-formatted IAM policy to attach to the
     * specified private CA resource. If this policy does not contain all required
     * statements or if it includes any statement that is not allowed, the
     * <code>PutPolicy</code> action returns an <code>InvalidPolicyException</code>.
     * For information about IAM policy and statement structure, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#access_policies-json">Overview
     * of JSON Policies</a>.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The path and file name of a JSON-formatted IAM policy to attach to the
     * specified private CA resource. If this policy does not contain all required
     * statements or if it includes any statement that is not allowed, the
     * <code>PutPolicy</code> action returns an <code>InvalidPolicyException</code>.
     * For information about IAM policy and statement structure, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#access_policies-json">Overview
     * of JSON Policies</a>.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The path and file name of a JSON-formatted IAM policy to attach to the
     * specified private CA resource. If this policy does not contain all required
     * statements or if it includes any statement that is not allowed, the
     * <code>PutPolicy</code> action returns an <code>InvalidPolicyException</code>.
     * For information about IAM policy and statement structure, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#access_policies-json">Overview
     * of JSON Policies</a>.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The path and file name of a JSON-formatted IAM policy to attach to the
     * specified private CA resource. If this policy does not contain all required
     * statements or if it includes any statement that is not allowed, the
     * <code>PutPolicy</code> action returns an <code>InvalidPolicyException</code>.
     * For information about IAM policy and statement structure, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#access_policies-json">Overview
     * of JSON Policies</a>.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The path and file name of a JSON-formatted IAM policy to attach to the
     * specified private CA resource. If this policy does not contain all required
     * statements or if it includes any statement that is not allowed, the
     * <code>PutPolicy</code> action returns an <code>InvalidPolicyException</code>.
     * For information about IAM policy and statement structure, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#access_policies-json">Overview
     * of JSON Policies</a>.</p>
     */
    inline PutPolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The path and file name of a JSON-formatted IAM policy to attach to the
     * specified private CA resource. If this policy does not contain all required
     * statements or if it includes any statement that is not allowed, the
     * <code>PutPolicy</code> action returns an <code>InvalidPolicyException</code>.
     * For information about IAM policy and statement structure, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#access_policies-json">Overview
     * of JSON Policies</a>.</p>
     */
    inline PutPolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The path and file name of a JSON-formatted IAM policy to attach to the
     * specified private CA resource. If this policy does not contain all required
     * statements or if it includes any statement that is not allowed, the
     * <code>PutPolicy</code> action returns an <code>InvalidPolicyException</code>.
     * For information about IAM policy and statement structure, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#access_policies-json">Overview
     * of JSON Policies</a>.</p>
     */
    inline PutPolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
