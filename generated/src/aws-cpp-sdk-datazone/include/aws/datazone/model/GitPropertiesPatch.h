/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

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
 * <p>The properties used to update an existing Git connection, such as the
 * CodeConnections ARN or the default branch.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GitPropertiesPatch">AWS
 * API Reference</a></p>
 */
class GitPropertiesPatch {
 public:
  AWS_DATAZONE_API GitPropertiesPatch() = default;
  AWS_DATAZONE_API GitPropertiesPatch(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API GitPropertiesPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the CodeConnections connection used to connect to the Git
   * repository.</p>
   */
  inline const Aws::String& GetCodeConnectionArn() const { return m_codeConnectionArn; }
  inline bool CodeConnectionArnHasBeenSet() const { return m_codeConnectionArnHasBeenSet; }
  template <typename CodeConnectionArnT = Aws::String>
  void SetCodeConnectionArn(CodeConnectionArnT&& value) {
    m_codeConnectionArnHasBeenSet = true;
    m_codeConnectionArn = std::forward<CodeConnectionArnT>(value);
  }
  template <typename CodeConnectionArnT = Aws::String>
  GitPropertiesPatch& WithCodeConnectionArn(CodeConnectionArnT&& value) {
    SetCodeConnectionArn(std::forward<CodeConnectionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default branch of the Git repository.</p>
   */
  inline const Aws::String& GetDefaultBranch() const { return m_defaultBranch; }
  inline bool DefaultBranchHasBeenSet() const { return m_defaultBranchHasBeenSet; }
  template <typename DefaultBranchT = Aws::String>
  void SetDefaultBranch(DefaultBranchT&& value) {
    m_defaultBranchHasBeenSet = true;
    m_defaultBranch = std::forward<DefaultBranchT>(value);
  }
  template <typename DefaultBranchT = Aws::String>
  GitPropertiesPatch& WithDefaultBranch(DefaultBranchT&& value) {
    SetDefaultBranch(std::forward<DefaultBranchT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_codeConnectionArn;

  Aws::String m_defaultBranch;
  bool m_codeConnectionArnHasBeenSet = false;
  bool m_defaultBranchHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
