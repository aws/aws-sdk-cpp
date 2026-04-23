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
#include <aws/glue/model/JobBookmarksEncryptionMode.h>
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
   * <p>Specifies how Job bookmark data should be encrypted.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/JobBookmarksEncryption">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API JobBookmarksEncryption
  {
  public:
    JobBookmarksEncryption();
    JobBookmarksEncryption(Aws::Utils::Json::JsonView jsonValue);
    JobBookmarksEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The encryption mode to use for Job bookmarks data.</p>
     */
    inline const JobBookmarksEncryptionMode& GetJobBookmarksEncryptionMode() const{ return m_jobBookmarksEncryptionMode; }

    /**
     * <p>The encryption mode to use for Job bookmarks data.</p>
     */
    inline bool JobBookmarksEncryptionModeHasBeenSet() const { return m_jobBookmarksEncryptionModeHasBeenSet; }

    /**
     * <p>The encryption mode to use for Job bookmarks data.</p>
     */
    inline void SetJobBookmarksEncryptionMode(const JobBookmarksEncryptionMode& value) { m_jobBookmarksEncryptionModeHasBeenSet = true; m_jobBookmarksEncryptionMode = value; }

    /**
     * <p>The encryption mode to use for Job bookmarks data.</p>
     */
    inline void SetJobBookmarksEncryptionMode(JobBookmarksEncryptionMode&& value) { m_jobBookmarksEncryptionModeHasBeenSet = true; m_jobBookmarksEncryptionMode = std::move(value); }

    /**
     * <p>The encryption mode to use for Job bookmarks data.</p>
     */
    inline JobBookmarksEncryption& WithJobBookmarksEncryptionMode(const JobBookmarksEncryptionMode& value) { SetJobBookmarksEncryptionMode(value); return *this;}

    /**
     * <p>The encryption mode to use for Job bookmarks data.</p>
     */
    inline JobBookmarksEncryption& WithJobBookmarksEncryptionMode(JobBookmarksEncryptionMode&& value) { SetJobBookmarksEncryptionMode(std::move(value)); return *this;}


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
    inline JobBookmarksEncryption& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The AWS ARN of the KMS key to be used to encrypt the data.</p>
     */
    inline JobBookmarksEncryption& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The AWS ARN of the KMS key to be used to encrypt the data.</p>
     */
    inline JobBookmarksEncryption& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    JobBookmarksEncryptionMode m_jobBookmarksEncryptionMode;
    bool m_jobBookmarksEncryptionModeHasBeenSet;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
