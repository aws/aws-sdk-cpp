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
    AWS_ACCESSANALYZER_API AnalyzerSummary();
    AWS_ACCESSANALYZER_API AnalyzerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API AnalyzerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the analyzer.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AnalyzerSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AnalyzerSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AnalyzerSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the analyzer.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AnalyzerSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AnalyzerSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AnalyzerSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of analyzer, which corresponds to the zone of trust chosen for the
     * analyzer.</p>
     */
    inline const Type& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline AnalyzerSummary& WithType(const Type& value) { SetType(value); return *this;}
    inline AnalyzerSummary& WithType(Type&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp for the time at which the analyzer was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline AnalyzerSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline AnalyzerSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource that was most recently analyzed by the analyzer.</p>
     */
    inline const Aws::String& GetLastResourceAnalyzed() const{ return m_lastResourceAnalyzed; }
    inline bool LastResourceAnalyzedHasBeenSet() const { return m_lastResourceAnalyzedHasBeenSet; }
    inline void SetLastResourceAnalyzed(const Aws::String& value) { m_lastResourceAnalyzedHasBeenSet = true; m_lastResourceAnalyzed = value; }
    inline void SetLastResourceAnalyzed(Aws::String&& value) { m_lastResourceAnalyzedHasBeenSet = true; m_lastResourceAnalyzed = std::move(value); }
    inline void SetLastResourceAnalyzed(const char* value) { m_lastResourceAnalyzedHasBeenSet = true; m_lastResourceAnalyzed.assign(value); }
    inline AnalyzerSummary& WithLastResourceAnalyzed(const Aws::String& value) { SetLastResourceAnalyzed(value); return *this;}
    inline AnalyzerSummary& WithLastResourceAnalyzed(Aws::String&& value) { SetLastResourceAnalyzed(std::move(value)); return *this;}
    inline AnalyzerSummary& WithLastResourceAnalyzed(const char* value) { SetLastResourceAnalyzed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the most recently analyzed resource was analyzed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastResourceAnalyzedAt() const{ return m_lastResourceAnalyzedAt; }
    inline bool LastResourceAnalyzedAtHasBeenSet() const { return m_lastResourceAnalyzedAtHasBeenSet; }
    inline void SetLastResourceAnalyzedAt(const Aws::Utils::DateTime& value) { m_lastResourceAnalyzedAtHasBeenSet = true; m_lastResourceAnalyzedAt = value; }
    inline void SetLastResourceAnalyzedAt(Aws::Utils::DateTime&& value) { m_lastResourceAnalyzedAtHasBeenSet = true; m_lastResourceAnalyzedAt = std::move(value); }
    inline AnalyzerSummary& WithLastResourceAnalyzedAt(const Aws::Utils::DateTime& value) { SetLastResourceAnalyzedAt(value); return *this;}
    inline AnalyzerSummary& WithLastResourceAnalyzedAt(Aws::Utils::DateTime&& value) { SetLastResourceAnalyzedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags added to the analyzer.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline AnalyzerSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline AnalyzerSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline AnalyzerSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline AnalyzerSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline AnalyzerSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline AnalyzerSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline AnalyzerSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline AnalyzerSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline AnalyzerSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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
    inline const AnalyzerStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AnalyzerStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AnalyzerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AnalyzerSummary& WithStatus(const AnalyzerStatus& value) { SetStatus(value); return *this;}
    inline AnalyzerSummary& WithStatus(AnalyzerStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>statusReason</code> provides more details about the current status
     * of the analyzer. For example, if the creation for the analyzer fails, a
     * <code>Failed</code> status is returned. For an analyzer with organization as the
     * type, this failure can be due to an issue with creating the service-linked roles
     * required in the member accounts of the Amazon Web Services organization.</p>
     */
    inline const StatusReason& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const StatusReason& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(StatusReason&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline AnalyzerSummary& WithStatusReason(const StatusReason& value) { SetStatusReason(value); return *this;}
    inline AnalyzerSummary& WithStatusReason(StatusReason&& value) { SetStatusReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the analyzer is an external access or unused access
     * analyzer.</p>
     */
    inline const AnalyzerConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const AnalyzerConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(AnalyzerConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline AnalyzerSummary& WithConfiguration(const AnalyzerConfiguration& value) { SetConfiguration(value); return *this;}
    inline AnalyzerSummary& WithConfiguration(AnalyzerConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_lastResourceAnalyzed;
    bool m_lastResourceAnalyzedHasBeenSet = false;

    Aws::Utils::DateTime m_lastResourceAnalyzedAt;
    bool m_lastResourceAnalyzedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    AnalyzerStatus m_status;
    bool m_statusHasBeenSet = false;

    StatusReason m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    AnalyzerConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
