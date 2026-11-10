/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/CutoverTarget.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElasticsearchService {
namespace Model {

/**
 * <p>The cutover to perform for a cloned blue/green upgrade.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CutoverRequestOptions">AWS
 * API Reference</a></p>
 */
class CutoverRequestOptions {
 public:
  AWS_ELASTICSEARCHSERVICE_API CutoverRequestOptions() = default;
  AWS_ELASTICSEARCHSERVICE_API CutoverRequestOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API CutoverRequestOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The cluster to cut over to. <code>ClonedCluster</code> makes the cloned
   * cluster serve the domain. <code>PrimaryCluster</code> keeps the primary cluster
   * and ends the upgrade.</p>
   */
  inline CutoverTarget GetTarget() const { return m_target; }
  inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
  inline void SetTarget(CutoverTarget value) {
    m_targetHasBeenSet = true;
    m_target = value;
  }
  inline CutoverRequestOptions& WithTarget(CutoverTarget value) {
    SetTarget(value);
    return *this;
  }
  ///@}
 private:
  CutoverTarget m_target{CutoverTarget::NOT_SET};
  bool m_targetHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
