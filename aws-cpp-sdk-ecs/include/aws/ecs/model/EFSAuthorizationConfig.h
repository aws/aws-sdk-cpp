/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/EFSAuthorizationConfigIAM.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The authorization configuration details for the Amazon EFS file
   * system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/EFSAuthorizationConfig">AWS
   * API Reference</a></p>
   */
  class EFSAuthorizationConfig
  {
  public:
    AWS_ECS_API EFSAuthorizationConfig();
    AWS_ECS_API EFSAuthorizationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API EFSAuthorizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon EFS access point ID to use. If an access point is specified, the
     * root directory value specified in the <code>EFSVolumeConfiguration</code> must
     * either be omitted or set to <code>/</code> which will enforce the path set on
     * the EFS access point. If an access point is used, transit encryption must be
     * enabled in the <code>EFSVolumeConfiguration</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/efs-access-points.html">Working
     * with Amazon EFS access points</a> in the <i>Amazon Elastic File System User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetAccessPointId() const{ return m_accessPointId; }

    /**
     * <p>The Amazon EFS access point ID to use. If an access point is specified, the
     * root directory value specified in the <code>EFSVolumeConfiguration</code> must
     * either be omitted or set to <code>/</code> which will enforce the path set on
     * the EFS access point. If an access point is used, transit encryption must be
     * enabled in the <code>EFSVolumeConfiguration</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/efs-access-points.html">Working
     * with Amazon EFS access points</a> in the <i>Amazon Elastic File System User
     * Guide</i>.</p>
     */
    inline bool AccessPointIdHasBeenSet() const { return m_accessPointIdHasBeenSet; }

    /**
     * <p>The Amazon EFS access point ID to use. If an access point is specified, the
     * root directory value specified in the <code>EFSVolumeConfiguration</code> must
     * either be omitted or set to <code>/</code> which will enforce the path set on
     * the EFS access point. If an access point is used, transit encryption must be
     * enabled in the <code>EFSVolumeConfiguration</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/efs-access-points.html">Working
     * with Amazon EFS access points</a> in the <i>Amazon Elastic File System User
     * Guide</i>.</p>
     */
    inline void SetAccessPointId(const Aws::String& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = value; }

    /**
     * <p>The Amazon EFS access point ID to use. If an access point is specified, the
     * root directory value specified in the <code>EFSVolumeConfiguration</code> must
     * either be omitted or set to <code>/</code> which will enforce the path set on
     * the EFS access point. If an access point is used, transit encryption must be
     * enabled in the <code>EFSVolumeConfiguration</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/efs-access-points.html">Working
     * with Amazon EFS access points</a> in the <i>Amazon Elastic File System User
     * Guide</i>.</p>
     */
    inline void SetAccessPointId(Aws::String&& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = std::move(value); }

    /**
     * <p>The Amazon EFS access point ID to use. If an access point is specified, the
     * root directory value specified in the <code>EFSVolumeConfiguration</code> must
     * either be omitted or set to <code>/</code> which will enforce the path set on
     * the EFS access point. If an access point is used, transit encryption must be
     * enabled in the <code>EFSVolumeConfiguration</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/efs-access-points.html">Working
     * with Amazon EFS access points</a> in the <i>Amazon Elastic File System User
     * Guide</i>.</p>
     */
    inline void SetAccessPointId(const char* value) { m_accessPointIdHasBeenSet = true; m_accessPointId.assign(value); }

    /**
     * <p>The Amazon EFS access point ID to use. If an access point is specified, the
     * root directory value specified in the <code>EFSVolumeConfiguration</code> must
     * either be omitted or set to <code>/</code> which will enforce the path set on
     * the EFS access point. If an access point is used, transit encryption must be
     * enabled in the <code>EFSVolumeConfiguration</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/efs-access-points.html">Working
     * with Amazon EFS access points</a> in the <i>Amazon Elastic File System User
     * Guide</i>.</p>
     */
    inline EFSAuthorizationConfig& WithAccessPointId(const Aws::String& value) { SetAccessPointId(value); return *this;}

    /**
     * <p>The Amazon EFS access point ID to use. If an access point is specified, the
     * root directory value specified in the <code>EFSVolumeConfiguration</code> must
     * either be omitted or set to <code>/</code> which will enforce the path set on
     * the EFS access point. If an access point is used, transit encryption must be
     * enabled in the <code>EFSVolumeConfiguration</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/efs-access-points.html">Working
     * with Amazon EFS access points</a> in the <i>Amazon Elastic File System User
     * Guide</i>.</p>
     */
    inline EFSAuthorizationConfig& WithAccessPointId(Aws::String&& value) { SetAccessPointId(std::move(value)); return *this;}

    /**
     * <p>The Amazon EFS access point ID to use. If an access point is specified, the
     * root directory value specified in the <code>EFSVolumeConfiguration</code> must
     * either be omitted or set to <code>/</code> which will enforce the path set on
     * the EFS access point. If an access point is used, transit encryption must be
     * enabled in the <code>EFSVolumeConfiguration</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/efs-access-points.html">Working
     * with Amazon EFS access points</a> in the <i>Amazon Elastic File System User
     * Guide</i>.</p>
     */
    inline EFSAuthorizationConfig& WithAccessPointId(const char* value) { SetAccessPointId(value); return *this;}


    /**
     * <p>Determines whether to use the Amazon ECS task IAM role defined in a task
     * definition when mounting the Amazon EFS file system. If enabled, transit
     * encryption must be enabled in the <code>EFSVolumeConfiguration</code>. If this
     * parameter is omitted, the default value of <code>DISABLED</code> is used. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/efs-volumes.html#efs-volume-accesspoints">Using
     * Amazon EFS access points</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline const EFSAuthorizationConfigIAM& GetIam() const{ return m_iam; }

    /**
     * <p>Determines whether to use the Amazon ECS task IAM role defined in a task
     * definition when mounting the Amazon EFS file system. If enabled, transit
     * encryption must be enabled in the <code>EFSVolumeConfiguration</code>. If this
     * parameter is omitted, the default value of <code>DISABLED</code> is used. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/efs-volumes.html#efs-volume-accesspoints">Using
     * Amazon EFS access points</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline bool IamHasBeenSet() const { return m_iamHasBeenSet; }

    /**
     * <p>Determines whether to use the Amazon ECS task IAM role defined in a task
     * definition when mounting the Amazon EFS file system. If enabled, transit
     * encryption must be enabled in the <code>EFSVolumeConfiguration</code>. If this
     * parameter is omitted, the default value of <code>DISABLED</code> is used. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/efs-volumes.html#efs-volume-accesspoints">Using
     * Amazon EFS access points</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetIam(const EFSAuthorizationConfigIAM& value) { m_iamHasBeenSet = true; m_iam = value; }

    /**
     * <p>Determines whether to use the Amazon ECS task IAM role defined in a task
     * definition when mounting the Amazon EFS file system. If enabled, transit
     * encryption must be enabled in the <code>EFSVolumeConfiguration</code>. If this
     * parameter is omitted, the default value of <code>DISABLED</code> is used. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/efs-volumes.html#efs-volume-accesspoints">Using
     * Amazon EFS access points</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetIam(EFSAuthorizationConfigIAM&& value) { m_iamHasBeenSet = true; m_iam = std::move(value); }

    /**
     * <p>Determines whether to use the Amazon ECS task IAM role defined in a task
     * definition when mounting the Amazon EFS file system. If enabled, transit
     * encryption must be enabled in the <code>EFSVolumeConfiguration</code>. If this
     * parameter is omitted, the default value of <code>DISABLED</code> is used. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/efs-volumes.html#efs-volume-accesspoints">Using
     * Amazon EFS access points</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline EFSAuthorizationConfig& WithIam(const EFSAuthorizationConfigIAM& value) { SetIam(value); return *this;}

    /**
     * <p>Determines whether to use the Amazon ECS task IAM role defined in a task
     * definition when mounting the Amazon EFS file system. If enabled, transit
     * encryption must be enabled in the <code>EFSVolumeConfiguration</code>. If this
     * parameter is omitted, the default value of <code>DISABLED</code> is used. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/efs-volumes.html#efs-volume-accesspoints">Using
     * Amazon EFS access points</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline EFSAuthorizationConfig& WithIam(EFSAuthorizationConfigIAM&& value) { SetIam(std::move(value)); return *this;}

  private:

    Aws::String m_accessPointId;
    bool m_accessPointIdHasBeenSet = false;

    EFSAuthorizationConfigIAM m_iam;
    bool m_iamHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
