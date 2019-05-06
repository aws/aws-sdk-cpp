/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/EventSeverity.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Request to retrieve a list of events for an environment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEventsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeEventsRequest : public ElasticBeanstalkRequest
  {
  public:
    DescribeEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEvents"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those associated with this application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those associated with this application.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those associated with this application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those associated with this application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those associated with this application.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those associated with this application.</p>
     */
    inline DescribeEventsRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those associated with this application.</p>
     */
    inline DescribeEventsRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those associated with this application.</p>
     */
    inline DescribeEventsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this application version.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this application version.</p>
     */
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this application version.</p>
     */
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this application version.</p>
     */
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::move(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this application version.</p>
     */
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this application version.</p>
     */
    inline DescribeEventsRequest& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this application version.</p>
     */
    inline DescribeEventsRequest& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this application version.</p>
     */
    inline DescribeEventsRequest& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}


    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that are associated with this environment configuration.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that are associated with this environment configuration.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that are associated with this environment configuration.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that are associated with this environment configuration.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that are associated with this environment configuration.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that are associated with this environment configuration.</p>
     */
    inline DescribeEventsRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that are associated with this environment configuration.</p>
     */
    inline DescribeEventsRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that are associated with this environment configuration.</p>
     */
    inline DescribeEventsRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this environment.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this environment.</p>
     */
    inline DescribeEventsRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this environment.</p>
     */
    inline DescribeEventsRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this environment.</p>
     */
    inline DescribeEventsRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this environment.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this environment.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this environment.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this environment.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this environment.</p>
     */
    inline DescribeEventsRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this environment.</p>
     */
    inline DescribeEventsRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this environment.</p>
     */
    inline DescribeEventsRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>The ARN of the version of the custom platform.</p>
     */
    inline const Aws::String& GetPlatformArn() const{ return m_platformArn; }

    /**
     * <p>The ARN of the version of the custom platform.</p>
     */
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }

    /**
     * <p>The ARN of the version of the custom platform.</p>
     */
    inline void SetPlatformArn(const Aws::String& value) { m_platformArnHasBeenSet = true; m_platformArn = value; }

    /**
     * <p>The ARN of the version of the custom platform.</p>
     */
    inline void SetPlatformArn(Aws::String&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::move(value); }

    /**
     * <p>The ARN of the version of the custom platform.</p>
     */
    inline void SetPlatformArn(const char* value) { m_platformArnHasBeenSet = true; m_platformArn.assign(value); }

    /**
     * <p>The ARN of the version of the custom platform.</p>
     */
    inline DescribeEventsRequest& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}

    /**
     * <p>The ARN of the version of the custom platform.</p>
     */
    inline DescribeEventsRequest& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the version of the custom platform.</p>
     */
    inline DescribeEventsRequest& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}


    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the described events to include
     * only those associated with this request ID.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the described events to include
     * only those associated with this request ID.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the described events to include
     * only those associated with this request ID.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the described events to include
     * only those associated with this request ID.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the described events to include
     * only those associated with this request ID.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the described events to include
     * only those associated with this request ID.</p>
     */
    inline DescribeEventsRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the described events to include
     * only those associated with this request ID.</p>
     */
    inline DescribeEventsRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the described events to include
     * only those associated with this request ID.</p>
     */
    inline DescribeEventsRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>If specified, limits the events returned from this call to include only those
     * with the specified severity or higher.</p>
     */
    inline const EventSeverity& GetSeverity() const{ return m_severity; }

    /**
     * <p>If specified, limits the events returned from this call to include only those
     * with the specified severity or higher.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>If specified, limits the events returned from this call to include only those
     * with the specified severity or higher.</p>
     */
    inline void SetSeverity(const EventSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>If specified, limits the events returned from this call to include only those
     * with the specified severity or higher.</p>
     */
    inline void SetSeverity(EventSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>If specified, limits the events returned from this call to include only those
     * with the specified severity or higher.</p>
     */
    inline DescribeEventsRequest& WithSeverity(const EventSeverity& value) { SetSeverity(value); return *this;}

    /**
     * <p>If specified, limits the events returned from this call to include only those
     * with the specified severity or higher.</p>
     */
    inline DescribeEventsRequest& WithSeverity(EventSeverity&& value) { SetSeverity(std::move(value)); return *this;}


    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that occur on or after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that occur on or after this time.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that occur on or after this time.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that occur on or after this time.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that occur on or after this time.</p>
     */
    inline DescribeEventsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that occur on or after this time.</p>
     */
    inline DescribeEventsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that occur up to, but not including, the <code>EndTime</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that occur up to, but not including, the <code>EndTime</code>. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that occur up to, but not including, the <code>EndTime</code>. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that occur up to, but not including, the <code>EndTime</code>. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that occur up to, but not including, the <code>EndTime</code>. </p>
     */
    inline DescribeEventsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that occur up to, but not including, the <code>EndTime</code>. </p>
     */
    inline DescribeEventsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>Specifies the maximum number of events that can be returned, beginning with
     * the most recent event.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>Specifies the maximum number of events that can be returned, beginning with
     * the most recent event.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>Specifies the maximum number of events that can be returned, beginning with
     * the most recent event.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>Specifies the maximum number of events that can be returned, beginning with
     * the most recent event.</p>
     */
    inline DescribeEventsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>Pagination token. If specified, the events return the next batch of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token. If specified, the events return the next batch of
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Pagination token. If specified, the events return the next batch of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Pagination token. If specified, the events return the next batch of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Pagination token. If specified, the events return the next batch of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Pagination token. If specified, the events return the next batch of
     * results.</p>
     */
    inline DescribeEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token. If specified, the events return the next batch of
     * results.</p>
     */
    inline DescribeEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token. If specified, the events return the next batch of
     * results.</p>
     */
    inline DescribeEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet;

    EventSeverity m_severity;
    bool m_severityHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
