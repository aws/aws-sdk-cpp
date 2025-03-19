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
   * <p>Controls on the analysis specifications that can be run on a configured
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConsolidatedPolicyCustom">AWS
   * API Reference</a></p>
   */
  class ConsolidatedPolicyCustom
  {
  public:
    AWS_CLEANROOMS_API ConsolidatedPolicyCustom() = default;
    AWS_CLEANROOMS_API ConsolidatedPolicyCustom(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConsolidatedPolicyCustom& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The allowed analyses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAnalyses() const { return m_allowedAnalyses; }
    inline bool AllowedAnalysesHasBeenSet() const { return m_allowedAnalysesHasBeenSet; }
    template<typename AllowedAnalysesT = Aws::Vector<Aws::String>>
    void SetAllowedAnalyses(AllowedAnalysesT&& value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses = std::forward<AllowedAnalysesT>(value); }
    template<typename AllowedAnalysesT = Aws::Vector<Aws::String>>
    ConsolidatedPolicyCustom& WithAllowedAnalyses(AllowedAnalysesT&& value) { SetAllowedAnalyses(std::forward<AllowedAnalysesT>(value)); return *this;}
    template<typename AllowedAnalysesT = Aws::String>
    ConsolidatedPolicyCustom& AddAllowedAnalyses(AllowedAnalysesT&& value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses.emplace_back(std::forward<AllowedAnalysesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The allowed analysis providers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAnalysisProviders() const { return m_allowedAnalysisProviders; }
    inline bool AllowedAnalysisProvidersHasBeenSet() const { return m_allowedAnalysisProvidersHasBeenSet; }
    template<typename AllowedAnalysisProvidersT = Aws::Vector<Aws::String>>
    void SetAllowedAnalysisProviders(AllowedAnalysisProvidersT&& value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders = std::forward<AllowedAnalysisProvidersT>(value); }
    template<typename AllowedAnalysisProvidersT = Aws::Vector<Aws::String>>
    ConsolidatedPolicyCustom& WithAllowedAnalysisProviders(AllowedAnalysisProvidersT&& value) { SetAllowedAnalysisProviders(std::forward<AllowedAnalysisProvidersT>(value)); return *this;}
    template<typename AllowedAnalysisProvidersT = Aws::String>
    ConsolidatedPolicyCustom& AddAllowedAnalysisProviders(AllowedAnalysisProvidersT&& value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders.emplace_back(std::forward<AllowedAnalysisProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Additional analyses for the consolidated policy.</p>
     */
    inline AdditionalAnalyses GetAdditionalAnalyses() const { return m_additionalAnalyses; }
    inline bool AdditionalAnalysesHasBeenSet() const { return m_additionalAnalysesHasBeenSet; }
    inline void SetAdditionalAnalyses(AdditionalAnalyses value) { m_additionalAnalysesHasBeenSet = true; m_additionalAnalyses = value; }
    inline ConsolidatedPolicyCustom& WithAdditionalAnalyses(AdditionalAnalyses value) { SetAdditionalAnalyses(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Disallowed output columns</p>
     */
    inline const Aws::Vector<Aws::String>& GetDisallowedOutputColumns() const { return m_disallowedOutputColumns; }
    inline bool DisallowedOutputColumnsHasBeenSet() const { return m_disallowedOutputColumnsHasBeenSet; }
    template<typename DisallowedOutputColumnsT = Aws::Vector<Aws::String>>
    void SetDisallowedOutputColumns(DisallowedOutputColumnsT&& value) { m_disallowedOutputColumnsHasBeenSet = true; m_disallowedOutputColumns = std::forward<DisallowedOutputColumnsT>(value); }
    template<typename DisallowedOutputColumnsT = Aws::Vector<Aws::String>>
    ConsolidatedPolicyCustom& WithDisallowedOutputColumns(DisallowedOutputColumnsT&& value) { SetDisallowedOutputColumns(std::forward<DisallowedOutputColumnsT>(value)); return *this;}
    template<typename DisallowedOutputColumnsT = Aws::String>
    ConsolidatedPolicyCustom& AddDisallowedOutputColumns(DisallowedOutputColumnsT&& value) { m_disallowedOutputColumnsHasBeenSet = true; m_disallowedOutputColumns.emplace_back(std::forward<DisallowedOutputColumnsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const DifferentialPrivacyConfiguration& GetDifferentialPrivacy() const { return m_differentialPrivacy; }
    inline bool DifferentialPrivacyHasBeenSet() const { return m_differentialPrivacyHasBeenSet; }
    template<typename DifferentialPrivacyT = DifferentialPrivacyConfiguration>
    void SetDifferentialPrivacy(DifferentialPrivacyT&& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = std::forward<DifferentialPrivacyT>(value); }
    template<typename DifferentialPrivacyT = DifferentialPrivacyConfiguration>
    ConsolidatedPolicyCustom& WithDifferentialPrivacy(DifferentialPrivacyT&& value) { SetDifferentialPrivacy(std::forward<DifferentialPrivacyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The allowed result receivers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedResultReceivers() const { return m_allowedResultReceivers; }
    inline bool AllowedResultReceiversHasBeenSet() const { return m_allowedResultReceiversHasBeenSet; }
    template<typename AllowedResultReceiversT = Aws::Vector<Aws::String>>
    void SetAllowedResultReceivers(AllowedResultReceiversT&& value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers = std::forward<AllowedResultReceiversT>(value); }
    template<typename AllowedResultReceiversT = Aws::Vector<Aws::String>>
    ConsolidatedPolicyCustom& WithAllowedResultReceivers(AllowedResultReceiversT&& value) { SetAllowedResultReceivers(std::forward<AllowedResultReceiversT>(value)); return *this;}
    template<typename AllowedResultReceiversT = Aws::String>
    ConsolidatedPolicyCustom& AddAllowedResultReceivers(AllowedResultReceiversT&& value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers.emplace_back(std::forward<AllowedResultReceiversT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The additional analyses allowed by the consolidated policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAdditionalAnalyses() const { return m_allowedAdditionalAnalyses; }
    inline bool AllowedAdditionalAnalysesHasBeenSet() const { return m_allowedAdditionalAnalysesHasBeenSet; }
    template<typename AllowedAdditionalAnalysesT = Aws::Vector<Aws::String>>
    void SetAllowedAdditionalAnalyses(AllowedAdditionalAnalysesT&& value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses = std::forward<AllowedAdditionalAnalysesT>(value); }
    template<typename AllowedAdditionalAnalysesT = Aws::Vector<Aws::String>>
    ConsolidatedPolicyCustom& WithAllowedAdditionalAnalyses(AllowedAdditionalAnalysesT&& value) { SetAllowedAdditionalAnalyses(std::forward<AllowedAdditionalAnalysesT>(value)); return *this;}
    template<typename AllowedAdditionalAnalysesT = Aws::String>
    ConsolidatedPolicyCustom& AddAllowedAdditionalAnalyses(AllowedAdditionalAnalysesT&& value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses.emplace_back(std::forward<AllowedAdditionalAnalysesT>(value)); return *this; }
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

    Aws::Vector<Aws::String> m_allowedResultReceivers;
    bool m_allowedResultReceiversHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedAdditionalAnalyses;
    bool m_allowedAdditionalAnalysesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
