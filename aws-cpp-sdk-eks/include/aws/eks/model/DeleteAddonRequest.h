/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class AWS_EKS_API DeleteAddonRequest : public EKSRequest
  {
  public:
    DeleteAddonRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAddon"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the cluster to delete the add-on from.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the cluster to delete the add-on from.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the cluster to delete the add-on from.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the cluster to delete the add-on from.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the cluster to delete the add-on from.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the cluster to delete the add-on from.</p>
     */
    inline DeleteAddonRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the cluster to delete the add-on from.</p>
     */
    inline DeleteAddonRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster to delete the add-on from.</p>
     */
    inline DeleteAddonRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline const Aws::String& GetAddonName() const{ return m_addonName; }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline void SetAddonName(const Aws::String& value) { m_addonNameHasBeenSet = true; m_addonName = value; }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline void SetAddonName(Aws::String&& value) { m_addonNameHasBeenSet = true; m_addonName = std::move(value); }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline void SetAddonName(const char* value) { m_addonNameHasBeenSet = true; m_addonName.assign(value); }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline DeleteAddonRequest& WithAddonName(const Aws::String& value) { SetAddonName(value); return *this;}

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline DeleteAddonRequest& WithAddonName(Aws::String&& value) { SetAddonName(std::move(value)); return *this;}

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline DeleteAddonRequest& WithAddonName(const char* value) { SetAddonName(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet;

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
