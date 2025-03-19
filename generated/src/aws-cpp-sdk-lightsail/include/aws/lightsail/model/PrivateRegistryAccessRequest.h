/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/ContainerServiceECRImagePullerRoleRequest.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a request to configure an Amazon Lightsail container service to
   * access private container image repositories, such as Amazon Elastic Container
   * Registry (Amazon ECR) private repositories.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-container-service-ecr-private-repo-access">Configuring
   * access to an Amazon ECR private repository for an Amazon Lightsail container
   * service</a> in the <i>Amazon Lightsail Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PrivateRegistryAccessRequest">AWS
   * API Reference</a></p>
   */
  class PrivateRegistryAccessRequest
  {
  public:
    AWS_LIGHTSAIL_API PrivateRegistryAccessRequest() = default;
    AWS_LIGHTSAIL_API PrivateRegistryAccessRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API PrivateRegistryAccessRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object to describe a request to activate or deactivate the role that you
     * can use to grant an Amazon Lightsail container service access to Amazon Elastic
     * Container Registry (Amazon ECR) private repositories.</p>
     */
    inline const ContainerServiceECRImagePullerRoleRequest& GetEcrImagePullerRole() const { return m_ecrImagePullerRole; }
    inline bool EcrImagePullerRoleHasBeenSet() const { return m_ecrImagePullerRoleHasBeenSet; }
    template<typename EcrImagePullerRoleT = ContainerServiceECRImagePullerRoleRequest>
    void SetEcrImagePullerRole(EcrImagePullerRoleT&& value) { m_ecrImagePullerRoleHasBeenSet = true; m_ecrImagePullerRole = std::forward<EcrImagePullerRoleT>(value); }
    template<typename EcrImagePullerRoleT = ContainerServiceECRImagePullerRoleRequest>
    PrivateRegistryAccessRequest& WithEcrImagePullerRole(EcrImagePullerRoleT&& value) { SetEcrImagePullerRole(std::forward<EcrImagePullerRoleT>(value)); return *this;}
    ///@}
  private:

    ContainerServiceECRImagePullerRoleRequest m_ecrImagePullerRole;
    bool m_ecrImagePullerRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
