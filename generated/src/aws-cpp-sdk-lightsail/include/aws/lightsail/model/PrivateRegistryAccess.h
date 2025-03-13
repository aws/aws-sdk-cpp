/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/ContainerServiceECRImagePullerRole.h>
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
   * <p>Describes the configuration for an Amazon Lightsail container service to
   * access private container image repositories, such as Amazon Elastic Container
   * Registry (Amazon ECR) private repositories.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-container-service-ecr-private-repo-access">Configuring
   * access to an Amazon ECR private repository for an Amazon Lightsail container
   * service</a> in the <i>Amazon Lightsail Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PrivateRegistryAccess">AWS
   * API Reference</a></p>
   */
  class PrivateRegistryAccess
  {
  public:
    AWS_LIGHTSAIL_API PrivateRegistryAccess() = default;
    AWS_LIGHTSAIL_API PrivateRegistryAccess(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API PrivateRegistryAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that describes the activation status of the role that you can use
     * to grant a Lightsail container service access to Amazon ECR private
     * repositories. If the role is activated, the Amazon Resource Name (ARN) of the
     * role is also listed.</p>
     */
    inline const ContainerServiceECRImagePullerRole& GetEcrImagePullerRole() const { return m_ecrImagePullerRole; }
    inline bool EcrImagePullerRoleHasBeenSet() const { return m_ecrImagePullerRoleHasBeenSet; }
    template<typename EcrImagePullerRoleT = ContainerServiceECRImagePullerRole>
    void SetEcrImagePullerRole(EcrImagePullerRoleT&& value) { m_ecrImagePullerRoleHasBeenSet = true; m_ecrImagePullerRole = std::forward<EcrImagePullerRoleT>(value); }
    template<typename EcrImagePullerRoleT = ContainerServiceECRImagePullerRole>
    PrivateRegistryAccess& WithEcrImagePullerRole(EcrImagePullerRoleT&& value) { SetEcrImagePullerRole(std::forward<EcrImagePullerRoleT>(value)); return *this;}
    ///@}
  private:

    ContainerServiceECRImagePullerRole m_ecrImagePullerRole;
    bool m_ecrImagePullerRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
