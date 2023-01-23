/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Describes the Amazon S3 bucket name and location for the grammar that is the
   * source for the slot type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/GrammarSlotTypeSource">AWS
   * API Reference</a></p>
   */
  class GrammarSlotTypeSource
  {
  public:
    AWS_LEXMODELSV2_API GrammarSlotTypeSource();
    AWS_LEXMODELSV2_API GrammarSlotTypeSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API GrammarSlotTypeSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the S3 bucket that contains the grammar source.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the S3 bucket that contains the grammar source.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket that contains the grammar source.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the S3 bucket that contains the grammar source.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket that contains the grammar source.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket that contains the grammar source.</p>
     */
    inline GrammarSlotTypeSource& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket that contains the grammar source.</p>
     */
    inline GrammarSlotTypeSource& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket that contains the grammar source.</p>
     */
    inline GrammarSlotTypeSource& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The path to the grammar in the S3 bucket.</p>
     */
    inline const Aws::String& GetS3ObjectKey() const{ return m_s3ObjectKey; }

    /**
     * <p>The path to the grammar in the S3 bucket.</p>
     */
    inline bool S3ObjectKeyHasBeenSet() const { return m_s3ObjectKeyHasBeenSet; }

    /**
     * <p>The path to the grammar in the S3 bucket.</p>
     */
    inline void SetS3ObjectKey(const Aws::String& value) { m_s3ObjectKeyHasBeenSet = true; m_s3ObjectKey = value; }

    /**
     * <p>The path to the grammar in the S3 bucket.</p>
     */
    inline void SetS3ObjectKey(Aws::String&& value) { m_s3ObjectKeyHasBeenSet = true; m_s3ObjectKey = std::move(value); }

    /**
     * <p>The path to the grammar in the S3 bucket.</p>
     */
    inline void SetS3ObjectKey(const char* value) { m_s3ObjectKeyHasBeenSet = true; m_s3ObjectKey.assign(value); }

    /**
     * <p>The path to the grammar in the S3 bucket.</p>
     */
    inline GrammarSlotTypeSource& WithS3ObjectKey(const Aws::String& value) { SetS3ObjectKey(value); return *this;}

    /**
     * <p>The path to the grammar in the S3 bucket.</p>
     */
    inline GrammarSlotTypeSource& WithS3ObjectKey(Aws::String&& value) { SetS3ObjectKey(std::move(value)); return *this;}

    /**
     * <p>The path to the grammar in the S3 bucket.</p>
     */
    inline GrammarSlotTypeSource& WithS3ObjectKey(const char* value) { SetS3ObjectKey(value); return *this;}


    /**
     * <p>The Amazon KMS key required to decrypt the contents of the grammar, if
     * any.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon KMS key required to decrypt the contents of the grammar, if
     * any.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon KMS key required to decrypt the contents of the grammar, if
     * any.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon KMS key required to decrypt the contents of the grammar, if
     * any.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon KMS key required to decrypt the contents of the grammar, if
     * any.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon KMS key required to decrypt the contents of the grammar, if
     * any.</p>
     */
    inline GrammarSlotTypeSource& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon KMS key required to decrypt the contents of the grammar, if
     * any.</p>
     */
    inline GrammarSlotTypeSource& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon KMS key required to decrypt the contents of the grammar, if
     * any.</p>
     */
    inline GrammarSlotTypeSource& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3ObjectKey;
    bool m_s3ObjectKeyHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
