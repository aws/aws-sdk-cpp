/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class DeleteCertificateRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API DeleteCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCertificate"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the certificate to delete.</p> <p>Use the
     * <code>GetCertificates</code> action to get a list of certificate names that you
     * can specify.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }

    /**
     * <p>The name of the certificate to delete.</p> <p>Use the
     * <code>GetCertificates</code> action to get a list of certificate names that you
     * can specify.</p>
     */
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }

    /**
     * <p>The name of the certificate to delete.</p> <p>Use the
     * <code>GetCertificates</code> action to get a list of certificate names that you
     * can specify.</p>
     */
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }

    /**
     * <p>The name of the certificate to delete.</p> <p>Use the
     * <code>GetCertificates</code> action to get a list of certificate names that you
     * can specify.</p>
     */
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }

    /**
     * <p>The name of the certificate to delete.</p> <p>Use the
     * <code>GetCertificates</code> action to get a list of certificate names that you
     * can specify.</p>
     */
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }

    /**
     * <p>The name of the certificate to delete.</p> <p>Use the
     * <code>GetCertificates</code> action to get a list of certificate names that you
     * can specify.</p>
     */
    inline DeleteCertificateRequest& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}

    /**
     * <p>The name of the certificate to delete.</p> <p>Use the
     * <code>GetCertificates</code> action to get a list of certificate names that you
     * can specify.</p>
     */
    inline DeleteCertificateRequest& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}

    /**
     * <p>The name of the certificate to delete.</p> <p>Use the
     * <code>GetCertificates</code> action to get a list of certificate names that you
     * can specify.</p>
     */
    inline DeleteCertificateRequest& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}

  private:

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
