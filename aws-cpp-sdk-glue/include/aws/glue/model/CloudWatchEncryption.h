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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/CloudWatchEncryptionMode.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies how CloudWatch data should be encrypted.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CloudWatchEncryption">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API CloudWatchEncryption
  {
  public:
    CloudWatchEncryption();
    CloudWatchEncryption(Aws::Utils::Json::JsonView jsonValue);
    CloudWatchEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The encryption mode to use for CloudWatch data.</p>
     */
    inline const CloudWatchEncryptionMode& GetCloudWatchEncryptionMode() const{ return m_cloudWatchEncryptionMode; }

    /**
     * <p>The encryption mode to use for CloudWatch data.</p>
     */
    inline bool CloudWatchEncryptionModeHasBeenSet() const { return m_cloudWatchEncryptionModeHasBeenSet; }

    /**
     * <p>The encryption mode to use for CloudWatch data.</p>
     */
    inline void SetCloudWatchEncryptionMode(const CloudWatchEncryptionMode& value) { m_cloudWatchEncryptionModeHasBeenSet = true; m_cloudWatchEncryptionMode = value; }

    /**
     * <p>The encryption mode to use for CloudWatch data.</p>
     */
    inline void SetCloudWatchEncryptionMode(CloudWatchEncryptionMode&& value) { m_cloudWatchEncryptionModeHasBeenSet = true; m_cloudWatchEncryptionMode = std::move(value); }

    /**
     * <p>The encryption mode to use for CloudWatch data.</p>
     */
    inline CloudWatchEncryption& WithCloudWatchEncryptionMode(const CloudWatchEncryptionMode& value) { SetCloudWatchEncryptionMode(value); return *this;}

    /**
     * <p>The encryption mode to use for CloudWatch data.</p>
     */
    inline CloudWatchEncryption& WithCloudWatchEncryptionMode(CloudWatchEncryptionMode&& value) { SetCloudWatchEncryptionMode(std::move(value)); return *this;}


    /**
     * <p>The AWS ARN of the KMS key to be used to encrypt the data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The AWS ARN of the KMS key to be used to encrypt the data.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The AWS ARN of the KMS key to be used to encrypt the data.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The AWS ARN of the KMS key to be used to encrypt the data.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The AWS ARN of the KMS key to be used to encrypt the data.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The AWS ARN of the KMS key to be used to encrypt the data.</p>
     */
    inline CloudWatchEncryption& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The AWS ARN of the KMS key to be used to encrypt the data.</p>
     */
    inline CloudWatchEncryption& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The AWS ARN of the KMS key to be used to encrypt the data.</p>
     */
    inline CloudWatchEncryption& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    CloudWatchEncryptionMode m_cloudWatchEncryptionMode;
    bool m_cloudWatchEncryptionModeHasBeenSet;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
