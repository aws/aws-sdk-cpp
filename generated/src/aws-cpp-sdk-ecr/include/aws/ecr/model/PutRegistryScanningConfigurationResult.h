/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/RegistryScanningConfiguration.h>
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
namespace ECR
{
namespace Model
{
  class PutRegistryScanningConfigurationResult
  {
  public:
    AWS_ECR_API PutRegistryScanningConfigurationResult() = default;
    AWS_ECR_API PutRegistryScanningConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API PutRegistryScanningConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The scanning configuration for your registry.</p>
     */
    inline const RegistryScanningConfiguration& GetRegistryScanningConfiguration() const { return m_registryScanningConfiguration; }
    template<typename RegistryScanningConfigurationT = RegistryScanningConfiguration>
    void SetRegistryScanningConfiguration(RegistryScanningConfigurationT&& value) { m_registryScanningConfigurationHasBeenSet = true; m_registryScanningConfiguration = std::forward<RegistryScanningConfigurationT>(value); }
    template<typename RegistryScanningConfigurationT = RegistryScanningConfiguration>
    PutRegistryScanningConfigurationResult& WithRegistryScanningConfiguration(RegistryScanningConfigurationT&& value) { SetRegistryScanningConfiguration(std::forward<RegistryScanningConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutRegistryScanningConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RegistryScanningConfiguration m_registryScanningConfiguration;
    bool m_registryScanningConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
