/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/ContainerService.h>
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
namespace Lightsail
{
namespace Model
{
  class CreateContainerServiceDeploymentResult
  {
  public:
    AWS_LIGHTSAIL_API CreateContainerServiceDeploymentResult();
    AWS_LIGHTSAIL_API CreateContainerServiceDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API CreateContainerServiceDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes a container service.</p>
     */
    inline const ContainerService& GetContainerService() const{ return m_containerService; }

    /**
     * <p>An object that describes a container service.</p>
     */
    inline void SetContainerService(const ContainerService& value) { m_containerService = value; }

    /**
     * <p>An object that describes a container service.</p>
     */
    inline void SetContainerService(ContainerService&& value) { m_containerService = std::move(value); }

    /**
     * <p>An object that describes a container service.</p>
     */
    inline CreateContainerServiceDeploymentResult& WithContainerService(const ContainerService& value) { SetContainerService(value); return *this;}

    /**
     * <p>An object that describes a container service.</p>
     */
    inline CreateContainerServiceDeploymentResult& WithContainerService(ContainerService&& value) { SetContainerService(std::move(value)); return *this;}

  private:

    ContainerService m_containerService;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
