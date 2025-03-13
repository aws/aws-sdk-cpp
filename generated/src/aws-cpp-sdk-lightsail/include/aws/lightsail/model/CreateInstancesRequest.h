/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/IpAddressType.h>
#include <aws/lightsail/model/Tag.h>
#include <aws/lightsail/model/AddOnRequest.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class CreateInstancesRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateInstancesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInstances"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The names to use for your new Lightsail instances. Separate multiple values
     * using quotation marks and commas, for example:
     * <code>["MyFirstInstance","MySecondInstance"]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceNames() const { return m_instanceNames; }
    inline bool InstanceNamesHasBeenSet() const { return m_instanceNamesHasBeenSet; }
    template<typename InstanceNamesT = Aws::Vector<Aws::String>>
    void SetInstanceNames(InstanceNamesT&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = std::forward<InstanceNamesT>(value); }
    template<typename InstanceNamesT = Aws::Vector<Aws::String>>
    CreateInstancesRequest& WithInstanceNames(InstanceNamesT&& value) { SetInstanceNames(std::forward<InstanceNamesT>(value)); return *this;}
    template<typename InstanceNamesT = Aws::String>
    CreateInstancesRequest& AddInstanceNames(InstanceNamesT&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.emplace_back(std::forward<InstanceNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which to create your instance. Use the following
     * format: <code>us-east-2a</code> (case sensitive). You can get a list of
     * Availability Zones by using the <a
     * href="http://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetRegions.html">get
     * regions</a> operation. Be sure to add the <code>include Availability
     * Zones</code> parameter to your request.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CreateInstancesRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for a virtual private server image (<code>app_wordpress_x_x</code> or
     * <code>app_lamp_x_x</code>). Use the <code>get blueprints</code> operation to
     * return a list of available images (or <i>blueprints</i>).</p>  <p>Use
     * active blueprints when creating new instances. Inactive blueprints are listed to
     * support customers with existing instances and are not necessarily available to
     * create new instances. Blueprints are marked inactive when they become outdated
     * due to operating system updates or new application releases.</p> 
     */
    inline const Aws::String& GetBlueprintId() const { return m_blueprintId; }
    inline bool BlueprintIdHasBeenSet() const { return m_blueprintIdHasBeenSet; }
    template<typename BlueprintIdT = Aws::String>
    void SetBlueprintId(BlueprintIdT&& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = std::forward<BlueprintIdT>(value); }
    template<typename BlueprintIdT = Aws::String>
    CreateInstancesRequest& WithBlueprintId(BlueprintIdT&& value) { SetBlueprintId(std::forward<BlueprintIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bundle of specification information for your virtual private server (or
     * <i>instance</i>), including the pricing plan (<code>medium_x_x</code>).</p>
     */
    inline const Aws::String& GetBundleId() const { return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    template<typename BundleIdT = Aws::String>
    void SetBundleId(BundleIdT&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::forward<BundleIdT>(value); }
    template<typename BundleIdT = Aws::String>
    CreateInstancesRequest& WithBundleId(BundleIdT&& value) { SetBundleId(std::forward<BundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     *  <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a
     * complete list, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/compare-options-choose-lightsail-instance-image">Amazon
     * Lightsail Developer Guide</a>.</p> 
     */
    inline const Aws::String& GetUserData() const { return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    template<typename UserDataT = Aws::String>
    void SetUserData(UserDataT&& value) { m_userDataHasBeenSet = true; m_userData = std::forward<UserDataT>(value); }
    template<typename UserDataT = Aws::String>
    CreateInstancesRequest& WithUserData(UserDataT&& value) { SetUserData(std::forward<UserDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your key pair.</p>
     */
    inline const Aws::String& GetKeyPairName() const { return m_keyPairName; }
    inline bool KeyPairNameHasBeenSet() const { return m_keyPairNameHasBeenSet; }
    template<typename KeyPairNameT = Aws::String>
    void SetKeyPairName(KeyPairNameT&& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = std::forward<KeyPairNameT>(value); }
    template<typename KeyPairNameT = Aws::String>
    CreateInstancesRequest& WithKeyPairName(KeyPairNameT&& value) { SetKeyPairName(std::forward<KeyPairNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateInstancesRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateInstancesRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects representing the add-ons to enable for the new
     * instance.</p>
     */
    inline const Aws::Vector<AddOnRequest>& GetAddOns() const { return m_addOns; }
    inline bool AddOnsHasBeenSet() const { return m_addOnsHasBeenSet; }
    template<typename AddOnsT = Aws::Vector<AddOnRequest>>
    void SetAddOns(AddOnsT&& value) { m_addOnsHasBeenSet = true; m_addOns = std::forward<AddOnsT>(value); }
    template<typename AddOnsT = Aws::Vector<AddOnRequest>>
    CreateInstancesRequest& WithAddOns(AddOnsT&& value) { SetAddOns(std::forward<AddOnsT>(value)); return *this;}
    template<typename AddOnsT = AddOnRequest>
    CreateInstancesRequest& AddAddOns(AddOnsT&& value) { m_addOnsHasBeenSet = true; m_addOns.emplace_back(std::forward<AddOnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type for the instance.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, <code>ipv6</code> for IPv6 only, and
     * <code>dualstack</code> for IPv4 and IPv6.</p> <p>The default value is
     * <code>dualstack</code>.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline CreateInstancesRequest& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_instanceNames;
    bool m_instanceNamesHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_blueprintId;
    bool m_blueprintIdHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_userData;
    bool m_userDataHasBeenSet = false;

    Aws::String m_keyPairName;
    bool m_keyPairNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<AddOnRequest> m_addOns;
    bool m_addOnsHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
