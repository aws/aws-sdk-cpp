/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/AgentOutputMessageType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {

/**
 * <p>Represents a response message from the agent during chat-based profile
 * customization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/AgentOutputMessage">AWS
 * API Reference</a></p>
 */
class AgentOutputMessage {
 public:
  AWS_HEALTHLAKE_API AgentOutputMessage() = default;
  AWS_HEALTHLAKE_API AgentOutputMessage(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API AgentOutputMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The text of the agent's response.</p>
   */
  inline const Aws::String& GetBody() const { return m_body; }
  inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
  template <typename BodyT = Aws::String>
  void SetBody(BodyT&& value) {
    m_bodyHasBeenSet = true;
    m_body = std::forward<BodyT>(value);
  }
  template <typename BodyT = Aws::String>
  AgentOutputMessage& WithBody(BodyT&& value) {
    SetBody(std::forward<BodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of output message, which indicates how to interpret the agent's
   * response.</p>
   */
  inline AgentOutputMessageType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(AgentOutputMessageType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AgentOutputMessage& WithType(AgentOutputMessageType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of selectable options presented when the response type is
   * <code>options</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetOptionsList() const { return m_optionsList; }
  inline bool OptionsListHasBeenSet() const { return m_optionsListHasBeenSet; }
  template <typename OptionsListT = Aws::Vector<Aws::String>>
  void SetOptionsList(OptionsListT&& value) {
    m_optionsListHasBeenSet = true;
    m_optionsList = std::forward<OptionsListT>(value);
  }
  template <typename OptionsListT = Aws::Vector<Aws::String>>
  AgentOutputMessage& WithOptionsList(OptionsListT&& value) {
    SetOptionsList(std::forward<OptionsListT>(value));
    return *this;
  }
  template <typename OptionsListT = Aws::String>
  AgentOutputMessage& AddOptionsList(OptionsListT&& value) {
    m_optionsListHasBeenSet = true;
    m_optionsList.emplace_back(std::forward<OptionsListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_body;

  AgentOutputMessageType m_type{AgentOutputMessageType::NOT_SET};

  Aws::Vector<Aws::String> m_optionsList;
  bool m_bodyHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_optionsListHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
