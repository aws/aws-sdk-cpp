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
#include <aws/iot/model/CertificateStatus.h>
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
   * <p>Information about a certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/Certificate">AWS API
   * Reference</a></p>
   */
  class AWS_IOT_API Certificate
  {
  public:
    Certificate();
    Certificate(Aws::Utils::Json::JsonView jsonValue);
    Certificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline Certificate& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline Certificate& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline Certificate& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::move(value); }

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline Certificate& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline Certificate& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline Certificate& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}


    /**
     * <p>The status of the certificate.</p> <p>The status value REGISTER_INACTIVE is
     * deprecated and should not be used.</p>
     */
    inline const CertificateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the certificate.</p> <p>The status value REGISTER_INACTIVE is
     * deprecated and should not be used.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the certificate.</p> <p>The status value REGISTER_INACTIVE is
     * deprecated and should not be used.</p>
     */
    inline void SetStatus(const CertificateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the certificate.</p> <p>The status value REGISTER_INACTIVE is
     * deprecated and should not be used.</p>
     */
    inline void SetStatus(CertificateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the certificate.</p> <p>The status value REGISTER_INACTIVE is
     * deprecated and should not be used.</p>
     */
    inline Certificate& WithStatus(const CertificateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the certificate.</p> <p>The status value REGISTER_INACTIVE is
     * deprecated and should not be used.</p>
     */
    inline Certificate& WithStatus(CertificateStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time the certificate was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time the certificate was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time the certificate was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time the certificate was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time the certificate was created.</p>
     */
    inline Certificate& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time the certificate was created.</p>
     */
    inline Certificate& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet;

    CertificateStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
