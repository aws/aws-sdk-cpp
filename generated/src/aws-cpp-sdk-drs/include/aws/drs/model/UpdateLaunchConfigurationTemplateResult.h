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
    AWS_DRS_API UpdateLaunchConfigurationTemplateResult() = default;
    AWS_DRS_API UpdateLaunchConfigurationTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API UpdateLaunchConfigurationTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Updated Launch Configuration Template.</p>
     */
    inline const LaunchConfigurationTemplate& GetLaunchConfigurationTemplate() const { return m_launchConfigurationTemplate; }
    template<typename LaunchConfigurationTemplateT = LaunchConfigurationTemplate>
    void SetLaunchConfigurationTemplate(LaunchConfigurationTemplateT&& value) { m_launchConfigurationTemplateHasBeenSet = true; m_launchConfigurationTemplate = std::forward<LaunchConfigurationTemplateT>(value); }
    template<typename LaunchConfigurationTemplateT = LaunchConfigurationTemplate>
    UpdateLaunchConfigurationTemplateResult& WithLaunchConfigurationTemplate(LaunchConfigurationTemplateT&& value) { SetLaunchConfigurationTemplate(std::forward<LaunchConfigurationTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateLaunchConfigurationTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LaunchConfigurationTemplate m_launchConfigurationTemplate;
    bool m_launchConfigurationTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
