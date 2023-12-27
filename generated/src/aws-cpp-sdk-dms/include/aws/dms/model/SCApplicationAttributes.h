/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that defines a schema conversion
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/SCApplicationAttributes">AWS
   * API Reference</a></p>
   */
  class SCApplicationAttributes
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API SCApplicationAttributes();
    AWS_DATABASEMIGRATIONSERVICE_API SCApplicationAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API SCApplicationAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path for the Amazon S3 bucket that the application uses for exporting
     * assessment reports.</p>
     */
    inline const Aws::String& GetS3BucketPath() const{ return m_s3BucketPath; }

    /**
     * <p>The path for the Amazon S3 bucket that the application uses for exporting
     * assessment reports.</p>
     */
    inline bool S3BucketPathHasBeenSet() const { return m_s3BucketPathHasBeenSet; }

    /**
     * <p>The path for the Amazon S3 bucket that the application uses for exporting
     * assessment reports.</p>
     */
    inline void SetS3BucketPath(const Aws::String& value) { m_s3BucketPathHasBeenSet = true; m_s3BucketPath = value; }

    /**
     * <p>The path for the Amazon S3 bucket that the application uses for exporting
     * assessment reports.</p>
     */
    inline void SetS3BucketPath(Aws::String&& value) { m_s3BucketPathHasBeenSet = true; m_s3BucketPath = std::move(value); }

    /**
     * <p>The path for the Amazon S3 bucket that the application uses for exporting
     * assessment reports.</p>
     */
    inline void SetS3BucketPath(const char* value) { m_s3BucketPathHasBeenSet = true; m_s3BucketPath.assign(value); }

    /**
     * <p>The path for the Amazon S3 bucket that the application uses for exporting
     * assessment reports.</p>
     */
    inline SCApplicationAttributes& WithS3BucketPath(const Aws::String& value) { SetS3BucketPath(value); return *this;}

    /**
     * <p>The path for the Amazon S3 bucket that the application uses for exporting
     * assessment reports.</p>
     */
    inline SCApplicationAttributes& WithS3BucketPath(Aws::String&& value) { SetS3BucketPath(std::move(value)); return *this;}

    /**
     * <p>The path for the Amazon S3 bucket that the application uses for exporting
     * assessment reports.</p>
     */
    inline SCApplicationAttributes& WithS3BucketPath(const char* value) { SetS3BucketPath(value); return *this;}


    /**
     * <p>The ARN for the role the application uses to access its Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3BucketRoleArn() const{ return m_s3BucketRoleArn; }

    /**
     * <p>The ARN for the role the application uses to access its Amazon S3 bucket.</p>
     */
    inline bool S3BucketRoleArnHasBeenSet() const { return m_s3BucketRoleArnHasBeenSet; }

    /**
     * <p>The ARN for the role the application uses to access its Amazon S3 bucket.</p>
     */
    inline void SetS3BucketRoleArn(const Aws::String& value) { m_s3BucketRoleArnHasBeenSet = true; m_s3BucketRoleArn = value; }

    /**
     * <p>The ARN for the role the application uses to access its Amazon S3 bucket.</p>
     */
    inline void SetS3BucketRoleArn(Aws::String&& value) { m_s3BucketRoleArnHasBeenSet = true; m_s3BucketRoleArn = std::move(value); }

    /**
     * <p>The ARN for the role the application uses to access its Amazon S3 bucket.</p>
     */
    inline void SetS3BucketRoleArn(const char* value) { m_s3BucketRoleArnHasBeenSet = true; m_s3BucketRoleArn.assign(value); }

    /**
     * <p>The ARN for the role the application uses to access its Amazon S3 bucket.</p>
     */
    inline SCApplicationAttributes& WithS3BucketRoleArn(const Aws::String& value) { SetS3BucketRoleArn(value); return *this;}

    /**
     * <p>The ARN for the role the application uses to access its Amazon S3 bucket.</p>
     */
    inline SCApplicationAttributes& WithS3BucketRoleArn(Aws::String&& value) { SetS3BucketRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the role the application uses to access its Amazon S3 bucket.</p>
     */
    inline SCApplicationAttributes& WithS3BucketRoleArn(const char* value) { SetS3BucketRoleArn(value); return *this;}

  private:

    Aws::String m_s3BucketPath;
    bool m_s3BucketPathHasBeenSet = false;

    Aws::String m_s3BucketRoleArn;
    bool m_s3BucketRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
