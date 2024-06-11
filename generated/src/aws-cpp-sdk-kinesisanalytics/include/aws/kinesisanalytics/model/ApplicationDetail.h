/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalytics/model/ApplicationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalytics/model/InputDescription.h>
#include <aws/kinesisanalytics/model/OutputDescription.h>
#include <aws/kinesisanalytics/model/ReferenceDataSourceDescription.h>
#include <aws/kinesisanalytics/model/CloudWatchLoggingOptionDescription.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   *  <p>This documentation is for version 1 of the Amazon Kinesis Data
   * Analytics API, which only supports SQL applications. Version 2 of the API
   * supports SQL and Java applications. For more information about version 2, see <a
   * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
   * API V2 Documentation</a>.</p>  <p>Provides a description of the
   * application, including the application Amazon Resource Name (ARN), status,
   * latest version, and input and output configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/ApplicationDetail">AWS
   * API Reference</a></p>
   */
  class ApplicationDetail
  {
  public:
    AWS_KINESISANALYTICS_API ApplicationDetail();
    AWS_KINESISANALYTICS_API ApplicationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API ApplicationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline ApplicationDetail& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline ApplicationDetail& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline ApplicationDetail& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the application.</p>
     */
    inline const Aws::String& GetApplicationDescription() const{ return m_applicationDescription; }
    inline bool ApplicationDescriptionHasBeenSet() const { return m_applicationDescriptionHasBeenSet; }
    inline void SetApplicationDescription(const Aws::String& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = value; }
    inline void SetApplicationDescription(Aws::String&& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = std::move(value); }
    inline void SetApplicationDescription(const char* value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription.assign(value); }
    inline ApplicationDetail& WithApplicationDescription(const Aws::String& value) { SetApplicationDescription(value); return *this;}
    inline ApplicationDetail& WithApplicationDescription(Aws::String&& value) { SetApplicationDescription(std::move(value)); return *this;}
    inline ApplicationDetail& WithApplicationDescription(const char* value) { SetApplicationDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the application.</p>
     */
    inline const Aws::String& GetApplicationARN() const{ return m_applicationARN; }
    inline bool ApplicationARNHasBeenSet() const { return m_applicationARNHasBeenSet; }
    inline void SetApplicationARN(const Aws::String& value) { m_applicationARNHasBeenSet = true; m_applicationARN = value; }
    inline void SetApplicationARN(Aws::String&& value) { m_applicationARNHasBeenSet = true; m_applicationARN = std::move(value); }
    inline void SetApplicationARN(const char* value) { m_applicationARNHasBeenSet = true; m_applicationARN.assign(value); }
    inline ApplicationDetail& WithApplicationARN(const Aws::String& value) { SetApplicationARN(value); return *this;}
    inline ApplicationDetail& WithApplicationARN(Aws::String&& value) { SetApplicationARN(std::move(value)); return *this;}
    inline ApplicationDetail& WithApplicationARN(const char* value) { SetApplicationARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the application.</p>
     */
    inline const ApplicationStatus& GetApplicationStatus() const{ return m_applicationStatus; }
    inline bool ApplicationStatusHasBeenSet() const { return m_applicationStatusHasBeenSet; }
    inline void SetApplicationStatus(const ApplicationStatus& value) { m_applicationStatusHasBeenSet = true; m_applicationStatus = value; }
    inline void SetApplicationStatus(ApplicationStatus&& value) { m_applicationStatusHasBeenSet = true; m_applicationStatus = std::move(value); }
    inline ApplicationDetail& WithApplicationStatus(const ApplicationStatus& value) { SetApplicationStatus(value); return *this;}
    inline ApplicationDetail& WithApplicationStatus(ApplicationStatus&& value) { SetApplicationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time stamp when the application version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const{ return m_createTimestamp; }
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }
    inline void SetCreateTimestamp(const Aws::Utils::DateTime& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = value; }
    inline void SetCreateTimestamp(Aws::Utils::DateTime&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::move(value); }
    inline ApplicationDetail& WithCreateTimestamp(const Aws::Utils::DateTime& value) { SetCreateTimestamp(value); return *this;}
    inline ApplicationDetail& WithCreateTimestamp(Aws::Utils::DateTime&& value) { SetCreateTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time stamp when the application was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTimestamp() const{ return m_lastUpdateTimestamp; }
    inline bool LastUpdateTimestampHasBeenSet() const { return m_lastUpdateTimestampHasBeenSet; }
    inline void SetLastUpdateTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = value; }
    inline void SetLastUpdateTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = std::move(value); }
    inline ApplicationDetail& WithLastUpdateTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdateTimestamp(value); return *this;}
    inline ApplicationDetail& WithLastUpdateTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdateTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the application input configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
     * Application Input</a>. </p>
     */
    inline const Aws::Vector<InputDescription>& GetInputDescriptions() const{ return m_inputDescriptions; }
    inline bool InputDescriptionsHasBeenSet() const { return m_inputDescriptionsHasBeenSet; }
    inline void SetInputDescriptions(const Aws::Vector<InputDescription>& value) { m_inputDescriptionsHasBeenSet = true; m_inputDescriptions = value; }
    inline void SetInputDescriptions(Aws::Vector<InputDescription>&& value) { m_inputDescriptionsHasBeenSet = true; m_inputDescriptions = std::move(value); }
    inline ApplicationDetail& WithInputDescriptions(const Aws::Vector<InputDescription>& value) { SetInputDescriptions(value); return *this;}
    inline ApplicationDetail& WithInputDescriptions(Aws::Vector<InputDescription>&& value) { SetInputDescriptions(std::move(value)); return *this;}
    inline ApplicationDetail& AddInputDescriptions(const InputDescription& value) { m_inputDescriptionsHasBeenSet = true; m_inputDescriptions.push_back(value); return *this; }
    inline ApplicationDetail& AddInputDescriptions(InputDescription&& value) { m_inputDescriptionsHasBeenSet = true; m_inputDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the application output configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>. </p>
     */
    inline const Aws::Vector<OutputDescription>& GetOutputDescriptions() const{ return m_outputDescriptions; }
    inline bool OutputDescriptionsHasBeenSet() const { return m_outputDescriptionsHasBeenSet; }
    inline void SetOutputDescriptions(const Aws::Vector<OutputDescription>& value) { m_outputDescriptionsHasBeenSet = true; m_outputDescriptions = value; }
    inline void SetOutputDescriptions(Aws::Vector<OutputDescription>&& value) { m_outputDescriptionsHasBeenSet = true; m_outputDescriptions = std::move(value); }
    inline ApplicationDetail& WithOutputDescriptions(const Aws::Vector<OutputDescription>& value) { SetOutputDescriptions(value); return *this;}
    inline ApplicationDetail& WithOutputDescriptions(Aws::Vector<OutputDescription>&& value) { SetOutputDescriptions(std::move(value)); return *this;}
    inline ApplicationDetail& AddOutputDescriptions(const OutputDescription& value) { m_outputDescriptionsHasBeenSet = true; m_outputDescriptions.push_back(value); return *this; }
    inline ApplicationDetail& AddOutputDescriptions(OutputDescription&& value) { m_outputDescriptionsHasBeenSet = true; m_outputDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes reference data sources configured for the application. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
     * Application Input</a>. </p>
     */
    inline const Aws::Vector<ReferenceDataSourceDescription>& GetReferenceDataSourceDescriptions() const{ return m_referenceDataSourceDescriptions; }
    inline bool ReferenceDataSourceDescriptionsHasBeenSet() const { return m_referenceDataSourceDescriptionsHasBeenSet; }
    inline void SetReferenceDataSourceDescriptions(const Aws::Vector<ReferenceDataSourceDescription>& value) { m_referenceDataSourceDescriptionsHasBeenSet = true; m_referenceDataSourceDescriptions = value; }
    inline void SetReferenceDataSourceDescriptions(Aws::Vector<ReferenceDataSourceDescription>&& value) { m_referenceDataSourceDescriptionsHasBeenSet = true; m_referenceDataSourceDescriptions = std::move(value); }
    inline ApplicationDetail& WithReferenceDataSourceDescriptions(const Aws::Vector<ReferenceDataSourceDescription>& value) { SetReferenceDataSourceDescriptions(value); return *this;}
    inline ApplicationDetail& WithReferenceDataSourceDescriptions(Aws::Vector<ReferenceDataSourceDescription>&& value) { SetReferenceDataSourceDescriptions(std::move(value)); return *this;}
    inline ApplicationDetail& AddReferenceDataSourceDescriptions(const ReferenceDataSourceDescription& value) { m_referenceDataSourceDescriptionsHasBeenSet = true; m_referenceDataSourceDescriptions.push_back(value); return *this; }
    inline ApplicationDetail& AddReferenceDataSourceDescriptions(ReferenceDataSourceDescription&& value) { m_referenceDataSourceDescriptionsHasBeenSet = true; m_referenceDataSourceDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the CloudWatch log streams that are configured to receive
     * application messages. For more information about using CloudWatch log streams
     * with Amazon Kinesis Analytics applications, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
     * with Amazon CloudWatch Logs</a>. </p>
     */
    inline const Aws::Vector<CloudWatchLoggingOptionDescription>& GetCloudWatchLoggingOptionDescriptions() const{ return m_cloudWatchLoggingOptionDescriptions; }
    inline bool CloudWatchLoggingOptionDescriptionsHasBeenSet() const { return m_cloudWatchLoggingOptionDescriptionsHasBeenSet; }
    inline void SetCloudWatchLoggingOptionDescriptions(const Aws::Vector<CloudWatchLoggingOptionDescription>& value) { m_cloudWatchLoggingOptionDescriptionsHasBeenSet = true; m_cloudWatchLoggingOptionDescriptions = value; }
    inline void SetCloudWatchLoggingOptionDescriptions(Aws::Vector<CloudWatchLoggingOptionDescription>&& value) { m_cloudWatchLoggingOptionDescriptionsHasBeenSet = true; m_cloudWatchLoggingOptionDescriptions = std::move(value); }
    inline ApplicationDetail& WithCloudWatchLoggingOptionDescriptions(const Aws::Vector<CloudWatchLoggingOptionDescription>& value) { SetCloudWatchLoggingOptionDescriptions(value); return *this;}
    inline ApplicationDetail& WithCloudWatchLoggingOptionDescriptions(Aws::Vector<CloudWatchLoggingOptionDescription>&& value) { SetCloudWatchLoggingOptionDescriptions(std::move(value)); return *this;}
    inline ApplicationDetail& AddCloudWatchLoggingOptionDescriptions(const CloudWatchLoggingOptionDescription& value) { m_cloudWatchLoggingOptionDescriptionsHasBeenSet = true; m_cloudWatchLoggingOptionDescriptions.push_back(value); return *this; }
    inline ApplicationDetail& AddCloudWatchLoggingOptionDescriptions(CloudWatchLoggingOptionDescription&& value) { m_cloudWatchLoggingOptionDescriptionsHasBeenSet = true; m_cloudWatchLoggingOptionDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns the application code that you provided to perform data analysis on
     * any of the in-application streams in your application.</p>
     */
    inline const Aws::String& GetApplicationCode() const{ return m_applicationCode; }
    inline bool ApplicationCodeHasBeenSet() const { return m_applicationCodeHasBeenSet; }
    inline void SetApplicationCode(const Aws::String& value) { m_applicationCodeHasBeenSet = true; m_applicationCode = value; }
    inline void SetApplicationCode(Aws::String&& value) { m_applicationCodeHasBeenSet = true; m_applicationCode = std::move(value); }
    inline void SetApplicationCode(const char* value) { m_applicationCodeHasBeenSet = true; m_applicationCode.assign(value); }
    inline ApplicationDetail& WithApplicationCode(const Aws::String& value) { SetApplicationCode(value); return *this;}
    inline ApplicationDetail& WithApplicationCode(Aws::String&& value) { SetApplicationCode(std::move(value)); return *this;}
    inline ApplicationDetail& WithApplicationCode(const char* value) { SetApplicationCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the current application version.</p>
     */
    inline long long GetApplicationVersionId() const{ return m_applicationVersionId; }
    inline bool ApplicationVersionIdHasBeenSet() const { return m_applicationVersionIdHasBeenSet; }
    inline void SetApplicationVersionId(long long value) { m_applicationVersionIdHasBeenSet = true; m_applicationVersionId = value; }
    inline ApplicationDetail& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_applicationDescription;
    bool m_applicationDescriptionHasBeenSet = false;

    Aws::String m_applicationARN;
    bool m_applicationARNHasBeenSet = false;

    ApplicationStatus m_applicationStatus;
    bool m_applicationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createTimestamp;
    bool m_createTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTimestamp;
    bool m_lastUpdateTimestampHasBeenSet = false;

    Aws::Vector<InputDescription> m_inputDescriptions;
    bool m_inputDescriptionsHasBeenSet = false;

    Aws::Vector<OutputDescription> m_outputDescriptions;
    bool m_outputDescriptionsHasBeenSet = false;

    Aws::Vector<ReferenceDataSourceDescription> m_referenceDataSourceDescriptions;
    bool m_referenceDataSourceDescriptionsHasBeenSet = false;

    Aws::Vector<CloudWatchLoggingOptionDescription> m_cloudWatchLoggingOptionDescriptions;
    bool m_cloudWatchLoggingOptionDescriptionsHasBeenSet = false;

    Aws::String m_applicationCode;
    bool m_applicationCodeHasBeenSet = false;

    long long m_applicationVersionId;
    bool m_applicationVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
