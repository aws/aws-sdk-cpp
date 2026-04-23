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
#include <aws/kinesisanalyticsv2/model/InputDescription.h>
#include <aws/kinesisanalyticsv2/model/OutputDescription.h>
#include <aws/kinesisanalyticsv2/model/ReferenceDataSourceDescription.h>
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
   * <p>Describes the inputs, outputs, and reference data sources for an SQL-based
   * Kinesis Data Analytics application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SqlApplicationConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API SqlApplicationConfigurationDescription
  {
  public:
    SqlApplicationConfigurationDescription();
    SqlApplicationConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    SqlApplicationConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The array of <a>InputDescription</a> objects describing the input streams
     * used by the application.</p>
     */
    inline const Aws::Vector<InputDescription>& GetInputDescriptions() const{ return m_inputDescriptions; }

    /**
     * <p>The array of <a>InputDescription</a> objects describing the input streams
     * used by the application.</p>
     */
    inline bool InputDescriptionsHasBeenSet() const { return m_inputDescriptionsHasBeenSet; }

    /**
     * <p>The array of <a>InputDescription</a> objects describing the input streams
     * used by the application.</p>
     */
    inline void SetInputDescriptions(const Aws::Vector<InputDescription>& value) { m_inputDescriptionsHasBeenSet = true; m_inputDescriptions = value; }

    /**
     * <p>The array of <a>InputDescription</a> objects describing the input streams
     * used by the application.</p>
     */
    inline void SetInputDescriptions(Aws::Vector<InputDescription>&& value) { m_inputDescriptionsHasBeenSet = true; m_inputDescriptions = std::move(value); }

    /**
     * <p>The array of <a>InputDescription</a> objects describing the input streams
     * used by the application.</p>
     */
    inline SqlApplicationConfigurationDescription& WithInputDescriptions(const Aws::Vector<InputDescription>& value) { SetInputDescriptions(value); return *this;}

    /**
     * <p>The array of <a>InputDescription</a> objects describing the input streams
     * used by the application.</p>
     */
    inline SqlApplicationConfigurationDescription& WithInputDescriptions(Aws::Vector<InputDescription>&& value) { SetInputDescriptions(std::move(value)); return *this;}

    /**
     * <p>The array of <a>InputDescription</a> objects describing the input streams
     * used by the application.</p>
     */
    inline SqlApplicationConfigurationDescription& AddInputDescriptions(const InputDescription& value) { m_inputDescriptionsHasBeenSet = true; m_inputDescriptions.push_back(value); return *this; }

    /**
     * <p>The array of <a>InputDescription</a> objects describing the input streams
     * used by the application.</p>
     */
    inline SqlApplicationConfigurationDescription& AddInputDescriptions(InputDescription&& value) { m_inputDescriptionsHasBeenSet = true; m_inputDescriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The array of <a>OutputDescription</a> objects describing the destination
     * streams used by the application.</p>
     */
    inline const Aws::Vector<OutputDescription>& GetOutputDescriptions() const{ return m_outputDescriptions; }

    /**
     * <p>The array of <a>OutputDescription</a> objects describing the destination
     * streams used by the application.</p>
     */
    inline bool OutputDescriptionsHasBeenSet() const { return m_outputDescriptionsHasBeenSet; }

    /**
     * <p>The array of <a>OutputDescription</a> objects describing the destination
     * streams used by the application.</p>
     */
    inline void SetOutputDescriptions(const Aws::Vector<OutputDescription>& value) { m_outputDescriptionsHasBeenSet = true; m_outputDescriptions = value; }

    /**
     * <p>The array of <a>OutputDescription</a> objects describing the destination
     * streams used by the application.</p>
     */
    inline void SetOutputDescriptions(Aws::Vector<OutputDescription>&& value) { m_outputDescriptionsHasBeenSet = true; m_outputDescriptions = std::move(value); }

    /**
     * <p>The array of <a>OutputDescription</a> objects describing the destination
     * streams used by the application.</p>
     */
    inline SqlApplicationConfigurationDescription& WithOutputDescriptions(const Aws::Vector<OutputDescription>& value) { SetOutputDescriptions(value); return *this;}

    /**
     * <p>The array of <a>OutputDescription</a> objects describing the destination
     * streams used by the application.</p>
     */
    inline SqlApplicationConfigurationDescription& WithOutputDescriptions(Aws::Vector<OutputDescription>&& value) { SetOutputDescriptions(std::move(value)); return *this;}

    /**
     * <p>The array of <a>OutputDescription</a> objects describing the destination
     * streams used by the application.</p>
     */
    inline SqlApplicationConfigurationDescription& AddOutputDescriptions(const OutputDescription& value) { m_outputDescriptionsHasBeenSet = true; m_outputDescriptions.push_back(value); return *this; }

    /**
     * <p>The array of <a>OutputDescription</a> objects describing the destination
     * streams used by the application.</p>
     */
    inline SqlApplicationConfigurationDescription& AddOutputDescriptions(OutputDescription&& value) { m_outputDescriptionsHasBeenSet = true; m_outputDescriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The array of <a>ReferenceDataSourceDescription</a> objects describing the
     * reference data sources used by the application.</p>
     */
    inline const Aws::Vector<ReferenceDataSourceDescription>& GetReferenceDataSourceDescriptions() const{ return m_referenceDataSourceDescriptions; }

    /**
     * <p>The array of <a>ReferenceDataSourceDescription</a> objects describing the
     * reference data sources used by the application.</p>
     */
    inline bool ReferenceDataSourceDescriptionsHasBeenSet() const { return m_referenceDataSourceDescriptionsHasBeenSet; }

    /**
     * <p>The array of <a>ReferenceDataSourceDescription</a> objects describing the
     * reference data sources used by the application.</p>
     */
    inline void SetReferenceDataSourceDescriptions(const Aws::Vector<ReferenceDataSourceDescription>& value) { m_referenceDataSourceDescriptionsHasBeenSet = true; m_referenceDataSourceDescriptions = value; }

    /**
     * <p>The array of <a>ReferenceDataSourceDescription</a> objects describing the
     * reference data sources used by the application.</p>
     */
    inline void SetReferenceDataSourceDescriptions(Aws::Vector<ReferenceDataSourceDescription>&& value) { m_referenceDataSourceDescriptionsHasBeenSet = true; m_referenceDataSourceDescriptions = std::move(value); }

    /**
     * <p>The array of <a>ReferenceDataSourceDescription</a> objects describing the
     * reference data sources used by the application.</p>
     */
    inline SqlApplicationConfigurationDescription& WithReferenceDataSourceDescriptions(const Aws::Vector<ReferenceDataSourceDescription>& value) { SetReferenceDataSourceDescriptions(value); return *this;}

    /**
     * <p>The array of <a>ReferenceDataSourceDescription</a> objects describing the
     * reference data sources used by the application.</p>
     */
    inline SqlApplicationConfigurationDescription& WithReferenceDataSourceDescriptions(Aws::Vector<ReferenceDataSourceDescription>&& value) { SetReferenceDataSourceDescriptions(std::move(value)); return *this;}

    /**
     * <p>The array of <a>ReferenceDataSourceDescription</a> objects describing the
     * reference data sources used by the application.</p>
     */
    inline SqlApplicationConfigurationDescription& AddReferenceDataSourceDescriptions(const ReferenceDataSourceDescription& value) { m_referenceDataSourceDescriptionsHasBeenSet = true; m_referenceDataSourceDescriptions.push_back(value); return *this; }

    /**
     * <p>The array of <a>ReferenceDataSourceDescription</a> objects describing the
     * reference data sources used by the application.</p>
     */
    inline SqlApplicationConfigurationDescription& AddReferenceDataSourceDescriptions(ReferenceDataSourceDescription&& value) { m_referenceDataSourceDescriptionsHasBeenSet = true; m_referenceDataSourceDescriptions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<InputDescription> m_inputDescriptions;
    bool m_inputDescriptionsHasBeenSet;

    Aws::Vector<OutputDescription> m_outputDescriptions;
    bool m_outputDescriptionsHasBeenSet;

    Aws::Vector<ReferenceDataSourceDescription> m_referenceDataSourceDescriptions;
    bool m_referenceDataSourceDescriptionsHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
