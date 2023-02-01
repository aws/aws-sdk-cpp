/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
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
  class PutRegistryScanningConfigurationResult
  {
  public:
    AWS_ECR_API PutRegistryScanningConfigurationResult();
    AWS_ECR_API PutRegistryScanningConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API PutRegistryScanningConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The scanning configuration for your registry.</p>
     */
    inline const RegistryScanningConfiguration& GetRegistryScanningConfiguration() const{ return m_registryScanningConfiguration; }

    /**
     * <p>The scanning configuration for your registry.</p>
     */
    inline void SetRegistryScanningConfiguration(const RegistryScanningConfiguration& value) { m_registryScanningConfiguration = value; }

    /**
     * <p>The scanning configuration for your registry.</p>
     */
    inline void SetRegistryScanningConfiguration(RegistryScanningConfiguration&& value) { m_registryScanningConfiguration = std::move(value); }

    /**
     * <p>The scanning configuration for your registry.</p>
     */
    inline PutRegistryScanningConfigurationResult& WithRegistryScanningConfiguration(const RegistryScanningConfiguration& value) { SetRegistryScanningConfiguration(value); return *this;}

    /**
     * <p>The scanning configuration for your registry.</p>
     */
    inline PutRegistryScanningConfigurationResult& WithRegistryScanningConfiguration(RegistryScanningConfiguration&& value) { SetRegistryScanningConfiguration(std::move(value)); return *this;}

  private:

    RegistryScanningConfiguration m_registryScanningConfiguration;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
