/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/RepositoryScanningConfiguration.h>
#include <aws/ecr/model/RepositoryScanningConfigurationFailure.h>
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
  class BatchGetRepositoryScanningConfigurationResult
  {
  public:
    AWS_ECR_API BatchGetRepositoryScanningConfigurationResult() = default;
    AWS_ECR_API BatchGetRepositoryScanningConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API BatchGetRepositoryScanningConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The scanning configuration for the requested repositories.</p>
     */
    inline const Aws::Vector<RepositoryScanningConfiguration>& GetScanningConfigurations() const { return m_scanningConfigurations; }
    template<typename ScanningConfigurationsT = Aws::Vector<RepositoryScanningConfiguration>>
    void SetScanningConfigurations(ScanningConfigurationsT&& value) { m_scanningConfigurationsHasBeenSet = true; m_scanningConfigurations = std::forward<ScanningConfigurationsT>(value); }
    template<typename ScanningConfigurationsT = Aws::Vector<RepositoryScanningConfiguration>>
    BatchGetRepositoryScanningConfigurationResult& WithScanningConfigurations(ScanningConfigurationsT&& value) { SetScanningConfigurations(std::forward<ScanningConfigurationsT>(value)); return *this;}
    template<typename ScanningConfigurationsT = RepositoryScanningConfiguration>
    BatchGetRepositoryScanningConfigurationResult& AddScanningConfigurations(ScanningConfigurationsT&& value) { m_scanningConfigurationsHasBeenSet = true; m_scanningConfigurations.emplace_back(std::forward<ScanningConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<RepositoryScanningConfigurationFailure>& GetFailures() const { return m_failures; }
    template<typename FailuresT = Aws::Vector<RepositoryScanningConfigurationFailure>>
    void SetFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures = std::forward<FailuresT>(value); }
    template<typename FailuresT = Aws::Vector<RepositoryScanningConfigurationFailure>>
    BatchGetRepositoryScanningConfigurationResult& WithFailures(FailuresT&& value) { SetFailures(std::forward<FailuresT>(value)); return *this;}
    template<typename FailuresT = RepositoryScanningConfigurationFailure>
    BatchGetRepositoryScanningConfigurationResult& AddFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures.emplace_back(std::forward<FailuresT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetRepositoryScanningConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RepositoryScanningConfiguration> m_scanningConfigurations;
    bool m_scanningConfigurationsHasBeenSet = false;

    Aws::Vector<RepositoryScanningConfigurationFailure> m_failures;
    bool m_failuresHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
