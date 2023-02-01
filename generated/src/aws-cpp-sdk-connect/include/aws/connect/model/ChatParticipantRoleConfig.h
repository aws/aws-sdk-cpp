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
    AWS_CONNECT_API ChatParticipantRoleConfig();
    AWS_CONNECT_API ChatParticipantRoleConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ChatParticipantRoleConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of participant timers. You can specify any unique combination of role
     * and timer type. Duplicate entries error out the request with a 400.</p>
     */
    inline const Aws::Vector<ParticipantTimerConfiguration>& GetParticipantTimerConfigList() const{ return m_participantTimerConfigList; }

    /**
     * <p>A list of participant timers. You can specify any unique combination of role
     * and timer type. Duplicate entries error out the request with a 400.</p>
     */
    inline bool ParticipantTimerConfigListHasBeenSet() const { return m_participantTimerConfigListHasBeenSet; }

    /**
     * <p>A list of participant timers. You can specify any unique combination of role
     * and timer type. Duplicate entries error out the request with a 400.</p>
     */
    inline void SetParticipantTimerConfigList(const Aws::Vector<ParticipantTimerConfiguration>& value) { m_participantTimerConfigListHasBeenSet = true; m_participantTimerConfigList = value; }

    /**
     * <p>A list of participant timers. You can specify any unique combination of role
     * and timer type. Duplicate entries error out the request with a 400.</p>
     */
    inline void SetParticipantTimerConfigList(Aws::Vector<ParticipantTimerConfiguration>&& value) { m_participantTimerConfigListHasBeenSet = true; m_participantTimerConfigList = std::move(value); }

    /**
     * <p>A list of participant timers. You can specify any unique combination of role
     * and timer type. Duplicate entries error out the request with a 400.</p>
     */
    inline ChatParticipantRoleConfig& WithParticipantTimerConfigList(const Aws::Vector<ParticipantTimerConfiguration>& value) { SetParticipantTimerConfigList(value); return *this;}

    /**
     * <p>A list of participant timers. You can specify any unique combination of role
     * and timer type. Duplicate entries error out the request with a 400.</p>
     */
    inline ChatParticipantRoleConfig& WithParticipantTimerConfigList(Aws::Vector<ParticipantTimerConfiguration>&& value) { SetParticipantTimerConfigList(std::move(value)); return *this;}

    /**
     * <p>A list of participant timers. You can specify any unique combination of role
     * and timer type. Duplicate entries error out the request with a 400.</p>
     */
    inline ChatParticipantRoleConfig& AddParticipantTimerConfigList(const ParticipantTimerConfiguration& value) { m_participantTimerConfigListHasBeenSet = true; m_participantTimerConfigList.push_back(value); return *this; }

    /**
     * <p>A list of participant timers. You can specify any unique combination of role
     * and timer type. Duplicate entries error out the request with a 400.</p>
     */
    inline ChatParticipantRoleConfig& AddParticipantTimerConfigList(ParticipantTimerConfiguration&& value) { m_participantTimerConfigListHasBeenSet = true; m_participantTimerConfigList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ParticipantTimerConfiguration> m_participantTimerConfigList;
    bool m_participantTimerConfigListHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
