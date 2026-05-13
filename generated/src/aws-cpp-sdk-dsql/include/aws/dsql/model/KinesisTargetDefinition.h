/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dsql/DSQL_EXPORTS.h>

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
 * <p>Kinesis stream target configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/KinesisTargetDefinition">AWS
 * API Reference</a></p>
 */
class KinesisTargetDefinition {
 public:
  AWS_DSQL_API KinesisTargetDefinition() = default;
  AWS_DSQL_API KinesisTargetDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_DSQL_API KinesisTargetDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DSQL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Kinesis stream.</p>
   */
  inline const Aws::String& GetStreamArn() const { return m_streamArn; }
  inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }
  template <typename StreamArnT = Aws::String>
  void SetStreamArn(StreamArnT&& value) {
    m_streamArnHasBeenSet = true;
    m_streamArn = std::forward<StreamArnT>(value);
  }
  template <typename StreamArnT = Aws::String>
  KinesisTargetDefinition& WithStreamArn(StreamArnT&& value) {
    SetStreamArn(std::forward<StreamArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role that grants permission to write to the Kinesis
   * stream. This can be a standard role
   * (<code>arn:aws:iam::account-id:role/role-name</code>) or a role with a path
   * prefix (<code>arn:aws:iam::account-id:role/service-role/role-name</code>), such
   * as roles auto-created by the console.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  KinesisTargetDefinition& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_streamArn;

  Aws::String m_roleArn;
  bool m_streamArnHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
