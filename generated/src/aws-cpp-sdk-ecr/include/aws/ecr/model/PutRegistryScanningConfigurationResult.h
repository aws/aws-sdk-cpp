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
    AWS_ECR_API PutRegistryScanningConfigurationResult();
    AWS_ECR_API PutRegistryScanningConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API PutRegistryScanningConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The scanning configuration for your registry.</p>
     */
    inline const RegistryScanningConfiguration& GetRegistryScanningConfiguration() const{ return m_registryScanningConfiguration; }
    inline void SetRegistryScanningConfiguration(const RegistryScanningConfiguration& value) { m_registryScanningConfiguration = value; }
    inline void SetRegistryScanningConfiguration(RegistryScanningConfiguration&& value) { m_registryScanningConfiguration = std::move(value); }
    inline PutRegistryScanningConfigurationResult& WithRegistryScanningConfiguration(const RegistryScanningConfiguration& value) { SetRegistryScanningConfiguration(value); return *this;}
    inline PutRegistryScanningConfigurationResult& WithRegistryScanningConfiguration(RegistryScanningConfiguration&& value) { SetRegistryScanningConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutRegistryScanningConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutRegistryScanningConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutRegistryScanningConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RegistryScanningConfiguration m_registryScanningConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
