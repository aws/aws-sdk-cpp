/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/S3File.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The Amazon Simple Storage Service objects to import as the cells of a
 * notebook, specified as a bucket and an ordered list of object
 * keys.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/S3FilesLocation">AWS
 * API Reference</a></p>
 */
class S3FilesLocation {
 public:
  AWS_DATAZONE_API S3FilesLocation() = default;
  AWS_DATAZONE_API S3FilesLocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API S3FilesLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the Amazon Simple Storage Service bucket that contains the files
   * to import.</p>
   */
  inline const Aws::String& GetBucket() const { return m_bucket; }
  inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
  template <typename BucketT = Aws::String>
  void SetBucket(BucketT&& value) {
    m_bucketHasBeenSet = true;
    m_bucket = std::forward<BucketT>(value);
  }
  template <typename BucketT = Aws::String>
  S3FilesLocation& WithBucket(BucketT&& value) {
    SetBucket(std::forward<BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The files to import. Cells are created in the order in which you list the
   * files. You can specify between 1 and 100 files.</p>
   */
  inline const Aws::Vector<S3File>& GetFileList() const { return m_fileList; }
  inline bool FileListHasBeenSet() const { return m_fileListHasBeenSet; }
  template <typename FileListT = Aws::Vector<S3File>>
  void SetFileList(FileListT&& value) {
    m_fileListHasBeenSet = true;
    m_fileList = std::forward<FileListT>(value);
  }
  template <typename FileListT = Aws::Vector<S3File>>
  S3FilesLocation& WithFileList(FileListT&& value) {
    SetFileList(std::forward<FileListT>(value));
    return *this;
  }
  template <typename FileListT = S3File>
  S3FilesLocation& AddFileList(FileListT&& value) {
    m_fileListHasBeenSet = true;
    m_fileList.emplace_back(std::forward<FileListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucket;

  Aws::Vector<S3File> m_fileList;
  bool m_bucketHasBeenSet = false;
  bool m_fileListHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
