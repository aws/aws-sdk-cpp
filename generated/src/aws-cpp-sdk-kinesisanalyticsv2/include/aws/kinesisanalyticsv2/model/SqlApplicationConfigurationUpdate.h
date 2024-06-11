/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/InputUpdate.h>
#include <aws/kinesisanalyticsv2/model/OutputUpdate.h>
#include <aws/kinesisanalyticsv2/model/ReferenceDataSourceUpdate.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes updates to the input streams, destination streams, and reference
   * data sources for a SQL-based Kinesis Data Analytics application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SqlApplicationConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class SqlApplicationConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API SqlApplicationConfigurationUpdate();
    AWS_KINESISANALYTICSV2_API SqlApplicationConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API SqlApplicationConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The array of <a>InputUpdate</a> objects describing the new input streams used
     * by the application.</p>
     */
    inline const Aws::Vector<InputUpdate>& GetInputUpdates() const{ return m_inputUpdates; }
    inline bool InputUpdatesHasBeenSet() const { return m_inputUpdatesHasBeenSet; }
    inline void SetInputUpdates(const Aws::Vector<InputUpdate>& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates = value; }
    inline void SetInputUpdates(Aws::Vector<InputUpdate>&& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates = std::move(value); }
    inline SqlApplicationConfigurationUpdate& WithInputUpdates(const Aws::Vector<InputUpdate>& value) { SetInputUpdates(value); return *this;}
    inline SqlApplicationConfigurationUpdate& WithInputUpdates(Aws::Vector<InputUpdate>&& value) { SetInputUpdates(std::move(value)); return *this;}
    inline SqlApplicationConfigurationUpdate& AddInputUpdates(const InputUpdate& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates.push_back(value); return *this; }
    inline SqlApplicationConfigurationUpdate& AddInputUpdates(InputUpdate&& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The array of <a>OutputUpdate</a> objects describing the new destination
     * streams used by the application.</p>
     */
    inline const Aws::Vector<OutputUpdate>& GetOutputUpdates() const{ return m_outputUpdates; }
    inline bool OutputUpdatesHasBeenSet() const { return m_outputUpdatesHasBeenSet; }
    inline void SetOutputUpdates(const Aws::Vector<OutputUpdate>& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates = value; }
    inline void SetOutputUpdates(Aws::Vector<OutputUpdate>&& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates = std::move(value); }
    inline SqlApplicationConfigurationUpdate& WithOutputUpdates(const Aws::Vector<OutputUpdate>& value) { SetOutputUpdates(value); return *this;}
    inline SqlApplicationConfigurationUpdate& WithOutputUpdates(Aws::Vector<OutputUpdate>&& value) { SetOutputUpdates(std::move(value)); return *this;}
    inline SqlApplicationConfigurationUpdate& AddOutputUpdates(const OutputUpdate& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates.push_back(value); return *this; }
    inline SqlApplicationConfigurationUpdate& AddOutputUpdates(OutputUpdate&& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The array of <a>ReferenceDataSourceUpdate</a> objects describing the new
     * reference data sources used by the application.</p>
     */
    inline const Aws::Vector<ReferenceDataSourceUpdate>& GetReferenceDataSourceUpdates() const{ return m_referenceDataSourceUpdates; }
    inline bool ReferenceDataSourceUpdatesHasBeenSet() const { return m_referenceDataSourceUpdatesHasBeenSet; }
    inline void SetReferenceDataSourceUpdates(const Aws::Vector<ReferenceDataSourceUpdate>& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates = value; }
    inline void SetReferenceDataSourceUpdates(Aws::Vector<ReferenceDataSourceUpdate>&& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates = std::move(value); }
    inline SqlApplicationConfigurationUpdate& WithReferenceDataSourceUpdates(const Aws::Vector<ReferenceDataSourceUpdate>& value) { SetReferenceDataSourceUpdates(value); return *this;}
    inline SqlApplicationConfigurationUpdate& WithReferenceDataSourceUpdates(Aws::Vector<ReferenceDataSourceUpdate>&& value) { SetReferenceDataSourceUpdates(std::move(value)); return *this;}
    inline SqlApplicationConfigurationUpdate& AddReferenceDataSourceUpdates(const ReferenceDataSourceUpdate& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates.push_back(value); return *this; }
    inline SqlApplicationConfigurationUpdate& AddReferenceDataSourceUpdates(ReferenceDataSourceUpdate&& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<InputUpdate> m_inputUpdates;
    bool m_inputUpdatesHasBeenSet = false;

    Aws::Vector<OutputUpdate> m_outputUpdates;
    bool m_outputUpdatesHasBeenSet = false;

    Aws::Vector<ReferenceDataSourceUpdate> m_referenceDataSourceUpdates;
    bool m_referenceDataSourceUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
