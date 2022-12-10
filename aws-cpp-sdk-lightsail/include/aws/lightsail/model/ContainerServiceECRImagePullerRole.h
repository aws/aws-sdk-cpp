/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes the activation status of the role that you can use to grant an
   * Amazon Lightsail container service access to Amazon Elastic Container Registry
   * (Amazon ECR) private repositories.</p> <p>When activated, Lightsail creates an
   * Identity and Access Management (IAM) role for the specified Lightsail container
   * service. You can use the ARN of the role to create a trust relationship between
   * your Lightsail container service and an Amazon ECR private repository in your
   * Amazon Web Services account. This allows your container service to pull images
   * from Amazon ECR private repositories. For more information, see <a
   * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-container-service-ecr-private-repo-access">Configuring
   * access to an Amazon ECR private repository for an Amazon Lightsail container
   * service</a> in the <i>Amazon Lightsail Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ContainerServiceECRImagePullerRole">AWS
   * API Reference</a></p>
   */
  class ContainerServiceECRImagePullerRole
  {
  public:
    AWS_LIGHTSAIL_API ContainerServiceECRImagePullerRole();
    AWS_LIGHTSAIL_API ContainerServiceECRImagePullerRole(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ContainerServiceECRImagePullerRole& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A Boolean value that indicates whether the role is activated.</p>
     */
    inline bool GetIsActive() const{ return m_isActive; }

    /**
     * <p>A Boolean value that indicates whether the role is activated.</p>
     */
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }

    /**
     * <p>A Boolean value that indicates whether the role is activated.</p>
     */
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }

    /**
     * <p>A Boolean value that indicates whether the role is activated.</p>
     */
    inline ContainerServiceECRImagePullerRole& WithIsActive(bool value) { SetIsActive(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the role, if it is activated.</p>
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role, if it is activated.</p>
     */
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role, if it is activated.</p>
     */
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role, if it is activated.</p>
     */
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role, if it is activated.</p>
     */
    inline void SetPrincipalArn(const char* value) { m_principalArnHasBeenSet = true; m_principalArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role, if it is activated.</p>
     */
    inline ContainerServiceECRImagePullerRole& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role, if it is activated.</p>
     */
    inline ContainerServiceECRImagePullerRole& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role, if it is activated.</p>
     */
    inline ContainerServiceECRImagePullerRole& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}

  private:

    bool m_isActive;
    bool m_isActiveHasBeenSet = false;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
