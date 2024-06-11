﻿/**
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
    AWS_KINESISANALYTICS_API ApplicationUpdate();
    AWS_KINESISANALYTICS_API ApplicationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API ApplicationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes application input configuration updates.</p>
     */
    inline const Aws::Vector<InputUpdate>& GetInputUpdates() const{ return m_inputUpdates; }
    inline bool InputUpdatesHasBeenSet() const { return m_inputUpdatesHasBeenSet; }
    inline void SetInputUpdates(const Aws::Vector<InputUpdate>& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates = value; }
    inline void SetInputUpdates(Aws::Vector<InputUpdate>&& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates = std::move(value); }
    inline ApplicationUpdate& WithInputUpdates(const Aws::Vector<InputUpdate>& value) { SetInputUpdates(value); return *this;}
    inline ApplicationUpdate& WithInputUpdates(Aws::Vector<InputUpdate>&& value) { SetInputUpdates(std::move(value)); return *this;}
    inline ApplicationUpdate& AddInputUpdates(const InputUpdate& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates.push_back(value); return *this; }
    inline ApplicationUpdate& AddInputUpdates(InputUpdate&& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes application code updates.</p>
     */
    inline const Aws::String& GetApplicationCodeUpdate() const{ return m_applicationCodeUpdate; }
    inline bool ApplicationCodeUpdateHasBeenSet() const { return m_applicationCodeUpdateHasBeenSet; }
    inline void SetApplicationCodeUpdate(const Aws::String& value) { m_applicationCodeUpdateHasBeenSet = true; m_applicationCodeUpdate = value; }
    inline void SetApplicationCodeUpdate(Aws::String&& value) { m_applicationCodeUpdateHasBeenSet = true; m_applicationCodeUpdate = std::move(value); }
    inline void SetApplicationCodeUpdate(const char* value) { m_applicationCodeUpdateHasBeenSet = true; m_applicationCodeUpdate.assign(value); }
    inline ApplicationUpdate& WithApplicationCodeUpdate(const Aws::String& value) { SetApplicationCodeUpdate(value); return *this;}
    inline ApplicationUpdate& WithApplicationCodeUpdate(Aws::String&& value) { SetApplicationCodeUpdate(std::move(value)); return *this;}
    inline ApplicationUpdate& WithApplicationCodeUpdate(const char* value) { SetApplicationCodeUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes application output configuration updates.</p>
     */
    inline const Aws::Vector<OutputUpdate>& GetOutputUpdates() const{ return m_outputUpdates; }
    inline bool OutputUpdatesHasBeenSet() const { return m_outputUpdatesHasBeenSet; }
    inline void SetOutputUpdates(const Aws::Vector<OutputUpdate>& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates = value; }
    inline void SetOutputUpdates(Aws::Vector<OutputUpdate>&& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates = std::move(value); }
    inline ApplicationUpdate& WithOutputUpdates(const Aws::Vector<OutputUpdate>& value) { SetOutputUpdates(value); return *this;}
    inline ApplicationUpdate& WithOutputUpdates(Aws::Vector<OutputUpdate>&& value) { SetOutputUpdates(std::move(value)); return *this;}
    inline ApplicationUpdate& AddOutputUpdates(const OutputUpdate& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates.push_back(value); return *this; }
    inline ApplicationUpdate& AddOutputUpdates(OutputUpdate&& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes application reference data source updates.</p>
     */
    inline const Aws::Vector<ReferenceDataSourceUpdate>& GetReferenceDataSourceUpdates() const{ return m_referenceDataSourceUpdates; }
    inline bool ReferenceDataSourceUpdatesHasBeenSet() const { return m_referenceDataSourceUpdatesHasBeenSet; }
    inline void SetReferenceDataSourceUpdates(const Aws::Vector<ReferenceDataSourceUpdate>& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates = value; }
    inline void SetReferenceDataSourceUpdates(Aws::Vector<ReferenceDataSourceUpdate>&& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates = std::move(value); }
    inline ApplicationUpdate& WithReferenceDataSourceUpdates(const Aws::Vector<ReferenceDataSourceUpdate>& value) { SetReferenceDataSourceUpdates(value); return *this;}
    inline ApplicationUpdate& WithReferenceDataSourceUpdates(Aws::Vector<ReferenceDataSourceUpdate>&& value) { SetReferenceDataSourceUpdates(std::move(value)); return *this;}
    inline ApplicationUpdate& AddReferenceDataSourceUpdates(const ReferenceDataSourceUpdate& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates.push_back(value); return *this; }
    inline ApplicationUpdate& AddReferenceDataSourceUpdates(ReferenceDataSourceUpdate&& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes application CloudWatch logging option updates.</p>
     */
    inline const Aws::Vector<CloudWatchLoggingOptionUpdate>& GetCloudWatchLoggingOptionUpdates() const{ return m_cloudWatchLoggingOptionUpdates; }
    inline bool CloudWatchLoggingOptionUpdatesHasBeenSet() const { return m_cloudWatchLoggingOptionUpdatesHasBeenSet; }
    inline void SetCloudWatchLoggingOptionUpdates(const Aws::Vector<CloudWatchLoggingOptionUpdate>& value) { m_cloudWatchLoggingOptionUpdatesHasBeenSet = true; m_cloudWatchLoggingOptionUpdates = value; }
    inline void SetCloudWatchLoggingOptionUpdates(Aws::Vector<CloudWatchLoggingOptionUpdate>&& value) { m_cloudWatchLoggingOptionUpdatesHasBeenSet = true; m_cloudWatchLoggingOptionUpdates = std::move(value); }
    inline ApplicationUpdate& WithCloudWatchLoggingOptionUpdates(const Aws::Vector<CloudWatchLoggingOptionUpdate>& value) { SetCloudWatchLoggingOptionUpdates(value); return *this;}
    inline ApplicationUpdate& WithCloudWatchLoggingOptionUpdates(Aws::Vector<CloudWatchLoggingOptionUpdate>&& value) { SetCloudWatchLoggingOptionUpdates(std::move(value)); return *this;}
    inline ApplicationUpdate& AddCloudWatchLoggingOptionUpdates(const CloudWatchLoggingOptionUpdate& value) { m_cloudWatchLoggingOptionUpdatesHasBeenSet = true; m_cloudWatchLoggingOptionUpdates.push_back(value); return *this; }
    inline ApplicationUpdate& AddCloudWatchLoggingOptionUpdates(CloudWatchLoggingOptionUpdate&& value) { m_cloudWatchLoggingOptionUpdatesHasBeenSet = true; m_cloudWatchLoggingOptionUpdates.push_back(std::move(value)); return *this; }
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
