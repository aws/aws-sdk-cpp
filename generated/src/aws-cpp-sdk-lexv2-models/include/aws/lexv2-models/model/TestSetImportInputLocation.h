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
   * <p>Contains information about the Amazon S3 location from which the test set is
   * imported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestSetImportInputLocation">AWS
   * API Reference</a></p>
   */
  class TestSetImportInputLocation
  {
  public:
    AWS_LEXMODELSV2_API TestSetImportInputLocation();
    AWS_LEXMODELSV2_API TestSetImportInputLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetImportInputLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline TestSetImportInputLocation& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline TestSetImportInputLocation& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline TestSetImportInputLocation& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The path inside the Amazon S3 bucket pointing to the test-set CSV file.</p>
     */
    inline const Aws::String& GetS3Path() const{ return m_s3Path; }

    /**
     * <p>The path inside the Amazon S3 bucket pointing to the test-set CSV file.</p>
     */
    inline bool S3PathHasBeenSet() const { return m_s3PathHasBeenSet; }

    /**
     * <p>The path inside the Amazon S3 bucket pointing to the test-set CSV file.</p>
     */
    inline void SetS3Path(const Aws::String& value) { m_s3PathHasBeenSet = true; m_s3Path = value; }

    /**
     * <p>The path inside the Amazon S3 bucket pointing to the test-set CSV file.</p>
     */
    inline void SetS3Path(Aws::String&& value) { m_s3PathHasBeenSet = true; m_s3Path = std::move(value); }

    /**
     * <p>The path inside the Amazon S3 bucket pointing to the test-set CSV file.</p>
     */
    inline void SetS3Path(const char* value) { m_s3PathHasBeenSet = true; m_s3Path.assign(value); }

    /**
     * <p>The path inside the Amazon S3 bucket pointing to the test-set CSV file.</p>
     */
    inline TestSetImportInputLocation& WithS3Path(const Aws::String& value) { SetS3Path(value); return *this;}

    /**
     * <p>The path inside the Amazon S3 bucket pointing to the test-set CSV file.</p>
     */
    inline TestSetImportInputLocation& WithS3Path(Aws::String&& value) { SetS3Path(std::move(value)); return *this;}

    /**
     * <p>The path inside the Amazon S3 bucket pointing to the test-set CSV file.</p>
     */
    inline TestSetImportInputLocation& WithS3Path(const char* value) { SetS3Path(value); return *this;}

  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3Path;
    bool m_s3PathHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
