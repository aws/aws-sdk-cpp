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
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/EndpointStatus.h>
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
   * <p>Provides summary information for an endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EndpointSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API EndpointSummary
  {
  public:
    EndpointSummary();
    EndpointSummary(Aws::Utils::Json::JsonView jsonValue);
    EndpointSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline EndpointSummary& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of the endpoint.</p>
     */
    inline EndpointSummary& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint.</p>
     */
    inline EndpointSummary& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


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
    inline EndpointSummary& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline EndpointSummary& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline EndpointSummary& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}


    /**
     * <p>A timestamp that shows when the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that shows when the endpoint was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the endpoint was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that shows when the endpoint was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the endpoint was created.</p>
     */
    inline EndpointSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the endpoint was created.</p>
     */
    inline EndpointSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the endpoint was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A timestamp that shows when the endpoint was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the endpoint was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>A timestamp that shows when the endpoint was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the endpoint was last modified.</p>
     */
    inline EndpointSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the endpoint was last modified.</p>
     */
    inline EndpointSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The status of the endpoint.</p> <ul> <li> <p> <code>OutOfService</code>:
     * Endpoint is not available to take incoming requests.</p> </li> <li> <p>
     * <code>Creating</code>: <a>CreateEndpoint</a> is executing.</p> </li> <li> <p>
     * <code>Updating</code>: <a>UpdateEndpoint</a> or
     * <a>UpdateEndpointWeightsAndCapacities</a> is executing.</p> </li> <li> <p>
     * <code>SystemUpdating</code>: Endpoint is undergoing maintenance and cannot be
     * updated or deleted or re-scaled until it has completed. This maintenance
     * operation does not change any customer-specified values such as VPC config, KMS
     * encryption, model, instance type, or instance count.</p> </li> <li> <p>
     * <code>RollingBack</code>: Endpoint fails to scale up or down or change its
     * variant weight and is in the process of rolling back to its previous
     * configuration. Once the rollback completes, endpoint returns to an
     * <code>InService</code> status. This transitional status only applies to an
     * endpoint that has autoscaling enabled and is undergoing variant weight or
     * capacity changes as part of an <a>UpdateEndpointWeightsAndCapacities</a> call or
     * when the <a>UpdateEndpointWeightsAndCapacities</a> operation is called
     * explicitly.</p> </li> <li> <p> <code>InService</code>: Endpoint is available to
     * process incoming requests.</p> </li> <li> <p> <code>Deleting</code>:
     * <a>DeleteEndpoint</a> is executing.</p> </li> <li> <p> <code>Failed</code>:
     * Endpoint could not be created, updated, or re-scaled. Use
     * <a>DescribeEndpointOutput$FailureReason</a> for information about the failure.
     * <a>DeleteEndpoint</a> is the only operation that can be performed on a failed
     * endpoint.</p> </li> </ul> <p>To get a list of endpoints with a specified status,
     * use the <a>ListEndpointsInput$StatusEquals</a> filter.</p>
     */
    inline const EndpointStatus& GetEndpointStatus() const{ return m_endpointStatus; }

    /**
     * <p>The status of the endpoint.</p> <ul> <li> <p> <code>OutOfService</code>:
     * Endpoint is not available to take incoming requests.</p> </li> <li> <p>
     * <code>Creating</code>: <a>CreateEndpoint</a> is executing.</p> </li> <li> <p>
     * <code>Updating</code>: <a>UpdateEndpoint</a> or
     * <a>UpdateEndpointWeightsAndCapacities</a> is executing.</p> </li> <li> <p>
     * <code>SystemUpdating</code>: Endpoint is undergoing maintenance and cannot be
     * updated or deleted or re-scaled until it has completed. This maintenance
     * operation does not change any customer-specified values such as VPC config, KMS
     * encryption, model, instance type, or instance count.</p> </li> <li> <p>
     * <code>RollingBack</code>: Endpoint fails to scale up or down or change its
     * variant weight and is in the process of rolling back to its previous
     * configuration. Once the rollback completes, endpoint returns to an
     * <code>InService</code> status. This transitional status only applies to an
     * endpoint that has autoscaling enabled and is undergoing variant weight or
     * capacity changes as part of an <a>UpdateEndpointWeightsAndCapacities</a> call or
     * when the <a>UpdateEndpointWeightsAndCapacities</a> operation is called
     * explicitly.</p> </li> <li> <p> <code>InService</code>: Endpoint is available to
     * process incoming requests.</p> </li> <li> <p> <code>Deleting</code>:
     * <a>DeleteEndpoint</a> is executing.</p> </li> <li> <p> <code>Failed</code>:
     * Endpoint could not be created, updated, or re-scaled. Use
     * <a>DescribeEndpointOutput$FailureReason</a> for information about the failure.
     * <a>DeleteEndpoint</a> is the only operation that can be performed on a failed
     * endpoint.</p> </li> </ul> <p>To get a list of endpoints with a specified status,
     * use the <a>ListEndpointsInput$StatusEquals</a> filter.</p>
     */
    inline bool EndpointStatusHasBeenSet() const { return m_endpointStatusHasBeenSet; }

    /**
     * <p>The status of the endpoint.</p> <ul> <li> <p> <code>OutOfService</code>:
     * Endpoint is not available to take incoming requests.</p> </li> <li> <p>
     * <code>Creating</code>: <a>CreateEndpoint</a> is executing.</p> </li> <li> <p>
     * <code>Updating</code>: <a>UpdateEndpoint</a> or
     * <a>UpdateEndpointWeightsAndCapacities</a> is executing.</p> </li> <li> <p>
     * <code>SystemUpdating</code>: Endpoint is undergoing maintenance and cannot be
     * updated or deleted or re-scaled until it has completed. This maintenance
     * operation does not change any customer-specified values such as VPC config, KMS
     * encryption, model, instance type, or instance count.</p> </li> <li> <p>
     * <code>RollingBack</code>: Endpoint fails to scale up or down or change its
     * variant weight and is in the process of rolling back to its previous
     * configuration. Once the rollback completes, endpoint returns to an
     * <code>InService</code> status. This transitional status only applies to an
     * endpoint that has autoscaling enabled and is undergoing variant weight or
     * capacity changes as part of an <a>UpdateEndpointWeightsAndCapacities</a> call or
     * when the <a>UpdateEndpointWeightsAndCapacities</a> operation is called
     * explicitly.</p> </li> <li> <p> <code>InService</code>: Endpoint is available to
     * process incoming requests.</p> </li> <li> <p> <code>Deleting</code>:
     * <a>DeleteEndpoint</a> is executing.</p> </li> <li> <p> <code>Failed</code>:
     * Endpoint could not be created, updated, or re-scaled. Use
     * <a>DescribeEndpointOutput$FailureReason</a> for information about the failure.
     * <a>DeleteEndpoint</a> is the only operation that can be performed on a failed
     * endpoint.</p> </li> </ul> <p>To get a list of endpoints with a specified status,
     * use the <a>ListEndpointsInput$StatusEquals</a> filter.</p>
     */
    inline void SetEndpointStatus(const EndpointStatus& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = value; }

    /**
     * <p>The status of the endpoint.</p> <ul> <li> <p> <code>OutOfService</code>:
     * Endpoint is not available to take incoming requests.</p> </li> <li> <p>
     * <code>Creating</code>: <a>CreateEndpoint</a> is executing.</p> </li> <li> <p>
     * <code>Updating</code>: <a>UpdateEndpoint</a> or
     * <a>UpdateEndpointWeightsAndCapacities</a> is executing.</p> </li> <li> <p>
     * <code>SystemUpdating</code>: Endpoint is undergoing maintenance and cannot be
     * updated or deleted or re-scaled until it has completed. This maintenance
     * operation does not change any customer-specified values such as VPC config, KMS
     * encryption, model, instance type, or instance count.</p> </li> <li> <p>
     * <code>RollingBack</code>: Endpoint fails to scale up or down or change its
     * variant weight and is in the process of rolling back to its previous
     * configuration. Once the rollback completes, endpoint returns to an
     * <code>InService</code> status. This transitional status only applies to an
     * endpoint that has autoscaling enabled and is undergoing variant weight or
     * capacity changes as part of an <a>UpdateEndpointWeightsAndCapacities</a> call or
     * when the <a>UpdateEndpointWeightsAndCapacities</a> operation is called
     * explicitly.</p> </li> <li> <p> <code>InService</code>: Endpoint is available to
     * process incoming requests.</p> </li> <li> <p> <code>Deleting</code>:
     * <a>DeleteEndpoint</a> is executing.</p> </li> <li> <p> <code>Failed</code>:
     * Endpoint could not be created, updated, or re-scaled. Use
     * <a>DescribeEndpointOutput$FailureReason</a> for information about the failure.
     * <a>DeleteEndpoint</a> is the only operation that can be performed on a failed
     * endpoint.</p> </li> </ul> <p>To get a list of endpoints with a specified status,
     * use the <a>ListEndpointsInput$StatusEquals</a> filter.</p>
     */
    inline void SetEndpointStatus(EndpointStatus&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = std::move(value); }

    /**
     * <p>The status of the endpoint.</p> <ul> <li> <p> <code>OutOfService</code>:
     * Endpoint is not available to take incoming requests.</p> </li> <li> <p>
     * <code>Creating</code>: <a>CreateEndpoint</a> is executing.</p> </li> <li> <p>
     * <code>Updating</code>: <a>UpdateEndpoint</a> or
     * <a>UpdateEndpointWeightsAndCapacities</a> is executing.</p> </li> <li> <p>
     * <code>SystemUpdating</code>: Endpoint is undergoing maintenance and cannot be
     * updated or deleted or re-scaled until it has completed. This maintenance
     * operation does not change any customer-specified values such as VPC config, KMS
     * encryption, model, instance type, or instance count.</p> </li> <li> <p>
     * <code>RollingBack</code>: Endpoint fails to scale up or down or change its
     * variant weight and is in the process of rolling back to its previous
     * configuration. Once the rollback completes, endpoint returns to an
     * <code>InService</code> status. This transitional status only applies to an
     * endpoint that has autoscaling enabled and is undergoing variant weight or
     * capacity changes as part of an <a>UpdateEndpointWeightsAndCapacities</a> call or
     * when the <a>UpdateEndpointWeightsAndCapacities</a> operation is called
     * explicitly.</p> </li> <li> <p> <code>InService</code>: Endpoint is available to
     * process incoming requests.</p> </li> <li> <p> <code>Deleting</code>:
     * <a>DeleteEndpoint</a> is executing.</p> </li> <li> <p> <code>Failed</code>:
     * Endpoint could not be created, updated, or re-scaled. Use
     * <a>DescribeEndpointOutput$FailureReason</a> for information about the failure.
     * <a>DeleteEndpoint</a> is the only operation that can be performed on a failed
     * endpoint.</p> </li> </ul> <p>To get a list of endpoints with a specified status,
     * use the <a>ListEndpointsInput$StatusEquals</a> filter.</p>
     */
    inline EndpointSummary& WithEndpointStatus(const EndpointStatus& value) { SetEndpointStatus(value); return *this;}

    /**
     * <p>The status of the endpoint.</p> <ul> <li> <p> <code>OutOfService</code>:
     * Endpoint is not available to take incoming requests.</p> </li> <li> <p>
     * <code>Creating</code>: <a>CreateEndpoint</a> is executing.</p> </li> <li> <p>
     * <code>Updating</code>: <a>UpdateEndpoint</a> or
     * <a>UpdateEndpointWeightsAndCapacities</a> is executing.</p> </li> <li> <p>
     * <code>SystemUpdating</code>: Endpoint is undergoing maintenance and cannot be
     * updated or deleted or re-scaled until it has completed. This maintenance
     * operation does not change any customer-specified values such as VPC config, KMS
     * encryption, model, instance type, or instance count.</p> </li> <li> <p>
     * <code>RollingBack</code>: Endpoint fails to scale up or down or change its
     * variant weight and is in the process of rolling back to its previous
     * configuration. Once the rollback completes, endpoint returns to an
     * <code>InService</code> status. This transitional status only applies to an
     * endpoint that has autoscaling enabled and is undergoing variant weight or
     * capacity changes as part of an <a>UpdateEndpointWeightsAndCapacities</a> call or
     * when the <a>UpdateEndpointWeightsAndCapacities</a> operation is called
     * explicitly.</p> </li> <li> <p> <code>InService</code>: Endpoint is available to
     * process incoming requests.</p> </li> <li> <p> <code>Deleting</code>:
     * <a>DeleteEndpoint</a> is executing.</p> </li> <li> <p> <code>Failed</code>:
     * Endpoint could not be created, updated, or re-scaled. Use
     * <a>DescribeEndpointOutput$FailureReason</a> for information about the failure.
     * <a>DeleteEndpoint</a> is the only operation that can be performed on a failed
     * endpoint.</p> </li> </ul> <p>To get a list of endpoints with a specified status,
     * use the <a>ListEndpointsInput$StatusEquals</a> filter.</p>
     */
    inline EndpointSummary& WithEndpointStatus(EndpointStatus&& value) { SetEndpointStatus(std::move(value)); return *this;}

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet;

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    EndpointStatus m_endpointStatus;
    bool m_endpointStatusHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
