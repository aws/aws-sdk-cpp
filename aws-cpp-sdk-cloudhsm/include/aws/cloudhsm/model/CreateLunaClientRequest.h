/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Contains the inputs for the <a>CreateLunaClient</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/CreateLunaClientRequest">AWS
   * API Reference</a></p>
   */
  class CreateLunaClientRequest : public CloudHSMRequest
  {
  public:
    AWS_CLOUDHSM_API CreateLunaClientRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLunaClient"; }

    AWS_CLOUDHSM_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The label for the client.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>The label for the client.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>The label for the client.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The label for the client.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

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
    inline CreateLunaClientRequest& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

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
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }

    /**
     * <p>The contents of a Base64-Encoded X.509 v3 certificate to be installed on the
     * HSMs used by this client.</p>
     */
    inline void SetCertificate(const Aws::String& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>The contents of a Base64-Encoded X.509 v3 certificate to be installed on the
     * HSMs used by this client.</p>
     */
    inline void SetCertificate(Aws::String&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }

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
    inline CreateLunaClientRequest& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * <p>The contents of a Base64-Encoded X.509 v3 certificate to be installed on the
     * HSMs used by this client.</p>
     */
    inline CreateLunaClientRequest& WithCertificate(const char* value) { SetCertificate(value); return *this;}

  private:

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::String m_certificate;
    bool m_certificateHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
