/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/outposts/model/SupportedHardwareType.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p>Information about an Outpost.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/Outpost">AWS
   * API Reference</a></p>
   */
  class Outpost
  {
  public:
    AWS_OUTPOSTS_API Outpost();
    AWS_OUTPOSTS_API Outpost(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Outpost& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ID of the Outpost. </p>
     */
    inline const Aws::String& GetOutpostId() const{ return m_outpostId; }

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline void SetOutpostId(const Aws::String& value) { m_outpostIdHasBeenSet = true; m_outpostId = value; }

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline void SetOutpostId(Aws::String&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::move(value); }

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline void SetOutpostId(const char* value) { m_outpostIdHasBeenSet = true; m_outpostId.assign(value); }

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline Outpost& WithOutpostId(const Aws::String& value) { SetOutpostId(value); return *this;}

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline Outpost& WithOutpostId(Aws::String&& value) { SetOutpostId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline Outpost& WithOutpostId(const char* value) { SetOutpostId(value); return *this;}


    
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    
    inline Outpost& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    
    inline Outpost& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    
    inline Outpost& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }

    
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }

    
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }

    
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }

    
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }

    
    inline Outpost& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}

    
    inline Outpost& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}

    
    inline Outpost& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}


    
    inline const Aws::String& GetSiteId() const{ return m_siteId; }

    
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }

    
    inline void SetSiteId(const Aws::String& value) { m_siteIdHasBeenSet = true; m_siteId = value; }

    
    inline void SetSiteId(Aws::String&& value) { m_siteIdHasBeenSet = true; m_siteId = std::move(value); }

    
    inline void SetSiteId(const char* value) { m_siteIdHasBeenSet = true; m_siteId.assign(value); }

    
    inline Outpost& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}

    
    inline Outpost& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}

    
    inline Outpost& WithSiteId(const char* value) { SetSiteId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline Outpost& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline Outpost& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline Outpost& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline Outpost& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline Outpost& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline Outpost& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::String& GetLifeCycleStatus() const{ return m_lifeCycleStatus; }

    
    inline bool LifeCycleStatusHasBeenSet() const { return m_lifeCycleStatusHasBeenSet; }

    
    inline void SetLifeCycleStatus(const Aws::String& value) { m_lifeCycleStatusHasBeenSet = true; m_lifeCycleStatus = value; }

    
    inline void SetLifeCycleStatus(Aws::String&& value) { m_lifeCycleStatusHasBeenSet = true; m_lifeCycleStatus = std::move(value); }

    
    inline void SetLifeCycleStatus(const char* value) { m_lifeCycleStatusHasBeenSet = true; m_lifeCycleStatus.assign(value); }

    
    inline Outpost& WithLifeCycleStatus(const Aws::String& value) { SetLifeCycleStatus(value); return *this;}

    
    inline Outpost& WithLifeCycleStatus(Aws::String&& value) { SetLifeCycleStatus(std::move(value)); return *this;}

    
    inline Outpost& WithLifeCycleStatus(const char* value) { SetLifeCycleStatus(value); return *this;}


    
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    
    inline Outpost& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    
    inline Outpost& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    
    inline Outpost& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }

    
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }

    
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }

    
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }

    
    inline Outpost& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    
    inline Outpost& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    
    inline Outpost& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}


    /**
     * <p>The Outpost tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The Outpost tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The Outpost tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The Outpost tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The Outpost tags.</p>
     */
    inline Outpost& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The Outpost tags.</p>
     */
    inline Outpost& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The Outpost tags.</p>
     */
    inline Outpost& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The Outpost tags.</p>
     */
    inline Outpost& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Outpost tags.</p>
     */
    inline Outpost& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Outpost tags.</p>
     */
    inline Outpost& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The Outpost tags.</p>
     */
    inline Outpost& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Outpost tags.</p>
     */
    inline Outpost& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Outpost tags.</p>
     */
    inline Outpost& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetSiteArn() const{ return m_siteArn; }

    
    inline bool SiteArnHasBeenSet() const { return m_siteArnHasBeenSet; }

    
    inline void SetSiteArn(const Aws::String& value) { m_siteArnHasBeenSet = true; m_siteArn = value; }

    
    inline void SetSiteArn(Aws::String&& value) { m_siteArnHasBeenSet = true; m_siteArn = std::move(value); }

    
    inline void SetSiteArn(const char* value) { m_siteArnHasBeenSet = true; m_siteArn.assign(value); }

    
    inline Outpost& WithSiteArn(const Aws::String& value) { SetSiteArn(value); return *this;}

    
    inline Outpost& WithSiteArn(Aws::String&& value) { SetSiteArn(std::move(value)); return *this;}

    
    inline Outpost& WithSiteArn(const char* value) { SetSiteArn(value); return *this;}


    /**
     * <p> The hardware type. </p>
     */
    inline const SupportedHardwareType& GetSupportedHardwareType() const{ return m_supportedHardwareType; }

    /**
     * <p> The hardware type. </p>
     */
    inline bool SupportedHardwareTypeHasBeenSet() const { return m_supportedHardwareTypeHasBeenSet; }

    /**
     * <p> The hardware type. </p>
     */
    inline void SetSupportedHardwareType(const SupportedHardwareType& value) { m_supportedHardwareTypeHasBeenSet = true; m_supportedHardwareType = value; }

    /**
     * <p> The hardware type. </p>
     */
    inline void SetSupportedHardwareType(SupportedHardwareType&& value) { m_supportedHardwareTypeHasBeenSet = true; m_supportedHardwareType = std::move(value); }

    /**
     * <p> The hardware type. </p>
     */
    inline Outpost& WithSupportedHardwareType(const SupportedHardwareType& value) { SetSupportedHardwareType(value); return *this;}

    /**
     * <p> The hardware type. </p>
     */
    inline Outpost& WithSupportedHardwareType(SupportedHardwareType&& value) { SetSupportedHardwareType(std::move(value)); return *this;}

  private:

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_lifeCycleStatus;
    bool m_lifeCycleStatusHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_siteArn;
    bool m_siteArnHasBeenSet = false;

    SupportedHardwareType m_supportedHardwareType;
    bool m_supportedHardwareTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
