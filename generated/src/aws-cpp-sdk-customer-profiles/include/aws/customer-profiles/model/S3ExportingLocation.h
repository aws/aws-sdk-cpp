/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The S3 location where Identity Resolution Jobs write result
   * files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/S3ExportingLocation">AWS
   * API Reference</a></p>
   */
  class S3ExportingLocation
  {
  public:
    AWS_CUSTOMERPROFILES_API S3ExportingLocation();
    AWS_CUSTOMERPROFILES_API S3ExportingLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API S3ExportingLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the S3 bucket name where Identity Resolution Jobs write result
     * files.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the S3 bucket name where Identity Resolution Jobs write result
     * files.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket name where Identity Resolution Jobs write result
     * files.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the S3 bucket name where Identity Resolution Jobs write result
     * files.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket name where Identity Resolution Jobs write result
     * files.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket name where Identity Resolution Jobs write result
     * files.</p>
     */
    inline S3ExportingLocation& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket name where Identity Resolution Jobs write result
     * files.</p>
     */
    inline S3ExportingLocation& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket name where Identity Resolution Jobs write result
     * files.</p>
     */
    inline S3ExportingLocation& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The S3 key name of the location where Identity Resolution Jobs write result
     * files.</p>
     */
    inline const Aws::String& GetS3KeyName() const{ return m_s3KeyName; }

    /**
     * <p>The S3 key name of the location where Identity Resolution Jobs write result
     * files.</p>
     */
    inline bool S3KeyNameHasBeenSet() const { return m_s3KeyNameHasBeenSet; }

    /**
     * <p>The S3 key name of the location where Identity Resolution Jobs write result
     * files.</p>
     */
    inline void SetS3KeyName(const Aws::String& value) { m_s3KeyNameHasBeenSet = true; m_s3KeyName = value; }

    /**
     * <p>The S3 key name of the location where Identity Resolution Jobs write result
     * files.</p>
     */
    inline void SetS3KeyName(Aws::String&& value) { m_s3KeyNameHasBeenSet = true; m_s3KeyName = std::move(value); }

    /**
     * <p>The S3 key name of the location where Identity Resolution Jobs write result
     * files.</p>
     */
    inline void SetS3KeyName(const char* value) { m_s3KeyNameHasBeenSet = true; m_s3KeyName.assign(value); }

    /**
     * <p>The S3 key name of the location where Identity Resolution Jobs write result
     * files.</p>
     */
    inline S3ExportingLocation& WithS3KeyName(const Aws::String& value) { SetS3KeyName(value); return *this;}

    /**
     * <p>The S3 key name of the location where Identity Resolution Jobs write result
     * files.</p>
     */
    inline S3ExportingLocation& WithS3KeyName(Aws::String&& value) { SetS3KeyName(std::move(value)); return *this;}

    /**
     * <p>The S3 key name of the location where Identity Resolution Jobs write result
     * files.</p>
     */
    inline S3ExportingLocation& WithS3KeyName(const char* value) { SetS3KeyName(value); return *this;}

  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3KeyName;
    bool m_s3KeyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
