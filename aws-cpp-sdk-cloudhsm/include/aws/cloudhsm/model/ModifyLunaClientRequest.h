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
  class AWS_CLOUDHSM_API ModifyLunaClientRequest : public CloudHSMRequest
  {
  public:
    ModifyLunaClientRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyLunaClient"; }

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
    inline ModifyLunaClientRequest& WithClientArn(const Aws::String& value) { SetClientArn(value); return *this;}

    /**
     * <p>The ARN of the client.</p>
     */
    inline ModifyLunaClientRequest& WithClientArn(Aws::String&& value) { SetClientArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the client.</p>
     */
    inline ModifyLunaClientRequest& WithClientArn(const char* value) { SetClientArn(value); return *this;}


    /**
     * <p>The new certificate for the client.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The new certificate for the client.</p>
     */
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }

    /**
     * <p>The new certificate for the client.</p>
     */
    inline void SetCertificate(const Aws::String& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>The new certificate for the client.</p>
     */
    inline void SetCertificate(Aws::String&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }

    /**
     * <p>The new certificate for the client.</p>
     */
    inline void SetCertificate(const char* value) { m_certificateHasBeenSet = true; m_certificate.assign(value); }

    /**
     * <p>The new certificate for the client.</p>
     */
    inline ModifyLunaClientRequest& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * <p>The new certificate for the client.</p>
     */
    inline ModifyLunaClientRequest& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * <p>The new certificate for the client.</p>
     */
    inline ModifyLunaClientRequest& WithCertificate(const char* value) { SetCertificate(value); return *this;}

  private:

    Aws::String m_clientArn;
    bool m_clientArnHasBeenSet;

    Aws::String m_certificate;
    bool m_certificateHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
