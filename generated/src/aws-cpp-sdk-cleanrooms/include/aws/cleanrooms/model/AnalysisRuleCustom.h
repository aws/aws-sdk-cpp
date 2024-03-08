/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>The analysis templates that are allowed by the custom analysis rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAnalyses() const{ return m_allowedAnalyses; }

    /**
     * <p>The analysis templates that are allowed by the custom analysis rule.</p>
     */
    inline bool AllowedAnalysesHasBeenSet() const { return m_allowedAnalysesHasBeenSet; }

    /**
     * <p>The analysis templates that are allowed by the custom analysis rule.</p>
     */
    inline void SetAllowedAnalyses(const Aws::Vector<Aws::String>& value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses = value; }

    /**
     * <p>The analysis templates that are allowed by the custom analysis rule.</p>
     */
    inline void SetAllowedAnalyses(Aws::Vector<Aws::String>&& value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses = std::move(value); }

    /**
     * <p>The analysis templates that are allowed by the custom analysis rule.</p>
     */
    inline AnalysisRuleCustom& WithAllowedAnalyses(const Aws::Vector<Aws::String>& value) { SetAllowedAnalyses(value); return *this;}

    /**
     * <p>The analysis templates that are allowed by the custom analysis rule.</p>
     */
    inline AnalysisRuleCustom& WithAllowedAnalyses(Aws::Vector<Aws::String>&& value) { SetAllowedAnalyses(std::move(value)); return *this;}

    /**
     * <p>The analysis templates that are allowed by the custom analysis rule.</p>
     */
    inline AnalysisRuleCustom& AddAllowedAnalyses(const Aws::String& value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses.push_back(value); return *this; }

    /**
     * <p>The analysis templates that are allowed by the custom analysis rule.</p>
     */
    inline AnalysisRuleCustom& AddAllowedAnalyses(Aws::String&& value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses.push_back(std::move(value)); return *this; }

    /**
     * <p>The analysis templates that are allowed by the custom analysis rule.</p>
     */
    inline AnalysisRuleCustom& AddAllowedAnalyses(const char* value) { m_allowedAnalysesHasBeenSet = true; m_allowedAnalyses.push_back(value); return *this; }


    /**
     * <p>The Amazon Web Services accounts that are allowed to query by the custom
     * analysis rule. Required when <code>allowedAnalyses</code> is
     * <code>ANY_QUERY</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAnalysisProviders() const{ return m_allowedAnalysisProviders; }

    /**
     * <p>The Amazon Web Services accounts that are allowed to query by the custom
     * analysis rule. Required when <code>allowedAnalyses</code> is
     * <code>ANY_QUERY</code>.</p>
     */
    inline bool AllowedAnalysisProvidersHasBeenSet() const { return m_allowedAnalysisProvidersHasBeenSet; }

    /**
     * <p>The Amazon Web Services accounts that are allowed to query by the custom
     * analysis rule. Required when <code>allowedAnalyses</code> is
     * <code>ANY_QUERY</code>.</p>
     */
    inline void SetAllowedAnalysisProviders(const Aws::Vector<Aws::String>& value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders = value; }

    /**
     * <p>The Amazon Web Services accounts that are allowed to query by the custom
     * analysis rule. Required when <code>allowedAnalyses</code> is
     * <code>ANY_QUERY</code>.</p>
     */
    inline void SetAllowedAnalysisProviders(Aws::Vector<Aws::String>&& value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders = std::move(value); }

    /**
     * <p>The Amazon Web Services accounts that are allowed to query by the custom
     * analysis rule. Required when <code>allowedAnalyses</code> is
     * <code>ANY_QUERY</code>.</p>
     */
    inline AnalysisRuleCustom& WithAllowedAnalysisProviders(const Aws::Vector<Aws::String>& value) { SetAllowedAnalysisProviders(value); return *this;}

    /**
     * <p>The Amazon Web Services accounts that are allowed to query by the custom
     * analysis rule. Required when <code>allowedAnalyses</code> is
     * <code>ANY_QUERY</code>.</p>
     */
    inline AnalysisRuleCustom& WithAllowedAnalysisProviders(Aws::Vector<Aws::String>&& value) { SetAllowedAnalysisProviders(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services accounts that are allowed to query by the custom
     * analysis rule. Required when <code>allowedAnalyses</code> is
     * <code>ANY_QUERY</code>.</p>
     */
    inline AnalysisRuleCustom& AddAllowedAnalysisProviders(const Aws::String& value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders.push_back(value); return *this; }

    /**
     * <p>The Amazon Web Services accounts that are allowed to query by the custom
     * analysis rule. Required when <code>allowedAnalyses</code> is
     * <code>ANY_QUERY</code>.</p>
     */
    inline AnalysisRuleCustom& AddAllowedAnalysisProviders(Aws::String&& value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Web Services accounts that are allowed to query by the custom
     * analysis rule. Required when <code>allowedAnalyses</code> is
     * <code>ANY_QUERY</code>.</p>
     */
    inline AnalysisRuleCustom& AddAllowedAnalysisProviders(const char* value) { m_allowedAnalysisProvidersHasBeenSet = true; m_allowedAnalysisProviders.push_back(value); return *this; }


    /**
     * <p>The differential privacy configuration.</p>
     */
    inline const DifferentialPrivacyConfiguration& GetDifferentialPrivacy() const{ return m_differentialPrivacy; }

    /**
     * <p>The differential privacy configuration.</p>
     */
    inline bool DifferentialPrivacyHasBeenSet() const { return m_differentialPrivacyHasBeenSet; }

    /**
     * <p>The differential privacy configuration.</p>
     */
    inline void SetDifferentialPrivacy(const DifferentialPrivacyConfiguration& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = value; }

    /**
     * <p>The differential privacy configuration.</p>
     */
    inline void SetDifferentialPrivacy(DifferentialPrivacyConfiguration&& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = std::move(value); }

    /**
     * <p>The differential privacy configuration.</p>
     */
    inline AnalysisRuleCustom& WithDifferentialPrivacy(const DifferentialPrivacyConfiguration& value) { SetDifferentialPrivacy(value); return *this;}

    /**
     * <p>The differential privacy configuration.</p>
     */
    inline AnalysisRuleCustom& WithDifferentialPrivacy(DifferentialPrivacyConfiguration&& value) { SetDifferentialPrivacy(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_allowedAnalyses;
    bool m_allowedAnalysesHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedAnalysisProviders;
    bool m_allowedAnalysisProvidersHasBeenSet = false;

    DifferentialPrivacyConfiguration m_differentialPrivacy;
    bool m_differentialPrivacyHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
