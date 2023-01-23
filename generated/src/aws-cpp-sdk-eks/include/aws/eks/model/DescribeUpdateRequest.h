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
namespace Http
{
    class URI;
} //namespace Http
namespace EKS
{
namespace Model
{

  /**
   */
  class DescribeUpdateRequest : public EKSRequest
  {
  public:
    AWS_EKS_API DescribeUpdateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeUpdate"; }

    AWS_EKS_API Aws::String SerializePayload() const override;

    AWS_EKS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the Amazon EKS cluster associated with the update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon EKS cluster associated with the update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Amazon EKS cluster associated with the update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Amazon EKS cluster associated with the update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Amazon EKS cluster associated with the update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Amazon EKS cluster associated with the update.</p>
     */
    inline DescribeUpdateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon EKS cluster associated with the update.</p>
     */
    inline DescribeUpdateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon EKS cluster associated with the update.</p>
     */
    inline DescribeUpdateRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the update to describe.</p>
     */
    inline const Aws::String& GetUpdateId() const{ return m_updateId; }

    /**
     * <p>The ID of the update to describe.</p>
     */
    inline bool UpdateIdHasBeenSet() const { return m_updateIdHasBeenSet; }

    /**
     * <p>The ID of the update to describe.</p>
     */
    inline void SetUpdateId(const Aws::String& value) { m_updateIdHasBeenSet = true; m_updateId = value; }

    /**
     * <p>The ID of the update to describe.</p>
     */
    inline void SetUpdateId(Aws::String&& value) { m_updateIdHasBeenSet = true; m_updateId = std::move(value); }

    /**
     * <p>The ID of the update to describe.</p>
     */
    inline void SetUpdateId(const char* value) { m_updateIdHasBeenSet = true; m_updateId.assign(value); }

    /**
     * <p>The ID of the update to describe.</p>
     */
    inline DescribeUpdateRequest& WithUpdateId(const Aws::String& value) { SetUpdateId(value); return *this;}

    /**
     * <p>The ID of the update to describe.</p>
     */
    inline DescribeUpdateRequest& WithUpdateId(Aws::String&& value) { SetUpdateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the update to describe.</p>
     */
    inline DescribeUpdateRequest& WithUpdateId(const char* value) { SetUpdateId(value); return *this;}


    /**
     * <p>The name of the Amazon EKS node group associated with the update. This
     * parameter is required if the update is a node group update.</p>
     */
    inline const Aws::String& GetNodegroupName() const{ return m_nodegroupName; }

    /**
     * <p>The name of the Amazon EKS node group associated with the update. This
     * parameter is required if the update is a node group update.</p>
     */
    inline bool NodegroupNameHasBeenSet() const { return m_nodegroupNameHasBeenSet; }

    /**
     * <p>The name of the Amazon EKS node group associated with the update. This
     * parameter is required if the update is a node group update.</p>
     */
    inline void SetNodegroupName(const Aws::String& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = value; }

    /**
     * <p>The name of the Amazon EKS node group associated with the update. This
     * parameter is required if the update is a node group update.</p>
     */
    inline void SetNodegroupName(Aws::String&& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = std::move(value); }

    /**
     * <p>The name of the Amazon EKS node group associated with the update. This
     * parameter is required if the update is a node group update.</p>
     */
    inline void SetNodegroupName(const char* value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName.assign(value); }

    /**
     * <p>The name of the Amazon EKS node group associated with the update. This
     * parameter is required if the update is a node group update.</p>
     */
    inline DescribeUpdateRequest& WithNodegroupName(const Aws::String& value) { SetNodegroupName(value); return *this;}

    /**
     * <p>The name of the Amazon EKS node group associated with the update. This
     * parameter is required if the update is a node group update.</p>
     */
    inline DescribeUpdateRequest& WithNodegroupName(Aws::String&& value) { SetNodegroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon EKS node group associated with the update. This
     * parameter is required if the update is a node group update.</p>
     */
    inline DescribeUpdateRequest& WithNodegroupName(const char* value) { SetNodegroupName(value); return *this;}


    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>. This parameter is required if the update is an
     * add-on update.</p>
     */
    inline const Aws::String& GetAddonName() const{ return m_addonName; }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>. This parameter is required if the update is an
     * add-on update.</p>
     */
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>. This parameter is required if the update is an
     * add-on update.</p>
     */
    inline void SetAddonName(const Aws::String& value) { m_addonNameHasBeenSet = true; m_addonName = value; }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>. This parameter is required if the update is an
     * add-on update.</p>
     */
    inline void SetAddonName(Aws::String&& value) { m_addonNameHasBeenSet = true; m_addonName = std::move(value); }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>. This parameter is required if the update is an
     * add-on update.</p>
     */
    inline void SetAddonName(const char* value) { m_addonNameHasBeenSet = true; m_addonName.assign(value); }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>. This parameter is required if the update is an
     * add-on update.</p>
     */
    inline DescribeUpdateRequest& WithAddonName(const Aws::String& value) { SetAddonName(value); return *this;}

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>. This parameter is required if the update is an
     * add-on update.</p>
     */
    inline DescribeUpdateRequest& WithAddonName(Aws::String&& value) { SetAddonName(std::move(value)); return *this;}

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>. This parameter is required if the update is an
     * add-on update.</p>
     */
    inline DescribeUpdateRequest& WithAddonName(const char* value) { SetAddonName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_updateId;
    bool m_updateIdHasBeenSet = false;

    Aws::String m_nodegroupName;
    bool m_nodegroupNameHasBeenSet = false;

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
