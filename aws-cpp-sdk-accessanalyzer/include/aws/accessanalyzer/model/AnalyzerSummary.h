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


    /**
     * <p>The ARN of the analyzer.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the analyzer.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the analyzer.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the analyzer.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the analyzer.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the analyzer.</p>
     */
    inline AnalyzerSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the analyzer.</p>
     */
    inline AnalyzerSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the analyzer.</p>
     */
    inline AnalyzerSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the analyzer.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the analyzer.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the analyzer.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the analyzer.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the analyzer.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the analyzer.</p>
     */
    inline AnalyzerSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the analyzer.</p>
     */
    inline AnalyzerSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the analyzer.</p>
     */
    inline AnalyzerSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of analyzer, which corresponds to the zone of trust chosen for the
     * analyzer.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>The type of analyzer, which corresponds to the zone of trust chosen for the
     * analyzer.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of analyzer, which corresponds to the zone of trust chosen for the
     * analyzer.</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of analyzer, which corresponds to the zone of trust chosen for the
     * analyzer.</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of analyzer, which corresponds to the zone of trust chosen for the
     * analyzer.</p>
     */
    inline AnalyzerSummary& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>The type of analyzer, which corresponds to the zone of trust chosen for the
     * analyzer.</p>
     */
    inline AnalyzerSummary& WithType(Type&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A timestamp for the time at which the analyzer was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>A timestamp for the time at which the analyzer was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>A timestamp for the time at which the analyzer was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>A timestamp for the time at which the analyzer was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>A timestamp for the time at which the analyzer was created.</p>
     */
    inline AnalyzerSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>A timestamp for the time at which the analyzer was created.</p>
     */
    inline AnalyzerSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The resource that was most recently analyzed by the analyzer.</p>
     */
    inline const Aws::String& GetLastResourceAnalyzed() const{ return m_lastResourceAnalyzed; }

    /**
     * <p>The resource that was most recently analyzed by the analyzer.</p>
     */
    inline bool LastResourceAnalyzedHasBeenSet() const { return m_lastResourceAnalyzedHasBeenSet; }

    /**
     * <p>The resource that was most recently analyzed by the analyzer.</p>
     */
    inline void SetLastResourceAnalyzed(const Aws::String& value) { m_lastResourceAnalyzedHasBeenSet = true; m_lastResourceAnalyzed = value; }

    /**
     * <p>The resource that was most recently analyzed by the analyzer.</p>
     */
    inline void SetLastResourceAnalyzed(Aws::String&& value) { m_lastResourceAnalyzedHasBeenSet = true; m_lastResourceAnalyzed = std::move(value); }

    /**
     * <p>The resource that was most recently analyzed by the analyzer.</p>
     */
    inline void SetLastResourceAnalyzed(const char* value) { m_lastResourceAnalyzedHasBeenSet = true; m_lastResourceAnalyzed.assign(value); }

    /**
     * <p>The resource that was most recently analyzed by the analyzer.</p>
     */
    inline AnalyzerSummary& WithLastResourceAnalyzed(const Aws::String& value) { SetLastResourceAnalyzed(value); return *this;}

    /**
     * <p>The resource that was most recently analyzed by the analyzer.</p>
     */
    inline AnalyzerSummary& WithLastResourceAnalyzed(Aws::String&& value) { SetLastResourceAnalyzed(std::move(value)); return *this;}

    /**
     * <p>The resource that was most recently analyzed by the analyzer.</p>
     */
    inline AnalyzerSummary& WithLastResourceAnalyzed(const char* value) { SetLastResourceAnalyzed(value); return *this;}


    /**
     * <p>The time at which the most recently analyzed resource was analyzed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastResourceAnalyzedAt() const{ return m_lastResourceAnalyzedAt; }

    /**
     * <p>The time at which the most recently analyzed resource was analyzed.</p>
     */
    inline bool LastResourceAnalyzedAtHasBeenSet() const { return m_lastResourceAnalyzedAtHasBeenSet; }

    /**
     * <p>The time at which the most recently analyzed resource was analyzed.</p>
     */
    inline void SetLastResourceAnalyzedAt(const Aws::Utils::DateTime& value) { m_lastResourceAnalyzedAtHasBeenSet = true; m_lastResourceAnalyzedAt = value; }

    /**
     * <p>The time at which the most recently analyzed resource was analyzed.</p>
     */
    inline void SetLastResourceAnalyzedAt(Aws::Utils::DateTime&& value) { m_lastResourceAnalyzedAtHasBeenSet = true; m_lastResourceAnalyzedAt = std::move(value); }

    /**
     * <p>The time at which the most recently analyzed resource was analyzed.</p>
     */
    inline AnalyzerSummary& WithLastResourceAnalyzedAt(const Aws::Utils::DateTime& value) { SetLastResourceAnalyzedAt(value); return *this;}

    /**
     * <p>The time at which the most recently analyzed resource was analyzed.</p>
     */
    inline AnalyzerSummary& WithLastResourceAnalyzedAt(Aws::Utils::DateTime&& value) { SetLastResourceAnalyzedAt(std::move(value)); return *this;}


    /**
     * <p>The tags added to the analyzer.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags added to the analyzer.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags added to the analyzer.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags added to the analyzer.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags added to the analyzer.</p>
     */
    inline AnalyzerSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags added to the analyzer.</p>
     */
    inline AnalyzerSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags added to the analyzer.</p>
     */
    inline AnalyzerSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags added to the analyzer.</p>
     */
    inline AnalyzerSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags added to the analyzer.</p>
     */
    inline AnalyzerSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags added to the analyzer.</p>
     */
    inline AnalyzerSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags added to the analyzer.</p>
     */
    inline AnalyzerSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags added to the analyzer.</p>
     */
    inline AnalyzerSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags added to the analyzer.</p>
     */
    inline AnalyzerSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


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

    /**
     * <p>The status of the analyzer. An <code>Active</code> analyzer successfully
     * monitors supported resources and generates new findings. The analyzer is
     * <code>Disabled</code> when a user action, such as removing trusted access for
     * Identity and Access Management Access Analyzer from Organizations, causes the
     * analyzer to stop generating new findings. The status is <code>Creating</code>
     * when the analyzer creation is in progress and <code>Failed</code> when the
     * analyzer creation has failed. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the analyzer. An <code>Active</code> analyzer successfully
     * monitors supported resources and generates new findings. The analyzer is
     * <code>Disabled</code> when a user action, such as removing trusted access for
     * Identity and Access Management Access Analyzer from Organizations, causes the
     * analyzer to stop generating new findings. The status is <code>Creating</code>
     * when the analyzer creation is in progress and <code>Failed</code> when the
     * analyzer creation has failed. </p>
     */
    inline void SetStatus(const AnalyzerStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the analyzer. An <code>Active</code> analyzer successfully
     * monitors supported resources and generates new findings. The analyzer is
     * <code>Disabled</code> when a user action, such as removing trusted access for
     * Identity and Access Management Access Analyzer from Organizations, causes the
     * analyzer to stop generating new findings. The status is <code>Creating</code>
     * when the analyzer creation is in progress and <code>Failed</code> when the
     * analyzer creation has failed. </p>
     */
    inline void SetStatus(AnalyzerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the analyzer. An <code>Active</code> analyzer successfully
     * monitors supported resources and generates new findings. The analyzer is
     * <code>Disabled</code> when a user action, such as removing trusted access for
     * Identity and Access Management Access Analyzer from Organizations, causes the
     * analyzer to stop generating new findings. The status is <code>Creating</code>
     * when the analyzer creation is in progress and <code>Failed</code> when the
     * analyzer creation has failed. </p>
     */
    inline AnalyzerSummary& WithStatus(const AnalyzerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the analyzer. An <code>Active</code> analyzer successfully
     * monitors supported resources and generates new findings. The analyzer is
     * <code>Disabled</code> when a user action, such as removing trusted access for
     * Identity and Access Management Access Analyzer from Organizations, causes the
     * analyzer to stop generating new findings. The status is <code>Creating</code>
     * when the analyzer creation is in progress and <code>Failed</code> when the
     * analyzer creation has failed. </p>
     */
    inline AnalyzerSummary& WithStatus(AnalyzerStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The <code>statusReason</code> provides more details about the current status
     * of the analyzer. For example, if the creation for the analyzer fails, a
     * <code>Failed</code> status is returned. For an analyzer with organization as the
     * type, this failure can be due to an issue with creating the service-linked roles
     * required in the member accounts of the Amazon Web Services organization.</p>
     */
    inline const StatusReason& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The <code>statusReason</code> provides more details about the current status
     * of the analyzer. For example, if the creation for the analyzer fails, a
     * <code>Failed</code> status is returned. For an analyzer with organization as the
     * type, this failure can be due to an issue with creating the service-linked roles
     * required in the member accounts of the Amazon Web Services organization.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The <code>statusReason</code> provides more details about the current status
     * of the analyzer. For example, if the creation for the analyzer fails, a
     * <code>Failed</code> status is returned. For an analyzer with organization as the
     * type, this failure can be due to an issue with creating the service-linked roles
     * required in the member accounts of the Amazon Web Services organization.</p>
     */
    inline void SetStatusReason(const StatusReason& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The <code>statusReason</code> provides more details about the current status
     * of the analyzer. For example, if the creation for the analyzer fails, a
     * <code>Failed</code> status is returned. For an analyzer with organization as the
     * type, this failure can be due to an issue with creating the service-linked roles
     * required in the member accounts of the Amazon Web Services organization.</p>
     */
    inline void SetStatusReason(StatusReason&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The <code>statusReason</code> provides more details about the current status
     * of the analyzer. For example, if the creation for the analyzer fails, a
     * <code>Failed</code> status is returned. For an analyzer with organization as the
     * type, this failure can be due to an issue with creating the service-linked roles
     * required in the member accounts of the Amazon Web Services organization.</p>
     */
    inline AnalyzerSummary& WithStatusReason(const StatusReason& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The <code>statusReason</code> provides more details about the current status
     * of the analyzer. For example, if the creation for the analyzer fails, a
     * <code>Failed</code> status is returned. For an analyzer with organization as the
     * type, this failure can be due to an issue with creating the service-linked roles
     * required in the member accounts of the Amazon Web Services organization.</p>
     */
    inline AnalyzerSummary& WithStatusReason(StatusReason&& value) { SetStatusReason(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
