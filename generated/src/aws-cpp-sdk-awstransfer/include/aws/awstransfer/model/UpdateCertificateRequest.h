/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class UpdateCertificateRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API UpdateCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCertificate"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the certificate object that you are updating.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>The identifier of the certificate object that you are updating.</p>
     */
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }

    /**
     * <p>The identifier of the certificate object that you are updating.</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>The identifier of the certificate object that you are updating.</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::move(value); }

    /**
     * <p>The identifier of the certificate object that you are updating.</p>
     */
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }

    /**
     * <p>The identifier of the certificate object that you are updating.</p>
     */
    inline UpdateCertificateRequest& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The identifier of the certificate object that you are updating.</p>
     */
    inline UpdateCertificateRequest& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the certificate object that you are updating.</p>
     */
    inline UpdateCertificateRequest& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}


    /**
     * <p>An optional date that specifies when the certificate becomes active.</p>
     */
    inline const Aws::Utils::DateTime& GetActiveDate() const{ return m_activeDate; }

    /**
     * <p>An optional date that specifies when the certificate becomes active.</p>
     */
    inline bool ActiveDateHasBeenSet() const { return m_activeDateHasBeenSet; }

    /**
     * <p>An optional date that specifies when the certificate becomes active.</p>
     */
    inline void SetActiveDate(const Aws::Utils::DateTime& value) { m_activeDateHasBeenSet = true; m_activeDate = value; }

    /**
     * <p>An optional date that specifies when the certificate becomes active.</p>
     */
    inline void SetActiveDate(Aws::Utils::DateTime&& value) { m_activeDateHasBeenSet = true; m_activeDate = std::move(value); }

    /**
     * <p>An optional date that specifies when the certificate becomes active.</p>
     */
    inline UpdateCertificateRequest& WithActiveDate(const Aws::Utils::DateTime& value) { SetActiveDate(value); return *this;}

    /**
     * <p>An optional date that specifies when the certificate becomes active.</p>
     */
    inline UpdateCertificateRequest& WithActiveDate(Aws::Utils::DateTime&& value) { SetActiveDate(std::move(value)); return *this;}


    /**
     * <p>An optional date that specifies when the certificate becomes inactive.</p>
     */
    inline const Aws::Utils::DateTime& GetInactiveDate() const{ return m_inactiveDate; }

    /**
     * <p>An optional date that specifies when the certificate becomes inactive.</p>
     */
    inline bool InactiveDateHasBeenSet() const { return m_inactiveDateHasBeenSet; }

    /**
     * <p>An optional date that specifies when the certificate becomes inactive.</p>
     */
    inline void SetInactiveDate(const Aws::Utils::DateTime& value) { m_inactiveDateHasBeenSet = true; m_inactiveDate = value; }

    /**
     * <p>An optional date that specifies when the certificate becomes inactive.</p>
     */
    inline void SetInactiveDate(Aws::Utils::DateTime&& value) { m_inactiveDateHasBeenSet = true; m_inactiveDate = std::move(value); }

    /**
     * <p>An optional date that specifies when the certificate becomes inactive.</p>
     */
    inline UpdateCertificateRequest& WithInactiveDate(const Aws::Utils::DateTime& value) { SetInactiveDate(value); return *this;}

    /**
     * <p>An optional date that specifies when the certificate becomes inactive.</p>
     */
    inline UpdateCertificateRequest& WithInactiveDate(Aws::Utils::DateTime&& value) { SetInactiveDate(std::move(value)); return *this;}


    /**
     * <p>A short description to help identify the certificate.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A short description to help identify the certificate.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A short description to help identify the certificate.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A short description to help identify the certificate.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A short description to help identify the certificate.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A short description to help identify the certificate.</p>
     */
    inline UpdateCertificateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A short description to help identify the certificate.</p>
     */
    inline UpdateCertificateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A short description to help identify the certificate.</p>
     */
    inline UpdateCertificateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    Aws::Utils::DateTime m_activeDate;
    bool m_activeDateHasBeenSet = false;

    Aws::Utils::DateTime m_inactiveDate;
    bool m_inactiveDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
