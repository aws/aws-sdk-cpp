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
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/cloudhsm/CloudHSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudHSM
{
namespace Model
{

  /**
   */
  class AWS_CLOUDHSM_API DescribeLunaClientRequest : public CloudHSMRequest
  {
  public:
    DescribeLunaClientRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLunaClient"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the client.</p>
     */
    inline const Aws::String& GetClientArn() const{ return m_clientArn; }

    /**
     * <p>The ARN of the client.</p>
     */
    inline bool ClientArnHasBeenSet() const { return m_clientArnHasBeenSet; }

    /**
     * <p>The ARN of the client.</p>
     */
    inline void SetClientArn(const Aws::String& value) { m_clientArnHasBeenSet = true; m_clientArn = value; }

    /**
     * <p>The ARN of the client.</p>
     */
    inline void SetClientArn(Aws::String&& value) { m_clientArnHasBeenSet = true; m_clientArn = std::move(value); }

    /**
     * <p>The ARN of the client.</p>
     */
    inline void SetClientArn(const char* value) { m_clientArnHasBeenSet = true; m_clientArn.assign(value); }

    /**
     * <p>The ARN of the client.</p>
     */
    inline DescribeLunaClientRequest& WithClientArn(const Aws::String& value) { SetClientArn(value); return *this;}

    /**
     * <p>The ARN of the client.</p>
     */
    inline DescribeLunaClientRequest& WithClientArn(Aws::String&& value) { SetClientArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the client.</p>
     */
    inline DescribeLunaClientRequest& WithClientArn(const char* value) { SetClientArn(value); return *this;}


    /**
     * <p>The certificate fingerprint.</p>
     */
    inline const Aws::String& GetCertificateFingerprint() const{ return m_certificateFingerprint; }

    /**
     * <p>The certificate fingerprint.</p>
     */
    inline bool CertificateFingerprintHasBeenSet() const { return m_certificateFingerprintHasBeenSet; }

    /**
     * <p>The certificate fingerprint.</p>
     */
    inline void SetCertificateFingerprint(const Aws::String& value) { m_certificateFingerprintHasBeenSet = true; m_certificateFingerprint = value; }

    /**
     * <p>The certificate fingerprint.</p>
     */
    inline void SetCertificateFingerprint(Aws::String&& value) { m_certificateFingerprintHasBeenSet = true; m_certificateFingerprint = std::move(value); }

    /**
     * <p>The certificate fingerprint.</p>
     */
    inline void SetCertificateFingerprint(const char* value) { m_certificateFingerprintHasBeenSet = true; m_certificateFingerprint.assign(value); }

    /**
     * <p>The certificate fingerprint.</p>
     */
    inline DescribeLunaClientRequest& WithCertificateFingerprint(const Aws::String& value) { SetCertificateFingerprint(value); return *this;}

    /**
     * <p>The certificate fingerprint.</p>
     */
    inline DescribeLunaClientRequest& WithCertificateFingerprint(Aws::String&& value) { SetCertificateFingerprint(std::move(value)); return *this;}

    /**
     * <p>The certificate fingerprint.</p>
     */
    inline DescribeLunaClientRequest& WithCertificateFingerprint(const char* value) { SetCertificateFingerprint(value); return *this;}

  private:

    Aws::String m_clientArn;
    bool m_clientArnHasBeenSet;

    Aws::String m_certificateFingerprint;
    bool m_certificateFingerprintHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
