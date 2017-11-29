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
#include <aws/sagemaker/model/EndpointStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ProductionVariantSummary.h>
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
  class AWS_SAGEMAKER_API DescribeEndpointResult
  {
  public:
    DescribeEndpointResult();
    DescribeEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Name of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>Name of the endpoint.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointName = value; }

    /**
     * <p>Name of the endpoint.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointName = std::move(value); }

    /**
     * <p>Name of the endpoint.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointName.assign(value); }

    /**
     * <p>Name of the endpoint.</p>
     */
    inline DescribeEndpointResult& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>Name of the endpoint.</p>
     */
    inline DescribeEndpointResult& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>Name of the endpoint.</p>
     */
    inline DescribeEndpointResult& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline void SetEndpointArn(const char* value) { m_endpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline DescribeEndpointResult& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline DescribeEndpointResult& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline DescribeEndpointResult& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}


    /**
     * <p>The name of the endpoint configuration associated with this endpoint.</p>
     */
    inline const Aws::String& GetEndpointConfigName() const{ return m_endpointConfigName; }

    /**
     * <p>The name of the endpoint configuration associated with this endpoint.</p>
     */
    inline void SetEndpointConfigName(const Aws::String& value) { m_endpointConfigName = value; }

    /**
     * <p>The name of the endpoint configuration associated with this endpoint.</p>
     */
    inline void SetEndpointConfigName(Aws::String&& value) { m_endpointConfigName = std::move(value); }

    /**
     * <p>The name of the endpoint configuration associated with this endpoint.</p>
     */
    inline void SetEndpointConfigName(const char* value) { m_endpointConfigName.assign(value); }

    /**
     * <p>The name of the endpoint configuration associated with this endpoint.</p>
     */
    inline DescribeEndpointResult& WithEndpointConfigName(const Aws::String& value) { SetEndpointConfigName(value); return *this;}

    /**
     * <p>The name of the endpoint configuration associated with this endpoint.</p>
     */
    inline DescribeEndpointResult& WithEndpointConfigName(Aws::String&& value) { SetEndpointConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint configuration associated with this endpoint.</p>
     */
    inline DescribeEndpointResult& WithEndpointConfigName(const char* value) { SetEndpointConfigName(value); return *this;}


    /**
     * <p> An array of ProductionVariant objects, one for each model hosted behind this
     * endpoint. </p>
     */
    inline const Aws::Vector<ProductionVariantSummary>& GetProductionVariants() const{ return m_productionVariants; }

    /**
     * <p> An array of ProductionVariant objects, one for each model hosted behind this
     * endpoint. </p>
     */
    inline void SetProductionVariants(const Aws::Vector<ProductionVariantSummary>& value) { m_productionVariants = value; }

    /**
     * <p> An array of ProductionVariant objects, one for each model hosted behind this
     * endpoint. </p>
     */
    inline void SetProductionVariants(Aws::Vector<ProductionVariantSummary>&& value) { m_productionVariants = std::move(value); }

    /**
     * <p> An array of ProductionVariant objects, one for each model hosted behind this
     * endpoint. </p>
     */
    inline DescribeEndpointResult& WithProductionVariants(const Aws::Vector<ProductionVariantSummary>& value) { SetProductionVariants(value); return *this;}

    /**
     * <p> An array of ProductionVariant objects, one for each model hosted behind this
     * endpoint. </p>
     */
    inline DescribeEndpointResult& WithProductionVariants(Aws::Vector<ProductionVariantSummary>&& value) { SetProductionVariants(std::move(value)); return *this;}

    /**
     * <p> An array of ProductionVariant objects, one for each model hosted behind this
     * endpoint. </p>
     */
    inline DescribeEndpointResult& AddProductionVariants(const ProductionVariantSummary& value) { m_productionVariants.push_back(value); return *this; }

    /**
     * <p> An array of ProductionVariant objects, one for each model hosted behind this
     * endpoint. </p>
     */
    inline DescribeEndpointResult& AddProductionVariants(ProductionVariantSummary&& value) { m_productionVariants.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the endpoint.</p>
     */
    inline const EndpointStatus& GetEndpointStatus() const{ return m_endpointStatus; }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline void SetEndpointStatus(const EndpointStatus& value) { m_endpointStatus = value; }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline void SetEndpointStatus(EndpointStatus&& value) { m_endpointStatus = std::move(value); }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline DescribeEndpointResult& WithEndpointStatus(const EndpointStatus& value) { SetEndpointStatus(value); return *this;}

    /**
     * <p>The status of the endpoint.</p>
     */
    inline DescribeEndpointResult& WithEndpointStatus(EndpointStatus&& value) { SetEndpointStatus(std::move(value)); return *this;}


    /**
     * <p>If the status of the endpoint is <code>Failed</code>, the reason why it
     * failed. </p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the status of the endpoint is <code>Failed</code>, the reason why it
     * failed. </p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>If the status of the endpoint is <code>Failed</code>, the reason why it
     * failed. </p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>If the status of the endpoint is <code>Failed</code>, the reason why it
     * failed. </p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>If the status of the endpoint is <code>Failed</code>, the reason why it
     * failed. </p>
     */
    inline DescribeEndpointResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the status of the endpoint is <code>Failed</code>, the reason why it
     * failed. </p>
     */
    inline DescribeEndpointResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the status of the endpoint is <code>Failed</code>, the reason why it
     * failed. </p>
     */
    inline DescribeEndpointResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>A timestamp that shows when the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that shows when the endpoint was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>A timestamp that shows when the endpoint was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the endpoint was created.</p>
     */
    inline DescribeEndpointResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the endpoint was created.</p>
     */
    inline DescribeEndpointResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the endpoint was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A timestamp that shows when the endpoint was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>A timestamp that shows when the endpoint was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the endpoint was last modified.</p>
     */
    inline DescribeEndpointResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the endpoint was last modified.</p>
     */
    inline DescribeEndpointResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_endpointName;

    Aws::String m_endpointArn;

    Aws::String m_endpointConfigName;

    Aws::Vector<ProductionVariantSummary> m_productionVariants;

    EndpointStatus m_endpointStatus;

    Aws::String m_failureReason;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
