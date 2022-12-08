/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Specifies how job bookmark data should be encrypted.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/JobBookmarksEncryption">AWS
   * API Reference</a></p>
   */
  class JobBookmarksEncryption
  {
  public:
    AWS_GLUE_API JobBookmarksEncryption();
    AWS_GLUE_API JobBookmarksEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API JobBookmarksEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The encryption mode to use for job bookmarks data.</p>
     */
    inline const JobBookmarksEncryptionMode& GetJobBookmarksEncryptionMode() const{ return m_jobBookmarksEncryptionMode; }

    /**
     * <p>The encryption mode to use for job bookmarks data.</p>
     */
    inline bool JobBookmarksEncryptionModeHasBeenSet() const { return m_jobBookmarksEncryptionModeHasBeenSet; }

    /**
     * <p>The encryption mode to use for job bookmarks data.</p>
     */
    inline void SetJobBookmarksEncryptionMode(const JobBookmarksEncryptionMode& value) { m_jobBookmarksEncryptionModeHasBeenSet = true; m_jobBookmarksEncryptionMode = value; }

    /**
     * <p>The encryption mode to use for job bookmarks data.</p>
     */
    inline void SetJobBookmarksEncryptionMode(JobBookmarksEncryptionMode&& value) { m_jobBookmarksEncryptionModeHasBeenSet = true; m_jobBookmarksEncryptionMode = std::move(value); }

    /**
     * <p>The encryption mode to use for job bookmarks data.</p>
     */
    inline JobBookmarksEncryption& WithJobBookmarksEncryptionMode(const JobBookmarksEncryptionMode& value) { SetJobBookmarksEncryptionMode(value); return *this;}

    /**
     * <p>The encryption mode to use for job bookmarks data.</p>
     */
    inline JobBookmarksEncryption& WithJobBookmarksEncryptionMode(JobBookmarksEncryptionMode&& value) { SetJobBookmarksEncryptionMode(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline JobBookmarksEncryption& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline JobBookmarksEncryption& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline JobBookmarksEncryption& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    JobBookmarksEncryptionMode m_jobBookmarksEncryptionMode;
    bool m_jobBookmarksEncryptionModeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
