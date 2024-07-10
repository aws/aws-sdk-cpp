/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_BEDROCKAGENT_API MemoryConfiguration();
    AWS_BEDROCKAGENT_API MemoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API MemoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of memory that is stored. </p>
     */
    inline const Aws::Vector<MemoryType>& GetEnabledMemoryTypes() const{ return m_enabledMemoryTypes; }
    inline bool EnabledMemoryTypesHasBeenSet() const { return m_enabledMemoryTypesHasBeenSet; }
    inline void SetEnabledMemoryTypes(const Aws::Vector<MemoryType>& value) { m_enabledMemoryTypesHasBeenSet = true; m_enabledMemoryTypes = value; }
    inline void SetEnabledMemoryTypes(Aws::Vector<MemoryType>&& value) { m_enabledMemoryTypesHasBeenSet = true; m_enabledMemoryTypes = std::move(value); }
    inline MemoryConfiguration& WithEnabledMemoryTypes(const Aws::Vector<MemoryType>& value) { SetEnabledMemoryTypes(value); return *this;}
    inline MemoryConfiguration& WithEnabledMemoryTypes(Aws::Vector<MemoryType>&& value) { SetEnabledMemoryTypes(std::move(value)); return *this;}
    inline MemoryConfiguration& AddEnabledMemoryTypes(const MemoryType& value) { m_enabledMemoryTypesHasBeenSet = true; m_enabledMemoryTypes.push_back(value); return *this; }
    inline MemoryConfiguration& AddEnabledMemoryTypes(MemoryType&& value) { m_enabledMemoryTypesHasBeenSet = true; m_enabledMemoryTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of days the agent is configured to retain the conversational
     * context.</p>
     */
    inline int GetStorageDays() const{ return m_storageDays; }
    inline bool StorageDaysHasBeenSet() const { return m_storageDaysHasBeenSet; }
    inline void SetStorageDays(int value) { m_storageDaysHasBeenSet = true; m_storageDays = value; }
    inline MemoryConfiguration& WithStorageDays(int value) { SetStorageDays(value); return *this;}
    ///@}
  private:

    Aws::Vector<MemoryType> m_enabledMemoryTypes;
    bool m_enabledMemoryTypesHasBeenSet = false;

    int m_storageDays;
    bool m_storageDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
