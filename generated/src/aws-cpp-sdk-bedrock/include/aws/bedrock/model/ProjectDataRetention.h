/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/DataRetentionMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p>A project's data-retention setting: the project-scope mode, which may be
 * <code>inherit</code> to defer to the account scope or the model default. Uses
 * the same mode space as the account-level data-retention operations; the
 * effective mode for a request resolves project, then account, then model
 * default.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ProjectDataRetention">AWS
 * API Reference</a></p>
 */
class ProjectDataRetention {
 public:
  AWS_BEDROCK_API ProjectDataRetention() = default;
  AWS_BEDROCK_API ProjectDataRetention(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API ProjectDataRetention& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The project's data retention mode. Use <code>inherit</code> to defer to the
   * account setting or model default.</p>
   */
  inline DataRetentionMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(DataRetentionMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline ProjectDataRetention& WithMode(DataRetentionMode value) {
    SetMode(value);
    return *this;
  }
  ///@}
 private:
  DataRetentionMode m_mode{DataRetentionMode::NOT_SET};
  bool m_modeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
