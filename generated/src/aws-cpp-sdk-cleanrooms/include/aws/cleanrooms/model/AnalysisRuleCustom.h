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
    AWS_CLEANROOMS_API AnalysisRuleCustom();
    AWS_CLEANROOMS_API AnalysisRuleCustom(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisRuleCustom& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the analysis templates that are allowed by the custom analysis
     * rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAnalyses() const{ return m_allowedAnalyses; }
    inline bool AllowedAnalysesHasBeenSet() const { return m_allowedAnalysesHasBeenSet; }
    inline void SetAllowedAnalyses(const Aws::Vector<Aws::String>& value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses = value; }
    inline void SetAllowedAnalyses(Aws::Vector<Aws::String>&& value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses = std::move(value); }
    inline AnalysisRuleCustom& WithAllowedAnalyses(const Aws::Vector<Aws::String>& value) { SetAllowedAnalyses(value); return *this;}
    inline AnalysisRuleCustom& WithAllowedAnalyses(Aws::Vector<Aws::String>&& value) { SetAllowedAnalyses(std::move(value)); return *this;}
    inline AnalysisRuleCustom& AddAllowedAnalyses(const Aws::String& value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses.push_back(value); return *this; }
    inline AnalysisRuleCustom& AddAllowedAnalyses(Aws::String&& value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses.push_back(std::move(value)); return *this; }
    inline AnalysisRuleCustom& AddAllowedAnalyses(const char* value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the Amazon Web Services accounts that are allowed to query by the
     * custom analysis rule. Required when <code>allowedAnalyses</code> is
     * <code>ANY_QUERY</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAnalysisProviders() const{ return m_allowedAnalysisProviders; }
    inline bool AllowedAnalysisProvidersHasBeenSet() const { return m_allowedAnalysisProvidersHasBeenSet; }
    inline void SetAllowedAnalysisProviders(const Aws::Vector<Aws::String>& value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders = value; }
    inline void SetAllowedAnalysisProviders(Aws::Vector<Aws::String>&& value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders = std::move(value); }
    inline AnalysisRuleCustom& WithAllowedAnalysisProviders(const Aws::Vector<Aws::String>& value) { SetAllowedAnalysisProviders(value); return *this;}
    inline AnalysisRuleCustom& WithAllowedAnalysisProviders(Aws::Vector<Aws::String>&& value) { SetAllowedAnalysisProviders(std::move(value)); return *this;}
    inline AnalysisRuleCustom& AddAllowedAnalysisProviders(const Aws::String& value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders.push_back(value); return *this; }
    inline AnalysisRuleCustom& AddAllowedAnalysisProviders(Aws::String&& value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders.push_back(std::move(value)); return *this; }
    inline AnalysisRuleCustom& AddAllowedAnalysisProviders(const char* value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> An indicator as to whether additional analyses (such as Clean Rooms ML) can
     * be applied to the output of the direct query.</p>
     */
    inline const AdditionalAnalyses& GetAdditionalAnalyses() const{ return m_additionalAnalyses; }
    inline bool AdditionalAnalysesHasBeenSet() const { return m_additionalAnalysesHasBeenSet; }
    inline void SetAdditionalAnalyses(const AdditionalAnalyses& value) { m_additionalAnalysesHasBeenSet = true; m_additionalAnalyses = value; }
    inline void SetAdditionalAnalyses(AdditionalAnalyses&& value) { m_additionalAnalysesHasBeenSet = true; m_additionalAnalyses = std::move(value); }
    inline AnalysisRuleCustom& WithAdditionalAnalyses(const AdditionalAnalyses& value) { SetAdditionalAnalyses(value); return *this;}
    inline AnalysisRuleCustom& WithAdditionalAnalyses(AdditionalAnalyses&& value) { SetAdditionalAnalyses(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of columns that aren't allowed to be shown in the query output.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDisallowedOutputColumns() const{ return m_disallowedOutputColumns; }
    inline bool DisallowedOutputColumnsHasBeenSet() const { return m_disallowedOutputColumnsHasBeenSet; }
    inline void SetDisallowedOutputColumns(const Aws::Vector<Aws::String>& value) { m_disallowedOutputColumnsHasBeenSet = true; m_disallowedOutputColumns = value; }
    inline void SetDisallowedOutputColumns(Aws::Vector<Aws::String>&& value) { m_disallowedOutputColumnsHasBeenSet = true; m_disallowedOutputColumns = std::move(value); }
    inline AnalysisRuleCustom& WithDisallowedOutputColumns(const Aws::Vector<Aws::String>& value) { SetDisallowedOutputColumns(value); return *this;}
    inline AnalysisRuleCustom& WithDisallowedOutputColumns(Aws::Vector<Aws::String>&& value) { SetDisallowedOutputColumns(std::move(value)); return *this;}
    inline AnalysisRuleCustom& AddDisallowedOutputColumns(const Aws::String& value) { m_disallowedOutputColumnsHasBeenSet = true; m_disallowedOutputColumns.push_back(value); return *this; }
    inline AnalysisRuleCustom& AddDisallowedOutputColumns(Aws::String&& value) { m_disallowedOutputColumnsHasBeenSet = true; m_disallowedOutputColumns.push_back(std::move(value)); return *this; }
    inline AnalysisRuleCustom& AddDisallowedOutputColumns(const char* value) { m_disallowedOutputColumnsHasBeenSet = true; m_disallowedOutputColumns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The differential privacy configuration.</p>
     */
    inline const DifferentialPrivacyConfiguration& GetDifferentialPrivacy() const{ return m_differentialPrivacy; }
    inline bool DifferentialPrivacyHasBeenSet() const { return m_differentialPrivacyHasBeenSet; }
    inline void SetDifferentialPrivacy(const DifferentialPrivacyConfiguration& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = value; }
    inline void SetDifferentialPrivacy(DifferentialPrivacyConfiguration&& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = std::move(value); }
    inline AnalysisRuleCustom& WithDifferentialPrivacy(const DifferentialPrivacyConfiguration& value) { SetDifferentialPrivacy(value); return *this;}
    inline AnalysisRuleCustom& WithDifferentialPrivacy(DifferentialPrivacyConfiguration&& value) { SetDifferentialPrivacy(std::move(value)); return *this;}
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
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
