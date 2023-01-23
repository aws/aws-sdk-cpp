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
   * <p>A summary of the latest analytics data for a specific control. </p> <p>This
   * data reflects the total counts for the specified control across all active
   * assessments. Control insights are grouped by control domain, and ranked by the
   * highest total count of non-compliant evidence.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ControlInsightsMetadataItem">AWS
   * API Reference</a></p>
   */
  class ControlInsightsMetadataItem
  {
  public:
    AWS_AUDITMANAGER_API ControlInsightsMetadataItem();
    AWS_AUDITMANAGER_API ControlInsightsMetadataItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API ControlInsightsMetadataItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the control. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the control. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the control. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the control. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the control. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the control. </p>
     */
    inline ControlInsightsMetadataItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the control. </p>
     */
    inline ControlInsightsMetadataItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the control. </p>
     */
    inline ControlInsightsMetadataItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The unique identifier for the control. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the control. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the control. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the control. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the control. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the control. </p>
     */
    inline ControlInsightsMetadataItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the control. </p>
     */
    inline ControlInsightsMetadataItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the control. </p>
     */
    inline ControlInsightsMetadataItem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A breakdown of the compliance check status for the evidence that’s associated
     * with the control. </p>
     */
    inline const EvidenceInsights& GetEvidenceInsights() const{ return m_evidenceInsights; }

    /**
     * <p>A breakdown of the compliance check status for the evidence that’s associated
     * with the control. </p>
     */
    inline bool EvidenceInsightsHasBeenSet() const { return m_evidenceInsightsHasBeenSet; }

    /**
     * <p>A breakdown of the compliance check status for the evidence that’s associated
     * with the control. </p>
     */
    inline void SetEvidenceInsights(const EvidenceInsights& value) { m_evidenceInsightsHasBeenSet = true; m_evidenceInsights = value; }

    /**
     * <p>A breakdown of the compliance check status for the evidence that’s associated
     * with the control. </p>
     */
    inline void SetEvidenceInsights(EvidenceInsights&& value) { m_evidenceInsightsHasBeenSet = true; m_evidenceInsights = std::move(value); }

    /**
     * <p>A breakdown of the compliance check status for the evidence that’s associated
     * with the control. </p>
     */
    inline ControlInsightsMetadataItem& WithEvidenceInsights(const EvidenceInsights& value) { SetEvidenceInsights(value); return *this;}

    /**
     * <p>A breakdown of the compliance check status for the evidence that’s associated
     * with the control. </p>
     */
    inline ControlInsightsMetadataItem& WithEvidenceInsights(EvidenceInsights&& value) { SetEvidenceInsights(std::move(value)); return *this;}


    /**
     * <p>The time when the control insights were last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The time when the control insights were last updated. </p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>The time when the control insights were last updated. </p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The time when the control insights were last updated. </p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The time when the control insights were last updated. </p>
     */
    inline ControlInsightsMetadataItem& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The time when the control insights were last updated. </p>
     */
    inline ControlInsightsMetadataItem& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    EvidenceInsights m_evidenceInsights;
    bool m_evidenceInsightsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
