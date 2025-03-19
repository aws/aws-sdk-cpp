/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ExperimentTargetAccountConfiguration.h>
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
namespace FIS
{
namespace Model
{
  class GetExperimentTargetAccountConfigurationResult
  {
  public:
    AWS_FIS_API GetExperimentTargetAccountConfigurationResult() = default;
    AWS_FIS_API GetExperimentTargetAccountConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API GetExperimentTargetAccountConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the target account configuration.</p>
     */
    inline const ExperimentTargetAccountConfiguration& GetTargetAccountConfiguration() const { return m_targetAccountConfiguration; }
    template<typename TargetAccountConfigurationT = ExperimentTargetAccountConfiguration>
    void SetTargetAccountConfiguration(TargetAccountConfigurationT&& value) { m_targetAccountConfigurationHasBeenSet = true; m_targetAccountConfiguration = std::forward<TargetAccountConfigurationT>(value); }
    template<typename TargetAccountConfigurationT = ExperimentTargetAccountConfiguration>
    GetExperimentTargetAccountConfigurationResult& WithTargetAccountConfiguration(TargetAccountConfigurationT&& value) { SetTargetAccountConfiguration(std::forward<TargetAccountConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetExperimentTargetAccountConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ExperimentTargetAccountConfiguration m_targetAccountConfiguration;
    bool m_targetAccountConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
