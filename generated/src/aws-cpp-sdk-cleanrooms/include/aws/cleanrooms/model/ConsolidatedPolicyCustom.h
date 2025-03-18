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
    AWS_CLEANROOMS_API ConsolidatedPolicyCustom();
    AWS_CLEANROOMS_API ConsolidatedPolicyCustom(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConsolidatedPolicyCustom& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The allowed analyses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAnalyses() const{ return m_allowedAnalyses; }
    inline bool AllowedAnalysesHasBeenSet() const { return m_allowedAnalysesHasBeenSet; }
    inline void SetAllowedAnalyses(const Aws::Vector<Aws::String>& value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses = value; }
    inline void SetAllowedAnalyses(Aws::Vector<Aws::String>&& value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses = std::move(value); }
    inline ConsolidatedPolicyCustom& WithAllowedAnalyses(const Aws::Vector<Aws::String>& value) { SetAllowedAnalyses(value); return *this;}
    inline ConsolidatedPolicyCustom& WithAllowedAnalyses(Aws::Vector<Aws::String>&& value) { SetAllowedAnalyses(std::move(value)); return *this;}
    inline ConsolidatedPolicyCustom& AddAllowedAnalyses(const Aws::String& value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses.push_back(value); return *this; }
    inline ConsolidatedPolicyCustom& AddAllowedAnalyses(Aws::String&& value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses.push_back(std::move(value)); return *this; }
    inline ConsolidatedPolicyCustom& AddAllowedAnalyses(const char* value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The allowed analysis providers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAnalysisProviders() const{ return m_allowedAnalysisProviders; }
    inline bool AllowedAnalysisProvidersHasBeenSet() const { return m_allowedAnalysisProvidersHasBeenSet; }
    inline void SetAllowedAnalysisProviders(const Aws::Vector<Aws::String>& value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders = value; }
    inline void SetAllowedAnalysisProviders(Aws::Vector<Aws::String>&& value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders = std::move(value); }
    inline ConsolidatedPolicyCustom& WithAllowedAnalysisProviders(const Aws::Vector<Aws::String>& value) { SetAllowedAnalysisProviders(value); return *this;}
    inline ConsolidatedPolicyCustom& WithAllowedAnalysisProviders(Aws::Vector<Aws::String>&& value) { SetAllowedAnalysisProviders(std::move(value)); return *this;}
    inline ConsolidatedPolicyCustom& AddAllowedAnalysisProviders(const Aws::String& value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders.push_back(value); return *this; }
    inline ConsolidatedPolicyCustom& AddAllowedAnalysisProviders(Aws::String&& value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders.push_back(std::move(value)); return *this; }
    inline ConsolidatedPolicyCustom& AddAllowedAnalysisProviders(const char* value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Additional analyses for the consolidated policy.</p>
     */
    inline const AdditionalAnalyses& GetAdditionalAnalyses() const{ return m_additionalAnalyses; }
    inline bool AdditionalAnalysesHasBeenSet() const { return m_additionalAnalysesHasBeenSet; }
    inline void SetAdditionalAnalyses(const AdditionalAnalyses& value) { m_additionalAnalysesHasBeenSet = true; m_additionalAnalyses = value; }
    inline void SetAdditionalAnalyses(AdditionalAnalyses&& value) { m_additionalAnalysesHasBeenSet = true; m_additionalAnalyses = std::move(value); }
    inline ConsolidatedPolicyCustom& WithAdditionalAnalyses(const AdditionalAnalyses& value) { SetAdditionalAnalyses(value); return *this;}
    inline ConsolidatedPolicyCustom& WithAdditionalAnalyses(AdditionalAnalyses&& value) { SetAdditionalAnalyses(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Disallowed output columns</p>
     */
    inline const Aws::Vector<Aws::String>& GetDisallowedOutputColumns() const{ return m_disallowedOutputColumns; }
    inline bool DisallowedOutputColumnsHasBeenSet() const { return m_disallowedOutputColumnsHasBeenSet; }
    inline void SetDisallowedOutputColumns(const Aws::Vector<Aws::String>& value) { m_disallowedOutputColumnsHasBeenSet = true; m_disallowedOutputColumns = value; }
    inline void SetDisallowedOutputColumns(Aws::Vector<Aws::String>&& value) { m_disallowedOutputColumnsHasBeenSet = true; m_disallowedOutputColumns = std::move(value); }
    inline ConsolidatedPolicyCustom& WithDisallowedOutputColumns(const Aws::Vector<Aws::String>& value) { SetDisallowedOutputColumns(value); return *this;}
    inline ConsolidatedPolicyCustom& WithDisallowedOutputColumns(Aws::Vector<Aws::String>&& value) { SetDisallowedOutputColumns(std::move(value)); return *this;}
    inline ConsolidatedPolicyCustom& AddDisallowedOutputColumns(const Aws::String& value) { m_disallowedOutputColumnsHasBeenSet = true; m_disallowedOutputColumns.push_back(value); return *this; }
    inline ConsolidatedPolicyCustom& AddDisallowedOutputColumns(Aws::String&& value) { m_disallowedOutputColumnsHasBeenSet = true; m_disallowedOutputColumns.push_back(std::move(value)); return *this; }
    inline ConsolidatedPolicyCustom& AddDisallowedOutputColumns(const char* value) { m_disallowedOutputColumnsHasBeenSet = true; m_disallowedOutputColumns.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const DifferentialPrivacyConfiguration& GetDifferentialPrivacy() const{ return m_differentialPrivacy; }
    inline bool DifferentialPrivacyHasBeenSet() const { return m_differentialPrivacyHasBeenSet; }
    inline void SetDifferentialPrivacy(const DifferentialPrivacyConfiguration& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = value; }
    inline void SetDifferentialPrivacy(DifferentialPrivacyConfiguration&& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = std::move(value); }
    inline ConsolidatedPolicyCustom& WithDifferentialPrivacy(const DifferentialPrivacyConfiguration& value) { SetDifferentialPrivacy(value); return *this;}
    inline ConsolidatedPolicyCustom& WithDifferentialPrivacy(DifferentialPrivacyConfiguration&& value) { SetDifferentialPrivacy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The allowed result receivers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedResultReceivers() const{ return m_allowedResultReceivers; }
    inline bool AllowedResultReceiversHasBeenSet() const { return m_allowedResultReceiversHasBeenSet; }
    inline void SetAllowedResultReceivers(const Aws::Vector<Aws::String>& value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers = value; }
    inline void SetAllowedResultReceivers(Aws::Vector<Aws::String>&& value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers = std::move(value); }
    inline ConsolidatedPolicyCustom& WithAllowedResultReceivers(const Aws::Vector<Aws::String>& value) { SetAllowedResultReceivers(value); return *this;}
    inline ConsolidatedPolicyCustom& WithAllowedResultReceivers(Aws::Vector<Aws::String>&& value) { SetAllowedResultReceivers(std::move(value)); return *this;}
    inline ConsolidatedPolicyCustom& AddAllowedResultReceivers(const Aws::String& value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers.push_back(value); return *this; }
    inline ConsolidatedPolicyCustom& AddAllowedResultReceivers(Aws::String&& value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers.push_back(std::move(value)); return *this; }
    inline ConsolidatedPolicyCustom& AddAllowedResultReceivers(const char* value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The additional analyses allowed by the consolidated policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAdditionalAnalyses() const{ return m_allowedAdditionalAnalyses; }
    inline bool AllowedAdditionalAnalysesHasBeenSet() const { return m_allowedAdditionalAnalysesHasBeenSet; }
    inline void SetAllowedAdditionalAnalyses(const Aws::Vector<Aws::String>& value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses = value; }
    inline void SetAllowedAdditionalAnalyses(Aws::Vector<Aws::String>&& value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses = std::move(value); }
    inline ConsolidatedPolicyCustom& WithAllowedAdditionalAnalyses(const Aws::Vector<Aws::String>& value) { SetAllowedAdditionalAnalyses(value); return *this;}
    inline ConsolidatedPolicyCustom& WithAllowedAdditionalAnalyses(Aws::Vector<Aws::String>&& value) { SetAllowedAdditionalAnalyses(std::move(value)); return *this;}
    inline ConsolidatedPolicyCustom& AddAllowedAdditionalAnalyses(const Aws::String& value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses.push_back(value); return *this; }
    inline ConsolidatedPolicyCustom& AddAllowedAdditionalAnalyses(Aws::String&& value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses.push_back(std::move(value)); return *this; }
    inline ConsolidatedPolicyCustom& AddAllowedAdditionalAnalyses(const char* value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_allowedAnalyses;
    bool m_allowedAnalysesHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedAnalysisProviders;
    bool m_allowedAnalysisProvidersHasBeenSet = false;

    AdditionalAnalyses m_additionalAnalyses;
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
