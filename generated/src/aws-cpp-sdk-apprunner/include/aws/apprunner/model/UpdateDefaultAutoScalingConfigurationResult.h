/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/AutoScalingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateDefaultAutoScalingConfigurationResult
  {
  public:
    AWS_APPRUNNER_API UpdateDefaultAutoScalingConfigurationResult();
    AWS_APPRUNNER_API UpdateDefaultAutoScalingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API UpdateDefaultAutoScalingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the App Runner auto scaling configuration that was set as
     * default.</p>
     */
    inline const AutoScalingConfiguration& GetAutoScalingConfiguration() const{ return m_autoScalingConfiguration; }

    /**
     * <p>A description of the App Runner auto scaling configuration that was set as
     * default.</p>
     */
    inline void SetAutoScalingConfiguration(const AutoScalingConfiguration& value) { m_autoScalingConfiguration = value; }

    /**
     * <p>A description of the App Runner auto scaling configuration that was set as
     * default.</p>
     */
    inline void SetAutoScalingConfiguration(AutoScalingConfiguration&& value) { m_autoScalingConfiguration = std::move(value); }

    /**
     * <p>A description of the App Runner auto scaling configuration that was set as
     * default.</p>
     */
    inline UpdateDefaultAutoScalingConfigurationResult& WithAutoScalingConfiguration(const AutoScalingConfiguration& value) { SetAutoScalingConfiguration(value); return *this;}

    /**
     * <p>A description of the App Runner auto scaling configuration that was set as
     * default.</p>
     */
    inline UpdateDefaultAutoScalingConfigurationResult& WithAutoScalingConfiguration(AutoScalingConfiguration&& value) { SetAutoScalingConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateDefaultAutoScalingConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateDefaultAutoScalingConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateDefaultAutoScalingConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AutoScalingConfiguration m_autoScalingConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
