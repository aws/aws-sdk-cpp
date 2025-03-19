/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/TargetAccountConfiguration.h>
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
  class CreateTargetAccountConfigurationResult
  {
  public:
    AWS_FIS_API CreateTargetAccountConfigurationResult() = default;
    AWS_FIS_API CreateTargetAccountConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API CreateTargetAccountConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the target account configuration.</p>
     */
    inline const TargetAccountConfiguration& GetTargetAccountConfiguration() const { return m_targetAccountConfiguration; }
    template<typename TargetAccountConfigurationT = TargetAccountConfiguration>
    void SetTargetAccountConfiguration(TargetAccountConfigurationT&& value) { m_targetAccountConfigurationHasBeenSet = true; m_targetAccountConfiguration = std::forward<TargetAccountConfigurationT>(value); }
    template<typename TargetAccountConfigurationT = TargetAccountConfiguration>
    CreateTargetAccountConfigurationResult& WithTargetAccountConfiguration(TargetAccountConfigurationT&& value) { SetTargetAccountConfiguration(std::forward<TargetAccountConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTargetAccountConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TargetAccountConfiguration m_targetAccountConfiguration;
    bool m_targetAccountConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
