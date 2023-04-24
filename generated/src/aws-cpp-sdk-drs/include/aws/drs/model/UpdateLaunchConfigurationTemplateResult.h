/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/LaunchConfigurationTemplate.h>
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
namespace drs
{
namespace Model
{
  class UpdateLaunchConfigurationTemplateResult
  {
  public:
    AWS_DRS_API UpdateLaunchConfigurationTemplateResult();
    AWS_DRS_API UpdateLaunchConfigurationTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API UpdateLaunchConfigurationTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Updated Launch Configuration Template.</p>
     */
    inline const LaunchConfigurationTemplate& GetLaunchConfigurationTemplate() const{ return m_launchConfigurationTemplate; }

    /**
     * <p>Updated Launch Configuration Template.</p>
     */
    inline void SetLaunchConfigurationTemplate(const LaunchConfigurationTemplate& value) { m_launchConfigurationTemplate = value; }

    /**
     * <p>Updated Launch Configuration Template.</p>
     */
    inline void SetLaunchConfigurationTemplate(LaunchConfigurationTemplate&& value) { m_launchConfigurationTemplate = std::move(value); }

    /**
     * <p>Updated Launch Configuration Template.</p>
     */
    inline UpdateLaunchConfigurationTemplateResult& WithLaunchConfigurationTemplate(const LaunchConfigurationTemplate& value) { SetLaunchConfigurationTemplate(value); return *this;}

    /**
     * <p>Updated Launch Configuration Template.</p>
     */
    inline UpdateLaunchConfigurationTemplateResult& WithLaunchConfigurationTemplate(LaunchConfigurationTemplate&& value) { SetLaunchConfigurationTemplate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateLaunchConfigurationTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateLaunchConfigurationTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateLaunchConfigurationTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LaunchConfigurationTemplate m_launchConfigurationTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
