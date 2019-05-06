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
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the TransferCertificate operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TransferCertificateRequest">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API TransferCertificateRequest : public IoTRequest
  {
  public:
    TransferCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TransferCertificate"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline TransferCertificateRequest& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline TransferCertificateRequest& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline TransferCertificateRequest& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}


    /**
     * <p>The AWS account.</p>
     */
    inline const Aws::String& GetTargetAwsAccount() const{ return m_targetAwsAccount; }

    /**
     * <p>The AWS account.</p>
     */
    inline bool TargetAwsAccountHasBeenSet() const { return m_targetAwsAccountHasBeenSet; }

    /**
     * <p>The AWS account.</p>
     */
    inline void SetTargetAwsAccount(const Aws::String& value) { m_targetAwsAccountHasBeenSet = true; m_targetAwsAccount = value; }

    /**
     * <p>The AWS account.</p>
     */
    inline void SetTargetAwsAccount(Aws::String&& value) { m_targetAwsAccountHasBeenSet = true; m_targetAwsAccount = std::move(value); }

    /**
     * <p>The AWS account.</p>
     */
    inline void SetTargetAwsAccount(const char* value) { m_targetAwsAccountHasBeenSet = true; m_targetAwsAccount.assign(value); }

    /**
     * <p>The AWS account.</p>
     */
    inline TransferCertificateRequest& WithTargetAwsAccount(const Aws::String& value) { SetTargetAwsAccount(value); return *this;}

    /**
     * <p>The AWS account.</p>
     */
    inline TransferCertificateRequest& WithTargetAwsAccount(Aws::String&& value) { SetTargetAwsAccount(std::move(value)); return *this;}

    /**
     * <p>The AWS account.</p>
     */
    inline TransferCertificateRequest& WithTargetAwsAccount(const char* value) { SetTargetAwsAccount(value); return *this;}


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
    inline TransferCertificateRequest& WithTransferMessage(const Aws::String& value) { SetTransferMessage(value); return *this;}

    /**
     * <p>The transfer message.</p>
     */
    inline TransferCertificateRequest& WithTransferMessage(Aws::String&& value) { SetTransferMessage(std::move(value)); return *this;}

    /**
     * <p>The transfer message.</p>
     */
    inline TransferCertificateRequest& WithTransferMessage(const char* value) { SetTransferMessage(value); return *this;}

  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet;

    Aws::String m_targetAwsAccount;
    bool m_targetAwsAccountHasBeenSet;

    Aws::String m_transferMessage;
    bool m_transferMessageHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
