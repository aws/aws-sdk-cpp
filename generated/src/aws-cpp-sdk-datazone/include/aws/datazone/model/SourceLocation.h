/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/S3FilesLocation.h>

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
 * <p>The source location for a notebook import in Amazon SageMaker Unified
 * Studio.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SourceLocation">AWS
 * API Reference</a></p>
 */
class SourceLocation {
 public:
  AWS_DATAZONE_API SourceLocation() = default;
  AWS_DATAZONE_API SourceLocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API SourceLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Simple Storage Service URI of the notebook source file.</p>
   */
  inline const Aws::String& GetS3() const { return m_s3; }
  inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
  template <typename S3T = Aws::String>
  void SetS3(S3T&& value) {
    m_s3HasBeenSet = true;
    m_s3 = std::forward<S3T>(value);
  }
  template <typename S3T = Aws::String>
  SourceLocation& WithS3(S3T&& value) {
    SetS3(std::forward<S3T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Simple Storage Service objects to import as the notebook's cells.
   * One cell is created for each object, in the order in which you list them.</p>
   */
  inline const S3FilesLocation& GetS3Files() const { return m_s3Files; }
  inline bool S3FilesHasBeenSet() const { return m_s3FilesHasBeenSet; }
  template <typename S3FilesT = S3FilesLocation>
  void SetS3Files(S3FilesT&& value) {
    m_s3FilesHasBeenSet = true;
    m_s3Files = std::forward<S3FilesT>(value);
  }
  template <typename S3FilesT = S3FilesLocation>
  SourceLocation& WithS3Files(S3FilesT&& value) {
    SetS3Files(std::forward<S3FilesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3;

  S3FilesLocation m_s3Files;
  bool m_s3HasBeenSet = false;
  bool m_s3FilesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
