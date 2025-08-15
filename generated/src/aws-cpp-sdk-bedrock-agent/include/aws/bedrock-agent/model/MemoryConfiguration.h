/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/SessionSummaryConfiguration.h>
#include <aws/bedrock-agent/model/MemoryType.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Details of the memory configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/MemoryConfiguration">AWS
   * API Reference</a></p>
   */
  class MemoryConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API MemoryConfiguration() = default;
    AWS_BEDROCKAGENT_API MemoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API MemoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of memory that is stored. </p>
     */
    inline const Aws::Vector<MemoryType>& GetEnabledMemoryTypes() const { return m_enabledMemoryTypes; }
    inline bool EnabledMemoryTypesHasBeenSet() const { return m_enabledMemoryTypesHasBeenSet; }
    template<typename EnabledMemoryTypesT = Aws::Vector<MemoryType>>
    void SetEnabledMemoryTypes(EnabledMemoryTypesT&& value) { m_enabledMemoryTypesHasBeenSet = true; m_enabledMemoryTypes = std::forward<EnabledMemoryTypesT>(value); }
    template<typename EnabledMemoryTypesT = Aws::Vector<MemoryType>>
    MemoryConfiguration& WithEnabledMemoryTypes(EnabledMemoryTypesT&& value) { SetEnabledMemoryTypes(std::forward<EnabledMemoryTypesT>(value)); return *this;}
    inline MemoryConfiguration& AddEnabledMemoryTypes(MemoryType value) { m_enabledMemoryTypesHasBeenSet = true; m_enabledMemoryTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of days the agent is configured to retain the conversational
     * context.</p>
     */
    inline int GetStorageDays() const { return m_storageDays; }
    inline bool StorageDaysHasBeenSet() const { return m_storageDaysHasBeenSet; }
    inline void SetStorageDays(int value) { m_storageDaysHasBeenSet = true; m_storageDays = value; }
    inline MemoryConfiguration& WithStorageDays(int value) { SetStorageDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration for SESSION_SUMMARY memory type enabled for the
     * agent. </p>
     */
    inline const SessionSummaryConfiguration& GetSessionSummaryConfiguration() const { return m_sessionSummaryConfiguration; }
    inline bool SessionSummaryConfigurationHasBeenSet() const { return m_sessionSummaryConfigurationHasBeenSet; }
    template<typename SessionSummaryConfigurationT = SessionSummaryConfiguration>
    void SetSessionSummaryConfiguration(SessionSummaryConfigurationT&& value) { m_sessionSummaryConfigurationHasBeenSet = true; m_sessionSummaryConfiguration = std::forward<SessionSummaryConfigurationT>(value); }
    template<typename SessionSummaryConfigurationT = SessionSummaryConfiguration>
    MemoryConfiguration& WithSessionSummaryConfiguration(SessionSummaryConfigurationT&& value) { SetSessionSummaryConfiguration(std::forward<SessionSummaryConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MemoryType> m_enabledMemoryTypes;
    bool m_enabledMemoryTypesHasBeenSet = false;

    int m_storageDays{0};
    bool m_storageDaysHasBeenSet = false;

    SessionSummaryConfiguration m_sessionSummaryConfiguration;
    bool m_sessionSummaryConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
