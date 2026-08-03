/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/AsPathType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DirectConnect {
namespace Model {

/**
 * <p>A segment of an autonomous system (AS) path.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AsPathSegment">AWS
 * API Reference</a></p>
 */
class AsPathSegment {
 public:
  AWS_DIRECTCONNECT_API AsPathSegment() = default;
  AWS_DIRECTCONNECT_API AsPathSegment(Aws::Utils::Json::JsonView jsonValue);
  AWS_DIRECTCONNECT_API AsPathSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the AS path segment.</p> <p>The valid values are <code>seq</code>
   * (an ordered <code>AS_SEQUENCE</code>) and <code>set</code> (an unordered
   * <code>AS_SET</code>).</p>
   */
  inline AsPathType GetPathType() const { return m_pathType; }
  inline bool PathTypeHasBeenSet() const { return m_pathTypeHasBeenSet; }
  inline void SetPathType(AsPathType value) {
    m_pathTypeHasBeenSet = true;
    m_pathType = value;
  }
  inline AsPathSegment& WithPathType(AsPathType value) {
    SetPathType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The autonomous system (AS) numbers in the segment.</p>
   */
  inline const Aws::Vector<long long>& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::Vector<long long>>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::Vector<long long>>
  AsPathSegment& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  inline AsPathSegment& AddPath(long long value) {
    m_pathHasBeenSet = true;
    m_path.push_back(value);
    return *this;
  }
  ///@}
 private:
  AsPathType m_pathType{AsPathType::NOT_SET};

  Aws::Vector<long long> m_path;
  bool m_pathTypeHasBeenSet = false;
  bool m_pathHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
