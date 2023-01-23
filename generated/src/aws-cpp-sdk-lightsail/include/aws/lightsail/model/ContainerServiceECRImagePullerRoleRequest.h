/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>

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
   * <p>Describes a request to activate or deactivate the role that you can use to
   * grant an Amazon Lightsail container service access to Amazon Elastic Container
   * Registry (Amazon ECR) private repositories.</p> <p>When activated, Lightsail
   * creates an Identity and Access Management (IAM) role for the specified Lightsail
   * container service. You can use the ARN of the role to create a trust
   * relationship between your Lightsail container service and an Amazon ECR private
   * repository in your Amazon Web Services account. This allows your container
   * service to pull images from Amazon ECR private repositories. For more
   * information, see <a
   * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-container-service-ecr-private-repo-access">Configuring
   * access to an Amazon ECR private repository for an Amazon Lightsail container
   * service</a> in the <i>Amazon Lightsail Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ContainerServiceECRImagePullerRoleRequest">AWS
   * API Reference</a></p>
   */
  class ContainerServiceECRImagePullerRoleRequest
  {
  public:
    AWS_LIGHTSAIL_API ContainerServiceECRImagePullerRoleRequest();
    AWS_LIGHTSAIL_API ContainerServiceECRImagePullerRoleRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ContainerServiceECRImagePullerRoleRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A Boolean value that indicates whether to activate the role.</p>
     */
    inline bool GetIsActive() const{ return m_isActive; }

    /**
     * <p>A Boolean value that indicates whether to activate the role.</p>
     */
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }

    /**
     * <p>A Boolean value that indicates whether to activate the role.</p>
     */
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }

    /**
     * <p>A Boolean value that indicates whether to activate the role.</p>
     */
    inline ContainerServiceECRImagePullerRoleRequest& WithIsActive(bool value) { SetIsActive(value); return *this;}

  private:

    bool m_isActive;
    bool m_isActiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
