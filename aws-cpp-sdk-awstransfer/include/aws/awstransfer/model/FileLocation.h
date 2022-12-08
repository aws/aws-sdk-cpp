/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/S3FileLocation.h>
#include <aws/awstransfer/model/EfsFileLocation.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Specifies the Amazon S3 or EFS file details to be used in the
   * step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/FileLocation">AWS
   * API Reference</a></p>
   */
  class FileLocation
  {
  public:
    AWS_TRANSFER_API FileLocation();
    AWS_TRANSFER_API FileLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API FileLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the S3 details for the file being used, such as bucket, ETag, and
     * so forth.</p>
     */
    inline const S3FileLocation& GetS3FileLocation() const{ return m_s3FileLocation; }

    /**
     * <p>Specifies the S3 details for the file being used, such as bucket, ETag, and
     * so forth.</p>
     */
    inline bool S3FileLocationHasBeenSet() const { return m_s3FileLocationHasBeenSet; }

    /**
     * <p>Specifies the S3 details for the file being used, such as bucket, ETag, and
     * so forth.</p>
     */
    inline void SetS3FileLocation(const S3FileLocation& value) { m_s3FileLocationHasBeenSet = true; m_s3FileLocation = value; }

    /**
     * <p>Specifies the S3 details for the file being used, such as bucket, ETag, and
     * so forth.</p>
     */
    inline void SetS3FileLocation(S3FileLocation&& value) { m_s3FileLocationHasBeenSet = true; m_s3FileLocation = std::move(value); }

    /**
     * <p>Specifies the S3 details for the file being used, such as bucket, ETag, and
     * so forth.</p>
     */
    inline FileLocation& WithS3FileLocation(const S3FileLocation& value) { SetS3FileLocation(value); return *this;}

    /**
     * <p>Specifies the S3 details for the file being used, such as bucket, ETag, and
     * so forth.</p>
     */
    inline FileLocation& WithS3FileLocation(S3FileLocation&& value) { SetS3FileLocation(std::move(value)); return *this;}


    /**
     * <p>Specifies the Amazon EFS identifier and the path for the file being used.</p>
     */
    inline const EfsFileLocation& GetEfsFileLocation() const{ return m_efsFileLocation; }

    /**
     * <p>Specifies the Amazon EFS identifier and the path for the file being used.</p>
     */
    inline bool EfsFileLocationHasBeenSet() const { return m_efsFileLocationHasBeenSet; }

    /**
     * <p>Specifies the Amazon EFS identifier and the path for the file being used.</p>
     */
    inline void SetEfsFileLocation(const EfsFileLocation& value) { m_efsFileLocationHasBeenSet = true; m_efsFileLocation = value; }

    /**
     * <p>Specifies the Amazon EFS identifier and the path for the file being used.</p>
     */
    inline void SetEfsFileLocation(EfsFileLocation&& value) { m_efsFileLocationHasBeenSet = true; m_efsFileLocation = std::move(value); }

    /**
     * <p>Specifies the Amazon EFS identifier and the path for the file being used.</p>
     */
    inline FileLocation& WithEfsFileLocation(const EfsFileLocation& value) { SetEfsFileLocation(value); return *this;}

    /**
     * <p>Specifies the Amazon EFS identifier and the path for the file being used.</p>
     */
    inline FileLocation& WithEfsFileLocation(EfsFileLocation&& value) { SetEfsFileLocation(std::move(value)); return *this;}

  private:

    S3FileLocation m_s3FileLocation;
    bool m_s3FileLocationHasBeenSet = false;

    EfsFileLocation m_efsFileLocation;
    bool m_efsFileLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
