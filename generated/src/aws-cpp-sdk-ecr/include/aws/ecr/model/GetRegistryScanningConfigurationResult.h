/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/RegistryScanningConfiguration.h>
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
  class GetRegistryScanningConfigurationResult
  {
  public:
    AWS_ECR_API GetRegistryScanningConfigurationResult();
    AWS_ECR_API GetRegistryScanningConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API GetRegistryScanningConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }
    inline GetRegistryScanningConfigurationResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline GetRegistryScanningConfigurationResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline GetRegistryScanningConfigurationResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scanning configuration for the registry.</p>
     */
    inline const RegistryScanningConfiguration& GetScanningConfiguration() const{ return m_scanningConfiguration; }
    inline void SetScanningConfiguration(const RegistryScanningConfiguration& value) { m_scanningConfiguration = value; }
    inline void SetScanningConfiguration(RegistryScanningConfiguration&& value) { m_scanningConfiguration = std::move(value); }
    inline GetRegistryScanningConfigurationResult& WithScanningConfiguration(const RegistryScanningConfiguration& value) { SetScanningConfiguration(value); return *this;}
    inline GetRegistryScanningConfigurationResult& WithScanningConfiguration(RegistryScanningConfiguration&& value) { SetScanningConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRegistryScanningConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRegistryScanningConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRegistryScanningConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;

    RegistryScanningConfiguration m_scanningConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
