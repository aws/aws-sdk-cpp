/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/DataCaptureConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/AsyncInferenceConfig.h>
#include <aws/sagemaker/model/ExplainerConfig.h>
#include <aws/sagemaker/model/ProductionVariant.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeEndpointConfigResult
  {
  public:
    AWS_SAGEMAKER_API DescribeEndpointConfigResult();
    AWS_SAGEMAKER_API DescribeEndpointConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeEndpointConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Name of the SageMaker endpoint configuration.</p>
     */
    inline const Aws::String& GetEndpointConfigName() const{ return m_endpointConfigName; }

    /**
     * <p>Name of the SageMaker endpoint configuration.</p>
     */
    inline void SetEndpointConfigName(const Aws::String& value) { m_endpointConfigName = value; }

    /**
     * <p>Name of the SageMaker endpoint configuration.</p>
     */
    inline void SetEndpointConfigName(Aws::String&& value) { m_endpointConfigName = std::move(value); }

    /**
     * <p>Name of the SageMaker endpoint configuration.</p>
     */
    inline void SetEndpointConfigName(const char* value) { m_endpointConfigName.assign(value); }

    /**
     * <p>Name of the SageMaker endpoint configuration.</p>
     */
    inline DescribeEndpointConfigResult& WithEndpointConfigName(const Aws::String& value) { SetEndpointConfigName(value); return *this;}

    /**
     * <p>Name of the SageMaker endpoint configuration.</p>
     */
    inline DescribeEndpointConfigResult& WithEndpointConfigName(Aws::String&& value) { SetEndpointConfigName(std::move(value)); return *this;}

    /**
     * <p>Name of the SageMaker endpoint configuration.</p>
     */
    inline DescribeEndpointConfigResult& WithEndpointConfigName(const char* value) { SetEndpointConfigName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration.</p>
     */
    inline const Aws::String& GetEndpointConfigArn() const{ return m_endpointConfigArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration.</p>
     */
    inline void SetEndpointConfigArn(const Aws::String& value) { m_endpointConfigArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration.</p>
     */
    inline void SetEndpointConfigArn(Aws::String&& value) { m_endpointConfigArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration.</p>
     */
    inline void SetEndpointConfigArn(const char* value) { m_endpointConfigArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration.</p>
     */
    inline DescribeEndpointConfigResult& WithEndpointConfigArn(const Aws::String& value) { SetEndpointConfigArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration.</p>
     */
    inline DescribeEndpointConfigResult& WithEndpointConfigArn(Aws::String&& value) { SetEndpointConfigArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration.</p>
     */
    inline DescribeEndpointConfigResult& WithEndpointConfigArn(const char* value) { SetEndpointConfigArn(value); return *this;}


    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline const Aws::Vector<ProductionVariant>& GetProductionVariants() const{ return m_productionVariants; }

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline void SetProductionVariants(const Aws::Vector<ProductionVariant>& value) { m_productionVariants = value; }

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline void SetProductionVariants(Aws::Vector<ProductionVariant>&& value) { m_productionVariants = std::move(value); }

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline DescribeEndpointConfigResult& WithProductionVariants(const Aws::Vector<ProductionVariant>& value) { SetProductionVariants(value); return *this;}

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline DescribeEndpointConfigResult& WithProductionVariants(Aws::Vector<ProductionVariant>&& value) { SetProductionVariants(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline DescribeEndpointConfigResult& AddProductionVariants(const ProductionVariant& value) { m_productionVariants.push_back(value); return *this; }

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline DescribeEndpointConfigResult& AddProductionVariants(ProductionVariant&& value) { m_productionVariants.push_back(std::move(value)); return *this; }


    
    inline const DataCaptureConfig& GetDataCaptureConfig() const{ return m_dataCaptureConfig; }

    
    inline void SetDataCaptureConfig(const DataCaptureConfig& value) { m_dataCaptureConfig = value; }

    
    inline void SetDataCaptureConfig(DataCaptureConfig&& value) { m_dataCaptureConfig = std::move(value); }

    
    inline DescribeEndpointConfigResult& WithDataCaptureConfig(const DataCaptureConfig& value) { SetDataCaptureConfig(value); return *this;}

    
    inline DescribeEndpointConfigResult& WithDataCaptureConfig(DataCaptureConfig&& value) { SetDataCaptureConfig(std::move(value)); return *this;}


    /**
     * <p>Amazon Web Services KMS key ID Amazon SageMaker uses to encrypt data when
     * storing it on the ML storage volume attached to the instance.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>Amazon Web Services KMS key ID Amazon SageMaker uses to encrypt data when
     * storing it on the ML storage volume attached to the instance.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>Amazon Web Services KMS key ID Amazon SageMaker uses to encrypt data when
     * storing it on the ML storage volume attached to the instance.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>Amazon Web Services KMS key ID Amazon SageMaker uses to encrypt data when
     * storing it on the ML storage volume attached to the instance.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>Amazon Web Services KMS key ID Amazon SageMaker uses to encrypt data when
     * storing it on the ML storage volume attached to the instance.</p>
     */
    inline DescribeEndpointConfigResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>Amazon Web Services KMS key ID Amazon SageMaker uses to encrypt data when
     * storing it on the ML storage volume attached to the instance.</p>
     */
    inline DescribeEndpointConfigResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Amazon Web Services KMS key ID Amazon SageMaker uses to encrypt data when
     * storing it on the ML storage volume attached to the instance.</p>
     */
    inline DescribeEndpointConfigResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>A timestamp that shows when the endpoint configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that shows when the endpoint configuration was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>A timestamp that shows when the endpoint configuration was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the endpoint configuration was created.</p>
     */
    inline DescribeEndpointConfigResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the endpoint configuration was created.</p>
     */
    inline DescribeEndpointConfigResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Returns the description of an endpoint configuration created using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpointConfig.html">
     * <code>CreateEndpointConfig</code> </a> API.</p>
     */
    inline const AsyncInferenceConfig& GetAsyncInferenceConfig() const{ return m_asyncInferenceConfig; }

    /**
     * <p>Returns the description of an endpoint configuration created using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpointConfig.html">
     * <code>CreateEndpointConfig</code> </a> API.</p>
     */
    inline void SetAsyncInferenceConfig(const AsyncInferenceConfig& value) { m_asyncInferenceConfig = value; }

    /**
     * <p>Returns the description of an endpoint configuration created using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpointConfig.html">
     * <code>CreateEndpointConfig</code> </a> API.</p>
     */
    inline void SetAsyncInferenceConfig(AsyncInferenceConfig&& value) { m_asyncInferenceConfig = std::move(value); }

    /**
     * <p>Returns the description of an endpoint configuration created using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpointConfig.html">
     * <code>CreateEndpointConfig</code> </a> API.</p>
     */
    inline DescribeEndpointConfigResult& WithAsyncInferenceConfig(const AsyncInferenceConfig& value) { SetAsyncInferenceConfig(value); return *this;}

    /**
     * <p>Returns the description of an endpoint configuration created using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpointConfig.html">
     * <code>CreateEndpointConfig</code> </a> API.</p>
     */
    inline DescribeEndpointConfigResult& WithAsyncInferenceConfig(AsyncInferenceConfig&& value) { SetAsyncInferenceConfig(std::move(value)); return *this;}


    /**
     * <p>The configuration parameters for an explainer.</p>
     */
    inline const ExplainerConfig& GetExplainerConfig() const{ return m_explainerConfig; }

    /**
     * <p>The configuration parameters for an explainer.</p>
     */
    inline void SetExplainerConfig(const ExplainerConfig& value) { m_explainerConfig = value; }

    /**
     * <p>The configuration parameters for an explainer.</p>
     */
    inline void SetExplainerConfig(ExplainerConfig&& value) { m_explainerConfig = std::move(value); }

    /**
     * <p>The configuration parameters for an explainer.</p>
     */
    inline DescribeEndpointConfigResult& WithExplainerConfig(const ExplainerConfig& value) { SetExplainerConfig(value); return *this;}

    /**
     * <p>The configuration parameters for an explainer.</p>
     */
    inline DescribeEndpointConfigResult& WithExplainerConfig(ExplainerConfig&& value) { SetExplainerConfig(std::move(value)); return *this;}


    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code>.</p>
     */
    inline const Aws::Vector<ProductionVariant>& GetShadowProductionVariants() const{ return m_shadowProductionVariants; }

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code>.</p>
     */
    inline void SetShadowProductionVariants(const Aws::Vector<ProductionVariant>& value) { m_shadowProductionVariants = value; }

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code>.</p>
     */
    inline void SetShadowProductionVariants(Aws::Vector<ProductionVariant>&& value) { m_shadowProductionVariants = std::move(value); }

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code>.</p>
     */
    inline DescribeEndpointConfigResult& WithShadowProductionVariants(const Aws::Vector<ProductionVariant>& value) { SetShadowProductionVariants(value); return *this;}

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code>.</p>
     */
    inline DescribeEndpointConfigResult& WithShadowProductionVariants(Aws::Vector<ProductionVariant>&& value) { SetShadowProductionVariants(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code>.</p>
     */
    inline DescribeEndpointConfigResult& AddShadowProductionVariants(const ProductionVariant& value) { m_shadowProductionVariants.push_back(value); return *this; }

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code>.</p>
     */
    inline DescribeEndpointConfigResult& AddShadowProductionVariants(ProductionVariant&& value) { m_shadowProductionVariants.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_endpointConfigName;

    Aws::String m_endpointConfigArn;

    Aws::Vector<ProductionVariant> m_productionVariants;

    DataCaptureConfig m_dataCaptureConfig;

    Aws::String m_kmsKeyId;

    Aws::Utils::DateTime m_creationTime;

    AsyncInferenceConfig m_asyncInferenceConfig;

    ExplainerConfig m_explainerConfig;

    Aws::Vector<ProductionVariant> m_shadowProductionVariants;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
