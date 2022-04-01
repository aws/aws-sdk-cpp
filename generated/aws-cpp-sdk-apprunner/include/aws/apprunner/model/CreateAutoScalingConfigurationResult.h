﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/AutoScalingConfiguration.h>
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
namespace AppRunner
{
namespace Model
{
  class AWS_APPRUNNER_API CreateAutoScalingConfigurationResult
  {
  public:
    CreateAutoScalingConfigurationResult();
    CreateAutoScalingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateAutoScalingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the App Runner auto scaling configuration that's created by
     * this request.</p>
     */
    inline const AutoScalingConfiguration& GetAutoScalingConfiguration() const{ return m_autoScalingConfiguration; }

    /**
     * <p>A description of the App Runner auto scaling configuration that's created by
     * this request.</p>
     */
    inline void SetAutoScalingConfiguration(const AutoScalingConfiguration& value) { m_autoScalingConfiguration = value; }

    /**
     * <p>A description of the App Runner auto scaling configuration that's created by
     * this request.</p>
     */
    inline void SetAutoScalingConfiguration(AutoScalingConfiguration&& value) { m_autoScalingConfiguration = std::move(value); }

    /**
     * <p>A description of the App Runner auto scaling configuration that's created by
     * this request.</p>
     */
    inline CreateAutoScalingConfigurationResult& WithAutoScalingConfiguration(const AutoScalingConfiguration& value) { SetAutoScalingConfiguration(value); return *this;}

    /**
     * <p>A description of the App Runner auto scaling configuration that's created by
     * this request.</p>
     */
    inline CreateAutoScalingConfigurationResult& WithAutoScalingConfiguration(AutoScalingConfiguration&& value) { SetAutoScalingConfiguration(std::move(value)); return *this;}

  private:

    AutoScalingConfiguration m_autoScalingConfiguration;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
