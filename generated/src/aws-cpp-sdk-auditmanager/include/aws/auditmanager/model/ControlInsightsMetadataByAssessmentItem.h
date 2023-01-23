/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/EvidenceInsights.h>
#include <aws/core/utils/DateTime.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p>A summary of the latest analytics data for a specific control in a specific
   * active assessment.</p> <p>Control insights are grouped by control domain, and
   * ranked by the highest total count of non-compliant evidence. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ControlInsightsMetadataByAssessmentItem">AWS
   * API Reference</a></p>
   */
  class ControlInsightsMetadataByAssessmentItem
  {
  public:
    AWS_AUDITMANAGER_API ControlInsightsMetadataByAssessmentItem();
    AWS_AUDITMANAGER_API ControlInsightsMetadataByAssessmentItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API ControlInsightsMetadataByAssessmentItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the assessment control. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the assessment control. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the assessment control. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the assessment control. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the assessment control. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the assessment control. </p>
     */
    inline ControlInsightsMetadataByAssessmentItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the assessment control. </p>
     */
    inline ControlInsightsMetadataByAssessmentItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the assessment control. </p>
     */
    inline ControlInsightsMetadataByAssessmentItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The unique identifier for the assessment control. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the assessment control. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the assessment control. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the assessment control. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the assessment control. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the assessment control. </p>
     */
    inline ControlInsightsMetadataByAssessmentItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the assessment control. </p>
     */
    inline ControlInsightsMetadataByAssessmentItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the assessment control. </p>
     */
    inline ControlInsightsMetadataByAssessmentItem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A breakdown of the compliance check status for the evidence that’s associated
     * with the assessment control. </p>
     */
    inline const EvidenceInsights& GetEvidenceInsights() const{ return m_evidenceInsights; }

    /**
     * <p>A breakdown of the compliance check status for the evidence that’s associated
     * with the assessment control. </p>
     */
    inline bool EvidenceInsightsHasBeenSet() const { return m_evidenceInsightsHasBeenSet; }

    /**
     * <p>A breakdown of the compliance check status for the evidence that’s associated
     * with the assessment control. </p>
     */
    inline void SetEvidenceInsights(const EvidenceInsights& value) { m_evidenceInsightsHasBeenSet = true; m_evidenceInsights = value; }

    /**
     * <p>A breakdown of the compliance check status for the evidence that’s associated
     * with the assessment control. </p>
     */
    inline void SetEvidenceInsights(EvidenceInsights&& value) { m_evidenceInsightsHasBeenSet = true; m_evidenceInsights = std::move(value); }

    /**
     * <p>A breakdown of the compliance check status for the evidence that’s associated
     * with the assessment control. </p>
     */
    inline ControlInsightsMetadataByAssessmentItem& WithEvidenceInsights(const EvidenceInsights& value) { SetEvidenceInsights(value); return *this;}

    /**
     * <p>A breakdown of the compliance check status for the evidence that’s associated
     * with the assessment control. </p>
     */
    inline ControlInsightsMetadataByAssessmentItem& WithEvidenceInsights(EvidenceInsights&& value) { SetEvidenceInsights(std::move(value)); return *this;}


    /**
     * <p>The name of the control set that the assessment control belongs to. </p>
     */
    inline const Aws::String& GetControlSetName() const{ return m_controlSetName; }

    /**
     * <p>The name of the control set that the assessment control belongs to. </p>
     */
    inline bool ControlSetNameHasBeenSet() const { return m_controlSetNameHasBeenSet; }

    /**
     * <p>The name of the control set that the assessment control belongs to. </p>
     */
    inline void SetControlSetName(const Aws::String& value) { m_controlSetNameHasBeenSet = true; m_controlSetName = value; }

    /**
     * <p>The name of the control set that the assessment control belongs to. </p>
     */
    inline void SetControlSetName(Aws::String&& value) { m_controlSetNameHasBeenSet = true; m_controlSetName = std::move(value); }

    /**
     * <p>The name of the control set that the assessment control belongs to. </p>
     */
    inline void SetControlSetName(const char* value) { m_controlSetNameHasBeenSet = true; m_controlSetName.assign(value); }

    /**
     * <p>The name of the control set that the assessment control belongs to. </p>
     */
    inline ControlInsightsMetadataByAssessmentItem& WithControlSetName(const Aws::String& value) { SetControlSetName(value); return *this;}

    /**
     * <p>The name of the control set that the assessment control belongs to. </p>
     */
    inline ControlInsightsMetadataByAssessmentItem& WithControlSetName(Aws::String&& value) { SetControlSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the control set that the assessment control belongs to. </p>
     */
    inline ControlInsightsMetadataByAssessmentItem& WithControlSetName(const char* value) { SetControlSetName(value); return *this;}


    /**
     * <p>The time when the assessment control insights were last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The time when the assessment control insights were last updated. </p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>The time when the assessment control insights were last updated. </p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The time when the assessment control insights were last updated. </p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The time when the assessment control insights were last updated. </p>
     */
    inline ControlInsightsMetadataByAssessmentItem& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The time when the assessment control insights were last updated. </p>
     */
    inline ControlInsightsMetadataByAssessmentItem& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    EvidenceInsights m_evidenceInsights;
    bool m_evidenceInsightsHasBeenSet = false;

    Aws::String m_controlSetName;
    bool m_controlSetNameHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
