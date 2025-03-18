/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalytics/model/InputUpdate.h>
#include <aws/kinesisanalytics/model/OutputUpdate.h>
#include <aws/kinesisanalytics/model/ReferenceDataSourceUpdate.h>
#include <aws/kinesisanalytics/model/CloudWatchLoggingOptionUpdate.h>
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
   * <p>Describes updates to apply to an existing Amazon Kinesis Analytics
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/ApplicationUpdate">AWS
   * API Reference</a></p>
   */
  class ApplicationUpdate
  {
  public:
    AWS_KINESISANALYTICS_API ApplicationUpdate() = default;
    AWS_KINESISANALYTICS_API ApplicationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API ApplicationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes application input configuration updates.</p>
     */
    inline const Aws::Vector<InputUpdate>& GetInputUpdates() const { return m_inputUpdates; }
    inline bool InputUpdatesHasBeenSet() const { return m_inputUpdatesHasBeenSet; }
    template<typename InputUpdatesT = Aws::Vector<InputUpdate>>
    void SetInputUpdates(InputUpdatesT&& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates = std::forward<InputUpdatesT>(value); }
    template<typename InputUpdatesT = Aws::Vector<InputUpdate>>
    ApplicationUpdate& WithInputUpdates(InputUpdatesT&& value) { SetInputUpdates(std::forward<InputUpdatesT>(value)); return *this;}
    template<typename InputUpdatesT = InputUpdate>
    ApplicationUpdate& AddInputUpdates(InputUpdatesT&& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates.emplace_back(std::forward<InputUpdatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes application code updates.</p>
     */
    inline const Aws::String& GetApplicationCodeUpdate() const { return m_applicationCodeUpdate; }
    inline bool ApplicationCodeUpdateHasBeenSet() const { return m_applicationCodeUpdateHasBeenSet; }
    template<typename ApplicationCodeUpdateT = Aws::String>
    void SetApplicationCodeUpdate(ApplicationCodeUpdateT&& value) { m_applicationCodeUpdateHasBeenSet = true; m_applicationCodeUpdate = std::forward<ApplicationCodeUpdateT>(value); }
    template<typename ApplicationCodeUpdateT = Aws::String>
    ApplicationUpdate& WithApplicationCodeUpdate(ApplicationCodeUpdateT&& value) { SetApplicationCodeUpdate(std::forward<ApplicationCodeUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes application output configuration updates.</p>
     */
    inline const Aws::Vector<OutputUpdate>& GetOutputUpdates() const { return m_outputUpdates; }
    inline bool OutputUpdatesHasBeenSet() const { return m_outputUpdatesHasBeenSet; }
    template<typename OutputUpdatesT = Aws::Vector<OutputUpdate>>
    void SetOutputUpdates(OutputUpdatesT&& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates = std::forward<OutputUpdatesT>(value); }
    template<typename OutputUpdatesT = Aws::Vector<OutputUpdate>>
    ApplicationUpdate& WithOutputUpdates(OutputUpdatesT&& value) { SetOutputUpdates(std::forward<OutputUpdatesT>(value)); return *this;}
    template<typename OutputUpdatesT = OutputUpdate>
    ApplicationUpdate& AddOutputUpdates(OutputUpdatesT&& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates.emplace_back(std::forward<OutputUpdatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes application reference data source updates.</p>
     */
    inline const Aws::Vector<ReferenceDataSourceUpdate>& GetReferenceDataSourceUpdates() const { return m_referenceDataSourceUpdates; }
    inline bool ReferenceDataSourceUpdatesHasBeenSet() const { return m_referenceDataSourceUpdatesHasBeenSet; }
    template<typename ReferenceDataSourceUpdatesT = Aws::Vector<ReferenceDataSourceUpdate>>
    void SetReferenceDataSourceUpdates(ReferenceDataSourceUpdatesT&& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates = std::forward<ReferenceDataSourceUpdatesT>(value); }
    template<typename ReferenceDataSourceUpdatesT = Aws::Vector<ReferenceDataSourceUpdate>>
    ApplicationUpdate& WithReferenceDataSourceUpdates(ReferenceDataSourceUpdatesT&& value) { SetReferenceDataSourceUpdates(std::forward<ReferenceDataSourceUpdatesT>(value)); return *this;}
    template<typename ReferenceDataSourceUpdatesT = ReferenceDataSourceUpdate>
    ApplicationUpdate& AddReferenceDataSourceUpdates(ReferenceDataSourceUpdatesT&& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates.emplace_back(std::forward<ReferenceDataSourceUpdatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes application CloudWatch logging option updates.</p>
     */
    inline const Aws::Vector<CloudWatchLoggingOptionUpdate>& GetCloudWatchLoggingOptionUpdates() const { return m_cloudWatchLoggingOptionUpdates; }
    inline bool CloudWatchLoggingOptionUpdatesHasBeenSet() const { return m_cloudWatchLoggingOptionUpdatesHasBeenSet; }
    template<typename CloudWatchLoggingOptionUpdatesT = Aws::Vector<CloudWatchLoggingOptionUpdate>>
    void SetCloudWatchLoggingOptionUpdates(CloudWatchLoggingOptionUpdatesT&& value) { m_cloudWatchLoggingOptionUpdatesHasBeenSet = true; m_cloudWatchLoggingOptionUpdates = std::forward<CloudWatchLoggingOptionUpdatesT>(value); }
    template<typename CloudWatchLoggingOptionUpdatesT = Aws::Vector<CloudWatchLoggingOptionUpdate>>
    ApplicationUpdate& WithCloudWatchLoggingOptionUpdates(CloudWatchLoggingOptionUpdatesT&& value) { SetCloudWatchLoggingOptionUpdates(std::forward<CloudWatchLoggingOptionUpdatesT>(value)); return *this;}
    template<typename CloudWatchLoggingOptionUpdatesT = CloudWatchLoggingOptionUpdate>
    ApplicationUpdate& AddCloudWatchLoggingOptionUpdates(CloudWatchLoggingOptionUpdatesT&& value) { m_cloudWatchLoggingOptionUpdatesHasBeenSet = true; m_cloudWatchLoggingOptionUpdates.emplace_back(std::forward<CloudWatchLoggingOptionUpdatesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<InputUpdate> m_inputUpdates;
    bool m_inputUpdatesHasBeenSet = false;

    Aws::String m_applicationCodeUpdate;
    bool m_applicationCodeUpdateHasBeenSet = false;

    Aws::Vector<OutputUpdate> m_outputUpdates;
    bool m_outputUpdatesHasBeenSet = false;

    Aws::Vector<ReferenceDataSourceUpdate> m_referenceDataSourceUpdates;
    bool m_referenceDataSourceUpdatesHasBeenSet = false;

    Aws::Vector<CloudWatchLoggingOptionUpdate> m_cloudWatchLoggingOptionUpdates;
    bool m_cloudWatchLoggingOptionUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
