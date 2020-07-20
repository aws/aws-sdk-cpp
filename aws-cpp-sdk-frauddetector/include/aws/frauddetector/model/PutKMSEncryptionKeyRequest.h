/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class AWS_FRAUDDETECTOR_API PutKMSEncryptionKeyRequest : public FraudDetectorRequest
  {
  public:
    PutKMSEncryptionKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutKMSEncryptionKey"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The KMS encryption key ARN.</p>
     */
    inline const Aws::String& GetKmsEncryptionKeyArn() const{ return m_kmsEncryptionKeyArn; }

    /**
     * <p>The KMS encryption key ARN.</p>
     */
    inline bool KmsEncryptionKeyArnHasBeenSet() const { return m_kmsEncryptionKeyArnHasBeenSet; }

    /**
     * <p>The KMS encryption key ARN.</p>
     */
    inline void SetKmsEncryptionKeyArn(const Aws::String& value) { m_kmsEncryptionKeyArnHasBeenSet = true; m_kmsEncryptionKeyArn = value; }

    /**
     * <p>The KMS encryption key ARN.</p>
     */
    inline void SetKmsEncryptionKeyArn(Aws::String&& value) { m_kmsEncryptionKeyArnHasBeenSet = true; m_kmsEncryptionKeyArn = std::move(value); }

    /**
     * <p>The KMS encryption key ARN.</p>
     */
    inline void SetKmsEncryptionKeyArn(const char* value) { m_kmsEncryptionKeyArnHasBeenSet = true; m_kmsEncryptionKeyArn.assign(value); }

    /**
     * <p>The KMS encryption key ARN.</p>
     */
    inline PutKMSEncryptionKeyRequest& WithKmsEncryptionKeyArn(const Aws::String& value) { SetKmsEncryptionKeyArn(value); return *this;}

    /**
     * <p>The KMS encryption key ARN.</p>
     */
    inline PutKMSEncryptionKeyRequest& WithKmsEncryptionKeyArn(Aws::String&& value) { SetKmsEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The KMS encryption key ARN.</p>
     */
    inline PutKMSEncryptionKeyRequest& WithKmsEncryptionKeyArn(const char* value) { SetKmsEncryptionKeyArn(value); return *this;}

  private:

    Aws::String m_kmsEncryptionKeyArn;
    bool m_kmsEncryptionKeyArnHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
