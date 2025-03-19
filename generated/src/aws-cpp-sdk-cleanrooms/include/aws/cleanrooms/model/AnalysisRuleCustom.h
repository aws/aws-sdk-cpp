/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/AdditionalAnalyses.h>
#include <aws/cleanrooms/model/DifferentialPrivacyConfiguration.h>
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
   * <p>A type of analysis rule that enables the table owner to approve custom SQL
   * queries on their configured tables. It supports differential
   * privacy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisRuleCustom">AWS
   * API Reference</a></p>
   */
  class AnalysisRuleCustom
  {
  public:
    AWS_CLEANROOMS_API AnalysisRuleCustom() = default;
    AWS_CLEANROOMS_API AnalysisRuleCustom(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisRuleCustom& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the analysis templates that are allowed by the custom analysis
     * rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAnalyses() const { return m_allowedAnalyses; }
    inline bool AllowedAnalysesHasBeenSet() const { return m_allowedAnalysesHasBeenSet; }
    template<typename AllowedAnalysesT = Aws::Vector<Aws::String>>
    void SetAllowedAnalyses(AllowedAnalysesT&& value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses = std::forward<AllowedAnalysesT>(value); }
    template<typename AllowedAnalysesT = Aws::Vector<Aws::String>>
    AnalysisRuleCustom& WithAllowedAnalyses(AllowedAnalysesT&& value) { SetAllowedAnalyses(std::forward<AllowedAnalysesT>(value)); return *this;}
    template<typename AllowedAnalysesT = Aws::String>
    AnalysisRuleCustom& AddAllowedAnalyses(AllowedAnalysesT&& value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses.emplace_back(std::forward<AllowedAnalysesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the Amazon Web Services accounts that are allowed to query by the
     * custom analysis rule. Required when <code>allowedAnalyses</code> is
     * <code>ANY_QUERY</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAnalysisProviders() const { return m_allowedAnalysisProviders; }
    inline bool AllowedAnalysisProvidersHasBeenSet() const { return m_allowedAnalysisProvidersHasBeenSet; }
    template<typename AllowedAnalysisProvidersT = Aws::Vector<Aws::String>>
    void SetAllowedAnalysisProviders(AllowedAnalysisProvidersT&& value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders = std::forward<AllowedAnalysisProvidersT>(value); }
    template<typename AllowedAnalysisProvidersT = Aws::Vector<Aws::String>>
    AnalysisRuleCustom& WithAllowedAnalysisProviders(AllowedAnalysisProvidersT&& value) { SetAllowedAnalysisProviders(std::forward<AllowedAnalysisProvidersT>(value)); return *this;}
    template<typename AllowedAnalysisProvidersT = Aws::String>
    AnalysisRuleCustom& AddAllowedAnalysisProviders(AllowedAnalysisProvidersT&& value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders.emplace_back(std::forward<AllowedAnalysisProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An indicator as to whether additional analyses (such as Clean Rooms ML) can
     * be applied to the output of the direct query.</p>
     */
    inline AdditionalAnalyses GetAdditionalAnalyses() const { return m_additionalAnalyses; }
    inline bool AdditionalAnalysesHasBeenSet() const { return m_additionalAnalysesHasBeenSet; }
    inline void SetAdditionalAnalyses(AdditionalAnalyses value) { m_additionalAnalysesHasBeenSet = true; m_additionalAnalyses = value; }
    inline AnalysisRuleCustom& WithAdditionalAnalyses(AdditionalAnalyses value) { SetAdditionalAnalyses(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of columns that aren't allowed to be shown in the query output.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDisallowedOutputColumns() const { return m_disallowedOutputColumns; }
    inline bool DisallowedOutputColumnsHasBeenSet() const { return m_disallowedOutputColumnsHasBeenSet; }
    template<typename DisallowedOutputColumnsT = Aws::Vector<Aws::String>>
    void SetDisallowedOutputColumns(DisallowedOutputColumnsT&& value) { m_disallowedOutputColumnsHasBeenSet = true; m_disallowedOutputColumns = std::forward<DisallowedOutputColumnsT>(value); }
    template<typename DisallowedOutputColumnsT = Aws::Vector<Aws::String>>
    AnalysisRuleCustom& WithDisallowedOutputColumns(DisallowedOutputColumnsT&& value) { SetDisallowedOutputColumns(std::forward<DisallowedOutputColumnsT>(value)); return *this;}
    template<typename DisallowedOutputColumnsT = Aws::String>
    AnalysisRuleCustom& AddDisallowedOutputColumns(DisallowedOutputColumnsT&& value) { m_disallowedOutputColumnsHasBeenSet = true; m_disallowedOutputColumns.emplace_back(std::forward<DisallowedOutputColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The differential privacy configuration.</p>
     */
    inline const DifferentialPrivacyConfiguration& GetDifferentialPrivacy() const { return m_differentialPrivacy; }
    inline bool DifferentialPrivacyHasBeenSet() const { return m_differentialPrivacyHasBeenSet; }
    template<typename DifferentialPrivacyT = DifferentialPrivacyConfiguration>
    void SetDifferentialPrivacy(DifferentialPrivacyT&& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = std::forward<DifferentialPrivacyT>(value); }
    template<typename DifferentialPrivacyT = DifferentialPrivacyConfiguration>
    AnalysisRuleCustom& WithDifferentialPrivacy(DifferentialPrivacyT&& value) { SetDifferentialPrivacy(std::forward<DifferentialPrivacyT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_allowedAnalyses;
    bool m_allowedAnalysesHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedAnalysisProviders;
    bool m_allowedAnalysisProvidersHasBeenSet = false;

    AdditionalAnalyses m_additionalAnalyses{AdditionalAnalyses::NOT_SET};
    bool m_additionalAnalysesHasBeenSet = false;

    Aws::Vector<Aws::String> m_disallowedOutputColumns;
    bool m_disallowedOutputColumnsHasBeenSet = false;

    DifferentialPrivacyConfiguration m_differentialPrivacy;
    bool m_differentialPrivacyHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
