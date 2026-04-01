/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/EventChannelType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Service details for Event Channel integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/EventChannelDetails">AWS
 * API Reference</a></p>
 */
class EventChannelDetails {
 public:
  AWS_DEVOPSAGENT_API EventChannelDetails() = default;
  AWS_DEVOPSAGENT_API EventChannelDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API EventChannelDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of event channel</p>
   */
  inline EventChannelType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(EventChannelType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline EventChannelDetails& WithType(EventChannelType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  EventChannelType m_type{EventChannelType::NOT_SET};
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
