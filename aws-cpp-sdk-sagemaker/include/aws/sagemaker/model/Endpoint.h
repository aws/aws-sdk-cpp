/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/DataCaptureConfigSummary.h>
#include <aws/sagemaker/model/EndpointStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ProductionVariantSummary.h>
#include <aws/sagemaker/model/MonitoringSchedule.h>
#include <aws/sagemaker/model/Tag.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A hosted endpoint for real-time inference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Endpoint">AWS
   * API Reference</a></p>
   */
  class Endpoint
  {
  public:
    AWS_SAGEMAKER_API Endpoint();
    AWS_SAGEMAKER_API Endpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline Endpoint& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of the endpoint.</p>
     */
    inline Endpoint& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint.</p>
     */
    inline Endpoint& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline Endpoint& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline Endpoint& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline Endpoint& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}


    /**
     * <p>The endpoint configuration associated with the endpoint.</p>
     */
    inline const Aws::String& GetEndpointConfigName() const{ return m_endpointConfigName; }

    /**
     * <p>The endpoint configuration associated with the endpoint.</p>
     */
    inline bool EndpointConfigNameHasBeenSet() const { return m_endpointConfigNameHasBeenSet; }

    /**
     * <p>The endpoint configuration associated with the endpoint.</p>
     */
    inline void SetEndpointConfigName(const Aws::String& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = value; }

    /**
     * <p>The endpoint configuration associated with the endpoint.</p>
     */
    inline void SetEndpointConfigName(Aws::String&& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = std::move(value); }

    /**
     * <p>The endpoint configuration associated with the endpoint.</p>
     */
    inline void SetEndpointConfigName(const char* value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName.assign(value); }

    /**
     * <p>The endpoint configuration associated with the endpoint.</p>
     */
    inline Endpoint& WithEndpointConfigName(const Aws::String& value) { SetEndpointConfigName(value); return *this;}

    /**
     * <p>The endpoint configuration associated with the endpoint.</p>
     */
    inline Endpoint& WithEndpointConfigName(Aws::String&& value) { SetEndpointConfigName(std::move(value)); return *this;}

    /**
     * <p>The endpoint configuration associated with the endpoint.</p>
     */
    inline Endpoint& WithEndpointConfigName(const char* value) { SetEndpointConfigName(value); return *this;}


    /**
     * <p>A list of the production variants hosted on the endpoint. Each production
     * variant is a model.</p>
     */
    inline const Aws::Vector<ProductionVariantSummary>& GetProductionVariants() const{ return m_productionVariants; }

    /**
     * <p>A list of the production variants hosted on the endpoint. Each production
     * variant is a model.</p>
     */
    inline bool ProductionVariantsHasBeenSet() const { return m_productionVariantsHasBeenSet; }

    /**
     * <p>A list of the production variants hosted on the endpoint. Each production
     * variant is a model.</p>
     */
    inline void SetProductionVariants(const Aws::Vector<ProductionVariantSummary>& value) { m_productionVariantsHasBeenSet = true; m_productionVariants = value; }

    /**
     * <p>A list of the production variants hosted on the endpoint. Each production
     * variant is a model.</p>
     */
    inline void SetProductionVariants(Aws::Vector<ProductionVariantSummary>&& value) { m_productionVariantsHasBeenSet = true; m_productionVariants = std::move(value); }

    /**
     * <p>A list of the production variants hosted on the endpoint. Each production
     * variant is a model.</p>
     */
    inline Endpoint& WithProductionVariants(const Aws::Vector<ProductionVariantSummary>& value) { SetProductionVariants(value); return *this;}

    /**
     * <p>A list of the production variants hosted on the endpoint. Each production
     * variant is a model.</p>
     */
    inline Endpoint& WithProductionVariants(Aws::Vector<ProductionVariantSummary>&& value) { SetProductionVariants(std::move(value)); return *this;}

    /**
     * <p>A list of the production variants hosted on the endpoint. Each production
     * variant is a model.</p>
     */
    inline Endpoint& AddProductionVariants(const ProductionVariantSummary& value) { m_productionVariantsHasBeenSet = true; m_productionVariants.push_back(value); return *this; }

    /**
     * <p>A list of the production variants hosted on the endpoint. Each production
     * variant is a model.</p>
     */
    inline Endpoint& AddProductionVariants(ProductionVariantSummary&& value) { m_productionVariantsHasBeenSet = true; m_productionVariants.push_back(std::move(value)); return *this; }


    
    inline const DataCaptureConfigSummary& GetDataCaptureConfig() const{ return m_dataCaptureConfig; }

    
    inline bool DataCaptureConfigHasBeenSet() const { return m_dataCaptureConfigHasBeenSet; }

    
    inline void SetDataCaptureConfig(const DataCaptureConfigSummary& value) { m_dataCaptureConfigHasBeenSet = true; m_dataCaptureConfig = value; }

    
    inline void SetDataCaptureConfig(DataCaptureConfigSummary&& value) { m_dataCaptureConfigHasBeenSet = true; m_dataCaptureConfig = std::move(value); }

    
    inline Endpoint& WithDataCaptureConfig(const DataCaptureConfigSummary& value) { SetDataCaptureConfig(value); return *this;}

    
    inline Endpoint& WithDataCaptureConfig(DataCaptureConfigSummary&& value) { SetDataCaptureConfig(std::move(value)); return *this;}


    /**
     * <p>The status of the endpoint.</p>
     */
    inline const EndpointStatus& GetEndpointStatus() const{ return m_endpointStatus; }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline bool EndpointStatusHasBeenSet() const { return m_endpointStatusHasBeenSet; }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline void SetEndpointStatus(const EndpointStatus& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = value; }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline void SetEndpointStatus(EndpointStatus&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = std::move(value); }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline Endpoint& WithEndpointStatus(const EndpointStatus& value) { SetEndpointStatus(value); return *this;}

    /**
     * <p>The status of the endpoint.</p>
     */
    inline Endpoint& WithEndpointStatus(EndpointStatus&& value) { SetEndpointStatus(std::move(value)); return *this;}


    /**
     * <p>If the endpoint failed, the reason it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the endpoint failed, the reason it failed.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If the endpoint failed, the reason it failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the endpoint failed, the reason it failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If the endpoint failed, the reason it failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If the endpoint failed, the reason it failed.</p>
     */
    inline Endpoint& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the endpoint failed, the reason it failed.</p>
     */
    inline Endpoint& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the endpoint failed, the reason it failed.</p>
     */
    inline Endpoint& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The time that the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the endpoint was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time that the endpoint was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time that the endpoint was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time that the endpoint was created.</p>
     */
    inline Endpoint& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the endpoint was created.</p>
     */
    inline Endpoint& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline Endpoint& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline Endpoint& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>A list of monitoring schedules for the endpoint. For information about model
     * monitoring, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor.html">Amazon
     * SageMaker Model Monitor</a>.</p>
     */
    inline const Aws::Vector<MonitoringSchedule>& GetMonitoringSchedules() const{ return m_monitoringSchedules; }

    /**
     * <p>A list of monitoring schedules for the endpoint. For information about model
     * monitoring, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor.html">Amazon
     * SageMaker Model Monitor</a>.</p>
     */
    inline bool MonitoringSchedulesHasBeenSet() const { return m_monitoringSchedulesHasBeenSet; }

    /**
     * <p>A list of monitoring schedules for the endpoint. For information about model
     * monitoring, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor.html">Amazon
     * SageMaker Model Monitor</a>.</p>
     */
    inline void SetMonitoringSchedules(const Aws::Vector<MonitoringSchedule>& value) { m_monitoringSchedulesHasBeenSet = true; m_monitoringSchedules = value; }

    /**
     * <p>A list of monitoring schedules for the endpoint. For information about model
     * monitoring, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor.html">Amazon
     * SageMaker Model Monitor</a>.</p>
     */
    inline void SetMonitoringSchedules(Aws::Vector<MonitoringSchedule>&& value) { m_monitoringSchedulesHasBeenSet = true; m_monitoringSchedules = std::move(value); }

    /**
     * <p>A list of monitoring schedules for the endpoint. For information about model
     * monitoring, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor.html">Amazon
     * SageMaker Model Monitor</a>.</p>
     */
    inline Endpoint& WithMonitoringSchedules(const Aws::Vector<MonitoringSchedule>& value) { SetMonitoringSchedules(value); return *this;}

    /**
     * <p>A list of monitoring schedules for the endpoint. For information about model
     * monitoring, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor.html">Amazon
     * SageMaker Model Monitor</a>.</p>
     */
    inline Endpoint& WithMonitoringSchedules(Aws::Vector<MonitoringSchedule>&& value) { SetMonitoringSchedules(std::move(value)); return *this;}

    /**
     * <p>A list of monitoring schedules for the endpoint. For information about model
     * monitoring, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor.html">Amazon
     * SageMaker Model Monitor</a>.</p>
     */
    inline Endpoint& AddMonitoringSchedules(const MonitoringSchedule& value) { m_monitoringSchedulesHasBeenSet = true; m_monitoringSchedules.push_back(value); return *this; }

    /**
     * <p>A list of monitoring schedules for the endpoint. For information about model
     * monitoring, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor.html">Amazon
     * SageMaker Model Monitor</a>.</p>
     */
    inline Endpoint& AddMonitoringSchedules(MonitoringSchedule&& value) { m_monitoringSchedulesHasBeenSet = true; m_monitoringSchedules.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the tags associated with the endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of the tags associated with the endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of the tags associated with the endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of the tags associated with the endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of the tags associated with the endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline Endpoint& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of the tags associated with the endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline Endpoint& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of the tags associated with the endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline Endpoint& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of the tags associated with the endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline Endpoint& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the shadow variants hosted on the endpoint. Each shadow variant is
     * a model in shadow mode with production traffic replicated from the proudction
     * variant.</p>
     */
    inline const Aws::Vector<ProductionVariantSummary>& GetShadowProductionVariants() const{ return m_shadowProductionVariants; }

    /**
     * <p>A list of the shadow variants hosted on the endpoint. Each shadow variant is
     * a model in shadow mode with production traffic replicated from the proudction
     * variant.</p>
     */
    inline bool ShadowProductionVariantsHasBeenSet() const { return m_shadowProductionVariantsHasBeenSet; }

    /**
     * <p>A list of the shadow variants hosted on the endpoint. Each shadow variant is
     * a model in shadow mode with production traffic replicated from the proudction
     * variant.</p>
     */
    inline void SetShadowProductionVariants(const Aws::Vector<ProductionVariantSummary>& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants = value; }

    /**
     * <p>A list of the shadow variants hosted on the endpoint. Each shadow variant is
     * a model in shadow mode with production traffic replicated from the proudction
     * variant.</p>
     */
    inline void SetShadowProductionVariants(Aws::Vector<ProductionVariantSummary>&& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants = std::move(value); }

    /**
     * <p>A list of the shadow variants hosted on the endpoint. Each shadow variant is
     * a model in shadow mode with production traffic replicated from the proudction
     * variant.</p>
     */
    inline Endpoint& WithShadowProductionVariants(const Aws::Vector<ProductionVariantSummary>& value) { SetShadowProductionVariants(value); return *this;}

    /**
     * <p>A list of the shadow variants hosted on the endpoint. Each shadow variant is
     * a model in shadow mode with production traffic replicated from the proudction
     * variant.</p>
     */
    inline Endpoint& WithShadowProductionVariants(Aws::Vector<ProductionVariantSummary>&& value) { SetShadowProductionVariants(std::move(value)); return *this;}

    /**
     * <p>A list of the shadow variants hosted on the endpoint. Each shadow variant is
     * a model in shadow mode with production traffic replicated from the proudction
     * variant.</p>
     */
    inline Endpoint& AddShadowProductionVariants(const ProductionVariantSummary& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants.push_back(value); return *this; }

    /**
     * <p>A list of the shadow variants hosted on the endpoint. Each shadow variant is
     * a model in shadow mode with production traffic replicated from the proudction
     * variant.</p>
     */
    inline Endpoint& AddShadowProductionVariants(ProductionVariantSummary&& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::String m_endpointConfigName;
    bool m_endpointConfigNameHasBeenSet = false;

    Aws::Vector<ProductionVariantSummary> m_productionVariants;
    bool m_productionVariantsHasBeenSet = false;

    DataCaptureConfigSummary m_dataCaptureConfig;
    bool m_dataCaptureConfigHasBeenSet = false;

    EndpointStatus m_endpointStatus;
    bool m_endpointStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Vector<MonitoringSchedule> m_monitoringSchedules;
    bool m_monitoringSchedulesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<ProductionVariantSummary> m_shadowProductionVariants;
    bool m_shadowProductionVariantsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
