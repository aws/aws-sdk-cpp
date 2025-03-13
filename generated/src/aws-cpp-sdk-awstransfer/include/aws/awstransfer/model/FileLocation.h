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
    AWS_TRANSFER_API FileLocation() = default;
    AWS_TRANSFER_API FileLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API FileLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the S3 details for the file being used, such as bucket, ETag, and
     * so forth.</p>
     */
    inline const S3FileLocation& GetS3FileLocation() const { return m_s3FileLocation; }
    inline bool S3FileLocationHasBeenSet() const { return m_s3FileLocationHasBeenSet; }
    template<typename S3FileLocationT = S3FileLocation>
    void SetS3FileLocation(S3FileLocationT&& value) { m_s3FileLocationHasBeenSet = true; m_s3FileLocation = std::forward<S3FileLocationT>(value); }
    template<typename S3FileLocationT = S3FileLocation>
    FileLocation& WithS3FileLocation(S3FileLocationT&& value) { SetS3FileLocation(std::forward<S3FileLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon EFS identifier and the path for the file being used.</p>
     */
    inline const EfsFileLocation& GetEfsFileLocation() const { return m_efsFileLocation; }
    inline bool EfsFileLocationHasBeenSet() const { return m_efsFileLocationHasBeenSet; }
    template<typename EfsFileLocationT = EfsFileLocation>
    void SetEfsFileLocation(EfsFileLocationT&& value) { m_efsFileLocationHasBeenSet = true; m_efsFileLocation = std::forward<EfsFileLocationT>(value); }
    template<typename EfsFileLocationT = EfsFileLocation>
    FileLocation& WithEfsFileLocation(EfsFileLocationT&& value) { SetEfsFileLocation(std::forward<EfsFileLocationT>(value)); return *this;}
    ///@}
  private:

    S3FileLocation m_s3FileLocation;
    bool m_s3FileLocationHasBeenSet = false;

    EfsFileLocation m_efsFileLocation;
    bool m_efsFileLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
