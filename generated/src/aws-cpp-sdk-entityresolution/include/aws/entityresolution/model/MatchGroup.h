/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/MatchedRecord.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>The match group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/MatchGroup">AWS
   * API Reference</a></p>
   */
  class MatchGroup
  {
  public:
    AWS_ENTITYRESOLUTION_API MatchGroup() = default;
    AWS_ENTITYRESOLUTION_API MatchGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API MatchGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The matched records.</p>
     */
    inline const Aws::Vector<MatchedRecord>& GetRecords() const { return m_records; }
    inline bool RecordsHasBeenSet() const { return m_recordsHasBeenSet; }
    template<typename RecordsT = Aws::Vector<MatchedRecord>>
    void SetRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records = std::forward<RecordsT>(value); }
    template<typename RecordsT = Aws::Vector<MatchedRecord>>
    MatchGroup& WithRecords(RecordsT&& value) { SetRecords(std::forward<RecordsT>(value)); return *this;}
    template<typename RecordsT = MatchedRecord>
    MatchGroup& AddRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records.emplace_back(std::forward<RecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The match ID.</p>
     */
    inline const Aws::String& GetMatchId() const { return m_matchId; }
    inline bool MatchIdHasBeenSet() const { return m_matchIdHasBeenSet; }
    template<typename MatchIdT = Aws::String>
    void SetMatchId(MatchIdT&& value) { m_matchIdHasBeenSet = true; m_matchId = std::forward<MatchIdT>(value); }
    template<typename MatchIdT = Aws::String>
    MatchGroup& WithMatchId(MatchIdT&& value) { SetMatchId(std::forward<MatchIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The match rule of the match group.</p>
     */
    inline const Aws::String& GetMatchRule() const { return m_matchRule; }
    inline bool MatchRuleHasBeenSet() const { return m_matchRuleHasBeenSet; }
    template<typename MatchRuleT = Aws::String>
    void SetMatchRule(MatchRuleT&& value) { m_matchRuleHasBeenSet = true; m_matchRule = std::forward<MatchRuleT>(value); }
    template<typename MatchRuleT = Aws::String>
    MatchGroup& WithMatchRule(MatchRuleT&& value) { SetMatchRule(std::forward<MatchRuleT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MatchedRecord> m_records;
    bool m_recordsHasBeenSet = false;

    Aws::String m_matchId;
    bool m_matchIdHasBeenSet = false;

    Aws::String m_matchRule;
    bool m_matchRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
