/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>A structure that contains the configuration settings for server-side
   * encryption.</p>  <p>We only support symmetric keys. Do not use asymmetric
   * or HMAC keys, or KMS aliases.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/ServerSideEncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class ServerSideEncryptionConfiguration
  {
  public:
    AWS_CHIMESDKVOICE_API ServerSideEncryptionConfiguration();
    AWS_CHIMESDKVOICE_API ServerSideEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API ServerSideEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the KMS key used to encrypt the enrollment data in a voice profile
     * domain. Asymmetric customer managed keys are not supported.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The ARN of the KMS key used to encrypt the enrollment data in a voice profile
     * domain. Asymmetric customer managed keys are not supported.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The ARN of the KMS key used to encrypt the enrollment data in a voice profile
     * domain. Asymmetric customer managed keys are not supported.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The ARN of the KMS key used to encrypt the enrollment data in a voice profile
     * domain. Asymmetric customer managed keys are not supported.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The ARN of the KMS key used to encrypt the enrollment data in a voice profile
     * domain. Asymmetric customer managed keys are not supported.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The ARN of the KMS key used to encrypt the enrollment data in a voice profile
     * domain. Asymmetric customer managed keys are not supported.</p>
     */
    inline ServerSideEncryptionConfiguration& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The ARN of the KMS key used to encrypt the enrollment data in a voice profile
     * domain. Asymmetric customer managed keys are not supported.</p>
     */
    inline ServerSideEncryptionConfiguration& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the KMS key used to encrypt the enrollment data in a voice profile
     * domain. Asymmetric customer managed keys are not supported.</p>
     */
    inline ServerSideEncryptionConfiguration& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
