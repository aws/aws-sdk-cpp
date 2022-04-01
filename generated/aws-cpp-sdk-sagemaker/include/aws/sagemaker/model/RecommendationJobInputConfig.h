﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrafficPattern.h>
#include <aws/sagemaker/model/RecommendationJobResourceLimit.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/EndpointInputConfiguration.h>
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
   * <p>The input configuration of the recommendation job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RecommendationJobInputConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API RecommendationJobInputConfig
  {
  public:
    RecommendationJobInputConfig();
    RecommendationJobInputConfig(Aws::Utils::Json::JsonView jsonValue);
    RecommendationJobInputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package.</p>
     */
    inline const Aws::String& GetModelPackageVersionArn() const{ return m_modelPackageVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package.</p>
     */
    inline bool ModelPackageVersionArnHasBeenSet() const { return m_modelPackageVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package.</p>
     */
    inline void SetModelPackageVersionArn(const Aws::String& value) { m_modelPackageVersionArnHasBeenSet = true; m_modelPackageVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package.</p>
     */
    inline void SetModelPackageVersionArn(Aws::String&& value) { m_modelPackageVersionArnHasBeenSet = true; m_modelPackageVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package.</p>
     */
    inline void SetModelPackageVersionArn(const char* value) { m_modelPackageVersionArnHasBeenSet = true; m_modelPackageVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package.</p>
     */
    inline RecommendationJobInputConfig& WithModelPackageVersionArn(const Aws::String& value) { SetModelPackageVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package.</p>
     */
    inline RecommendationJobInputConfig& WithModelPackageVersionArn(Aws::String&& value) { SetModelPackageVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package.</p>
     */
    inline RecommendationJobInputConfig& WithModelPackageVersionArn(const char* value) { SetModelPackageVersionArn(value); return *this;}


    /**
     * <p>Specifies the maximum duration of the job, in seconds.&gt;</p>
     */
    inline int GetJobDurationInSeconds() const{ return m_jobDurationInSeconds; }

    /**
     * <p>Specifies the maximum duration of the job, in seconds.&gt;</p>
     */
    inline bool JobDurationInSecondsHasBeenSet() const { return m_jobDurationInSecondsHasBeenSet; }

    /**
     * <p>Specifies the maximum duration of the job, in seconds.&gt;</p>
     */
    inline void SetJobDurationInSeconds(int value) { m_jobDurationInSecondsHasBeenSet = true; m_jobDurationInSeconds = value; }

    /**
     * <p>Specifies the maximum duration of the job, in seconds.&gt;</p>
     */
    inline RecommendationJobInputConfig& WithJobDurationInSeconds(int value) { SetJobDurationInSeconds(value); return *this;}


    /**
     * <p>Specifies the traffic pattern of the job.</p>
     */
    inline const TrafficPattern& GetTrafficPattern() const{ return m_trafficPattern; }

    /**
     * <p>Specifies the traffic pattern of the job.</p>
     */
    inline bool TrafficPatternHasBeenSet() const { return m_trafficPatternHasBeenSet; }

    /**
     * <p>Specifies the traffic pattern of the job.</p>
     */
    inline void SetTrafficPattern(const TrafficPattern& value) { m_trafficPatternHasBeenSet = true; m_trafficPattern = value; }

    /**
     * <p>Specifies the traffic pattern of the job.</p>
     */
    inline void SetTrafficPattern(TrafficPattern&& value) { m_trafficPatternHasBeenSet = true; m_trafficPattern = std::move(value); }

    /**
     * <p>Specifies the traffic pattern of the job.</p>
     */
    inline RecommendationJobInputConfig& WithTrafficPattern(const TrafficPattern& value) { SetTrafficPattern(value); return *this;}

    /**
     * <p>Specifies the traffic pattern of the job.</p>
     */
    inline RecommendationJobInputConfig& WithTrafficPattern(TrafficPattern&& value) { SetTrafficPattern(std::move(value)); return *this;}


    /**
     * <p>Defines the resource limit of the job.</p>
     */
    inline const RecommendationJobResourceLimit& GetResourceLimit() const{ return m_resourceLimit; }

    /**
     * <p>Defines the resource limit of the job.</p>
     */
    inline bool ResourceLimitHasBeenSet() const { return m_resourceLimitHasBeenSet; }

    /**
     * <p>Defines the resource limit of the job.</p>
     */
    inline void SetResourceLimit(const RecommendationJobResourceLimit& value) { m_resourceLimitHasBeenSet = true; m_resourceLimit = value; }

    /**
     * <p>Defines the resource limit of the job.</p>
     */
    inline void SetResourceLimit(RecommendationJobResourceLimit&& value) { m_resourceLimitHasBeenSet = true; m_resourceLimit = std::move(value); }

    /**
     * <p>Defines the resource limit of the job.</p>
     */
    inline RecommendationJobInputConfig& WithResourceLimit(const RecommendationJobResourceLimit& value) { SetResourceLimit(value); return *this;}

    /**
     * <p>Defines the resource limit of the job.</p>
     */
    inline RecommendationJobInputConfig& WithResourceLimit(RecommendationJobResourceLimit&& value) { SetResourceLimit(std::move(value)); return *this;}


    /**
     * <p>Specifies the endpoint configuration to use for a job.</p>
     */
    inline const Aws::Vector<EndpointInputConfiguration>& GetEndpointConfigurations() const{ return m_endpointConfigurations; }

    /**
     * <p>Specifies the endpoint configuration to use for a job.</p>
     */
    inline bool EndpointConfigurationsHasBeenSet() const { return m_endpointConfigurationsHasBeenSet; }

    /**
     * <p>Specifies the endpoint configuration to use for a job.</p>
     */
    inline void SetEndpointConfigurations(const Aws::Vector<EndpointInputConfiguration>& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations = value; }

    /**
     * <p>Specifies the endpoint configuration to use for a job.</p>
     */
    inline void SetEndpointConfigurations(Aws::Vector<EndpointInputConfiguration>&& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations = std::move(value); }

    /**
     * <p>Specifies the endpoint configuration to use for a job.</p>
     */
    inline RecommendationJobInputConfig& WithEndpointConfigurations(const Aws::Vector<EndpointInputConfiguration>& value) { SetEndpointConfigurations(value); return *this;}

    /**
     * <p>Specifies the endpoint configuration to use for a job.</p>
     */
    inline RecommendationJobInputConfig& WithEndpointConfigurations(Aws::Vector<EndpointInputConfiguration>&& value) { SetEndpointConfigurations(std::move(value)); return *this;}

    /**
     * <p>Specifies the endpoint configuration to use for a job.</p>
     */
    inline RecommendationJobInputConfig& AddEndpointConfigurations(const EndpointInputConfiguration& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations.push_back(value); return *this; }

    /**
     * <p>Specifies the endpoint configuration to use for a job.</p>
     */
    inline RecommendationJobInputConfig& AddEndpointConfigurations(EndpointInputConfiguration&& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_modelPackageVersionArn;
    bool m_modelPackageVersionArnHasBeenSet;

    int m_jobDurationInSeconds;
    bool m_jobDurationInSecondsHasBeenSet;

    TrafficPattern m_trafficPattern;
    bool m_trafficPatternHasBeenSet;

    RecommendationJobResourceLimit m_resourceLimit;
    bool m_resourceLimitHasBeenSet;

    Aws::Vector<EndpointInputConfiguration> m_endpointConfigurations;
    bool m_endpointConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
