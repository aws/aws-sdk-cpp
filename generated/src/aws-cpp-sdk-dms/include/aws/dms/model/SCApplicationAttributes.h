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
    AWS_DATABASEMIGRATIONSERVICE_API SCApplicationAttributes() = default;
    AWS_DATABASEMIGRATIONSERVICE_API SCApplicationAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API SCApplicationAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path for the Amazon S3 bucket that the application uses for exporting
     * assessment reports.</p>
     */
    inline const Aws::String& GetS3BucketPath() const { return m_s3BucketPath; }
    inline bool S3BucketPathHasBeenSet() const { return m_s3BucketPathHasBeenSet; }
    template<typename S3BucketPathT = Aws::String>
    void SetS3BucketPath(S3BucketPathT&& value) { m_s3BucketPathHasBeenSet = true; m_s3BucketPath = std::forward<S3BucketPathT>(value); }
    template<typename S3BucketPathT = Aws::String>
    SCApplicationAttributes& WithS3BucketPath(S3BucketPathT&& value) { SetS3BucketPath(std::forward<S3BucketPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the role the application uses to access its Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3BucketRoleArn() const { return m_s3BucketRoleArn; }
    inline bool S3BucketRoleArnHasBeenSet() const { return m_s3BucketRoleArnHasBeenSet; }
    template<typename S3BucketRoleArnT = Aws::String>
    void SetS3BucketRoleArn(S3BucketRoleArnT&& value) { m_s3BucketRoleArnHasBeenSet = true; m_s3BucketRoleArn = std::forward<S3BucketRoleArnT>(value); }
    template<typename S3BucketRoleArnT = Aws::String>
    SCApplicationAttributes& WithS3BucketRoleArn(S3BucketRoleArnT&& value) { SetS3BucketRoleArn(std::forward<S3BucketRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3BucketPath;
    bool m_s3BucketPathHasBeenSet = false;

    Aws::String m_s3BucketRoleArn;
    bool m_s3BucketRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
