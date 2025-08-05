/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildLogEntry.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Contains detailed logging information about the policy build process,
   * including steps taken, decisions made, and any issues encountered.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyBuildLog">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyBuildLog
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildLog() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildLog(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildLog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of log entries documenting each step in the policy build process,
     * including timestamps, status, and detailed messages.</p>
     */
    inline const Aws::Vector<AutomatedReasoningPolicyBuildLogEntry>& GetEntries() const { return m_entries; }
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
    template<typename EntriesT = Aws::Vector<AutomatedReasoningPolicyBuildLogEntry>>
    void SetEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries = std::forward<EntriesT>(value); }
    template<typename EntriesT = Aws::Vector<AutomatedReasoningPolicyBuildLogEntry>>
    AutomatedReasoningPolicyBuildLog& WithEntries(EntriesT&& value) { SetEntries(std::forward<EntriesT>(value)); return *this;}
    template<typename EntriesT = AutomatedReasoningPolicyBuildLogEntry>
    AutomatedReasoningPolicyBuildLog& AddEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries.emplace_back(std::forward<EntriesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AutomatedReasoningPolicyBuildLogEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
