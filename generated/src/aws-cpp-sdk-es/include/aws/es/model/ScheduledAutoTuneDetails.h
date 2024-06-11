﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/es/model/ScheduledAutoTuneActionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/ScheduledAutoTuneSeverityType.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Specifies details of the scheduled Auto-Tune action. See the <a
   * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
   * target="_blank">Developer Guide</a> for more information. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ScheduledAutoTuneDetails">AWS
   * API Reference</a></p>
   */
  class ScheduledAutoTuneDetails
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ScheduledAutoTuneDetails();
    AWS_ELASTICSEARCHSERVICE_API ScheduledAutoTuneDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API ScheduledAutoTuneDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies timestamp for the Auto-Tune action scheduled for the domain. </p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }
    inline ScheduledAutoTuneDetails& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}
    inline ScheduledAutoTuneDetails& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies Auto-Tune action type. Valid values are JVM_HEAP_SIZE_TUNING and
     * JVM_YOUNG_GEN_TUNING. </p>
     */
    inline const ScheduledAutoTuneActionType& GetActionType() const{ return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    inline void SetActionType(const ScheduledAutoTuneActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline void SetActionType(ScheduledAutoTuneActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }
    inline ScheduledAutoTuneDetails& WithActionType(const ScheduledAutoTuneActionType& value) { SetActionType(value); return *this;}
    inline ScheduledAutoTuneDetails& WithActionType(ScheduledAutoTuneActionType&& value) { SetActionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies Auto-Tune action description. </p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }
    inline ScheduledAutoTuneDetails& WithAction(const Aws::String& value) { SetAction(value); return *this;}
    inline ScheduledAutoTuneDetails& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}
    inline ScheduledAutoTuneDetails& WithAction(const char* value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies Auto-Tune action severity. Valid values are LOW, MEDIUM and HIGH.
     * </p>
     */
    inline const ScheduledAutoTuneSeverityType& GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(const ScheduledAutoTuneSeverityType& value) { m_severityHasBeenSet = true; m_severity = value; }
    inline void SetSeverity(ScheduledAutoTuneSeverityType&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }
    inline ScheduledAutoTuneDetails& WithSeverity(const ScheduledAutoTuneSeverityType& value) { SetSeverity(value); return *this;}
    inline ScheduledAutoTuneDetails& WithSeverity(ScheduledAutoTuneSeverityType&& value) { SetSeverity(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_date;
    bool m_dateHasBeenSet = false;

    ScheduledAutoTuneActionType m_actionType;
    bool m_actionTypeHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    ScheduledAutoTuneSeverityType m_severity;
    bool m_severityHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
