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
    AWS_DRS_API CreateSourceNetworkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSourceNetwork"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    /**
     * <p>Account containing the VPC to protect.</p>
     */
    inline const Aws::String& GetOriginAccountID() const{ return m_originAccountID; }

    /**
     * <p>Account containing the VPC to protect.</p>
     */
    inline bool OriginAccountIDHasBeenSet() const { return m_originAccountIDHasBeenSet; }

    /**
     * <p>Account containing the VPC to protect.</p>
     */
    inline void SetOriginAccountID(const Aws::String& value) { m_originAccountIDHasBeenSet = true; m_originAccountID = value; }

    /**
     * <p>Account containing the VPC to protect.</p>
     */
    inline void SetOriginAccountID(Aws::String&& value) { m_originAccountIDHasBeenSet = true; m_originAccountID = std::move(value); }

    /**
     * <p>Account containing the VPC to protect.</p>
     */
    inline void SetOriginAccountID(const char* value) { m_originAccountIDHasBeenSet = true; m_originAccountID.assign(value); }

    /**
     * <p>Account containing the VPC to protect.</p>
     */
    inline CreateSourceNetworkRequest& WithOriginAccountID(const Aws::String& value) { SetOriginAccountID(value); return *this;}

    /**
     * <p>Account containing the VPC to protect.</p>
     */
    inline CreateSourceNetworkRequest& WithOriginAccountID(Aws::String&& value) { SetOriginAccountID(std::move(value)); return *this;}

    /**
     * <p>Account containing the VPC to protect.</p>
     */
    inline CreateSourceNetworkRequest& WithOriginAccountID(const char* value) { SetOriginAccountID(value); return *this;}


    /**
     * <p>Region containing the VPC to protect.</p>
     */
    inline const Aws::String& GetOriginRegion() const{ return m_originRegion; }

    /**
     * <p>Region containing the VPC to protect.</p>
     */
    inline bool OriginRegionHasBeenSet() const { return m_originRegionHasBeenSet; }

    /**
     * <p>Region containing the VPC to protect.</p>
     */
    inline void SetOriginRegion(const Aws::String& value) { m_originRegionHasBeenSet = true; m_originRegion = value; }

    /**
     * <p>Region containing the VPC to protect.</p>
     */
    inline void SetOriginRegion(Aws::String&& value) { m_originRegionHasBeenSet = true; m_originRegion = std::move(value); }

    /**
     * <p>Region containing the VPC to protect.</p>
     */
    inline void SetOriginRegion(const char* value) { m_originRegionHasBeenSet = true; m_originRegion.assign(value); }

    /**
     * <p>Region containing the VPC to protect.</p>
     */
    inline CreateSourceNetworkRequest& WithOriginRegion(const Aws::String& value) { SetOriginRegion(value); return *this;}

    /**
     * <p>Region containing the VPC to protect.</p>
     */
    inline CreateSourceNetworkRequest& WithOriginRegion(Aws::String&& value) { SetOriginRegion(std::move(value)); return *this;}

    /**
     * <p>Region containing the VPC to protect.</p>
     */
    inline CreateSourceNetworkRequest& WithOriginRegion(const char* value) { SetOriginRegion(value); return *this;}


    /**
     * <p>A set of tags to be associated with the Source Network resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A set of tags to be associated with the Source Network resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A set of tags to be associated with the Source Network resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A set of tags to be associated with the Source Network resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A set of tags to be associated with the Source Network resource.</p>
     */
    inline CreateSourceNetworkRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A set of tags to be associated with the Source Network resource.</p>
     */
    inline CreateSourceNetworkRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A set of tags to be associated with the Source Network resource.</p>
     */
    inline CreateSourceNetworkRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A set of tags to be associated with the Source Network resource.</p>
     */
    inline CreateSourceNetworkRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of tags to be associated with the Source Network resource.</p>
     */
    inline CreateSourceNetworkRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of tags to be associated with the Source Network resource.</p>
     */
    inline CreateSourceNetworkRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of tags to be associated with the Source Network resource.</p>
     */
    inline CreateSourceNetworkRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of tags to be associated with the Source Network resource.</p>
     */
    inline CreateSourceNetworkRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of tags to be associated with the Source Network resource.</p>
     */
    inline CreateSourceNetworkRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Which VPC ID to protect.</p>
     */
    inline const Aws::String& GetVpcID() const{ return m_vpcID; }

    /**
     * <p>Which VPC ID to protect.</p>
     */
    inline bool VpcIDHasBeenSet() const { return m_vpcIDHasBeenSet; }

    /**
     * <p>Which VPC ID to protect.</p>
     */
    inline void SetVpcID(const Aws::String& value) { m_vpcIDHasBeenSet = true; m_vpcID = value; }

    /**
     * <p>Which VPC ID to protect.</p>
     */
    inline void SetVpcID(Aws::String&& value) { m_vpcIDHasBeenSet = true; m_vpcID = std::move(value); }

    /**
     * <p>Which VPC ID to protect.</p>
     */
    inline void SetVpcID(const char* value) { m_vpcIDHasBeenSet = true; m_vpcID.assign(value); }

    /**
     * <p>Which VPC ID to protect.</p>
     */
    inline CreateSourceNetworkRequest& WithVpcID(const Aws::String& value) { SetVpcID(value); return *this;}

    /**
     * <p>Which VPC ID to protect.</p>
     */
    inline CreateSourceNetworkRequest& WithVpcID(Aws::String&& value) { SetVpcID(std::move(value)); return *this;}

    /**
     * <p>Which VPC ID to protect.</p>
     */
    inline CreateSourceNetworkRequest& WithVpcID(const char* value) { SetVpcID(value); return *this;}

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
