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
   * data sources for an SQL-based Kinesis Data Analytics application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SqlApplicationConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API SqlApplicationConfigurationUpdate
  {
  public:
    SqlApplicationConfigurationUpdate();
    SqlApplicationConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    SqlApplicationConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The array of <a>InputUpdate</a> objects describing the new input streams used
     * by the application.</p>
     */
    inline const Aws::Vector<InputUpdate>& GetInputUpdates() const{ return m_inputUpdates; }

    /**
     * <p>The array of <a>InputUpdate</a> objects describing the new input streams used
     * by the application.</p>
     */
    inline bool InputUpdatesHasBeenSet() const { return m_inputUpdatesHasBeenSet; }

    /**
     * <p>The array of <a>InputUpdate</a> objects describing the new input streams used
     * by the application.</p>
     */
    inline void SetInputUpdates(const Aws::Vector<InputUpdate>& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates = value; }

    /**
     * <p>The array of <a>InputUpdate</a> objects describing the new input streams used
     * by the application.</p>
     */
    inline void SetInputUpdates(Aws::Vector<InputUpdate>&& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates = std::move(value); }

    /**
     * <p>The array of <a>InputUpdate</a> objects describing the new input streams used
     * by the application.</p>
     */
    inline SqlApplicationConfigurationUpdate& WithInputUpdates(const Aws::Vector<InputUpdate>& value) { SetInputUpdates(value); return *this;}

    /**
     * <p>The array of <a>InputUpdate</a> objects describing the new input streams used
     * by the application.</p>
     */
    inline SqlApplicationConfigurationUpdate& WithInputUpdates(Aws::Vector<InputUpdate>&& value) { SetInputUpdates(std::move(value)); return *this;}

    /**
     * <p>The array of <a>InputUpdate</a> objects describing the new input streams used
     * by the application.</p>
     */
    inline SqlApplicationConfigurationUpdate& AddInputUpdates(const InputUpdate& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates.push_back(value); return *this; }

    /**
     * <p>The array of <a>InputUpdate</a> objects describing the new input streams used
     * by the application.</p>
     */
    inline SqlApplicationConfigurationUpdate& AddInputUpdates(InputUpdate&& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates.push_back(std::move(value)); return *this; }


    /**
     * <p>The array of <a>OutputUpdate</a> objects describing the new destination
     * streams used by the application.</p>
     */
    inline const Aws::Vector<OutputUpdate>& GetOutputUpdates() const{ return m_outputUpdates; }

    /**
     * <p>The array of <a>OutputUpdate</a> objects describing the new destination
     * streams used by the application.</p>
     */
    inline bool OutputUpdatesHasBeenSet() const { return m_outputUpdatesHasBeenSet; }

    /**
     * <p>The array of <a>OutputUpdate</a> objects describing the new destination
     * streams used by the application.</p>
     */
    inline void SetOutputUpdates(const Aws::Vector<OutputUpdate>& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates = value; }

    /**
     * <p>The array of <a>OutputUpdate</a> objects describing the new destination
     * streams used by the application.</p>
     */
    inline void SetOutputUpdates(Aws::Vector<OutputUpdate>&& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates = std::move(value); }

    /**
     * <p>The array of <a>OutputUpdate</a> objects describing the new destination
     * streams used by the application.</p>
     */
    inline SqlApplicationConfigurationUpdate& WithOutputUpdates(const Aws::Vector<OutputUpdate>& value) { SetOutputUpdates(value); return *this;}

    /**
     * <p>The array of <a>OutputUpdate</a> objects describing the new destination
     * streams used by the application.</p>
     */
    inline SqlApplicationConfigurationUpdate& WithOutputUpdates(Aws::Vector<OutputUpdate>&& value) { SetOutputUpdates(std::move(value)); return *this;}

    /**
     * <p>The array of <a>OutputUpdate</a> objects describing the new destination
     * streams used by the application.</p>
     */
    inline SqlApplicationConfigurationUpdate& AddOutputUpdates(const OutputUpdate& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates.push_back(value); return *this; }

    /**
     * <p>The array of <a>OutputUpdate</a> objects describing the new destination
     * streams used by the application.</p>
     */
    inline SqlApplicationConfigurationUpdate& AddOutputUpdates(OutputUpdate&& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates.push_back(std::move(value)); return *this; }


    /**
     * <p>The array of <a>ReferenceDataSourceUpdate</a> objects describing the new
     * reference data sources used by the application.</p>
     */
    inline const Aws::Vector<ReferenceDataSourceUpdate>& GetReferenceDataSourceUpdates() const{ return m_referenceDataSourceUpdates; }

    /**
     * <p>The array of <a>ReferenceDataSourceUpdate</a> objects describing the new
     * reference data sources used by the application.</p>
     */
    inline bool ReferenceDataSourceUpdatesHasBeenSet() const { return m_referenceDataSourceUpdatesHasBeenSet; }

    /**
     * <p>The array of <a>ReferenceDataSourceUpdate</a> objects describing the new
     * reference data sources used by the application.</p>
     */
    inline void SetReferenceDataSourceUpdates(const Aws::Vector<ReferenceDataSourceUpdate>& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates = value; }

    /**
     * <p>The array of <a>ReferenceDataSourceUpdate</a> objects describing the new
     * reference data sources used by the application.</p>
     */
    inline void SetReferenceDataSourceUpdates(Aws::Vector<ReferenceDataSourceUpdate>&& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates = std::move(value); }

    /**
     * <p>The array of <a>ReferenceDataSourceUpdate</a> objects describing the new
     * reference data sources used by the application.</p>
     */
    inline SqlApplicationConfigurationUpdate& WithReferenceDataSourceUpdates(const Aws::Vector<ReferenceDataSourceUpdate>& value) { SetReferenceDataSourceUpdates(value); return *this;}

    /**
     * <p>The array of <a>ReferenceDataSourceUpdate</a> objects describing the new
     * reference data sources used by the application.</p>
     */
    inline SqlApplicationConfigurationUpdate& WithReferenceDataSourceUpdates(Aws::Vector<ReferenceDataSourceUpdate>&& value) { SetReferenceDataSourceUpdates(std::move(value)); return *this;}

    /**
     * <p>The array of <a>ReferenceDataSourceUpdate</a> objects describing the new
     * reference data sources used by the application.</p>
     */
    inline SqlApplicationConfigurationUpdate& AddReferenceDataSourceUpdates(const ReferenceDataSourceUpdate& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates.push_back(value); return *this; }

    /**
     * <p>The array of <a>ReferenceDataSourceUpdate</a> objects describing the new
     * reference data sources used by the application.</p>
     */
    inline SqlApplicationConfigurationUpdate& AddReferenceDataSourceUpdates(ReferenceDataSourceUpdate&& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<InputUpdate> m_inputUpdates;
    bool m_inputUpdatesHasBeenSet;

    Aws::Vector<OutputUpdate> m_outputUpdates;
    bool m_outputUpdatesHasBeenSet;

    Aws::Vector<ReferenceDataSourceUpdate> m_referenceDataSourceUpdates;
    bool m_referenceDataSourceUpdatesHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
