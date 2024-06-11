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
    AWS_IOT_API OutgoingCertificate();
    AWS_IOT_API OutgoingCertificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API OutgoingCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The certificate ARN.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }
    inline OutgoingCertificate& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline OutgoingCertificate& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline OutgoingCertificate& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate ID.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::move(value); }
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }
    inline OutgoingCertificate& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}
    inline OutgoingCertificate& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}
    inline OutgoingCertificate& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account to which the transfer was made.</p>
     */
    inline const Aws::String& GetTransferredTo() const{ return m_transferredTo; }
    inline bool TransferredToHasBeenSet() const { return m_transferredToHasBeenSet; }
    inline void SetTransferredTo(const Aws::String& value) { m_transferredToHasBeenSet = true; m_transferredTo = value; }
    inline void SetTransferredTo(Aws::String&& value) { m_transferredToHasBeenSet = true; m_transferredTo = std::move(value); }
    inline void SetTransferredTo(const char* value) { m_transferredToHasBeenSet = true; m_transferredTo.assign(value); }
    inline OutgoingCertificate& WithTransferredTo(const Aws::String& value) { SetTransferredTo(value); return *this;}
    inline OutgoingCertificate& WithTransferredTo(Aws::String&& value) { SetTransferredTo(std::move(value)); return *this;}
    inline OutgoingCertificate& WithTransferredTo(const char* value) { SetTransferredTo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the transfer was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetTransferDate() const{ return m_transferDate; }
    inline bool TransferDateHasBeenSet() const { return m_transferDateHasBeenSet; }
    inline void SetTransferDate(const Aws::Utils::DateTime& value) { m_transferDateHasBeenSet = true; m_transferDate = value; }
    inline void SetTransferDate(Aws::Utils::DateTime&& value) { m_transferDateHasBeenSet = true; m_transferDate = std::move(value); }
    inline OutgoingCertificate& WithTransferDate(const Aws::Utils::DateTime& value) { SetTransferDate(value); return *this;}
    inline OutgoingCertificate& WithTransferDate(Aws::Utils::DateTime&& value) { SetTransferDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transfer message.</p>
     */
    inline const Aws::String& GetTransferMessage() const{ return m_transferMessage; }
    inline bool TransferMessageHasBeenSet() const { return m_transferMessageHasBeenSet; }
    inline void SetTransferMessage(const Aws::String& value) { m_transferMessageHasBeenSet = true; m_transferMessage = value; }
    inline void SetTransferMessage(Aws::String&& value) { m_transferMessageHasBeenSet = true; m_transferMessage = std::move(value); }
    inline void SetTransferMessage(const char* value) { m_transferMessageHasBeenSet = true; m_transferMessage.assign(value); }
    inline OutgoingCertificate& WithTransferMessage(const Aws::String& value) { SetTransferMessage(value); return *this;}
    inline OutgoingCertificate& WithTransferMessage(Aws::String&& value) { SetTransferMessage(std::move(value)); return *this;}
    inline OutgoingCertificate& WithTransferMessage(const char* value) { SetTransferMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate creation date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline OutgoingCertificate& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline OutgoingCertificate& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    Aws::String m_transferredTo;
    bool m_transferredToHasBeenSet = false;

    Aws::Utils::DateTime m_transferDate;
    bool m_transferDateHasBeenSet = false;

    Aws::String m_transferMessage;
    bool m_transferMessageHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
