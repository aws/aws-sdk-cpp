/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/dsql/model/KinesisTargetDefinition.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DSQL {
namespace Model {

/**
 * <p>Target definition for stream destination.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/TargetDefinition">AWS
 * API Reference</a></p>
 */
class TargetDefinition {
 public:
  AWS_DSQL_API TargetDefinition() = default;
  AWS_DSQL_API TargetDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_DSQL_API TargetDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DSQL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Kinesis stream target configuration.</p>
   */
  inline const KinesisTargetDefinition& GetKinesis() const { return m_kinesis; }
  inline bool KinesisHasBeenSet() const { return m_kinesisHasBeenSet; }
  template <typename KinesisT = KinesisTargetDefinition>
  void SetKinesis(KinesisT&& value) {
    m_kinesisHasBeenSet = true;
    m_kinesis = std::forward<KinesisT>(value);
  }
  template <typename KinesisT = KinesisTargetDefinition>
  TargetDefinition& WithKinesis(KinesisT&& value) {
    SetKinesis(std::forward<KinesisT>(value));
    return *this;
  }
  ///@}
 private:
  KinesisTargetDefinition m_kinesis;
  bool m_kinesisHasBeenSet = false;
};

}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
