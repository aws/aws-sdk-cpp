/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>A certificate that has been transferred but not yet accepted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/OutgoingCertificate">AWS
   * API Reference</a></p>
   */
  class OutgoingCertificate
  {
  public:
    AWS_IOT_API OutgoingCertificate() = default;
    AWS_IOT_API OutgoingCertificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API OutgoingCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The certificate ARN.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    OutgoingCertificate& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate ID.</p>
     */
    inline const Aws::String& GetCertificateId() const { return m_certificateId; }
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }
    template<typename CertificateIdT = Aws::String>
    void SetCertificateId(CertificateIdT&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::forward<CertificateIdT>(value); }
    template<typename CertificateIdT = Aws::String>
    OutgoingCertificate& WithCertificateId(CertificateIdT&& value) { SetCertificateId(std::forward<CertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account to which the transfer was made.</p>
     */
    inline const Aws::String& GetTransferredTo() const { return m_transferredTo; }
    inline bool TransferredToHasBeenSet() const { return m_transferredToHasBeenSet; }
    template<typename TransferredToT = Aws::String>
    void SetTransferredTo(TransferredToT&& value) { m_transferredToHasBeenSet = true; m_transferredTo = std::forward<TransferredToT>(value); }
    template<typename TransferredToT = Aws::String>
    OutgoingCertificate& WithTransferredTo(TransferredToT&& value) { SetTransferredTo(std::forward<TransferredToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the transfer was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetTransferDate() const { return m_transferDate; }
    inline bool TransferDateHasBeenSet() const { return m_transferDateHasBeenSet; }
    template<typename TransferDateT = Aws::Utils::DateTime>
    void SetTransferDate(TransferDateT&& value) { m_transferDateHasBeenSet = true; m_transferDate = std::forward<TransferDateT>(value); }
    template<typename TransferDateT = Aws::Utils::DateTime>
    OutgoingCertificate& WithTransferDate(TransferDateT&& value) { SetTransferDate(std::forward<TransferDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transfer message.</p>
     */
    inline const Aws::String& GetTransferMessage() const { return m_transferMessage; }
    inline bool TransferMessageHasBeenSet() const { return m_transferMessageHasBeenSet; }
    template<typename TransferMessageT = Aws::String>
    void SetTransferMessage(TransferMessageT&& value) { m_transferMessageHasBeenSet = true; m_transferMessage = std::forward<TransferMessageT>(value); }
    template<typename TransferMessageT = Aws::String>
    OutgoingCertificate& WithTransferMessage(TransferMessageT&& value) { SetTransferMessage(std::forward<TransferMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate creation date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    OutgoingCertificate& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    Aws::String m_transferredTo;
    bool m_transferredToHasBeenSet = false;

    Aws::Utils::DateTime m_transferDate{};
    bool m_transferDateHasBeenSet = false;

    Aws::String m_transferMessage;
    bool m_transferMessageHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
