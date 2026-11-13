/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CodePipeline {
namespace Model {

/**
 * <p>The Git repository file paths specified as filter criteria to start the
 * pipeline.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GitFilePathFilterCriteria">AWS
 * API Reference</a></p>
 */
class GitFilePathFilterCriteria {
 public:
  AWS_CODEPIPELINE_API GitFilePathFilterCriteria() = default;
  AWS_CODEPIPELINE_API GitFilePathFilterCriteria(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEPIPELINE_API GitFilePathFilterCriteria& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEPIPELINE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The list of patterns of Git repository file paths that, when a commit is
   * pushed, are to be included as criteria that starts the pipeline.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIncludes() const { return m_includes; }
  inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }
  template <typename IncludesT = Aws::Vector<Aws::String>>
  void SetIncludes(IncludesT&& value) {
    m_includesHasBeenSet = true;
    m_includes = std::forward<IncludesT>(value);
  }
  template <typename IncludesT = Aws::Vector<Aws::String>>
  GitFilePathFilterCriteria& WithIncludes(IncludesT&& value) {
    SetIncludes(std::forward<IncludesT>(value));
    return *this;
  }
  template <typename IncludesT = Aws::String>
  GitFilePathFilterCriteria& AddIncludes(IncludesT&& value) {
    m_includesHasBeenSet = true;
    m_includes.emplace_back(std::forward<IncludesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of patterns of Git repository file paths that, when a commit is
   * pushed, are to be excluded from starting the pipeline.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExcludes() const { return m_excludes; }
  inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }
  template <typename ExcludesT = Aws::Vector<Aws::String>>
  void SetExcludes(ExcludesT&& value) {
    m_excludesHasBeenSet = true;
    m_excludes = std::forward<ExcludesT>(value);
  }
  template <typename ExcludesT = Aws::Vector<Aws::String>>
  GitFilePathFilterCriteria& WithExcludes(ExcludesT&& value) {
    SetExcludes(std::forward<ExcludesT>(value));
    return *this;
  }
  template <typename ExcludesT = Aws::String>
  GitFilePathFilterCriteria& AddExcludes(ExcludesT&& value) {
    m_excludesHasBeenSet = true;
    m_excludes.emplace_back(std::forward<ExcludesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_includes;

  Aws::Vector<Aws::String> m_excludes;
  bool m_includesHasBeenSet = false;
  bool m_excludesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodePipeline
}  // namespace Aws
