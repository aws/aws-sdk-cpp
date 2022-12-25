/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/ServiceId.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/InsightState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/xray/model/RequestImpactStatistics.h>
#include <aws/xray/model/InsightCategory.h>
#include <aws/xray/model/AnomalousService.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>When fault rates go outside of the expected range, X-Ray creates an insight.
   * Insights tracks emergent issues within your applications.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/Insight">AWS API
   * Reference</a></p>
   */
  class Insight
  {
  public:
    AWS_XRAY_API Insight();
    AWS_XRAY_API Insight(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Insight& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The insights unique identifier. </p>
     */
    inline const Aws::String& GetInsightId() const{ return m_insightId; }

    /**
     * <p>The insights unique identifier. </p>
     */
    inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }

    /**
     * <p>The insights unique identifier. </p>
     */
    inline void SetInsightId(const Aws::String& value) { m_insightIdHasBeenSet = true; m_insightId = value; }

    /**
     * <p>The insights unique identifier. </p>
     */
    inline void SetInsightId(Aws::String&& value) { m_insightIdHasBeenSet = true; m_insightId = std::move(value); }

    /**
     * <p>The insights unique identifier. </p>
     */
    inline void SetInsightId(const char* value) { m_insightIdHasBeenSet = true; m_insightId.assign(value); }

    /**
     * <p>The insights unique identifier. </p>
     */
    inline Insight& WithInsightId(const Aws::String& value) { SetInsightId(value); return *this;}

    /**
     * <p>The insights unique identifier. </p>
     */
    inline Insight& WithInsightId(Aws::String&& value) { SetInsightId(std::move(value)); return *this;}

    /**
     * <p>The insights unique identifier. </p>
     */
    inline Insight& WithInsightId(const char* value) { SetInsightId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the group that the insight belongs to.</p>
     */
    inline const Aws::String& GetGroupARN() const{ return m_groupARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the group that the insight belongs to.</p>
     */
    inline bool GroupARNHasBeenSet() const { return m_groupARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the group that the insight belongs to.</p>
     */
    inline void SetGroupARN(const Aws::String& value) { m_groupARNHasBeenSet = true; m_groupARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the group that the insight belongs to.</p>
     */
    inline void SetGroupARN(Aws::String&& value) { m_groupARNHasBeenSet = true; m_groupARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the group that the insight belongs to.</p>
     */
    inline void SetGroupARN(const char* value) { m_groupARNHasBeenSet = true; m_groupARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the group that the insight belongs to.</p>
     */
    inline Insight& WithGroupARN(const Aws::String& value) { SetGroupARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the group that the insight belongs to.</p>
     */
    inline Insight& WithGroupARN(Aws::String&& value) { SetGroupARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the group that the insight belongs to.</p>
     */
    inline Insight& WithGroupARN(const char* value) { SetGroupARN(value); return *this;}


    /**
     * <p>The name of the group that the insight belongs to.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the group that the insight belongs to.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the group that the insight belongs to.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the group that the insight belongs to.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the group that the insight belongs to.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the group that the insight belongs to.</p>
     */
    inline Insight& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the group that the insight belongs to.</p>
     */
    inline Insight& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the group that the insight belongs to.</p>
     */
    inline Insight& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    
    inline const ServiceId& GetRootCauseServiceId() const{ return m_rootCauseServiceId; }

    
    inline bool RootCauseServiceIdHasBeenSet() const { return m_rootCauseServiceIdHasBeenSet; }

    
    inline void SetRootCauseServiceId(const ServiceId& value) { m_rootCauseServiceIdHasBeenSet = true; m_rootCauseServiceId = value; }

    
    inline void SetRootCauseServiceId(ServiceId&& value) { m_rootCauseServiceIdHasBeenSet = true; m_rootCauseServiceId = std::move(value); }

    
    inline Insight& WithRootCauseServiceId(const ServiceId& value) { SetRootCauseServiceId(value); return *this;}

    
    inline Insight& WithRootCauseServiceId(ServiceId&& value) { SetRootCauseServiceId(std::move(value)); return *this;}


    /**
     * <p>The categories that label and describe the type of insight.</p>
     */
    inline const Aws::Vector<InsightCategory>& GetCategories() const{ return m_categories; }

    /**
     * <p>The categories that label and describe the type of insight.</p>
     */
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }

    /**
     * <p>The categories that label and describe the type of insight.</p>
     */
    inline void SetCategories(const Aws::Vector<InsightCategory>& value) { m_categoriesHasBeenSet = true; m_categories = value; }

    /**
     * <p>The categories that label and describe the type of insight.</p>
     */
    inline void SetCategories(Aws::Vector<InsightCategory>&& value) { m_categoriesHasBeenSet = true; m_categories = std::move(value); }

    /**
     * <p>The categories that label and describe the type of insight.</p>
     */
    inline Insight& WithCategories(const Aws::Vector<InsightCategory>& value) { SetCategories(value); return *this;}

    /**
     * <p>The categories that label and describe the type of insight.</p>
     */
    inline Insight& WithCategories(Aws::Vector<InsightCategory>&& value) { SetCategories(std::move(value)); return *this;}

    /**
     * <p>The categories that label and describe the type of insight.</p>
     */
    inline Insight& AddCategories(const InsightCategory& value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }

    /**
     * <p>The categories that label and describe the type of insight.</p>
     */
    inline Insight& AddCategories(InsightCategory&& value) { m_categoriesHasBeenSet = true; m_categories.push_back(std::move(value)); return *this; }


    /**
     * <p>The current state of the insight.</p>
     */
    inline const InsightState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the insight.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the insight.</p>
     */
    inline void SetState(const InsightState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the insight.</p>
     */
    inline void SetState(InsightState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the insight.</p>
     */
    inline Insight& WithState(const InsightState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the insight.</p>
     */
    inline Insight& WithState(InsightState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The time, in Unix seconds, at which the insight began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time, in Unix seconds, at which the insight began.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time, in Unix seconds, at which the insight began.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time, in Unix seconds, at which the insight began.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time, in Unix seconds, at which the insight began.</p>
     */
    inline Insight& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time, in Unix seconds, at which the insight began.</p>
     */
    inline Insight& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time, in Unix seconds, at which the insight ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time, in Unix seconds, at which the insight ended.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time, in Unix seconds, at which the insight ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time, in Unix seconds, at which the insight ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time, in Unix seconds, at which the insight ended.</p>
     */
    inline Insight& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time, in Unix seconds, at which the insight ended.</p>
     */
    inline Insight& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>A brief description of the insight.</p>
     */
    inline const Aws::String& GetSummary() const{ return m_summary; }

    /**
     * <p>A brief description of the insight.</p>
     */
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }

    /**
     * <p>A brief description of the insight.</p>
     */
    inline void SetSummary(const Aws::String& value) { m_summaryHasBeenSet = true; m_summary = value; }

    /**
     * <p>A brief description of the insight.</p>
     */
    inline void SetSummary(Aws::String&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }

    /**
     * <p>A brief description of the insight.</p>
     */
    inline void SetSummary(const char* value) { m_summaryHasBeenSet = true; m_summary.assign(value); }

    /**
     * <p>A brief description of the insight.</p>
     */
    inline Insight& WithSummary(const Aws::String& value) { SetSummary(value); return *this;}

    /**
     * <p>A brief description of the insight.</p>
     */
    inline Insight& WithSummary(Aws::String&& value) { SetSummary(std::move(value)); return *this;}

    /**
     * <p>A brief description of the insight.</p>
     */
    inline Insight& WithSummary(const char* value) { SetSummary(value); return *this;}


    /**
     * <p>The impact statistics of the client side service. This includes the number of
     * requests to the client service and whether the requests were faults or okay.</p>
     */
    inline const RequestImpactStatistics& GetClientRequestImpactStatistics() const{ return m_clientRequestImpactStatistics; }

    /**
     * <p>The impact statistics of the client side service. This includes the number of
     * requests to the client service and whether the requests were faults or okay.</p>
     */
    inline bool ClientRequestImpactStatisticsHasBeenSet() const { return m_clientRequestImpactStatisticsHasBeenSet; }

    /**
     * <p>The impact statistics of the client side service. This includes the number of
     * requests to the client service and whether the requests were faults or okay.</p>
     */
    inline void SetClientRequestImpactStatistics(const RequestImpactStatistics& value) { m_clientRequestImpactStatisticsHasBeenSet = true; m_clientRequestImpactStatistics = value; }

    /**
     * <p>The impact statistics of the client side service. This includes the number of
     * requests to the client service and whether the requests were faults or okay.</p>
     */
    inline void SetClientRequestImpactStatistics(RequestImpactStatistics&& value) { m_clientRequestImpactStatisticsHasBeenSet = true; m_clientRequestImpactStatistics = std::move(value); }

    /**
     * <p>The impact statistics of the client side service. This includes the number of
     * requests to the client service and whether the requests were faults or okay.</p>
     */
    inline Insight& WithClientRequestImpactStatistics(const RequestImpactStatistics& value) { SetClientRequestImpactStatistics(value); return *this;}

    /**
     * <p>The impact statistics of the client side service. This includes the number of
     * requests to the client service and whether the requests were faults or okay.</p>
     */
    inline Insight& WithClientRequestImpactStatistics(RequestImpactStatistics&& value) { SetClientRequestImpactStatistics(std::move(value)); return *this;}


    /**
     * <p>The impact statistics of the root cause service. This includes the number of
     * requests to the client service and whether the requests were faults or okay.</p>
     */
    inline const RequestImpactStatistics& GetRootCauseServiceRequestImpactStatistics() const{ return m_rootCauseServiceRequestImpactStatistics; }

    /**
     * <p>The impact statistics of the root cause service. This includes the number of
     * requests to the client service and whether the requests were faults or okay.</p>
     */
    inline bool RootCauseServiceRequestImpactStatisticsHasBeenSet() const { return m_rootCauseServiceRequestImpactStatisticsHasBeenSet; }

    /**
     * <p>The impact statistics of the root cause service. This includes the number of
     * requests to the client service and whether the requests were faults or okay.</p>
     */
    inline void SetRootCauseServiceRequestImpactStatistics(const RequestImpactStatistics& value) { m_rootCauseServiceRequestImpactStatisticsHasBeenSet = true; m_rootCauseServiceRequestImpactStatistics = value; }

    /**
     * <p>The impact statistics of the root cause service. This includes the number of
     * requests to the client service and whether the requests were faults or okay.</p>
     */
    inline void SetRootCauseServiceRequestImpactStatistics(RequestImpactStatistics&& value) { m_rootCauseServiceRequestImpactStatisticsHasBeenSet = true; m_rootCauseServiceRequestImpactStatistics = std::move(value); }

    /**
     * <p>The impact statistics of the root cause service. This includes the number of
     * requests to the client service and whether the requests were faults or okay.</p>
     */
    inline Insight& WithRootCauseServiceRequestImpactStatistics(const RequestImpactStatistics& value) { SetRootCauseServiceRequestImpactStatistics(value); return *this;}

    /**
     * <p>The impact statistics of the root cause service. This includes the number of
     * requests to the client service and whether the requests were faults or okay.</p>
     */
    inline Insight& WithRootCauseServiceRequestImpactStatistics(RequestImpactStatistics&& value) { SetRootCauseServiceRequestImpactStatistics(std::move(value)); return *this;}


    /**
     * <p>The service within the insight that is most impacted by the incident.</p>
     */
    inline const Aws::Vector<AnomalousService>& GetTopAnomalousServices() const{ return m_topAnomalousServices; }

    /**
     * <p>The service within the insight that is most impacted by the incident.</p>
     */
    inline bool TopAnomalousServicesHasBeenSet() const { return m_topAnomalousServicesHasBeenSet; }

    /**
     * <p>The service within the insight that is most impacted by the incident.</p>
     */
    inline void SetTopAnomalousServices(const Aws::Vector<AnomalousService>& value) { m_topAnomalousServicesHasBeenSet = true; m_topAnomalousServices = value; }

    /**
     * <p>The service within the insight that is most impacted by the incident.</p>
     */
    inline void SetTopAnomalousServices(Aws::Vector<AnomalousService>&& value) { m_topAnomalousServicesHasBeenSet = true; m_topAnomalousServices = std::move(value); }

    /**
     * <p>The service within the insight that is most impacted by the incident.</p>
     */
    inline Insight& WithTopAnomalousServices(const Aws::Vector<AnomalousService>& value) { SetTopAnomalousServices(value); return *this;}

    /**
     * <p>The service within the insight that is most impacted by the incident.</p>
     */
    inline Insight& WithTopAnomalousServices(Aws::Vector<AnomalousService>&& value) { SetTopAnomalousServices(std::move(value)); return *this;}

    /**
     * <p>The service within the insight that is most impacted by the incident.</p>
     */
    inline Insight& AddTopAnomalousServices(const AnomalousService& value) { m_topAnomalousServicesHasBeenSet = true; m_topAnomalousServices.push_back(value); return *this; }

    /**
     * <p>The service within the insight that is most impacted by the incident.</p>
     */
    inline Insight& AddTopAnomalousServices(AnomalousService&& value) { m_topAnomalousServicesHasBeenSet = true; m_topAnomalousServices.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_insightId;
    bool m_insightIdHasBeenSet = false;

    Aws::String m_groupARN;
    bool m_groupARNHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    ServiceId m_rootCauseServiceId;
    bool m_rootCauseServiceIdHasBeenSet = false;

    Aws::Vector<InsightCategory> m_categories;
    bool m_categoriesHasBeenSet = false;

    InsightState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_summary;
    bool m_summaryHasBeenSet = false;

    RequestImpactStatistics m_clientRequestImpactStatistics;
    bool m_clientRequestImpactStatisticsHasBeenSet = false;

    RequestImpactStatistics m_rootCauseServiceRequestImpactStatistics;
    bool m_rootCauseServiceRequestImpactStatisticsHasBeenSet = false;

    Aws::Vector<AnomalousService> m_topAnomalousServices;
    bool m_topAnomalousServicesHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
