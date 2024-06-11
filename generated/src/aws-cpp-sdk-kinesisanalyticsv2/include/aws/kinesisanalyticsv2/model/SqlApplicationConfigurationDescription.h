/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Describes the inputs, outputs, and reference data sources for a SQL-based
   * Kinesis Data Analytics application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SqlApplicationConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class SqlApplicationConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API SqlApplicationConfigurationDescription();
    AWS_KINESISANALYTICSV2_API SqlApplicationConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API SqlApplicationConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The array of <a>InputDescription</a> objects describing the input streams
     * used by the application.</p>
     */
    inline const Aws::Vector<InputDescription>& GetInputDescriptions() const{ return m_inputDescriptions; }
    inline bool InputDescriptionsHasBeenSet() const { return m_inputDescriptionsHasBeenSet; }
    inline void SetInputDescriptions(const Aws::Vector<InputDescription>& value) { m_inputDescriptionsHasBeenSet = true; m_inputDescriptions = value; }
    inline void SetInputDescriptions(Aws::Vector<InputDescription>&& value) { m_inputDescriptionsHasBeenSet = true; m_inputDescriptions = std::move(value); }
    inline SqlApplicationConfigurationDescription& WithInputDescriptions(const Aws::Vector<InputDescription>& value) { SetInputDescriptions(value); return *this;}
    inline SqlApplicationConfigurationDescription& WithInputDescriptions(Aws::Vector<InputDescription>&& value) { SetInputDescriptions(std::move(value)); return *this;}
    inline SqlApplicationConfigurationDescription& AddInputDescriptions(const InputDescription& value) { m_inputDescriptionsHasBeenSet = true; m_inputDescriptions.push_back(value); return *this; }
    inline SqlApplicationConfigurationDescription& AddInputDescriptions(InputDescription&& value) { m_inputDescriptionsHasBeenSet = true; m_inputDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The array of <a>OutputDescription</a> objects describing the destination
     * streams used by the application.</p>
     */
    inline const Aws::Vector<OutputDescription>& GetOutputDescriptions() const{ return m_outputDescriptions; }
    inline bool OutputDescriptionsHasBeenSet() const { return m_outputDescriptionsHasBeenSet; }
    inline void SetOutputDescriptions(const Aws::Vector<OutputDescription>& value) { m_outputDescriptionsHasBeenSet = true; m_outputDescriptions = value; }
    inline void SetOutputDescriptions(Aws::Vector<OutputDescription>&& value) { m_outputDescriptionsHasBeenSet = true; m_outputDescriptions = std::move(value); }
    inline SqlApplicationConfigurationDescription& WithOutputDescriptions(const Aws::Vector<OutputDescription>& value) { SetOutputDescriptions(value); return *this;}
    inline SqlApplicationConfigurationDescription& WithOutputDescriptions(Aws::Vector<OutputDescription>&& value) { SetOutputDescriptions(std::move(value)); return *this;}
    inline SqlApplicationConfigurationDescription& AddOutputDescriptions(const OutputDescription& value) { m_outputDescriptionsHasBeenSet = true; m_outputDescriptions.push_back(value); return *this; }
    inline SqlApplicationConfigurationDescription& AddOutputDescriptions(OutputDescription&& value) { m_outputDescriptionsHasBeenSet = true; m_outputDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The array of <a>ReferenceDataSourceDescription</a> objects describing the
     * reference data sources used by the application.</p>
     */
    inline const Aws::Vector<ReferenceDataSourceDescription>& GetReferenceDataSourceDescriptions() const{ return m_referenceDataSourceDescriptions; }
    inline bool ReferenceDataSourceDescriptionsHasBeenSet() const { return m_referenceDataSourceDescriptionsHasBeenSet; }
    inline void SetReferenceDataSourceDescriptions(const Aws::Vector<ReferenceDataSourceDescription>& value) { m_referenceDataSourceDescriptionsHasBeenSet = true; m_referenceDataSourceDescriptions = value; }
    inline void SetReferenceDataSourceDescriptions(Aws::Vector<ReferenceDataSourceDescription>&& value) { m_referenceDataSourceDescriptionsHasBeenSet = true; m_referenceDataSourceDescriptions = std::move(value); }
    inline SqlApplicationConfigurationDescription& WithReferenceDataSourceDescriptions(const Aws::Vector<ReferenceDataSourceDescription>& value) { SetReferenceDataSourceDescriptions(value); return *this;}
    inline SqlApplicationConfigurationDescription& WithReferenceDataSourceDescriptions(Aws::Vector<ReferenceDataSourceDescription>&& value) { SetReferenceDataSourceDescriptions(std::move(value)); return *this;}
    inline SqlApplicationConfigurationDescription& AddReferenceDataSourceDescriptions(const ReferenceDataSourceDescription& value) { m_referenceDataSourceDescriptionsHasBeenSet = true; m_referenceDataSourceDescriptions.push_back(value); return *this; }
    inline SqlApplicationConfigurationDescription& AddReferenceDataSourceDescriptions(ReferenceDataSourceDescription&& value) { m_referenceDataSourceDescriptionsHasBeenSet = true; m_referenceDataSourceDescriptions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<InputDescription> m_inputDescriptions;
    bool m_inputDescriptionsHasBeenSet = false;

    Aws::Vector<OutputDescription> m_outputDescriptions;
    bool m_outputDescriptionsHasBeenSet = false;

    Aws::Vector<ReferenceDataSourceDescription> m_referenceDataSourceDescriptions;
    bool m_referenceDataSourceDescriptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
