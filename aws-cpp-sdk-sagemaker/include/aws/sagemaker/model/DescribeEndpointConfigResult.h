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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
  class AWS_SAGEMAKER_API DescribeEndpointConfigResult
  {
  public:
    DescribeEndpointConfigResult();
    DescribeEndpointConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEndpointConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Name of the Amazon SageMaker endpoint configuration.</p>
     */
    inline const Aws::String& GetEndpointConfigName() const{ return m_endpointConfigName; }

    /**
     * <p>Name of the Amazon SageMaker endpoint configuration.</p>
     */
    inline void SetEndpointConfigName(const Aws::String& value) { m_endpointConfigName = value; }

    /**
     * <p>Name of the Amazon SageMaker endpoint configuration.</p>
     */
    inline void SetEndpointConfigName(Aws::String&& value) { m_endpointConfigName = std::move(value); }

    /**
     * <p>Name of the Amazon SageMaker endpoint configuration.</p>
     */
    inline void SetEndpointConfigName(const char* value) { m_endpointConfigName.assign(value); }

    /**
     * <p>Name of the Amazon SageMaker endpoint configuration.</p>
     */
    inline DescribeEndpointConfigResult& WithEndpointConfigName(const Aws::String& value) { SetEndpointConfigName(value); return *this;}

    /**
     * <p>Name of the Amazon SageMaker endpoint configuration.</p>
     */
    inline DescribeEndpointConfigResult& WithEndpointConfigName(Aws::String&& value) { SetEndpointConfigName(std::move(value)); return *this;}

    /**
     * <p>Name of the Amazon SageMaker endpoint configuration.</p>
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


    /**
     * <p>AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on the
     * ML storage volume attached to the instance.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on the
     * ML storage volume attached to the instance.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on the
     * ML storage volume attached to the instance.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on the
     * ML storage volume attached to the instance.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on the
     * ML storage volume attached to the instance.</p>
     */
    inline DescribeEndpointConfigResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on the
     * ML storage volume attached to the instance.</p>
     */
    inline DescribeEndpointConfigResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on the
     * ML storage volume attached to the instance.</p>
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

  private:

    Aws::String m_endpointConfigName;

    Aws::String m_endpointConfigArn;

    Aws::Vector<ProductionVariant> m_productionVariants;

    Aws::String m_kmsKeyId;

    Aws::Utils::DateTime m_creationTime;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
