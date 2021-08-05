﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-incidents/model/NotificationTargetItem.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Basic details used in creating a response plan. The response plan is then
   * used to create an incident record.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/IncidentTemplate">AWS
   * API Reference</a></p>
   */
  class AWS_SSMINCIDENTS_API IncidentTemplate
  {
  public:
    IncidentTemplate();
    IncidentTemplate(Aws::Utils::Json::JsonView jsonValue);
    IncidentTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Used to stop Incident Manager from creating multiple incident records for the
     * same incident. </p>
     */
    inline const Aws::String& GetDedupeString() const{ return m_dedupeString; }

    /**
     * <p>Used to stop Incident Manager from creating multiple incident records for the
     * same incident. </p>
     */
    inline bool DedupeStringHasBeenSet() const { return m_dedupeStringHasBeenSet; }

    /**
     * <p>Used to stop Incident Manager from creating multiple incident records for the
     * same incident. </p>
     */
    inline void SetDedupeString(const Aws::String& value) { m_dedupeStringHasBeenSet = true; m_dedupeString = value; }

    /**
     * <p>Used to stop Incident Manager from creating multiple incident records for the
     * same incident. </p>
     */
    inline void SetDedupeString(Aws::String&& value) { m_dedupeStringHasBeenSet = true; m_dedupeString = std::move(value); }

    /**
     * <p>Used to stop Incident Manager from creating multiple incident records for the
     * same incident. </p>
     */
    inline void SetDedupeString(const char* value) { m_dedupeStringHasBeenSet = true; m_dedupeString.assign(value); }

    /**
     * <p>Used to stop Incident Manager from creating multiple incident records for the
     * same incident. </p>
     */
    inline IncidentTemplate& WithDedupeString(const Aws::String& value) { SetDedupeString(value); return *this;}

    /**
     * <p>Used to stop Incident Manager from creating multiple incident records for the
     * same incident. </p>
     */
    inline IncidentTemplate& WithDedupeString(Aws::String&& value) { SetDedupeString(std::move(value)); return *this;}

    /**
     * <p>Used to stop Incident Manager from creating multiple incident records for the
     * same incident. </p>
     */
    inline IncidentTemplate& WithDedupeString(const char* value) { SetDedupeString(value); return *this;}


    /**
     * <p>The impact of the incident on your customers and applications. </p>
     */
    inline int GetImpact() const{ return m_impact; }

    /**
     * <p>The impact of the incident on your customers and applications. </p>
     */
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }

    /**
     * <p>The impact of the incident on your customers and applications. </p>
     */
    inline void SetImpact(int value) { m_impactHasBeenSet = true; m_impact = value; }

    /**
     * <p>The impact of the incident on your customers and applications. </p>
     */
    inline IncidentTemplate& WithImpact(int value) { SetImpact(value); return *this;}


    /**
     * <p>The SNS targets that are notified when updates are made to an incident.</p>
     */
    inline const Aws::Vector<NotificationTargetItem>& GetNotificationTargets() const{ return m_notificationTargets; }

    /**
     * <p>The SNS targets that are notified when updates are made to an incident.</p>
     */
    inline bool NotificationTargetsHasBeenSet() const { return m_notificationTargetsHasBeenSet; }

    /**
     * <p>The SNS targets that are notified when updates are made to an incident.</p>
     */
    inline void SetNotificationTargets(const Aws::Vector<NotificationTargetItem>& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets = value; }

    /**
     * <p>The SNS targets that are notified when updates are made to an incident.</p>
     */
    inline void SetNotificationTargets(Aws::Vector<NotificationTargetItem>&& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets = std::move(value); }

    /**
     * <p>The SNS targets that are notified when updates are made to an incident.</p>
     */
    inline IncidentTemplate& WithNotificationTargets(const Aws::Vector<NotificationTargetItem>& value) { SetNotificationTargets(value); return *this;}

    /**
     * <p>The SNS targets that are notified when updates are made to an incident.</p>
     */
    inline IncidentTemplate& WithNotificationTargets(Aws::Vector<NotificationTargetItem>&& value) { SetNotificationTargets(std::move(value)); return *this;}

    /**
     * <p>The SNS targets that are notified when updates are made to an incident.</p>
     */
    inline IncidentTemplate& AddNotificationTargets(const NotificationTargetItem& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets.push_back(value); return *this; }

    /**
     * <p>The SNS targets that are notified when updates are made to an incident.</p>
     */
    inline IncidentTemplate& AddNotificationTargets(NotificationTargetItem&& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets.push_back(std::move(value)); return *this; }


    /**
     * <p>The summary of the incident. The summary is a brief synopsis of what
     * occurred, what's currently happening, and context.</p>
     */
    inline const Aws::String& GetSummary() const{ return m_summary; }

    /**
     * <p>The summary of the incident. The summary is a brief synopsis of what
     * occurred, what's currently happening, and context.</p>
     */
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }

    /**
     * <p>The summary of the incident. The summary is a brief synopsis of what
     * occurred, what's currently happening, and context.</p>
     */
    inline void SetSummary(const Aws::String& value) { m_summaryHasBeenSet = true; m_summary = value; }

    /**
     * <p>The summary of the incident. The summary is a brief synopsis of what
     * occurred, what's currently happening, and context.</p>
     */
    inline void SetSummary(Aws::String&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }

    /**
     * <p>The summary of the incident. The summary is a brief synopsis of what
     * occurred, what's currently happening, and context.</p>
     */
    inline void SetSummary(const char* value) { m_summaryHasBeenSet = true; m_summary.assign(value); }

    /**
     * <p>The summary of the incident. The summary is a brief synopsis of what
     * occurred, what's currently happening, and context.</p>
     */
    inline IncidentTemplate& WithSummary(const Aws::String& value) { SetSummary(value); return *this;}

    /**
     * <p>The summary of the incident. The summary is a brief synopsis of what
     * occurred, what's currently happening, and context.</p>
     */
    inline IncidentTemplate& WithSummary(Aws::String&& value) { SetSummary(std::move(value)); return *this;}

    /**
     * <p>The summary of the incident. The summary is a brief synopsis of what
     * occurred, what's currently happening, and context.</p>
     */
    inline IncidentTemplate& WithSummary(const char* value) { SetSummary(value); return *this;}


    /**
     * <p>The title of the incident. </p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the incident. </p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the incident. </p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the incident. </p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the incident. </p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the incident. </p>
     */
    inline IncidentTemplate& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the incident. </p>
     */
    inline IncidentTemplate& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the incident. </p>
     */
    inline IncidentTemplate& WithTitle(const char* value) { SetTitle(value); return *this;}

  private:

    Aws::String m_dedupeString;
    bool m_dedupeStringHasBeenSet;

    int m_impact;
    bool m_impactHasBeenSet;

    Aws::Vector<NotificationTargetItem> m_notificationTargets;
    bool m_notificationTargetsHasBeenSet;

    Aws::String m_summary;
    bool m_summaryHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
