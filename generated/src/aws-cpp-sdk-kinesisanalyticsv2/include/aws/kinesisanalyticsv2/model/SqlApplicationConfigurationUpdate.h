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
    AWS_KINESISANALYTICSV2_API SqlApplicationConfigurationUpdate() = default;
    AWS_KINESISANALYTICSV2_API SqlApplicationConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API SqlApplicationConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The array of <a>InputUpdate</a> objects describing the new input streams used
     * by the application.</p>
     */
    inline const Aws::Vector<InputUpdate>& GetInputUpdates() const { return m_inputUpdates; }
    inline bool InputUpdatesHasBeenSet() const { return m_inputUpdatesHasBeenSet; }
    template<typename InputUpdatesT = Aws::Vector<InputUpdate>>
    void SetInputUpdates(InputUpdatesT&& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates = std::forward<InputUpdatesT>(value); }
    template<typename InputUpdatesT = Aws::Vector<InputUpdate>>
    SqlApplicationConfigurationUpdate& WithInputUpdates(InputUpdatesT&& value) { SetInputUpdates(std::forward<InputUpdatesT>(value)); return *this;}
    template<typename InputUpdatesT = InputUpdate>
    SqlApplicationConfigurationUpdate& AddInputUpdates(InputUpdatesT&& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates.emplace_back(std::forward<InputUpdatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The array of <a>OutputUpdate</a> objects describing the new destination
     * streams used by the application.</p>
     */
    inline const Aws::Vector<OutputUpdate>& GetOutputUpdates() const { return m_outputUpdates; }
    inline bool OutputUpdatesHasBeenSet() const { return m_outputUpdatesHasBeenSet; }
    template<typename OutputUpdatesT = Aws::Vector<OutputUpdate>>
    void SetOutputUpdates(OutputUpdatesT&& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates = std::forward<OutputUpdatesT>(value); }
    template<typename OutputUpdatesT = Aws::Vector<OutputUpdate>>
    SqlApplicationConfigurationUpdate& WithOutputUpdates(OutputUpdatesT&& value) { SetOutputUpdates(std::forward<OutputUpdatesT>(value)); return *this;}
    template<typename OutputUpdatesT = OutputUpdate>
    SqlApplicationConfigurationUpdate& AddOutputUpdates(OutputUpdatesT&& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates.emplace_back(std::forward<OutputUpdatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The array of <a>ReferenceDataSourceUpdate</a> objects describing the new
     * reference data sources used by the application.</p>
     */
    inline const Aws::Vector<ReferenceDataSourceUpdate>& GetReferenceDataSourceUpdates() const { return m_referenceDataSourceUpdates; }
    inline bool ReferenceDataSourceUpdatesHasBeenSet() const { return m_referenceDataSourceUpdatesHasBeenSet; }
    template<typename ReferenceDataSourceUpdatesT = Aws::Vector<ReferenceDataSourceUpdate>>
    void SetReferenceDataSourceUpdates(ReferenceDataSourceUpdatesT&& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates = std::forward<ReferenceDataSourceUpdatesT>(value); }
    template<typename ReferenceDataSourceUpdatesT = Aws::Vector<ReferenceDataSourceUpdate>>
    SqlApplicationConfigurationUpdate& WithReferenceDataSourceUpdates(ReferenceDataSourceUpdatesT&& value) { SetReferenceDataSourceUpdates(std::forward<ReferenceDataSourceUpdatesT>(value)); return *this;}
    template<typename ReferenceDataSourceUpdatesT = ReferenceDataSourceUpdate>
    SqlApplicationConfigurationUpdate& AddReferenceDataSourceUpdates(ReferenceDataSourceUpdatesT&& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates.emplace_back(std::forward<ReferenceDataSourceUpdatesT>(value)); return *this; }
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
