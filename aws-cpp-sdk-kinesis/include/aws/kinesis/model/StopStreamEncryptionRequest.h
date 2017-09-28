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
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/EncryptionType.h>
#include <utility>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /**
   */
  class AWS_KINESIS_API StopStreamEncryptionRequest : public KinesisRequest
  {
  public:
    StopStreamEncryptionRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopStreamEncryption"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the stream on which to stop encrypting records.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream on which to stop encrypting records.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream on which to stop encrypting records.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the stream on which to stop encrypting records.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream on which to stop encrypting records.</p>
     */
    inline StopStreamEncryptionRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream on which to stop encrypting records.</p>
     */
    inline StopStreamEncryptionRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream on which to stop encrypting records.</p>
     */
    inline StopStreamEncryptionRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The encryption type. This parameter can be one of the following values:</p>
     * <ul> <li> <p> <code>NONE</code>: Not valid for this operation. An
     * <code>InvalidOperationException</code> will be thrown.</p> </li> <li> <p>
     * <code>KMS</code>: Use server-side encryption on the records in the stream using
     * a customer-managed KMS key.</p> </li> </ul>
     */
    inline const EncryptionType& GetEncryptionType() const{ return m_encryptionType; }

    /**
     * <p>The encryption type. This parameter can be one of the following values:</p>
     * <ul> <li> <p> <code>NONE</code>: Not valid for this operation. An
     * <code>InvalidOperationException</code> will be thrown.</p> </li> <li> <p>
     * <code>KMS</code>: Use server-side encryption on the records in the stream using
     * a customer-managed KMS key.</p> </li> </ul>
     */
    inline void SetEncryptionType(const EncryptionType& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }

    /**
     * <p>The encryption type. This parameter can be one of the following values:</p>
     * <ul> <li> <p> <code>NONE</code>: Not valid for this operation. An
     * <code>InvalidOperationException</code> will be thrown.</p> </li> <li> <p>
     * <code>KMS</code>: Use server-side encryption on the records in the stream using
     * a customer-managed KMS key.</p> </li> </ul>
     */
    inline void SetEncryptionType(EncryptionType&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }

    /**
     * <p>The encryption type. This parameter can be one of the following values:</p>
     * <ul> <li> <p> <code>NONE</code>: Not valid for this operation. An
     * <code>InvalidOperationException</code> will be thrown.</p> </li> <li> <p>
     * <code>KMS</code>: Use server-side encryption on the records in the stream using
     * a customer-managed KMS key.</p> </li> </ul>
     */
    inline StopStreamEncryptionRequest& WithEncryptionType(const EncryptionType& value) { SetEncryptionType(value); return *this;}

    /**
     * <p>The encryption type. This parameter can be one of the following values:</p>
     * <ul> <li> <p> <code>NONE</code>: Not valid for this operation. An
     * <code>InvalidOperationException</code> will be thrown.</p> </li> <li> <p>
     * <code>KMS</code>: Use server-side encryption on the records in the stream using
     * a customer-managed KMS key.</p> </li> </ul>
     */
    inline StopStreamEncryptionRequest& WithEncryptionType(EncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}


    /**
     * <p>The GUID for the customer-managed key that was used for encryption.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The GUID for the customer-managed key that was used for encryption.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The GUID for the customer-managed key that was used for encryption.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The GUID for the customer-managed key that was used for encryption.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The GUID for the customer-managed key that was used for encryption.</p>
     */
    inline StopStreamEncryptionRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The GUID for the customer-managed key that was used for encryption.</p>
     */
    inline StopStreamEncryptionRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The GUID for the customer-managed key that was used for encryption.</p>
     */
    inline StopStreamEncryptionRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;

    EncryptionType m_encryptionType;
    bool m_encryptionTypeHasBeenSet;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
