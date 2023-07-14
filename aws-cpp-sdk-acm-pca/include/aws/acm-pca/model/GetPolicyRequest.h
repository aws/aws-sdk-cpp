﻿/**
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
  class AWS_ACMPCA_API GetPolicyRequest : public ACMPCARequest
  {
  public:
    GetPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Number (ARN) of the private CA that will have its policy
     * retrieved. You can find the CA's ARN by calling the ListCertificateAuthorities
     * action. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA that will have its policy
     * retrieved. You can find the CA's ARN by calling the ListCertificateAuthorities
     * action. </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA that will have its policy
     * retrieved. You can find the CA's ARN by calling the ListCertificateAuthorities
     * action. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA that will have its policy
     * retrieved. You can find the CA's ARN by calling the ListCertificateAuthorities
     * action. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA that will have its policy
     * retrieved. You can find the CA's ARN by calling the ListCertificateAuthorities
     * action. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA that will have its policy
     * retrieved. You can find the CA's ARN by calling the ListCertificateAuthorities
     * action. </p>
     */
    inline GetPolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA that will have its policy
     * retrieved. You can find the CA's ARN by calling the ListCertificateAuthorities
     * action. </p>
     */
    inline GetPolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA that will have its policy
     * retrieved. You can find the CA's ARN by calling the ListCertificateAuthorities
     * action. </p>
     */
    inline GetPolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
