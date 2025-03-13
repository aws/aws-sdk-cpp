/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeEventsRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribeEventsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEvents"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those associated with this application.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    DescribeEventsRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this application version.</p>
     */
    inline const Aws::String& GetVersionLabel() const { return m_versionLabel; }
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }
    template<typename VersionLabelT = Aws::String>
    void SetVersionLabel(VersionLabelT&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::forward<VersionLabelT>(value); }
    template<typename VersionLabelT = Aws::String>
    DescribeEventsRequest& WithVersionLabel(VersionLabelT&& value) { SetVersionLabel(std::forward<VersionLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that are associated with this environment configuration.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    DescribeEventsRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    DescribeEventsRequest& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those associated with this environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const { return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    template<typename EnvironmentNameT = Aws::String>
    void SetEnvironmentName(EnvironmentNameT&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::forward<EnvironmentNameT>(value); }
    template<typename EnvironmentNameT = Aws::String>
    DescribeEventsRequest& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a custom platform version. If specified, AWS Elastic Beanstalk
     * restricts the returned descriptions to those associated with this custom
     * platform version.</p>
     */
    inline const Aws::String& GetPlatformArn() const { return m_platformArn; }
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }
    template<typename PlatformArnT = Aws::String>
    void SetPlatformArn(PlatformArnT&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::forward<PlatformArnT>(value); }
    template<typename PlatformArnT = Aws::String>
    DescribeEventsRequest& WithPlatformArn(PlatformArnT&& value) { SetPlatformArn(std::forward<PlatformArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the described events to include
     * only those associated with this request ID.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEventsRequest& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, limits the events returned from this call to include only those
     * with the specified severity or higher.</p>
     */
    inline EventSeverity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(EventSeverity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline DescribeEventsRequest& WithSeverity(EventSeverity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that occur on or after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    DescribeEventsRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * those that occur up to, but not including, the <code>EndTime</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    DescribeEventsRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of events that can be returned, beginning with
     * the most recent event.</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeEventsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token. If specified, the events return the next batch of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeEventsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    EventSeverity m_severity{EventSeverity::NOT_SET};
    bool m_severityHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
