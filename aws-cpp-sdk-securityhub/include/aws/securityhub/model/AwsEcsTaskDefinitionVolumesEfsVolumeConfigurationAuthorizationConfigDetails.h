/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon EFS access point identifier to use.</p>
     */
    inline const Aws::String& GetAccessPointId() const{ return m_accessPointId; }

    /**
     * <p>The Amazon EFS access point identifier to use.</p>
     */
    inline bool AccessPointIdHasBeenSet() const { return m_accessPointIdHasBeenSet; }

    /**
     * <p>The Amazon EFS access point identifier to use.</p>
     */
    inline void SetAccessPointId(const Aws::String& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = value; }

    /**
     * <p>The Amazon EFS access point identifier to use.</p>
     */
    inline void SetAccessPointId(Aws::String&& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = std::move(value); }

    /**
     * <p>The Amazon EFS access point identifier to use.</p>
     */
    inline void SetAccessPointId(const char* value) { m_accessPointIdHasBeenSet = true; m_accessPointId.assign(value); }

    /**
     * <p>The Amazon EFS access point identifier to use.</p>
     */
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails& WithAccessPointId(const Aws::String& value) { SetAccessPointId(value); return *this;}

    /**
     * <p>The Amazon EFS access point identifier to use.</p>
     */
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails& WithAccessPointId(Aws::String&& value) { SetAccessPointId(std::move(value)); return *this;}

    /**
     * <p>The Amazon EFS access point identifier to use.</p>
     */
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails& WithAccessPointId(const char* value) { SetAccessPointId(value); return *this;}


    /**
     * <p>Whether to use the Amazon ECS task IAM role defined in a task definition when
     * mounting the Amazon EFS file system.</p>
     */
    inline const Aws::String& GetIam() const{ return m_iam; }

    /**
     * <p>Whether to use the Amazon ECS task IAM role defined in a task definition when
     * mounting the Amazon EFS file system.</p>
     */
    inline bool IamHasBeenSet() const { return m_iamHasBeenSet; }

    /**
     * <p>Whether to use the Amazon ECS task IAM role defined in a task definition when
     * mounting the Amazon EFS file system.</p>
     */
    inline void SetIam(const Aws::String& value) { m_iamHasBeenSet = true; m_iam = value; }

    /**
     * <p>Whether to use the Amazon ECS task IAM role defined in a task definition when
     * mounting the Amazon EFS file system.</p>
     */
    inline void SetIam(Aws::String&& value) { m_iamHasBeenSet = true; m_iam = std::move(value); }

    /**
     * <p>Whether to use the Amazon ECS task IAM role defined in a task definition when
     * mounting the Amazon EFS file system.</p>
     */
    inline void SetIam(const char* value) { m_iamHasBeenSet = true; m_iam.assign(value); }

    /**
     * <p>Whether to use the Amazon ECS task IAM role defined in a task definition when
     * mounting the Amazon EFS file system.</p>
     */
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails& WithIam(const Aws::String& value) { SetIam(value); return *this;}

    /**
     * <p>Whether to use the Amazon ECS task IAM role defined in a task definition when
     * mounting the Amazon EFS file system.</p>
     */
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails& WithIam(Aws::String&& value) { SetIam(std::move(value)); return *this;}

    /**
     * <p>Whether to use the Amazon ECS task IAM role defined in a task definition when
     * mounting the Amazon EFS file system.</p>
     */
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails& WithIam(const char* value) { SetIam(value); return *this;}

  private:

    Aws::String m_accessPointId;
    bool m_accessPointIdHasBeenSet = false;

    Aws::String m_iam;
    bool m_iamHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
