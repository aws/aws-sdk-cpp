/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/ParticipantTimerConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>Configuration information for the chat participant role.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ChatParticipantRoleConfig">AWS
   * API Reference</a></p>
   */
  class ChatParticipantRoleConfig
  {
  public:
    AWS_CONNECT_API ChatParticipantRoleConfig() = default;
    AWS_CONNECT_API ChatParticipantRoleConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ChatParticipantRoleConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of participant timers. You can specify any unique combination of role
     * and timer type. Duplicate entries error out the request with a 400.</p>
     */
    inline const Aws::Vector<ParticipantTimerConfiguration>& GetParticipantTimerConfigList() const { return m_participantTimerConfigList; }
    inline bool ParticipantTimerConfigListHasBeenSet() const { return m_participantTimerConfigListHasBeenSet; }
    template<typename ParticipantTimerConfigListT = Aws::Vector<ParticipantTimerConfiguration>>
    void SetParticipantTimerConfigList(ParticipantTimerConfigListT&& value) { m_participantTimerConfigListHasBeenSet = true; m_participantTimerConfigList = std::forward<ParticipantTimerConfigListT>(value); }
    template<typename ParticipantTimerConfigListT = Aws::Vector<ParticipantTimerConfiguration>>
    ChatParticipantRoleConfig& WithParticipantTimerConfigList(ParticipantTimerConfigListT&& value) { SetParticipantTimerConfigList(std::forward<ParticipantTimerConfigListT>(value)); return *this;}
    template<typename ParticipantTimerConfigListT = ParticipantTimerConfiguration>
    ChatParticipantRoleConfig& AddParticipantTimerConfigList(ParticipantTimerConfigListT&& value) { m_participantTimerConfigListHasBeenSet = true; m_participantTimerConfigList.emplace_back(std::forward<ParticipantTimerConfigListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ParticipantTimerConfiguration> m_participantTimerConfigList;
    bool m_participantTimerConfigListHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
