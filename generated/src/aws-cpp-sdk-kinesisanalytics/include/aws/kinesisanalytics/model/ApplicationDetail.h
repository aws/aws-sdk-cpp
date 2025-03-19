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
    AWS_KINESISANALYTICS_API ApplicationDetail() = default;
    AWS_KINESISANALYTICS_API ApplicationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API ApplicationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    ApplicationDetail& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the application.</p>
     */
    inline const Aws::String& GetApplicationDescription() const { return m_applicationDescription; }
    inline bool ApplicationDescriptionHasBeenSet() const { return m_applicationDescriptionHasBeenSet; }
    template<typename ApplicationDescriptionT = Aws::String>
    void SetApplicationDescription(ApplicationDescriptionT&& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = std::forward<ApplicationDescriptionT>(value); }
    template<typename ApplicationDescriptionT = Aws::String>
    ApplicationDetail& WithApplicationDescription(ApplicationDescriptionT&& value) { SetApplicationDescription(std::forward<ApplicationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the application.</p>
     */
    inline const Aws::String& GetApplicationARN() const { return m_applicationARN; }
    inline bool ApplicationARNHasBeenSet() const { return m_applicationARNHasBeenSet; }
    template<typename ApplicationARNT = Aws::String>
    void SetApplicationARN(ApplicationARNT&& value) { m_applicationARNHasBeenSet = true; m_applicationARN = std::forward<ApplicationARNT>(value); }
    template<typename ApplicationARNT = Aws::String>
    ApplicationDetail& WithApplicationARN(ApplicationARNT&& value) { SetApplicationARN(std::forward<ApplicationARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the application.</p>
     */
    inline ApplicationStatus GetApplicationStatus() const { return m_applicationStatus; }
    inline bool ApplicationStatusHasBeenSet() const { return m_applicationStatusHasBeenSet; }
    inline void SetApplicationStatus(ApplicationStatus value) { m_applicationStatusHasBeenSet = true; m_applicationStatus = value; }
    inline ApplicationDetail& WithApplicationStatus(ApplicationStatus value) { SetApplicationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time stamp when the application version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const { return m_createTimestamp; }
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }
    template<typename CreateTimestampT = Aws::Utils::DateTime>
    void SetCreateTimestamp(CreateTimestampT&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::forward<CreateTimestampT>(value); }
    template<typename CreateTimestampT = Aws::Utils::DateTime>
    ApplicationDetail& WithCreateTimestamp(CreateTimestampT&& value) { SetCreateTimestamp(std::forward<CreateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time stamp when the application was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTimestamp() const { return m_lastUpdateTimestamp; }
    inline bool LastUpdateTimestampHasBeenSet() const { return m_lastUpdateTimestampHasBeenSet; }
    template<typename LastUpdateTimestampT = Aws::Utils::DateTime>
    void SetLastUpdateTimestamp(LastUpdateTimestampT&& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = std::forward<LastUpdateTimestampT>(value); }
    template<typename LastUpdateTimestampT = Aws::Utils::DateTime>
    ApplicationDetail& WithLastUpdateTimestamp(LastUpdateTimestampT&& value) { SetLastUpdateTimestamp(std::forward<LastUpdateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the application input configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
     * Application Input</a>. </p>
     */
    inline const Aws::Vector<InputDescription>& GetInputDescriptions() const { return m_inputDescriptions; }
    inline bool InputDescriptionsHasBeenSet() const { return m_inputDescriptionsHasBeenSet; }
    template<typename InputDescriptionsT = Aws::Vector<InputDescription>>
    void SetInputDescriptions(InputDescriptionsT&& value) { m_inputDescriptionsHasBeenSet = true; m_inputDescriptions = std::forward<InputDescriptionsT>(value); }
    template<typename InputDescriptionsT = Aws::Vector<InputDescription>>
    ApplicationDetail& WithInputDescriptions(InputDescriptionsT&& value) { SetInputDescriptions(std::forward<InputDescriptionsT>(value)); return *this;}
    template<typename InputDescriptionsT = InputDescription>
    ApplicationDetail& AddInputDescriptions(InputDescriptionsT&& value) { m_inputDescriptionsHasBeenSet = true; m_inputDescriptions.emplace_back(std::forward<InputDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the application output configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>. </p>
     */
    inline const Aws::Vector<OutputDescription>& GetOutputDescriptions() const { return m_outputDescriptions; }
    inline bool OutputDescriptionsHasBeenSet() const { return m_outputDescriptionsHasBeenSet; }
    template<typename OutputDescriptionsT = Aws::Vector<OutputDescription>>
    void SetOutputDescriptions(OutputDescriptionsT&& value) { m_outputDescriptionsHasBeenSet = true; m_outputDescriptions = std::forward<OutputDescriptionsT>(value); }
    template<typename OutputDescriptionsT = Aws::Vector<OutputDescription>>
    ApplicationDetail& WithOutputDescriptions(OutputDescriptionsT&& value) { SetOutputDescriptions(std::forward<OutputDescriptionsT>(value)); return *this;}
    template<typename OutputDescriptionsT = OutputDescription>
    ApplicationDetail& AddOutputDescriptions(OutputDescriptionsT&& value) { m_outputDescriptionsHasBeenSet = true; m_outputDescriptions.emplace_back(std::forward<OutputDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes reference data sources configured for the application. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
     * Application Input</a>. </p>
     */
    inline const Aws::Vector<ReferenceDataSourceDescription>& GetReferenceDataSourceDescriptions() const { return m_referenceDataSourceDescriptions; }
    inline bool ReferenceDataSourceDescriptionsHasBeenSet() const { return m_referenceDataSourceDescriptionsHasBeenSet; }
    template<typename ReferenceDataSourceDescriptionsT = Aws::Vector<ReferenceDataSourceDescription>>
    void SetReferenceDataSourceDescriptions(ReferenceDataSourceDescriptionsT&& value) { m_referenceDataSourceDescriptionsHasBeenSet = true; m_referenceDataSourceDescriptions = std::forward<ReferenceDataSourceDescriptionsT>(value); }
    template<typename ReferenceDataSourceDescriptionsT = Aws::Vector<ReferenceDataSourceDescription>>
    ApplicationDetail& WithReferenceDataSourceDescriptions(ReferenceDataSourceDescriptionsT&& value) { SetReferenceDataSourceDescriptions(std::forward<ReferenceDataSourceDescriptionsT>(value)); return *this;}
    template<typename ReferenceDataSourceDescriptionsT = ReferenceDataSourceDescription>
    ApplicationDetail& AddReferenceDataSourceDescriptions(ReferenceDataSourceDescriptionsT&& value) { m_referenceDataSourceDescriptionsHasBeenSet = true; m_referenceDataSourceDescriptions.emplace_back(std::forward<ReferenceDataSourceDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the CloudWatch log streams that are configured to receive
     * application messages. For more information about using CloudWatch log streams
     * with Amazon Kinesis Analytics applications, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
     * with Amazon CloudWatch Logs</a>. </p>
     */
    inline const Aws::Vector<CloudWatchLoggingOptionDescription>& GetCloudWatchLoggingOptionDescriptions() const { return m_cloudWatchLoggingOptionDescriptions; }
    inline bool CloudWatchLoggingOptionDescriptionsHasBeenSet() const { return m_cloudWatchLoggingOptionDescriptionsHasBeenSet; }
    template<typename CloudWatchLoggingOptionDescriptionsT = Aws::Vector<CloudWatchLoggingOptionDescription>>
    void SetCloudWatchLoggingOptionDescriptions(CloudWatchLoggingOptionDescriptionsT&& value) { m_cloudWatchLoggingOptionDescriptionsHasBeenSet = true; m_cloudWatchLoggingOptionDescriptions = std::forward<CloudWatchLoggingOptionDescriptionsT>(value); }
    template<typename CloudWatchLoggingOptionDescriptionsT = Aws::Vector<CloudWatchLoggingOptionDescription>>
    ApplicationDetail& WithCloudWatchLoggingOptionDescriptions(CloudWatchLoggingOptionDescriptionsT&& value) { SetCloudWatchLoggingOptionDescriptions(std::forward<CloudWatchLoggingOptionDescriptionsT>(value)); return *this;}
    template<typename CloudWatchLoggingOptionDescriptionsT = CloudWatchLoggingOptionDescription>
    ApplicationDetail& AddCloudWatchLoggingOptionDescriptions(CloudWatchLoggingOptionDescriptionsT&& value) { m_cloudWatchLoggingOptionDescriptionsHasBeenSet = true; m_cloudWatchLoggingOptionDescriptions.emplace_back(std::forward<CloudWatchLoggingOptionDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns the application code that you provided to perform data analysis on
     * any of the in-application streams in your application.</p>
     */
    inline const Aws::String& GetApplicationCode() const { return m_applicationCode; }
    inline bool ApplicationCodeHasBeenSet() const { return m_applicationCodeHasBeenSet; }
    template<typename ApplicationCodeT = Aws::String>
    void SetApplicationCode(ApplicationCodeT&& value) { m_applicationCodeHasBeenSet = true; m_applicationCode = std::forward<ApplicationCodeT>(value); }
    template<typename ApplicationCodeT = Aws::String>
    ApplicationDetail& WithApplicationCode(ApplicationCodeT&& value) { SetApplicationCode(std::forward<ApplicationCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the current application version.</p>
     */
    inline long long GetApplicationVersionId() const { return m_applicationVersionId; }
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

    ApplicationStatus m_applicationStatus{ApplicationStatus::NOT_SET};
    bool m_applicationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createTimestamp{};
    bool m_createTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTimestamp{};
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

    long long m_applicationVersionId{0};
    bool m_applicationVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
