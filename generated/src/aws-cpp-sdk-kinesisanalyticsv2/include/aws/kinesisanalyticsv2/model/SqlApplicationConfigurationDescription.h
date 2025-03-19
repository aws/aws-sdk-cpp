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
    AWS_KINESISANALYTICSV2_API SqlApplicationConfigurationDescription() = default;
    AWS_KINESISANALYTICSV2_API SqlApplicationConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API SqlApplicationConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The array of <a>InputDescription</a> objects describing the input streams
     * used by the application.</p>
     */
    inline const Aws::Vector<InputDescription>& GetInputDescriptions() const { return m_inputDescriptions; }
    inline bool InputDescriptionsHasBeenSet() const { return m_inputDescriptionsHasBeenSet; }
    template<typename InputDescriptionsT = Aws::Vector<InputDescription>>
    void SetInputDescriptions(InputDescriptionsT&& value) { m_inputDescriptionsHasBeenSet = true; m_inputDescriptions = std::forward<InputDescriptionsT>(value); }
    template<typename InputDescriptionsT = Aws::Vector<InputDescription>>
    SqlApplicationConfigurationDescription& WithInputDescriptions(InputDescriptionsT&& value) { SetInputDescriptions(std::forward<InputDescriptionsT>(value)); return *this;}
    template<typename InputDescriptionsT = InputDescription>
    SqlApplicationConfigurationDescription& AddInputDescriptions(InputDescriptionsT&& value) { m_inputDescriptionsHasBeenSet = true; m_inputDescriptions.emplace_back(std::forward<InputDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The array of <a>OutputDescription</a> objects describing the destination
     * streams used by the application.</p>
     */
    inline const Aws::Vector<OutputDescription>& GetOutputDescriptions() const { return m_outputDescriptions; }
    inline bool OutputDescriptionsHasBeenSet() const { return m_outputDescriptionsHasBeenSet; }
    template<typename OutputDescriptionsT = Aws::Vector<OutputDescription>>
    void SetOutputDescriptions(OutputDescriptionsT&& value) { m_outputDescriptionsHasBeenSet = true; m_outputDescriptions = std::forward<OutputDescriptionsT>(value); }
    template<typename OutputDescriptionsT = Aws::Vector<OutputDescription>>
    SqlApplicationConfigurationDescription& WithOutputDescriptions(OutputDescriptionsT&& value) { SetOutputDescriptions(std::forward<OutputDescriptionsT>(value)); return *this;}
    template<typename OutputDescriptionsT = OutputDescription>
    SqlApplicationConfigurationDescription& AddOutputDescriptions(OutputDescriptionsT&& value) { m_outputDescriptionsHasBeenSet = true; m_outputDescriptions.emplace_back(std::forward<OutputDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The array of <a>ReferenceDataSourceDescription</a> objects describing the
     * reference data sources used by the application.</p>
     */
    inline const Aws::Vector<ReferenceDataSourceDescription>& GetReferenceDataSourceDescriptions() const { return m_referenceDataSourceDescriptions; }
    inline bool ReferenceDataSourceDescriptionsHasBeenSet() const { return m_referenceDataSourceDescriptionsHasBeenSet; }
    template<typename ReferenceDataSourceDescriptionsT = Aws::Vector<ReferenceDataSourceDescription>>
    void SetReferenceDataSourceDescriptions(ReferenceDataSourceDescriptionsT&& value) { m_referenceDataSourceDescriptionsHasBeenSet = true; m_referenceDataSourceDescriptions = std::forward<ReferenceDataSourceDescriptionsT>(value); }
    template<typename ReferenceDataSourceDescriptionsT = Aws::Vector<ReferenceDataSourceDescription>>
    SqlApplicationConfigurationDescription& WithReferenceDataSourceDescriptions(ReferenceDataSourceDescriptionsT&& value) { SetReferenceDataSourceDescriptions(std::forward<ReferenceDataSourceDescriptionsT>(value)); return *this;}
    template<typename ReferenceDataSourceDescriptionsT = ReferenceDataSourceDescription>
    SqlApplicationConfigurationDescription& AddReferenceDataSourceDescriptions(ReferenceDataSourceDescriptionsT&& value) { m_referenceDataSourceDescriptionsHasBeenSet = true; m_referenceDataSourceDescriptions.emplace_back(std::forward<ReferenceDataSourceDescriptionsT>(value)); return *this; }
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
