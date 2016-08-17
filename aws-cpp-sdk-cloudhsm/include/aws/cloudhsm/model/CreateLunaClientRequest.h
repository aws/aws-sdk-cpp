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
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/cloudhsm/CloudHSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudHSM
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>CreateLunaClient</a> action.</p>
   */
  class AWS_CLOUDHSM_API CreateLunaClientRequest : public CloudHSMRequest
  {
  public:
    CreateLunaClientRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The label for the client.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>The label for the client.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The label for the client.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The label for the client.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>The label for the client.</p>
     */
    inline CreateLunaClientRequest& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>The label for the client.</p>
     */
    inline CreateLunaClientRequest& WithLabel(Aws::String&& value) { SetLabel(value); return *this;}

    /**
     * <p>The label for the client.</p>
     */
    inline CreateLunaClientRequest& WithLabel(const char* value) { SetLabel(value); return *this;}

    /**
     * <p>The contents of a Base64-Encoded X.509 v3 certificate to be installed on the
     * HSMs used by this client.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The contents of a Base64-Encoded X.509 v3 certificate to be installed on the
     * HSMs used by this client.</p>
     */
    inline void SetCertificate(const Aws::String& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>The contents of a Base64-Encoded X.509 v3 certificate to be installed on the
     * HSMs used by this client.</p>
     */
    inline void SetCertificate(Aws::String&& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>The contents of a Base64-Encoded X.509 v3 certificate to be installed on the
     * HSMs used by this client.</p>
     */
    inline void SetCertificate(const char* value) { m_certificateHasBeenSet = true; m_certificate.assign(value); }

    /**
     * <p>The contents of a Base64-Encoded X.509 v3 certificate to be installed on the
     * HSMs used by this client.</p>
     */
    inline CreateLunaClientRequest& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * <p>The contents of a Base64-Encoded X.509 v3 certificate to be installed on the
     * HSMs used by this client.</p>
     */
    inline CreateLunaClientRequest& WithCertificate(Aws::String&& value) { SetCertificate(value); return *this;}

    /**
     * <p>The contents of a Base64-Encoded X.509 v3 certificate to be installed on the
     * HSMs used by this client.</p>
     */
    inline CreateLunaClientRequest& WithCertificate(const char* value) { SetCertificate(value); return *this;}

  private:
    Aws::String m_label;
    bool m_labelHasBeenSet;
    Aws::String m_certificate;
    bool m_certificateHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
