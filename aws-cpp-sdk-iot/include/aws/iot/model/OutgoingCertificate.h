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
  class AWS_IOT_API OutgoingCertificate
  {
  public:
    OutgoingCertificate();
    OutgoingCertificate(Aws::Utils::Json::JsonView jsonValue);
    OutgoingCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The certificate ARN.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The certificate ARN.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The certificate ARN.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The certificate ARN.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The certificate ARN.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The certificate ARN.</p>
     */
    inline OutgoingCertificate& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The certificate ARN.</p>
     */
    inline OutgoingCertificate& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The certificate ARN.</p>
     */
    inline OutgoingCertificate& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The certificate ID.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>The certificate ID.</p>
     */
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }

    /**
     * <p>The certificate ID.</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>The certificate ID.</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::move(value); }

    /**
     * <p>The certificate ID.</p>
     */
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }

    /**
     * <p>The certificate ID.</p>
     */
    inline OutgoingCertificate& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The certificate ID.</p>
     */
    inline OutgoingCertificate& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>The certificate ID.</p>
     */
    inline OutgoingCertificate& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}


    /**
     * <p>The AWS account to which the transfer was made.</p>
     */
    inline const Aws::String& GetTransferredTo() const{ return m_transferredTo; }

    /**
     * <p>The AWS account to which the transfer was made.</p>
     */
    inline bool TransferredToHasBeenSet() const { return m_transferredToHasBeenSet; }

    /**
     * <p>The AWS account to which the transfer was made.</p>
     */
    inline void SetTransferredTo(const Aws::String& value) { m_transferredToHasBeenSet = true; m_transferredTo = value; }

    /**
     * <p>The AWS account to which the transfer was made.</p>
     */
    inline void SetTransferredTo(Aws::String&& value) { m_transferredToHasBeenSet = true; m_transferredTo = std::move(value); }

    /**
     * <p>The AWS account to which the transfer was made.</p>
     */
    inline void SetTransferredTo(const char* value) { m_transferredToHasBeenSet = true; m_transferredTo.assign(value); }

    /**
     * <p>The AWS account to which the transfer was made.</p>
     */
    inline OutgoingCertificate& WithTransferredTo(const Aws::String& value) { SetTransferredTo(value); return *this;}

    /**
     * <p>The AWS account to which the transfer was made.</p>
     */
    inline OutgoingCertificate& WithTransferredTo(Aws::String&& value) { SetTransferredTo(std::move(value)); return *this;}

    /**
     * <p>The AWS account to which the transfer was made.</p>
     */
    inline OutgoingCertificate& WithTransferredTo(const char* value) { SetTransferredTo(value); return *this;}


    /**
     * <p>The date the transfer was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetTransferDate() const{ return m_transferDate; }

    /**
     * <p>The date the transfer was initiated.</p>
     */
    inline bool TransferDateHasBeenSet() const { return m_transferDateHasBeenSet; }

    /**
     * <p>The date the transfer was initiated.</p>
     */
    inline void SetTransferDate(const Aws::Utils::DateTime& value) { m_transferDateHasBeenSet = true; m_transferDate = value; }

    /**
     * <p>The date the transfer was initiated.</p>
     */
    inline void SetTransferDate(Aws::Utils::DateTime&& value) { m_transferDateHasBeenSet = true; m_transferDate = std::move(value); }

    /**
     * <p>The date the transfer was initiated.</p>
     */
    inline OutgoingCertificate& WithTransferDate(const Aws::Utils::DateTime& value) { SetTransferDate(value); return *this;}

    /**
     * <p>The date the transfer was initiated.</p>
     */
    inline OutgoingCertificate& WithTransferDate(Aws::Utils::DateTime&& value) { SetTransferDate(std::move(value)); return *this;}


    /**
     * <p>The transfer message.</p>
     */
    inline const Aws::String& GetTransferMessage() const{ return m_transferMessage; }

    /**
     * <p>The transfer message.</p>
     */
    inline bool TransferMessageHasBeenSet() const { return m_transferMessageHasBeenSet; }

    /**
     * <p>The transfer message.</p>
     */
    inline void SetTransferMessage(const Aws::String& value) { m_transferMessageHasBeenSet = true; m_transferMessage = value; }

    /**
     * <p>The transfer message.</p>
     */
    inline void SetTransferMessage(Aws::String&& value) { m_transferMessageHasBeenSet = true; m_transferMessage = std::move(value); }

    /**
     * <p>The transfer message.</p>
     */
    inline void SetTransferMessage(const char* value) { m_transferMessageHasBeenSet = true; m_transferMessage.assign(value); }

    /**
     * <p>The transfer message.</p>
     */
    inline OutgoingCertificate& WithTransferMessage(const Aws::String& value) { SetTransferMessage(value); return *this;}

    /**
     * <p>The transfer message.</p>
     */
    inline OutgoingCertificate& WithTransferMessage(Aws::String&& value) { SetTransferMessage(std::move(value)); return *this;}

    /**
     * <p>The transfer message.</p>
     */
    inline OutgoingCertificate& WithTransferMessage(const char* value) { SetTransferMessage(value); return *this;}


    /**
     * <p>The certificate creation date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The certificate creation date.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The certificate creation date.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The certificate creation date.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The certificate creation date.</p>
     */
    inline OutgoingCertificate& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The certificate creation date.</p>
     */
    inline OutgoingCertificate& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet;

    Aws::String m_transferredTo;
    bool m_transferredToHasBeenSet;

    Aws::Utils::DateTime m_transferDate;
    bool m_transferDateHasBeenSet;

    Aws::String m_transferMessage;
    bool m_transferMessageHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
