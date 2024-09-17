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
    AWS_ECR_API BatchGetRepositoryScanningConfigurationResult();
    AWS_ECR_API BatchGetRepositoryScanningConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API BatchGetRepositoryScanningConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The scanning configuration for the requested repositories.</p>
     */
    inline const Aws::Vector<RepositoryScanningConfiguration>& GetScanningConfigurations() const{ return m_scanningConfigurations; }
    inline void SetScanningConfigurations(const Aws::Vector<RepositoryScanningConfiguration>& value) { m_scanningConfigurations = value; }
    inline void SetScanningConfigurations(Aws::Vector<RepositoryScanningConfiguration>&& value) { m_scanningConfigurations = std::move(value); }
    inline BatchGetRepositoryScanningConfigurationResult& WithScanningConfigurations(const Aws::Vector<RepositoryScanningConfiguration>& value) { SetScanningConfigurations(value); return *this;}
    inline BatchGetRepositoryScanningConfigurationResult& WithScanningConfigurations(Aws::Vector<RepositoryScanningConfiguration>&& value) { SetScanningConfigurations(std::move(value)); return *this;}
    inline BatchGetRepositoryScanningConfigurationResult& AddScanningConfigurations(const RepositoryScanningConfiguration& value) { m_scanningConfigurations.push_back(value); return *this; }
    inline BatchGetRepositoryScanningConfigurationResult& AddScanningConfigurations(RepositoryScanningConfiguration&& value) { m_scanningConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<RepositoryScanningConfigurationFailure>& GetFailures() const{ return m_failures; }
    inline void SetFailures(const Aws::Vector<RepositoryScanningConfigurationFailure>& value) { m_failures = value; }
    inline void SetFailures(Aws::Vector<RepositoryScanningConfigurationFailure>&& value) { m_failures = std::move(value); }
    inline BatchGetRepositoryScanningConfigurationResult& WithFailures(const Aws::Vector<RepositoryScanningConfigurationFailure>& value) { SetFailures(value); return *this;}
    inline BatchGetRepositoryScanningConfigurationResult& WithFailures(Aws::Vector<RepositoryScanningConfigurationFailure>&& value) { SetFailures(std::move(value)); return *this;}
    inline BatchGetRepositoryScanningConfigurationResult& AddFailures(const RepositoryScanningConfigurationFailure& value) { m_failures.push_back(value); return *this; }
    inline BatchGetRepositoryScanningConfigurationResult& AddFailures(RepositoryScanningConfigurationFailure&& value) { m_failures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetRepositoryScanningConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetRepositoryScanningConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetRepositoryScanningConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RepositoryScanningConfiguration> m_scanningConfigurations;

    Aws::Vector<RepositoryScanningConfigurationFailure> m_failures;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
