/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/S3Permission.h>

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
 * <p>The asset permissions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/Permissions">AWS
 * API Reference</a></p>
 */
class Permissions {
 public:
  AWS_DATAZONE_API Permissions() = default;
  AWS_DATAZONE_API Permissions(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Permissions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The S3 details of the asset permissions.</p>
   */
  inline const Aws::Vector<S3Permission>& GetS3() const { return m_s3; }
  inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
  template <typename S3T = Aws::Vector<S3Permission>>
  void SetS3(S3T&& value) {
    m_s3HasBeenSet = true;
    m_s3 = std::forward<S3T>(value);
  }
  template <typename S3T = Aws::Vector<S3Permission>>
  Permissions& WithS3(S3T&& value) {
    SetS3(std::forward<S3T>(value));
    return *this;
  }
  inline Permissions& AddS3(S3Permission value) {
    m_s3HasBeenSet = true;
    m_s3.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<S3Permission> m_s3;
  bool m_s3HasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
