/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/IpAddressType.h>
#include <aws/lightsail/model/Tag.h>
#include <aws/lightsail/model/AddOnRequest.h>
#include <aws/lightsail/model/DiskMap.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class CreateInstancesFromSnapshotRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateInstancesFromSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInstancesFromSnapshot"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The names for your new instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceNames() const{ return m_instanceNames; }

    /**
     * <p>The names for your new instances.</p>
     */
    inline bool InstanceNamesHasBeenSet() const { return m_instanceNamesHasBeenSet; }

    /**
     * <p>The names for your new instances.</p>
     */
    inline void SetInstanceNames(const Aws::Vector<Aws::String>& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = value; }

    /**
     * <p>The names for your new instances.</p>
     */
    inline void SetInstanceNames(Aws::Vector<Aws::String>&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = std::move(value); }

    /**
     * <p>The names for your new instances.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithInstanceNames(const Aws::Vector<Aws::String>& value) { SetInstanceNames(value); return *this;}

    /**
     * <p>The names for your new instances.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithInstanceNames(Aws::Vector<Aws::String>&& value) { SetInstanceNames(std::move(value)); return *this;}

    /**
     * <p>The names for your new instances.</p>
     */
    inline CreateInstancesFromSnapshotRequest& AddInstanceNames(const Aws::String& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }

    /**
     * <p>The names for your new instances.</p>
     */
    inline CreateInstancesFromSnapshotRequest& AddInstanceNames(Aws::String&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names for your new instances.</p>
     */
    inline CreateInstancesFromSnapshotRequest& AddInstanceNames(const char* value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }


    /**
     * <p>An object containing information about one or more disk mappings.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<DiskMap>>& GetAttachedDiskMapping() const{ return m_attachedDiskMapping; }

    /**
     * <p>An object containing information about one or more disk mappings.</p>
     */
    inline bool AttachedDiskMappingHasBeenSet() const { return m_attachedDiskMappingHasBeenSet; }

    /**
     * <p>An object containing information about one or more disk mappings.</p>
     */
    inline void SetAttachedDiskMapping(const Aws::Map<Aws::String, Aws::Vector<DiskMap>>& value) { m_attachedDiskMappingHasBeenSet = true; m_attachedDiskMapping = value; }

    /**
     * <p>An object containing information about one or more disk mappings.</p>
     */
    inline void SetAttachedDiskMapping(Aws::Map<Aws::String, Aws::Vector<DiskMap>>&& value) { m_attachedDiskMappingHasBeenSet = true; m_attachedDiskMapping = std::move(value); }

    /**
     * <p>An object containing information about one or more disk mappings.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithAttachedDiskMapping(const Aws::Map<Aws::String, Aws::Vector<DiskMap>>& value) { SetAttachedDiskMapping(value); return *this;}

    /**
     * <p>An object containing information about one or more disk mappings.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithAttachedDiskMapping(Aws::Map<Aws::String, Aws::Vector<DiskMap>>&& value) { SetAttachedDiskMapping(std::move(value)); return *this;}

    /**
     * <p>An object containing information about one or more disk mappings.</p>
     */
    inline CreateInstancesFromSnapshotRequest& AddAttachedDiskMapping(const Aws::String& key, const Aws::Vector<DiskMap>& value) { m_attachedDiskMappingHasBeenSet = true; m_attachedDiskMapping.emplace(key, value); return *this; }

    /**
     * <p>An object containing information about one or more disk mappings.</p>
     */
    inline CreateInstancesFromSnapshotRequest& AddAttachedDiskMapping(Aws::String&& key, const Aws::Vector<DiskMap>& value) { m_attachedDiskMappingHasBeenSet = true; m_attachedDiskMapping.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object containing information about one or more disk mappings.</p>
     */
    inline CreateInstancesFromSnapshotRequest& AddAttachedDiskMapping(const Aws::String& key, Aws::Vector<DiskMap>&& value) { m_attachedDiskMappingHasBeenSet = true; m_attachedDiskMapping.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object containing information about one or more disk mappings.</p>
     */
    inline CreateInstancesFromSnapshotRequest& AddAttachedDiskMapping(Aws::String&& key, Aws::Vector<DiskMap>&& value) { m_attachedDiskMappingHasBeenSet = true; m_attachedDiskMapping.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object containing information about one or more disk mappings.</p>
     */
    inline CreateInstancesFromSnapshotRequest& AddAttachedDiskMapping(const char* key, Aws::Vector<DiskMap>&& value) { m_attachedDiskMappingHasBeenSet = true; m_attachedDiskMapping.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object containing information about one or more disk mappings.</p>
     */
    inline CreateInstancesFromSnapshotRequest& AddAttachedDiskMapping(const char* key, const Aws::Vector<DiskMap>& value) { m_attachedDiskMappingHasBeenSet = true; m_attachedDiskMapping.emplace(key, value); return *this; }


    /**
     * <p>The Availability Zone where you want to create your instances. Use the
     * following formatting: <code>us-east-2a</code> (case sensitive). You can get a
     * list of Availability Zones by using the <a
     * href="http://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetRegions.html">get
     * regions</a> operation. Be sure to add the <code>include Availability
     * Zones</code> parameter to your request.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone where you want to create your instances. Use the
     * following formatting: <code>us-east-2a</code> (case sensitive). You can get a
     * list of Availability Zones by using the <a
     * href="http://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetRegions.html">get
     * regions</a> operation. Be sure to add the <code>include Availability
     * Zones</code> parameter to your request.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone where you want to create your instances. Use the
     * following formatting: <code>us-east-2a</code> (case sensitive). You can get a
     * list of Availability Zones by using the <a
     * href="http://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetRegions.html">get
     * regions</a> operation. Be sure to add the <code>include Availability
     * Zones</code> parameter to your request.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone where you want to create your instances. Use the
     * following formatting: <code>us-east-2a</code> (case sensitive). You can get a
     * list of Availability Zones by using the <a
     * href="http://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetRegions.html">get
     * regions</a> operation. Be sure to add the <code>include Availability
     * Zones</code> parameter to your request.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone where you want to create your instances. Use the
     * following formatting: <code>us-east-2a</code> (case sensitive). You can get a
     * list of Availability Zones by using the <a
     * href="http://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetRegions.html">get
     * regions</a> operation. Be sure to add the <code>include Availability
     * Zones</code> parameter to your request.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone where you want to create your instances. Use the
     * following formatting: <code>us-east-2a</code> (case sensitive). You can get a
     * list of Availability Zones by using the <a
     * href="http://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetRegions.html">get
     * regions</a> operation. Be sure to add the <code>include Availability
     * Zones</code> parameter to your request.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone where you want to create your instances. Use the
     * following formatting: <code>us-east-2a</code> (case sensitive). You can get a
     * list of Availability Zones by using the <a
     * href="http://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetRegions.html">get
     * regions</a> operation. Be sure to add the <code>include Availability
     * Zones</code> parameter to your request.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone where you want to create your instances. Use the
     * following formatting: <code>us-east-2a</code> (case sensitive). You can get a
     * list of Availability Zones by using the <a
     * href="http://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetRegions.html">get
     * regions</a> operation. Be sure to add the <code>include Availability
     * Zones</code> parameter to your request.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The name of the instance snapshot on which you are basing your new instances.
     * Use the get instance snapshots operation to return information about your
     * existing snapshots.</p> <p>Constraint:</p> <ul> <li> <p>This parameter cannot be
     * defined together with the <code>source instance name</code> parameter. The
     * <code>instance snapshot name</code> and <code>source instance name</code>
     * parameters are mutually exclusive.</p> </li> </ul>
     */
    inline const Aws::String& GetInstanceSnapshotName() const{ return m_instanceSnapshotName; }

    /**
     * <p>The name of the instance snapshot on which you are basing your new instances.
     * Use the get instance snapshots operation to return information about your
     * existing snapshots.</p> <p>Constraint:</p> <ul> <li> <p>This parameter cannot be
     * defined together with the <code>source instance name</code> parameter. The
     * <code>instance snapshot name</code> and <code>source instance name</code>
     * parameters are mutually exclusive.</p> </li> </ul>
     */
    inline bool InstanceSnapshotNameHasBeenSet() const { return m_instanceSnapshotNameHasBeenSet; }

    /**
     * <p>The name of the instance snapshot on which you are basing your new instances.
     * Use the get instance snapshots operation to return information about your
     * existing snapshots.</p> <p>Constraint:</p> <ul> <li> <p>This parameter cannot be
     * defined together with the <code>source instance name</code> parameter. The
     * <code>instance snapshot name</code> and <code>source instance name</code>
     * parameters are mutually exclusive.</p> </li> </ul>
     */
    inline void SetInstanceSnapshotName(const Aws::String& value) { m_instanceSnapshotNameHasBeenSet = true; m_instanceSnapshotName = value; }

    /**
     * <p>The name of the instance snapshot on which you are basing your new instances.
     * Use the get instance snapshots operation to return information about your
     * existing snapshots.</p> <p>Constraint:</p> <ul> <li> <p>This parameter cannot be
     * defined together with the <code>source instance name</code> parameter. The
     * <code>instance snapshot name</code> and <code>source instance name</code>
     * parameters are mutually exclusive.</p> </li> </ul>
     */
    inline void SetInstanceSnapshotName(Aws::String&& value) { m_instanceSnapshotNameHasBeenSet = true; m_instanceSnapshotName = std::move(value); }

    /**
     * <p>The name of the instance snapshot on which you are basing your new instances.
     * Use the get instance snapshots operation to return information about your
     * existing snapshots.</p> <p>Constraint:</p> <ul> <li> <p>This parameter cannot be
     * defined together with the <code>source instance name</code> parameter. The
     * <code>instance snapshot name</code> and <code>source instance name</code>
     * parameters are mutually exclusive.</p> </li> </ul>
     */
    inline void SetInstanceSnapshotName(const char* value) { m_instanceSnapshotNameHasBeenSet = true; m_instanceSnapshotName.assign(value); }

    /**
     * <p>The name of the instance snapshot on which you are basing your new instances.
     * Use the get instance snapshots operation to return information about your
     * existing snapshots.</p> <p>Constraint:</p> <ul> <li> <p>This parameter cannot be
     * defined together with the <code>source instance name</code> parameter. The
     * <code>instance snapshot name</code> and <code>source instance name</code>
     * parameters are mutually exclusive.</p> </li> </ul>
     */
    inline CreateInstancesFromSnapshotRequest& WithInstanceSnapshotName(const Aws::String& value) { SetInstanceSnapshotName(value); return *this;}

    /**
     * <p>The name of the instance snapshot on which you are basing your new instances.
     * Use the get instance snapshots operation to return information about your
     * existing snapshots.</p> <p>Constraint:</p> <ul> <li> <p>This parameter cannot be
     * defined together with the <code>source instance name</code> parameter. The
     * <code>instance snapshot name</code> and <code>source instance name</code>
     * parameters are mutually exclusive.</p> </li> </ul>
     */
    inline CreateInstancesFromSnapshotRequest& WithInstanceSnapshotName(Aws::String&& value) { SetInstanceSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the instance snapshot on which you are basing your new instances.
     * Use the get instance snapshots operation to return information about your
     * existing snapshots.</p> <p>Constraint:</p> <ul> <li> <p>This parameter cannot be
     * defined together with the <code>source instance name</code> parameter. The
     * <code>instance snapshot name</code> and <code>source instance name</code>
     * parameters are mutually exclusive.</p> </li> </ul>
     */
    inline CreateInstancesFromSnapshotRequest& WithInstanceSnapshotName(const char* value) { SetInstanceSnapshotName(value); return *this;}


    /**
     * <p>The bundle of specification information for your virtual private server (or
     * <i>instance</i>), including the pricing plan (e.g., <code>micro_1_0</code>).</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The bundle of specification information for your virtual private server (or
     * <i>instance</i>), including the pricing plan (e.g., <code>micro_1_0</code>).</p>
     */
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }

    /**
     * <p>The bundle of specification information for your virtual private server (or
     * <i>instance</i>), including the pricing plan (e.g., <code>micro_1_0</code>).</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The bundle of specification information for your virtual private server (or
     * <i>instance</i>), including the pricing plan (e.g., <code>micro_1_0</code>).</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }

    /**
     * <p>The bundle of specification information for your virtual private server (or
     * <i>instance</i>), including the pricing plan (e.g., <code>micro_1_0</code>).</p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p>The bundle of specification information for your virtual private server (or
     * <i>instance</i>), including the pricing plan (e.g., <code>micro_1_0</code>).</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The bundle of specification information for your virtual private server (or
     * <i>instance</i>), including the pricing plan (e.g., <code>micro_1_0</code>).</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}

    /**
     * <p>The bundle of specification information for your virtual private server (or
     * <i>instance</i>), including the pricing plan (e.g., <code>micro_1_0</code>).</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}


    /**
     * <p>You can create a launch script that configures a server with additional user
     * data. For example, <code>apt-get -y update</code>.</p>  <p>Depending on
     * the machine image you choose, the command to get software on your instance
     * varies. Amazon Linux and CentOS use <code>yum</code>, Debian and Ubuntu use
     * <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a complete list,
     * see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/compare-options-choose-lightsail-instance-image">Amazon
     * Lightsail Developer Guide</a>.</p> 
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }

    /**
     * <p>You can create a launch script that configures a server with additional user
     * data. For example, <code>apt-get -y update</code>.</p>  <p>Depending on
     * the machine image you choose, the command to get software on your instance
     * varies. Amazon Linux and CentOS use <code>yum</code>, Debian and Ubuntu use
     * <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a complete list,
     * see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/compare-options-choose-lightsail-instance-image">Amazon
     * Lightsail Developer Guide</a>.</p> 
     */
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }

    /**
     * <p>You can create a launch script that configures a server with additional user
     * data. For example, <code>apt-get -y update</code>.</p>  <p>Depending on
     * the machine image you choose, the command to get software on your instance
     * varies. Amazon Linux and CentOS use <code>yum</code>, Debian and Ubuntu use
     * <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a complete list,
     * see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/compare-options-choose-lightsail-instance-image">Amazon
     * Lightsail Developer Guide</a>.</p> 
     */
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>You can create a launch script that configures a server with additional user
     * data. For example, <code>apt-get -y update</code>.</p>  <p>Depending on
     * the machine image you choose, the command to get software on your instance
     * varies. Amazon Linux and CentOS use <code>yum</code>, Debian and Ubuntu use
     * <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a complete list,
     * see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/compare-options-choose-lightsail-instance-image">Amazon
     * Lightsail Developer Guide</a>.</p> 
     */
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }

    /**
     * <p>You can create a launch script that configures a server with additional user
     * data. For example, <code>apt-get -y update</code>.</p>  <p>Depending on
     * the machine image you choose, the command to get software on your instance
     * varies. Amazon Linux and CentOS use <code>yum</code>, Debian and Ubuntu use
     * <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a complete list,
     * see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/compare-options-choose-lightsail-instance-image">Amazon
     * Lightsail Developer Guide</a>.</p> 
     */
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }

    /**
     * <p>You can create a launch script that configures a server with additional user
     * data. For example, <code>apt-get -y update</code>.</p>  <p>Depending on
     * the machine image you choose, the command to get software on your instance
     * varies. Amazon Linux and CentOS use <code>yum</code>, Debian and Ubuntu use
     * <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a complete list,
     * see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/compare-options-choose-lightsail-instance-image">Amazon
     * Lightsail Developer Guide</a>.</p> 
     */
    inline CreateInstancesFromSnapshotRequest& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}

    /**
     * <p>You can create a launch script that configures a server with additional user
     * data. For example, <code>apt-get -y update</code>.</p>  <p>Depending on
     * the machine image you choose, the command to get software on your instance
     * varies. Amazon Linux and CentOS use <code>yum</code>, Debian and Ubuntu use
     * <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a complete list,
     * see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/compare-options-choose-lightsail-instance-image">Amazon
     * Lightsail Developer Guide</a>.</p> 
     */
    inline CreateInstancesFromSnapshotRequest& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}

    /**
     * <p>You can create a launch script that configures a server with additional user
     * data. For example, <code>apt-get -y update</code>.</p>  <p>Depending on
     * the machine image you choose, the command to get software on your instance
     * varies. Amazon Linux and CentOS use <code>yum</code>, Debian and Ubuntu use
     * <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a complete list,
     * see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/compare-options-choose-lightsail-instance-image">Amazon
     * Lightsail Developer Guide</a>.</p> 
     */
    inline CreateInstancesFromSnapshotRequest& WithUserData(const char* value) { SetUserData(value); return *this;}


    /**
     * <p>The name for your key pair.</p>
     */
    inline const Aws::String& GetKeyPairName() const{ return m_keyPairName; }

    /**
     * <p>The name for your key pair.</p>
     */
    inline bool KeyPairNameHasBeenSet() const { return m_keyPairNameHasBeenSet; }

    /**
     * <p>The name for your key pair.</p>
     */
    inline void SetKeyPairName(const Aws::String& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = value; }

    /**
     * <p>The name for your key pair.</p>
     */
    inline void SetKeyPairName(Aws::String&& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = std::move(value); }

    /**
     * <p>The name for your key pair.</p>
     */
    inline void SetKeyPairName(const char* value) { m_keyPairNameHasBeenSet = true; m_keyPairName.assign(value); }

    /**
     * <p>The name for your key pair.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithKeyPairName(const Aws::String& value) { SetKeyPairName(value); return *this;}

    /**
     * <p>The name for your key pair.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithKeyPairName(Aws::String&& value) { SetKeyPairName(std::move(value)); return *this;}

    /**
     * <p>The name for your key pair.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithKeyPairName(const char* value) { SetKeyPairName(value); return *this;}


    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateInstancesFromSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateInstancesFromSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of objects representing the add-ons to enable for the new
     * instance.</p>
     */
    inline const Aws::Vector<AddOnRequest>& GetAddOns() const{ return m_addOns; }

    /**
     * <p>An array of objects representing the add-ons to enable for the new
     * instance.</p>
     */
    inline bool AddOnsHasBeenSet() const { return m_addOnsHasBeenSet; }

    /**
     * <p>An array of objects representing the add-ons to enable for the new
     * instance.</p>
     */
    inline void SetAddOns(const Aws::Vector<AddOnRequest>& value) { m_addOnsHasBeenSet = true; m_addOns = value; }

    /**
     * <p>An array of objects representing the add-ons to enable for the new
     * instance.</p>
     */
    inline void SetAddOns(Aws::Vector<AddOnRequest>&& value) { m_addOnsHasBeenSet = true; m_addOns = std::move(value); }

    /**
     * <p>An array of objects representing the add-ons to enable for the new
     * instance.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithAddOns(const Aws::Vector<AddOnRequest>& value) { SetAddOns(value); return *this;}

    /**
     * <p>An array of objects representing the add-ons to enable for the new
     * instance.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithAddOns(Aws::Vector<AddOnRequest>&& value) { SetAddOns(std::move(value)); return *this;}

    /**
     * <p>An array of objects representing the add-ons to enable for the new
     * instance.</p>
     */
    inline CreateInstancesFromSnapshotRequest& AddAddOns(const AddOnRequest& value) { m_addOnsHasBeenSet = true; m_addOns.push_back(value); return *this; }

    /**
     * <p>An array of objects representing the add-ons to enable for the new
     * instance.</p>
     */
    inline CreateInstancesFromSnapshotRequest& AddAddOns(AddOnRequest&& value) { m_addOnsHasBeenSet = true; m_addOns.push_back(std::move(value)); return *this; }


    /**
     * <p>The IP address type for the instance.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }

    /**
     * <p>The IP address type for the instance.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }

    /**
     * <p>The IP address type for the instance.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>The IP address type for the instance.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }

    /**
     * <p>The IP address type for the instance.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>The IP address type for the instance.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}


    /**
     * <p>The name of the source instance from which the source automatic snapshot was
     * created.</p> <p>Constraints:</p> <ul> <li> <p>This parameter cannot be defined
     * together with the <code>instance snapshot name</code> parameter. The
     * <code>source instance name</code> and <code>instance snapshot name</code>
     * parameters are mutually exclusive.</p> </li> <li> <p>Define this parameter only
     * when creating a new instance from an automatic snapshot. For more information,
     * see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceInstanceName() const{ return m_sourceInstanceName; }

    /**
     * <p>The name of the source instance from which the source automatic snapshot was
     * created.</p> <p>Constraints:</p> <ul> <li> <p>This parameter cannot be defined
     * together with the <code>instance snapshot name</code> parameter. The
     * <code>source instance name</code> and <code>instance snapshot name</code>
     * parameters are mutually exclusive.</p> </li> <li> <p>Define this parameter only
     * when creating a new instance from an automatic snapshot. For more information,
     * see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline bool SourceInstanceNameHasBeenSet() const { return m_sourceInstanceNameHasBeenSet; }

    /**
     * <p>The name of the source instance from which the source automatic snapshot was
     * created.</p> <p>Constraints:</p> <ul> <li> <p>This parameter cannot be defined
     * together with the <code>instance snapshot name</code> parameter. The
     * <code>source instance name</code> and <code>instance snapshot name</code>
     * parameters are mutually exclusive.</p> </li> <li> <p>Define this parameter only
     * when creating a new instance from an automatic snapshot. For more information,
     * see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline void SetSourceInstanceName(const Aws::String& value) { m_sourceInstanceNameHasBeenSet = true; m_sourceInstanceName = value; }

    /**
     * <p>The name of the source instance from which the source automatic snapshot was
     * created.</p> <p>Constraints:</p> <ul> <li> <p>This parameter cannot be defined
     * together with the <code>instance snapshot name</code> parameter. The
     * <code>source instance name</code> and <code>instance snapshot name</code>
     * parameters are mutually exclusive.</p> </li> <li> <p>Define this parameter only
     * when creating a new instance from an automatic snapshot. For more information,
     * see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline void SetSourceInstanceName(Aws::String&& value) { m_sourceInstanceNameHasBeenSet = true; m_sourceInstanceName = std::move(value); }

    /**
     * <p>The name of the source instance from which the source automatic snapshot was
     * created.</p> <p>Constraints:</p> <ul> <li> <p>This parameter cannot be defined
     * together with the <code>instance snapshot name</code> parameter. The
     * <code>source instance name</code> and <code>instance snapshot name</code>
     * parameters are mutually exclusive.</p> </li> <li> <p>Define this parameter only
     * when creating a new instance from an automatic snapshot. For more information,
     * see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline void SetSourceInstanceName(const char* value) { m_sourceInstanceNameHasBeenSet = true; m_sourceInstanceName.assign(value); }

    /**
     * <p>The name of the source instance from which the source automatic snapshot was
     * created.</p> <p>Constraints:</p> <ul> <li> <p>This parameter cannot be defined
     * together with the <code>instance snapshot name</code> parameter. The
     * <code>source instance name</code> and <code>instance snapshot name</code>
     * parameters are mutually exclusive.</p> </li> <li> <p>Define this parameter only
     * when creating a new instance from an automatic snapshot. For more information,
     * see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline CreateInstancesFromSnapshotRequest& WithSourceInstanceName(const Aws::String& value) { SetSourceInstanceName(value); return *this;}

    /**
     * <p>The name of the source instance from which the source automatic snapshot was
     * created.</p> <p>Constraints:</p> <ul> <li> <p>This parameter cannot be defined
     * together with the <code>instance snapshot name</code> parameter. The
     * <code>source instance name</code> and <code>instance snapshot name</code>
     * parameters are mutually exclusive.</p> </li> <li> <p>Define this parameter only
     * when creating a new instance from an automatic snapshot. For more information,
     * see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline CreateInstancesFromSnapshotRequest& WithSourceInstanceName(Aws::String&& value) { SetSourceInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the source instance from which the source automatic snapshot was
     * created.</p> <p>Constraints:</p> <ul> <li> <p>This parameter cannot be defined
     * together with the <code>instance snapshot name</code> parameter. The
     * <code>source instance name</code> and <code>instance snapshot name</code>
     * parameters are mutually exclusive.</p> </li> <li> <p>Define this parameter only
     * when creating a new instance from an automatic snapshot. For more information,
     * see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline CreateInstancesFromSnapshotRequest& WithSourceInstanceName(const char* value) { SetSourceInstanceName(value); return *this;}


    /**
     * <p>The date of the automatic snapshot to use for the new instance. Use the
     * <code>get auto snapshots</code> operation to identify the dates of the available
     * automatic snapshots.</p> <p>Constraints:</p> <ul> <li> <p>Must be specified in
     * <code>YYYY-MM-DD</code> format.</p> </li> <li> <p>This parameter cannot be
     * defined together with the <code>use latest restorable auto snapshot</code>
     * parameter. The <code>restore date</code> and <code>use latest restorable auto
     * snapshot</code> parameters are mutually exclusive.</p> </li> <li> <p>Define this
     * parameter only when creating a new instance from an automatic snapshot. For more
     * information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetRestoreDate() const{ return m_restoreDate; }

    /**
     * <p>The date of the automatic snapshot to use for the new instance. Use the
     * <code>get auto snapshots</code> operation to identify the dates of the available
     * automatic snapshots.</p> <p>Constraints:</p> <ul> <li> <p>Must be specified in
     * <code>YYYY-MM-DD</code> format.</p> </li> <li> <p>This parameter cannot be
     * defined together with the <code>use latest restorable auto snapshot</code>
     * parameter. The <code>restore date</code> and <code>use latest restorable auto
     * snapshot</code> parameters are mutually exclusive.</p> </li> <li> <p>Define this
     * parameter only when creating a new instance from an automatic snapshot. For more
     * information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline bool RestoreDateHasBeenSet() const { return m_restoreDateHasBeenSet; }

    /**
     * <p>The date of the automatic snapshot to use for the new instance. Use the
     * <code>get auto snapshots</code> operation to identify the dates of the available
     * automatic snapshots.</p> <p>Constraints:</p> <ul> <li> <p>Must be specified in
     * <code>YYYY-MM-DD</code> format.</p> </li> <li> <p>This parameter cannot be
     * defined together with the <code>use latest restorable auto snapshot</code>
     * parameter. The <code>restore date</code> and <code>use latest restorable auto
     * snapshot</code> parameters are mutually exclusive.</p> </li> <li> <p>Define this
     * parameter only when creating a new instance from an automatic snapshot. For more
     * information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline void SetRestoreDate(const Aws::String& value) { m_restoreDateHasBeenSet = true; m_restoreDate = value; }

    /**
     * <p>The date of the automatic snapshot to use for the new instance. Use the
     * <code>get auto snapshots</code> operation to identify the dates of the available
     * automatic snapshots.</p> <p>Constraints:</p> <ul> <li> <p>Must be specified in
     * <code>YYYY-MM-DD</code> format.</p> </li> <li> <p>This parameter cannot be
     * defined together with the <code>use latest restorable auto snapshot</code>
     * parameter. The <code>restore date</code> and <code>use latest restorable auto
     * snapshot</code> parameters are mutually exclusive.</p> </li> <li> <p>Define this
     * parameter only when creating a new instance from an automatic snapshot. For more
     * information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline void SetRestoreDate(Aws::String&& value) { m_restoreDateHasBeenSet = true; m_restoreDate = std::move(value); }

    /**
     * <p>The date of the automatic snapshot to use for the new instance. Use the
     * <code>get auto snapshots</code> operation to identify the dates of the available
     * automatic snapshots.</p> <p>Constraints:</p> <ul> <li> <p>Must be specified in
     * <code>YYYY-MM-DD</code> format.</p> </li> <li> <p>This parameter cannot be
     * defined together with the <code>use latest restorable auto snapshot</code>
     * parameter. The <code>restore date</code> and <code>use latest restorable auto
     * snapshot</code> parameters are mutually exclusive.</p> </li> <li> <p>Define this
     * parameter only when creating a new instance from an automatic snapshot. For more
     * information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline void SetRestoreDate(const char* value) { m_restoreDateHasBeenSet = true; m_restoreDate.assign(value); }

    /**
     * <p>The date of the automatic snapshot to use for the new instance. Use the
     * <code>get auto snapshots</code> operation to identify the dates of the available
     * automatic snapshots.</p> <p>Constraints:</p> <ul> <li> <p>Must be specified in
     * <code>YYYY-MM-DD</code> format.</p> </li> <li> <p>This parameter cannot be
     * defined together with the <code>use latest restorable auto snapshot</code>
     * parameter. The <code>restore date</code> and <code>use latest restorable auto
     * snapshot</code> parameters are mutually exclusive.</p> </li> <li> <p>Define this
     * parameter only when creating a new instance from an automatic snapshot. For more
     * information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline CreateInstancesFromSnapshotRequest& WithRestoreDate(const Aws::String& value) { SetRestoreDate(value); return *this;}

    /**
     * <p>The date of the automatic snapshot to use for the new instance. Use the
     * <code>get auto snapshots</code> operation to identify the dates of the available
     * automatic snapshots.</p> <p>Constraints:</p> <ul> <li> <p>Must be specified in
     * <code>YYYY-MM-DD</code> format.</p> </li> <li> <p>This parameter cannot be
     * defined together with the <code>use latest restorable auto snapshot</code>
     * parameter. The <code>restore date</code> and <code>use latest restorable auto
     * snapshot</code> parameters are mutually exclusive.</p> </li> <li> <p>Define this
     * parameter only when creating a new instance from an automatic snapshot. For more
     * information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline CreateInstancesFromSnapshotRequest& WithRestoreDate(Aws::String&& value) { SetRestoreDate(std::move(value)); return *this;}

    /**
     * <p>The date of the automatic snapshot to use for the new instance. Use the
     * <code>get auto snapshots</code> operation to identify the dates of the available
     * automatic snapshots.</p> <p>Constraints:</p> <ul> <li> <p>Must be specified in
     * <code>YYYY-MM-DD</code> format.</p> </li> <li> <p>This parameter cannot be
     * defined together with the <code>use latest restorable auto snapshot</code>
     * parameter. The <code>restore date</code> and <code>use latest restorable auto
     * snapshot</code> parameters are mutually exclusive.</p> </li> <li> <p>Define this
     * parameter only when creating a new instance from an automatic snapshot. For more
     * information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline CreateInstancesFromSnapshotRequest& WithRestoreDate(const char* value) { SetRestoreDate(value); return *this;}


    /**
     * <p>A Boolean value to indicate whether to use the latest available automatic
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>This parameter cannot be defined
     * together with the <code>restore date</code> parameter. The <code>use latest
     * restorable auto snapshot</code> and <code>restore date</code> parameters are
     * mutually exclusive.</p> </li> <li> <p>Define this parameter only when creating a
     * new instance from an automatic snapshot. For more information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline bool GetUseLatestRestorableAutoSnapshot() const{ return m_useLatestRestorableAutoSnapshot; }

    /**
     * <p>A Boolean value to indicate whether to use the latest available automatic
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>This parameter cannot be defined
     * together with the <code>restore date</code> parameter. The <code>use latest
     * restorable auto snapshot</code> and <code>restore date</code> parameters are
     * mutually exclusive.</p> </li> <li> <p>Define this parameter only when creating a
     * new instance from an automatic snapshot. For more information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline bool UseLatestRestorableAutoSnapshotHasBeenSet() const { return m_useLatestRestorableAutoSnapshotHasBeenSet; }

    /**
     * <p>A Boolean value to indicate whether to use the latest available automatic
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>This parameter cannot be defined
     * together with the <code>restore date</code> parameter. The <code>use latest
     * restorable auto snapshot</code> and <code>restore date</code> parameters are
     * mutually exclusive.</p> </li> <li> <p>Define this parameter only when creating a
     * new instance from an automatic snapshot. For more information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline void SetUseLatestRestorableAutoSnapshot(bool value) { m_useLatestRestorableAutoSnapshotHasBeenSet = true; m_useLatestRestorableAutoSnapshot = value; }

    /**
     * <p>A Boolean value to indicate whether to use the latest available automatic
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>This parameter cannot be defined
     * together with the <code>restore date</code> parameter. The <code>use latest
     * restorable auto snapshot</code> and <code>restore date</code> parameters are
     * mutually exclusive.</p> </li> <li> <p>Define this parameter only when creating a
     * new instance from an automatic snapshot. For more information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline CreateInstancesFromSnapshotRequest& WithUseLatestRestorableAutoSnapshot(bool value) { SetUseLatestRestorableAutoSnapshot(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_instanceNames;
    bool m_instanceNamesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<DiskMap>> m_attachedDiskMapping;
    bool m_attachedDiskMappingHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_instanceSnapshotName;
    bool m_instanceSnapshotNameHasBeenSet = false;

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

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::String m_sourceInstanceName;
    bool m_sourceInstanceNameHasBeenSet = false;

    Aws::String m_restoreDate;
    bool m_restoreDateHasBeenSet = false;

    bool m_useLatestRestorableAutoSnapshot;
    bool m_useLatestRestorableAutoSnapshotHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
