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
   * <p>Contains information about the location in which the test set is
   * stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestSetStorageLocation">AWS
   * API Reference</a></p>
   */
  class TestSetStorageLocation
  {
  public:
    AWS_LEXMODELSV2_API TestSetStorageLocation();
    AWS_LEXMODELSV2_API TestSetStorageLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetStorageLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon S3 bucket in which the test set is stored.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the Amazon S3 bucket in which the test set is stored.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket in which the test set is stored.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket in which the test set is stored.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket in which the test set is stored.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket in which the test set is stored.</p>
     */
    inline TestSetStorageLocation& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket in which the test set is stored.</p>
     */
    inline TestSetStorageLocation& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket in which the test set is stored.</p>
     */
    inline TestSetStorageLocation& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The path inside the Amazon S3 bucket where the test set is stored.</p>
     */
    inline const Aws::String& GetS3Path() const{ return m_s3Path; }

    /**
     * <p>The path inside the Amazon S3 bucket where the test set is stored.</p>
     */
    inline bool S3PathHasBeenSet() const { return m_s3PathHasBeenSet; }

    /**
     * <p>The path inside the Amazon S3 bucket where the test set is stored.</p>
     */
    inline void SetS3Path(const Aws::String& value) { m_s3PathHasBeenSet = true; m_s3Path = value; }

    /**
     * <p>The path inside the Amazon S3 bucket where the test set is stored.</p>
     */
    inline void SetS3Path(Aws::String&& value) { m_s3PathHasBeenSet = true; m_s3Path = std::move(value); }

    /**
     * <p>The path inside the Amazon S3 bucket where the test set is stored.</p>
     */
    inline void SetS3Path(const char* value) { m_s3PathHasBeenSet = true; m_s3Path.assign(value); }

    /**
     * <p>The path inside the Amazon S3 bucket where the test set is stored.</p>
     */
    inline TestSetStorageLocation& WithS3Path(const Aws::String& value) { SetS3Path(value); return *this;}

    /**
     * <p>The path inside the Amazon S3 bucket where the test set is stored.</p>
     */
    inline TestSetStorageLocation& WithS3Path(Aws::String&& value) { SetS3Path(std::move(value)); return *this;}

    /**
     * <p>The path inside the Amazon S3 bucket where the test set is stored.</p>
     */
    inline TestSetStorageLocation& WithS3Path(const char* value) { SetS3Path(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Key Management
     * Service (KMS) key for encrypting the test set.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Key Management
     * Service (KMS) key for encrypting the test set.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Key Management
     * Service (KMS) key for encrypting the test set.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Key Management
     * Service (KMS) key for encrypting the test set.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Key Management
     * Service (KMS) key for encrypting the test set.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Key Management
     * Service (KMS) key for encrypting the test set.</p>
     */
    inline TestSetStorageLocation& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Key Management
     * Service (KMS) key for encrypting the test set.</p>
     */
    inline TestSetStorageLocation& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Key Management
     * Service (KMS) key for encrypting the test set.</p>
     */
    inline TestSetStorageLocation& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3Path;
    bool m_s3PathHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
