/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p> The configured table association analysis rule applied to a configured table
   * with the custom analysis rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConfiguredTableAssociationAnalysisRuleCustom">AWS
   * API Reference</a></p>
   */
  class ConfiguredTableAssociationAnalysisRuleCustom
  {
  public:
    AWS_CLEANROOMS_API ConfiguredTableAssociationAnalysisRuleCustom() = default;
    AWS_CLEANROOMS_API ConfiguredTableAssociationAnalysisRuleCustom(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConfiguredTableAssociationAnalysisRuleCustom& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The list of collaboration members who are allowed to receive results of
     * queries run with this configured table.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedResultReceivers() const { return m_allowedResultReceivers; }
    inline bool AllowedResultReceiversHasBeenSet() const { return m_allowedResultReceiversHasBeenSet; }
    template<typename AllowedResultReceiversT = Aws::Vector<Aws::String>>
    void SetAllowedResultReceivers(AllowedResultReceiversT&& value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers = std::forward<AllowedResultReceiversT>(value); }
    template<typename AllowedResultReceiversT = Aws::Vector<Aws::String>>
    ConfiguredTableAssociationAnalysisRuleCustom& WithAllowedResultReceivers(AllowedResultReceiversT&& value) { SetAllowedResultReceivers(std::forward<AllowedResultReceiversT>(value)); return *this;}
    template<typename AllowedResultReceiversT = Aws::String>
    ConfiguredTableAssociationAnalysisRuleCustom& AddAllowedResultReceivers(AllowedResultReceiversT&& value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers.emplace_back(std::forward<AllowedResultReceiversT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The list of resources or wildcards (ARNs) that are allowed to perform
     * additional analysis on query output.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAdditionalAnalyses() const { return m_allowedAdditionalAnalyses; }
    inline bool AllowedAdditionalAnalysesHasBeenSet() const { return m_allowedAdditionalAnalysesHasBeenSet; }
    template<typename AllowedAdditionalAnalysesT = Aws::Vector<Aws::String>>
    void SetAllowedAdditionalAnalyses(AllowedAdditionalAnalysesT&& value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses = std::forward<AllowedAdditionalAnalysesT>(value); }
    template<typename AllowedAdditionalAnalysesT = Aws::Vector<Aws::String>>
    ConfiguredTableAssociationAnalysisRuleCustom& WithAllowedAdditionalAnalyses(AllowedAdditionalAnalysesT&& value) { SetAllowedAdditionalAnalyses(std::forward<AllowedAdditionalAnalysesT>(value)); return *this;}
    template<typename AllowedAdditionalAnalysesT = Aws::String>
    ConfiguredTableAssociationAnalysisRuleCustom& AddAllowedAdditionalAnalyses(AllowedAdditionalAnalysesT&& value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses.emplace_back(std::forward<AllowedAdditionalAnalysesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_allowedResultReceivers;
    bool m_allowedResultReceiversHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedAdditionalAnalyses;
    bool m_allowedAdditionalAnalysesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
