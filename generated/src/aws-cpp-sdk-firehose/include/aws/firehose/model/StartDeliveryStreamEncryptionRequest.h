/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/FirehoseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/DeliveryStreamEncryptionConfigurationInput.h>
#include <utility>

namespace Aws
{
namespace Firehose
{
namespace Model
{

  /**
   */
  class StartDeliveryStreamEncryptionRequest : public FirehoseRequest
  {
  public:
    AWS_FIREHOSE_API StartDeliveryStreamEncryptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDeliveryStreamEncryption"; }

    AWS_FIREHOSE_API Aws::String SerializePayload() const override;

    AWS_FIREHOSE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Firehose stream for which you want to enable server-side
     * encryption (SSE).</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const{ return m_deliveryStreamName; }
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }
    inline void SetDeliveryStreamName(const Aws::String& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }
    inline void SetDeliveryStreamName(Aws::String&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::move(value); }
    inline void SetDeliveryStreamName(const char* value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName.assign(value); }
    inline StartDeliveryStreamEncryptionRequest& WithDeliveryStreamName(const Aws::String& value) { SetDeliveryStreamName(value); return *this;}
    inline StartDeliveryStreamEncryptionRequest& WithDeliveryStreamName(Aws::String&& value) { SetDeliveryStreamName(std::move(value)); return *this;}
    inline StartDeliveryStreamEncryptionRequest& WithDeliveryStreamName(const char* value) { SetDeliveryStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to specify the type and Amazon Resource Name (ARN) of the KMS key needed
     * for Server-Side Encryption (SSE).</p>
     */
    inline const DeliveryStreamEncryptionConfigurationInput& GetDeliveryStreamEncryptionConfigurationInput() const{ return m_deliveryStreamEncryptionConfigurationInput; }
    inline bool DeliveryStreamEncryptionConfigurationInputHasBeenSet() const { return m_deliveryStreamEncryptionConfigurationInputHasBeenSet; }
    inline void SetDeliveryStreamEncryptionConfigurationInput(const DeliveryStreamEncryptionConfigurationInput& value) { m_deliveryStreamEncryptionConfigurationInputHasBeenSet = true; m_deliveryStreamEncryptionConfigurationInput = value; }
    inline void SetDeliveryStreamEncryptionConfigurationInput(DeliveryStreamEncryptionConfigurationInput&& value) { m_deliveryStreamEncryptionConfigurationInputHasBeenSet = true; m_deliveryStreamEncryptionConfigurationInput = std::move(value); }
    inline StartDeliveryStreamEncryptionRequest& WithDeliveryStreamEncryptionConfigurationInput(const DeliveryStreamEncryptionConfigurationInput& value) { SetDeliveryStreamEncryptionConfigurationInput(value); return *this;}
    inline StartDeliveryStreamEncryptionRequest& WithDeliveryStreamEncryptionConfigurationInput(DeliveryStreamEncryptionConfigurationInput&& value) { SetDeliveryStreamEncryptionConfigurationInput(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;

    DeliveryStreamEncryptionConfigurationInput m_deliveryStreamEncryptionConfigurationInput;
    bool m_deliveryStreamEncryptionConfigurationInputHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
