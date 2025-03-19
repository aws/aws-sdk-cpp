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
   * <p>Describes an update request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeUpdateRequest">AWS
   * API Reference</a></p>
   */
  class DescribeUpdateRequest : public EKSRequest
  {
  public:
    AWS_EKS_API DescribeUpdateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeUpdate"; }

    AWS_EKS_API Aws::String SerializePayload() const override;

    AWS_EKS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the Amazon EKS cluster associated with the update.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeUpdateRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the update to describe.</p>
     */
    inline const Aws::String& GetUpdateId() const { return m_updateId; }
    inline bool UpdateIdHasBeenSet() const { return m_updateIdHasBeenSet; }
    template<typename UpdateIdT = Aws::String>
    void SetUpdateId(UpdateIdT&& value) { m_updateIdHasBeenSet = true; m_updateId = std::forward<UpdateIdT>(value); }
    template<typename UpdateIdT = Aws::String>
    DescribeUpdateRequest& WithUpdateId(UpdateIdT&& value) { SetUpdateId(std::forward<UpdateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon EKS node group associated with the update. This
     * parameter is required if the update is a node group update.</p>
     */
    inline const Aws::String& GetNodegroupName() const { return m_nodegroupName; }
    inline bool NodegroupNameHasBeenSet() const { return m_nodegroupNameHasBeenSet; }
    template<typename NodegroupNameT = Aws::String>
    void SetNodegroupName(NodegroupNameT&& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = std::forward<NodegroupNameT>(value); }
    template<typename NodegroupNameT = Aws::String>
    DescribeUpdateRequest& WithNodegroupName(NodegroupNameT&& value) { SetNodegroupName(std::forward<NodegroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>. This parameter is required if the update is an
     * add-on update.</p>
     */
    inline const Aws::String& GetAddonName() const { return m_addonName; }
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }
    template<typename AddonNameT = Aws::String>
    void SetAddonName(AddonNameT&& value) { m_addonNameHasBeenSet = true; m_addonName = std::forward<AddonNameT>(value); }
    template<typename AddonNameT = Aws::String>
    DescribeUpdateRequest& WithAddonName(AddonNameT&& value) { SetAddonName(std::forward<AddonNameT>(value)); return *this;}
    ///@}
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
