/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/S3InputFileLocation.h>
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
   * <p>Specifies the location for the file being copied. Only applicable for the
   * Copy type of workflow steps.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/InputFileLocation">AWS
   * API Reference</a></p>
   */
  class InputFileLocation
  {
  public:
    AWS_TRANSFER_API InputFileLocation();
    AWS_TRANSFER_API InputFileLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API InputFileLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the details for the S3 file being copied.</p>
     */
    inline const S3InputFileLocation& GetS3FileLocation() const{ return m_s3FileLocation; }

    /**
     * <p>Specifies the details for the S3 file being copied.</p>
     */
    inline bool S3FileLocationHasBeenSet() const { return m_s3FileLocationHasBeenSet; }

    /**
     * <p>Specifies the details for the S3 file being copied.</p>
     */
    inline void SetS3FileLocation(const S3InputFileLocation& value) { m_s3FileLocationHasBeenSet = true; m_s3FileLocation = value; }

    /**
     * <p>Specifies the details for the S3 file being copied.</p>
     */
    inline void SetS3FileLocation(S3InputFileLocation&& value) { m_s3FileLocationHasBeenSet = true; m_s3FileLocation = std::move(value); }

    /**
     * <p>Specifies the details for the S3 file being copied.</p>
     */
    inline InputFileLocation& WithS3FileLocation(const S3InputFileLocation& value) { SetS3FileLocation(value); return *this;}

    /**
     * <p>Specifies the details for the S3 file being copied.</p>
     */
    inline InputFileLocation& WithS3FileLocation(S3InputFileLocation&& value) { SetS3FileLocation(std::move(value)); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const EfsFileLocation& GetEfsFileLocation() const{ return m_efsFileLocation; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool EfsFileLocationHasBeenSet() const { return m_efsFileLocationHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetEfsFileLocation(const EfsFileLocation& value) { m_efsFileLocationHasBeenSet = true; m_efsFileLocation = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetEfsFileLocation(EfsFileLocation&& value) { m_efsFileLocationHasBeenSet = true; m_efsFileLocation = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline InputFileLocation& WithEfsFileLocation(const EfsFileLocation& value) { SetEfsFileLocation(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline InputFileLocation& WithEfsFileLocation(EfsFileLocation&& value) { SetEfsFileLocation(std::move(value)); return *this;}

  private:

    S3InputFileLocation m_s3FileLocation;
    bool m_s3FileLocationHasBeenSet = false;

    EfsFileLocation m_efsFileLocation;
    bool m_efsFileLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
