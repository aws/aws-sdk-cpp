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
   * <p>Specifies the location for the file that's being processed.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/InputFileLocation">AWS
   * API Reference</a></p>
   */
  class InputFileLocation
  {
  public:
    AWS_TRANSFER_API InputFileLocation() = default;
    AWS_TRANSFER_API InputFileLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API InputFileLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the details for the Amazon S3 file that's being copied or
     * decrypted.</p>
     */
    inline const S3InputFileLocation& GetS3FileLocation() const { return m_s3FileLocation; }
    inline bool S3FileLocationHasBeenSet() const { return m_s3FileLocationHasBeenSet; }
    template<typename S3FileLocationT = S3InputFileLocation>
    void SetS3FileLocation(S3FileLocationT&& value) { m_s3FileLocationHasBeenSet = true; m_s3FileLocation = std::forward<S3FileLocationT>(value); }
    template<typename S3FileLocationT = S3InputFileLocation>
    InputFileLocation& WithS3FileLocation(S3FileLocationT&& value) { SetS3FileLocation(std::forward<S3FileLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the details for the Amazon Elastic File System (Amazon EFS) file
     * that's being decrypted.</p>
     */
    inline const EfsFileLocation& GetEfsFileLocation() const { return m_efsFileLocation; }
    inline bool EfsFileLocationHasBeenSet() const { return m_efsFileLocationHasBeenSet; }
    template<typename EfsFileLocationT = EfsFileLocation>
    void SetEfsFileLocation(EfsFileLocationT&& value) { m_efsFileLocationHasBeenSet = true; m_efsFileLocation = std::forward<EfsFileLocationT>(value); }
    template<typename EfsFileLocationT = EfsFileLocation>
    InputFileLocation& WithEfsFileLocation(EfsFileLocationT&& value) { SetEfsFileLocation(std::forward<EfsFileLocationT>(value)); return *this;}
    ///@}
  private:

    S3InputFileLocation m_s3FileLocation;
    bool m_s3FileLocationHasBeenSet = false;

    EfsFileLocation m_efsFileLocation;
    bool m_efsFileLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
