/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/Type.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/accessanalyzer/model/AnalyzerStatus.h>
#include <aws/accessanalyzer/model/StatusReason.h>
#include <aws/accessanalyzer/model/AnalyzerConfiguration.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains information about the analyzer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/AnalyzerSummary">AWS
   * API Reference</a></p>
   */
  class AnalyzerSummary
  {
  public:
    AWS_ACCESSANALYZER_API AnalyzerSummary() = default;
    AWS_ACCESSANALYZER_API AnalyzerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API AnalyzerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the analyzer.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AnalyzerSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the analyzer.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AnalyzerSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of analyzer, which corresponds to the zone of trust chosen for the
     * analyzer.</p>
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline AnalyzerSummary& WithType(Type value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp for the time at which the analyzer was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AnalyzerSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource that was most recently analyzed by the analyzer.</p>
     */
    inline const Aws::String& GetLastResourceAnalyzed() const { return m_lastResourceAnalyzed; }
    inline bool LastResourceAnalyzedHasBeenSet() const { return m_lastResourceAnalyzedHasBeenSet; }
    template<typename LastResourceAnalyzedT = Aws::String>
    void SetLastResourceAnalyzed(LastResourceAnalyzedT&& value) { m_lastResourceAnalyzedHasBeenSet = true; m_lastResourceAnalyzed = std::forward<LastResourceAnalyzedT>(value); }
    template<typename LastResourceAnalyzedT = Aws::String>
    AnalyzerSummary& WithLastResourceAnalyzed(LastResourceAnalyzedT&& value) { SetLastResourceAnalyzed(std::forward<LastResourceAnalyzedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the most recently analyzed resource was analyzed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastResourceAnalyzedAt() const { return m_lastResourceAnalyzedAt; }
    inline bool LastResourceAnalyzedAtHasBeenSet() const { return m_lastResourceAnalyzedAtHasBeenSet; }
    template<typename LastResourceAnalyzedAtT = Aws::Utils::DateTime>
    void SetLastResourceAnalyzedAt(LastResourceAnalyzedAtT&& value) { m_lastResourceAnalyzedAtHasBeenSet = true; m_lastResourceAnalyzedAt = std::forward<LastResourceAnalyzedAtT>(value); }
    template<typename LastResourceAnalyzedAtT = Aws::Utils::DateTime>
    AnalyzerSummary& WithLastResourceAnalyzedAt(LastResourceAnalyzedAtT&& value) { SetLastResourceAnalyzedAt(std::forward<LastResourceAnalyzedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags added to the analyzer.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    AnalyzerSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    AnalyzerSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the analyzer. An <code>Active</code> analyzer successfully
     * monitors supported resources and generates new findings. The analyzer is
     * <code>Disabled</code> when a user action, such as removing trusted access for
     * Identity and Access Management Access Analyzer from Organizations, causes the
     * analyzer to stop generating new findings. The status is <code>Creating</code>
     * when the analyzer creation is in progress and <code>Failed</code> when the
     * analyzer creation has failed. </p>
     */
    inline AnalyzerStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AnalyzerStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AnalyzerSummary& WithStatus(AnalyzerStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>statusReason</code> provides more details about the current status
     * of the analyzer. For example, if the creation for the analyzer fails, a
     * <code>Failed</code> status is returned. For an analyzer with organization as the
     * type, this failure can be due to an issue with creating the service-linked roles
     * required in the member accounts of the Amazon Web Services organization.</p>
     */
    inline const StatusReason& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = StatusReason>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = StatusReason>
    AnalyzerSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the analyzer is an external access, unused access, or internal
     * access analyzer.</p>
     */
    inline const AnalyzerConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = AnalyzerConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = AnalyzerConfiguration>
    AnalyzerSummary& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Type m_type{Type::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_lastResourceAnalyzed;
    bool m_lastResourceAnalyzedHasBeenSet = false;

    Aws::Utils::DateTime m_lastResourceAnalyzedAt{};
    bool m_lastResourceAnalyzedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    AnalyzerStatus m_status{AnalyzerStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    StatusReason m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    AnalyzerConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
