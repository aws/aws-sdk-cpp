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
    AWS_TRANSFER_API UpdateCertificateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCertificate"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the certificate object that you are updating.</p>
     */
    inline const Aws::String& GetCertificateId() const { return m_certificateId; }
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }
    template<typename CertificateIdT = Aws::String>
    void SetCertificateId(CertificateIdT&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::forward<CertificateIdT>(value); }
    template<typename CertificateIdT = Aws::String>
    UpdateCertificateRequest& WithCertificateId(CertificateIdT&& value) { SetCertificateId(std::forward<CertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional date that specifies when the certificate becomes active. If you
     * do not specify a value, <code>ActiveDate</code> takes the same value as
     * <code>NotBeforeDate</code>, which is specified by the CA. </p>
     */
    inline const Aws::Utils::DateTime& GetActiveDate() const { return m_activeDate; }
    inline bool ActiveDateHasBeenSet() const { return m_activeDateHasBeenSet; }
    template<typename ActiveDateT = Aws::Utils::DateTime>
    void SetActiveDate(ActiveDateT&& value) { m_activeDateHasBeenSet = true; m_activeDate = std::forward<ActiveDateT>(value); }
    template<typename ActiveDateT = Aws::Utils::DateTime>
    UpdateCertificateRequest& WithActiveDate(ActiveDateT&& value) { SetActiveDate(std::forward<ActiveDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional date that specifies when the certificate becomes inactive. If you
     * do not specify a value, <code>InactiveDate</code> takes the same value as
     * <code>NotAfterDate</code>, which is specified by the CA.</p>
     */
    inline const Aws::Utils::DateTime& GetInactiveDate() const { return m_inactiveDate; }
    inline bool InactiveDateHasBeenSet() const { return m_inactiveDateHasBeenSet; }
    template<typename InactiveDateT = Aws::Utils::DateTime>
    void SetInactiveDate(InactiveDateT&& value) { m_inactiveDateHasBeenSet = true; m_inactiveDate = std::forward<InactiveDateT>(value); }
    template<typename InactiveDateT = Aws::Utils::DateTime>
    UpdateCertificateRequest& WithInactiveDate(InactiveDateT&& value) { SetInactiveDate(std::forward<InactiveDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description to help identify the certificate.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateCertificateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    Aws::Utils::DateTime m_activeDate{};
    bool m_activeDateHasBeenSet = false;

    Aws::Utils::DateTime m_inactiveDate{};
    bool m_inactiveDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
