/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaWeb {
namespace Model {

/**
 * <p>Specifies a revision and its traffic weight for an endpoint. Up to two
 * revisions can be assigned weights to split traffic for canary or blue-green
 * deployments.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/RevisionWeight">AWS
 * API Reference</a></p>
 */
class RevisionWeight {
 public:
  AWS_LAMBDAWEB_API RevisionWeight() = default;
  AWS_LAMBDAWEB_API RevisionWeight(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API RevisionWeight& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the revision.</p>
   */
  inline const Aws::String& GetRevisionId() const { return m_revisionId; }
  inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
  template <typename RevisionIdT = Aws::String>
  void SetRevisionId(RevisionIdT&& value) {
    m_revisionIdHasBeenSet = true;
    m_revisionId = std::forward<RevisionIdT>(value);
  }
  template <typename RevisionIdT = Aws::String>
  RevisionWeight& WithRevisionId(RevisionIdT&& value) {
    SetRevisionId(std::forward<RevisionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of traffic to route to this revision. Minimum value of 1,
   * maximum value of 100.</p>
   */
  inline int GetWeight() const { return m_weight; }
  inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
  inline void SetWeight(int value) {
    m_weightHasBeenSet = true;
    m_weight = value;
  }
  inline RevisionWeight& WithWeight(int value) {
    SetWeight(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_revisionId;

  int m_weight{0};
  bool m_revisionIdHasBeenSet = false;
  bool m_weightHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
