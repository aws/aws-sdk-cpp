/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class CreateSourceNetworkRequest : public DrsRequest
  {
  public:
    AWS_DRS_API CreateSourceNetworkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSourceNetwork"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Account containing the VPC to protect.</p>
     */
    inline const Aws::String& GetOriginAccountID() const { return m_originAccountID; }
    inline bool OriginAccountIDHasBeenSet() const { return m_originAccountIDHasBeenSet; }
    template<typename OriginAccountIDT = Aws::String>
    void SetOriginAccountID(OriginAccountIDT&& value) { m_originAccountIDHasBeenSet = true; m_originAccountID = std::forward<OriginAccountIDT>(value); }
    template<typename OriginAccountIDT = Aws::String>
    CreateSourceNetworkRequest& WithOriginAccountID(OriginAccountIDT&& value) { SetOriginAccountID(std::forward<OriginAccountIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region containing the VPC to protect.</p>
     */
    inline const Aws::String& GetOriginRegion() const { return m_originRegion; }
    inline bool OriginRegionHasBeenSet() const { return m_originRegionHasBeenSet; }
    template<typename OriginRegionT = Aws::String>
    void SetOriginRegion(OriginRegionT&& value) { m_originRegionHasBeenSet = true; m_originRegion = std::forward<OriginRegionT>(value); }
    template<typename OriginRegionT = Aws::String>
    CreateSourceNetworkRequest& WithOriginRegion(OriginRegionT&& value) { SetOriginRegion(std::forward<OriginRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of tags to be associated with the Source Network resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateSourceNetworkRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSourceNetworkRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Which VPC ID to protect.</p>
     */
    inline const Aws::String& GetVpcID() const { return m_vpcID; }
    inline bool VpcIDHasBeenSet() const { return m_vpcIDHasBeenSet; }
    template<typename VpcIDT = Aws::String>
    void SetVpcID(VpcIDT&& value) { m_vpcIDHasBeenSet = true; m_vpcID = std::forward<VpcIDT>(value); }
    template<typename VpcIDT = Aws::String>
    CreateSourceNetworkRequest& WithVpcID(VpcIDT&& value) { SetVpcID(std::forward<VpcIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_originAccountID;
    bool m_originAccountIDHasBeenSet = false;

    Aws::String m_originRegion;
    bool m_originRegionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_vpcID;
    bool m_vpcIDHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
