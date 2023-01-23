/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/LaunchTemplateSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class UpdateNodegroupVersionRequest : public EKSRequest
  {
  public:
    AWS_EKS_API UpdateNodegroupVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNodegroupVersion"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Amazon EKS cluster that is associated with the managed node
     * group to update.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the Amazon EKS cluster that is associated with the managed node
     * group to update.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the Amazon EKS cluster that is associated with the managed node
     * group to update.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the Amazon EKS cluster that is associated with the managed node
     * group to update.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the Amazon EKS cluster that is associated with the managed node
     * group to update.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the Amazon EKS cluster that is associated with the managed node
     * group to update.</p>
     */
    inline UpdateNodegroupVersionRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the Amazon EKS cluster that is associated with the managed node
     * group to update.</p>
     */
    inline UpdateNodegroupVersionRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon EKS cluster that is associated with the managed node
     * group to update.</p>
     */
    inline UpdateNodegroupVersionRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The name of the managed node group to update.</p>
     */
    inline const Aws::String& GetNodegroupName() const{ return m_nodegroupName; }

    /**
     * <p>The name of the managed node group to update.</p>
     */
    inline bool NodegroupNameHasBeenSet() const { return m_nodegroupNameHasBeenSet; }

    /**
     * <p>The name of the managed node group to update.</p>
     */
    inline void SetNodegroupName(const Aws::String& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = value; }

    /**
     * <p>The name of the managed node group to update.</p>
     */
    inline void SetNodegroupName(Aws::String&& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = std::move(value); }

    /**
     * <p>The name of the managed node group to update.</p>
     */
    inline void SetNodegroupName(const char* value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName.assign(value); }

    /**
     * <p>The name of the managed node group to update.</p>
     */
    inline UpdateNodegroupVersionRequest& WithNodegroupName(const Aws::String& value) { SetNodegroupName(value); return *this;}

    /**
     * <p>The name of the managed node group to update.</p>
     */
    inline UpdateNodegroupVersionRequest& WithNodegroupName(Aws::String&& value) { SetNodegroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the managed node group to update.</p>
     */
    inline UpdateNodegroupVersionRequest& WithNodegroupName(const char* value) { SetNodegroupName(value); return *this;}


    /**
     * <p>The Kubernetes version to update to. If no version is specified, then the
     * Kubernetes version of the node group does not change. You can specify the
     * Kubernetes version of the cluster to update the node group to the latest AMI
     * version of the cluster's Kubernetes version. If you specify
     * <code>launchTemplate</code>, and your launch template uses a custom AMI, then
     * don't specify <code>version</code>, or the node group update will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The Kubernetes version to update to. If no version is specified, then the
     * Kubernetes version of the node group does not change. You can specify the
     * Kubernetes version of the cluster to update the node group to the latest AMI
     * version of the cluster's Kubernetes version. If you specify
     * <code>launchTemplate</code>, and your launch template uses a custom AMI, then
     * don't specify <code>version</code>, or the node group update will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The Kubernetes version to update to. If no version is specified, then the
     * Kubernetes version of the node group does not change. You can specify the
     * Kubernetes version of the cluster to update the node group to the latest AMI
     * version of the cluster's Kubernetes version. If you specify
     * <code>launchTemplate</code>, and your launch template uses a custom AMI, then
     * don't specify <code>version</code>, or the node group update will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The Kubernetes version to update to. If no version is specified, then the
     * Kubernetes version of the node group does not change. You can specify the
     * Kubernetes version of the cluster to update the node group to the latest AMI
     * version of the cluster's Kubernetes version. If you specify
     * <code>launchTemplate</code>, and your launch template uses a custom AMI, then
     * don't specify <code>version</code>, or the node group update will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The Kubernetes version to update to. If no version is specified, then the
     * Kubernetes version of the node group does not change. You can specify the
     * Kubernetes version of the cluster to update the node group to the latest AMI
     * version of the cluster's Kubernetes version. If you specify
     * <code>launchTemplate</code>, and your launch template uses a custom AMI, then
     * don't specify <code>version</code>, or the node group update will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The Kubernetes version to update to. If no version is specified, then the
     * Kubernetes version of the node group does not change. You can specify the
     * Kubernetes version of the cluster to update the node group to the latest AMI
     * version of the cluster's Kubernetes version. If you specify
     * <code>launchTemplate</code>, and your launch template uses a custom AMI, then
     * don't specify <code>version</code>, or the node group update will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline UpdateNodegroupVersionRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The Kubernetes version to update to. If no version is specified, then the
     * Kubernetes version of the node group does not change. You can specify the
     * Kubernetes version of the cluster to update the node group to the latest AMI
     * version of the cluster's Kubernetes version. If you specify
     * <code>launchTemplate</code>, and your launch template uses a custom AMI, then
     * don't specify <code>version</code>, or the node group update will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline UpdateNodegroupVersionRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes version to update to. If no version is specified, then the
     * Kubernetes version of the node group does not change. You can specify the
     * Kubernetes version of the cluster to update the node group to the latest AMI
     * version of the cluster's Kubernetes version. If you specify
     * <code>launchTemplate</code>, and your launch template uses a custom AMI, then
     * don't specify <code>version</code>, or the node group update will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline UpdateNodegroupVersionRequest& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The AMI version of the Amazon EKS optimized AMI to use for the update. By
     * default, the latest available AMI version for the node group's Kubernetes
     * version is used. For information about Linux versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS optimized Amazon Linux AMI versions</a> in the <i>Amazon EKS User Guide</i>.
     * Amazon EKS managed node groups support the November 2022 and later releases of
     * the Windows AMIs. For information about Windows versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-ami-versions-windows.html">Amazon
     * EKS optimized Windows AMI versions</a> in the <i>Amazon EKS User Guide</i>.</p>
     * <p>If you specify <code>launchTemplate</code>, and your launch template uses a
     * custom AMI, then don't specify <code>releaseVersion</code>, or the node group
     * update will fail. For more information about using launch templates with Amazon
     * EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::String& GetReleaseVersion() const{ return m_releaseVersion; }

    /**
     * <p>The AMI version of the Amazon EKS optimized AMI to use for the update. By
     * default, the latest available AMI version for the node group's Kubernetes
     * version is used. For information about Linux versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS optimized Amazon Linux AMI versions</a> in the <i>Amazon EKS User Guide</i>.
     * Amazon EKS managed node groups support the November 2022 and later releases of
     * the Windows AMIs. For information about Windows versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-ami-versions-windows.html">Amazon
     * EKS optimized Windows AMI versions</a> in the <i>Amazon EKS User Guide</i>.</p>
     * <p>If you specify <code>launchTemplate</code>, and your launch template uses a
     * custom AMI, then don't specify <code>releaseVersion</code>, or the node group
     * update will fail. For more information about using launch templates with Amazon
     * EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline bool ReleaseVersionHasBeenSet() const { return m_releaseVersionHasBeenSet; }

    /**
     * <p>The AMI version of the Amazon EKS optimized AMI to use for the update. By
     * default, the latest available AMI version for the node group's Kubernetes
     * version is used. For information about Linux versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS optimized Amazon Linux AMI versions</a> in the <i>Amazon EKS User Guide</i>.
     * Amazon EKS managed node groups support the November 2022 and later releases of
     * the Windows AMIs. For information about Windows versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-ami-versions-windows.html">Amazon
     * EKS optimized Windows AMI versions</a> in the <i>Amazon EKS User Guide</i>.</p>
     * <p>If you specify <code>launchTemplate</code>, and your launch template uses a
     * custom AMI, then don't specify <code>releaseVersion</code>, or the node group
     * update will fail. For more information about using launch templates with Amazon
     * EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetReleaseVersion(const Aws::String& value) { m_releaseVersionHasBeenSet = true; m_releaseVersion = value; }

    /**
     * <p>The AMI version of the Amazon EKS optimized AMI to use for the update. By
     * default, the latest available AMI version for the node group's Kubernetes
     * version is used. For information about Linux versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS optimized Amazon Linux AMI versions</a> in the <i>Amazon EKS User Guide</i>.
     * Amazon EKS managed node groups support the November 2022 and later releases of
     * the Windows AMIs. For information about Windows versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-ami-versions-windows.html">Amazon
     * EKS optimized Windows AMI versions</a> in the <i>Amazon EKS User Guide</i>.</p>
     * <p>If you specify <code>launchTemplate</code>, and your launch template uses a
     * custom AMI, then don't specify <code>releaseVersion</code>, or the node group
     * update will fail. For more information about using launch templates with Amazon
     * EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetReleaseVersion(Aws::String&& value) { m_releaseVersionHasBeenSet = true; m_releaseVersion = std::move(value); }

    /**
     * <p>The AMI version of the Amazon EKS optimized AMI to use for the update. By
     * default, the latest available AMI version for the node group's Kubernetes
     * version is used. For information about Linux versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS optimized Amazon Linux AMI versions</a> in the <i>Amazon EKS User Guide</i>.
     * Amazon EKS managed node groups support the November 2022 and later releases of
     * the Windows AMIs. For information about Windows versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-ami-versions-windows.html">Amazon
     * EKS optimized Windows AMI versions</a> in the <i>Amazon EKS User Guide</i>.</p>
     * <p>If you specify <code>launchTemplate</code>, and your launch template uses a
     * custom AMI, then don't specify <code>releaseVersion</code>, or the node group
     * update will fail. For more information about using launch templates with Amazon
     * EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetReleaseVersion(const char* value) { m_releaseVersionHasBeenSet = true; m_releaseVersion.assign(value); }

    /**
     * <p>The AMI version of the Amazon EKS optimized AMI to use for the update. By
     * default, the latest available AMI version for the node group's Kubernetes
     * version is used. For information about Linux versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS optimized Amazon Linux AMI versions</a> in the <i>Amazon EKS User Guide</i>.
     * Amazon EKS managed node groups support the November 2022 and later releases of
     * the Windows AMIs. For information about Windows versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-ami-versions-windows.html">Amazon
     * EKS optimized Windows AMI versions</a> in the <i>Amazon EKS User Guide</i>.</p>
     * <p>If you specify <code>launchTemplate</code>, and your launch template uses a
     * custom AMI, then don't specify <code>releaseVersion</code>, or the node group
     * update will fail. For more information about using launch templates with Amazon
     * EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline UpdateNodegroupVersionRequest& WithReleaseVersion(const Aws::String& value) { SetReleaseVersion(value); return *this;}

    /**
     * <p>The AMI version of the Amazon EKS optimized AMI to use for the update. By
     * default, the latest available AMI version for the node group's Kubernetes
     * version is used. For information about Linux versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS optimized Amazon Linux AMI versions</a> in the <i>Amazon EKS User Guide</i>.
     * Amazon EKS managed node groups support the November 2022 and later releases of
     * the Windows AMIs. For information about Windows versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-ami-versions-windows.html">Amazon
     * EKS optimized Windows AMI versions</a> in the <i>Amazon EKS User Guide</i>.</p>
     * <p>If you specify <code>launchTemplate</code>, and your launch template uses a
     * custom AMI, then don't specify <code>releaseVersion</code>, or the node group
     * update will fail. For more information about using launch templates with Amazon
     * EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline UpdateNodegroupVersionRequest& WithReleaseVersion(Aws::String&& value) { SetReleaseVersion(std::move(value)); return *this;}

    /**
     * <p>The AMI version of the Amazon EKS optimized AMI to use for the update. By
     * default, the latest available AMI version for the node group's Kubernetes
     * version is used. For information about Linux versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS optimized Amazon Linux AMI versions</a> in the <i>Amazon EKS User Guide</i>.
     * Amazon EKS managed node groups support the November 2022 and later releases of
     * the Windows AMIs. For information about Windows versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-ami-versions-windows.html">Amazon
     * EKS optimized Windows AMI versions</a> in the <i>Amazon EKS User Guide</i>.</p>
     * <p>If you specify <code>launchTemplate</code>, and your launch template uses a
     * custom AMI, then don't specify <code>releaseVersion</code>, or the node group
     * update will fail. For more information about using launch templates with Amazon
     * EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline UpdateNodegroupVersionRequest& WithReleaseVersion(const char* value) { SetReleaseVersion(value); return *this;}


    /**
     * <p>An object representing a node group's launch template specification. You can
     * only update a node group using a launch template if the node group was
     * originally deployed with a launch template.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const{ return m_launchTemplate; }

    /**
     * <p>An object representing a node group's launch template specification. You can
     * only update a node group using a launch template if the node group was
     * originally deployed with a launch template.</p>
     */
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }

    /**
     * <p>An object representing a node group's launch template specification. You can
     * only update a node group using a launch template if the node group was
     * originally deployed with a launch template.</p>
     */
    inline void SetLaunchTemplate(const LaunchTemplateSpecification& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }

    /**
     * <p>An object representing a node group's launch template specification. You can
     * only update a node group using a launch template if the node group was
     * originally deployed with a launch template.</p>
     */
    inline void SetLaunchTemplate(LaunchTemplateSpecification&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }

    /**
     * <p>An object representing a node group's launch template specification. You can
     * only update a node group using a launch template if the node group was
     * originally deployed with a launch template.</p>
     */
    inline UpdateNodegroupVersionRequest& WithLaunchTemplate(const LaunchTemplateSpecification& value) { SetLaunchTemplate(value); return *this;}

    /**
     * <p>An object representing a node group's launch template specification. You can
     * only update a node group using a launch template if the node group was
     * originally deployed with a launch template.</p>
     */
    inline UpdateNodegroupVersionRequest& WithLaunchTemplate(LaunchTemplateSpecification&& value) { SetLaunchTemplate(std::move(value)); return *this;}


    /**
     * <p>Force the update if the existing node group's pods are unable to be drained
     * due to a pod disruption budget issue. If an update fails because pods could not
     * be drained, you can force the update after it fails to terminate the old node
     * whether or not any pods are running on the node.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>Force the update if the existing node group's pods are unable to be drained
     * due to a pod disruption budget issue. If an update fails because pods could not
     * be drained, you can force the update after it fails to terminate the old node
     * whether or not any pods are running on the node.</p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>Force the update if the existing node group's pods are unable to be drained
     * due to a pod disruption budget issue. If an update fails because pods could not
     * be drained, you can force the update after it fails to terminate the old node
     * whether or not any pods are running on the node.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>Force the update if the existing node group's pods are unable to be drained
     * due to a pod disruption budget issue. If an update fails because pods could not
     * be drained, you can force the update after it fails to terminate the old node
     * whether or not any pods are running on the node.</p>
     */
    inline UpdateNodegroupVersionRequest& WithForce(bool value) { SetForce(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline UpdateNodegroupVersionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline UpdateNodegroupVersionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline UpdateNodegroupVersionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_nodegroupName;
    bool m_nodegroupNameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_releaseVersion;
    bool m_releaseVersionHasBeenSet = false;

    LaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
