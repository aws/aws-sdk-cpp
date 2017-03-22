/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API CreateInstancesFromSnapshotRequest : public LightsailRequest
  {
  public:
    CreateInstancesFromSnapshotRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The names for your new instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceNames() const{ return m_instanceNames; }

    /**
     * <p>The names for your new instances.</p>
     */
    inline void SetInstanceNames(const Aws::Vector<Aws::String>& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = value; }

    /**
     * <p>The names for your new instances.</p>
     */
    inline void SetInstanceNames(Aws::Vector<Aws::String>&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = value; }

    /**
     * <p>The names for your new instances.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithInstanceNames(const Aws::Vector<Aws::String>& value) { SetInstanceNames(value); return *this;}

    /**
     * <p>The names for your new instances.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithInstanceNames(Aws::Vector<Aws::String>&& value) { SetInstanceNames(value); return *this;}

    /**
     * <p>The names for your new instances.</p>
     */
    inline CreateInstancesFromSnapshotRequest& AddInstanceNames(const Aws::String& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }

    /**
     * <p>The names for your new instances.</p>
     */
    inline CreateInstancesFromSnapshotRequest& AddInstanceNames(Aws::String&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }

    /**
     * <p>The names for your new instances.</p>
     */
    inline CreateInstancesFromSnapshotRequest& AddInstanceNames(const char* value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }

    /**
     * <p>The Availability Zone where you want to create your instances. Use the
     * following formatting: <code>us-east-1a</code> (case sensitive).</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone where you want to create your instances. Use the
     * following formatting: <code>us-east-1a</code> (case sensitive).</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone where you want to create your instances. Use the
     * following formatting: <code>us-east-1a</code> (case sensitive).</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone where you want to create your instances. Use the
     * following formatting: <code>us-east-1a</code> (case sensitive).</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone where you want to create your instances. Use the
     * following formatting: <code>us-east-1a</code> (case sensitive).</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone where you want to create your instances. Use the
     * following formatting: <code>us-east-1a</code> (case sensitive).</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone where you want to create your instances. Use the
     * following formatting: <code>us-east-1a</code> (case sensitive).</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The name of the instance snapshot on which you are basing your new instances.
     * Use the get instance snapshots operation to return information about your
     * existing snapshots.</p>
     */
    inline const Aws::String& GetInstanceSnapshotName() const{ return m_instanceSnapshotName; }

    /**
     * <p>The name of the instance snapshot on which you are basing your new instances.
     * Use the get instance snapshots operation to return information about your
     * existing snapshots.</p>
     */
    inline void SetInstanceSnapshotName(const Aws::String& value) { m_instanceSnapshotNameHasBeenSet = true; m_instanceSnapshotName = value; }

    /**
     * <p>The name of the instance snapshot on which you are basing your new instances.
     * Use the get instance snapshots operation to return information about your
     * existing snapshots.</p>
     */
    inline void SetInstanceSnapshotName(Aws::String&& value) { m_instanceSnapshotNameHasBeenSet = true; m_instanceSnapshotName = value; }

    /**
     * <p>The name of the instance snapshot on which you are basing your new instances.
     * Use the get instance snapshots operation to return information about your
     * existing snapshots.</p>
     */
    inline void SetInstanceSnapshotName(const char* value) { m_instanceSnapshotNameHasBeenSet = true; m_instanceSnapshotName.assign(value); }

    /**
     * <p>The name of the instance snapshot on which you are basing your new instances.
     * Use the get instance snapshots operation to return information about your
     * existing snapshots.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithInstanceSnapshotName(const Aws::String& value) { SetInstanceSnapshotName(value); return *this;}

    /**
     * <p>The name of the instance snapshot on which you are basing your new instances.
     * Use the get instance snapshots operation to return information about your
     * existing snapshots.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithInstanceSnapshotName(Aws::String&& value) { SetInstanceSnapshotName(value); return *this;}

    /**
     * <p>The name of the instance snapshot on which you are basing your new instances.
     * Use the get instance snapshots operation to return information about your
     * existing snapshots.</p>
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
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The bundle of specification information for your virtual private server (or
     * <i>instance</i>), including the pricing plan (e.g., <code>micro_1_0</code>).</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

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
    inline CreateInstancesFromSnapshotRequest& WithBundleId(Aws::String&& value) { SetBundleId(value); return *this;}

    /**
     * <p>The bundle of specification information for your virtual private server (or
     * <i>instance</i>), including the pricing plan (e.g., <code>micro_1_0</code>).</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}

    /**
     * <p>You can create a launch script that configures a server with additional user
     * data. For example, <code>apt-get –y update</code>.</p> <note> <p>Depending on
     * the machine image you choose, the command to get software on your instance
     * varies. Amazon Linux and CentOS use <code>yum</code>, Debian and Ubuntu use
     * <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a complete list,
     * see the <a
     * href="http://lightsail.aws.amazon.com/ls/docs/getting-started/articles/pre-installed-apps">Dev
     * Guide</a>.</p> </note>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }

    /**
     * <p>You can create a launch script that configures a server with additional user
     * data. For example, <code>apt-get –y update</code>.</p> <note> <p>Depending on
     * the machine image you choose, the command to get software on your instance
     * varies. Amazon Linux and CentOS use <code>yum</code>, Debian and Ubuntu use
     * <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a complete list,
     * see the <a
     * href="http://lightsail.aws.amazon.com/ls/docs/getting-started/articles/pre-installed-apps">Dev
     * Guide</a>.</p> </note>
     */
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>You can create a launch script that configures a server with additional user
     * data. For example, <code>apt-get –y update</code>.</p> <note> <p>Depending on
     * the machine image you choose, the command to get software on your instance
     * varies. Amazon Linux and CentOS use <code>yum</code>, Debian and Ubuntu use
     * <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a complete list,
     * see the <a
     * href="http://lightsail.aws.amazon.com/ls/docs/getting-started/articles/pre-installed-apps">Dev
     * Guide</a>.</p> </note>
     */
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>You can create a launch script that configures a server with additional user
     * data. For example, <code>apt-get –y update</code>.</p> <note> <p>Depending on
     * the machine image you choose, the command to get software on your instance
     * varies. Amazon Linux and CentOS use <code>yum</code>, Debian and Ubuntu use
     * <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a complete list,
     * see the <a
     * href="http://lightsail.aws.amazon.com/ls/docs/getting-started/articles/pre-installed-apps">Dev
     * Guide</a>.</p> </note>
     */
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }

    /**
     * <p>You can create a launch script that configures a server with additional user
     * data. For example, <code>apt-get –y update</code>.</p> <note> <p>Depending on
     * the machine image you choose, the command to get software on your instance
     * varies. Amazon Linux and CentOS use <code>yum</code>, Debian and Ubuntu use
     * <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a complete list,
     * see the <a
     * href="http://lightsail.aws.amazon.com/ls/docs/getting-started/articles/pre-installed-apps">Dev
     * Guide</a>.</p> </note>
     */
    inline CreateInstancesFromSnapshotRequest& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}

    /**
     * <p>You can create a launch script that configures a server with additional user
     * data. For example, <code>apt-get –y update</code>.</p> <note> <p>Depending on
     * the machine image you choose, the command to get software on your instance
     * varies. Amazon Linux and CentOS use <code>yum</code>, Debian and Ubuntu use
     * <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a complete list,
     * see the <a
     * href="http://lightsail.aws.amazon.com/ls/docs/getting-started/articles/pre-installed-apps">Dev
     * Guide</a>.</p> </note>
     */
    inline CreateInstancesFromSnapshotRequest& WithUserData(Aws::String&& value) { SetUserData(value); return *this;}

    /**
     * <p>You can create a launch script that configures a server with additional user
     * data. For example, <code>apt-get –y update</code>.</p> <note> <p>Depending on
     * the machine image you choose, the command to get software on your instance
     * varies. Amazon Linux and CentOS use <code>yum</code>, Debian and Ubuntu use
     * <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a complete list,
     * see the <a
     * href="http://lightsail.aws.amazon.com/ls/docs/getting-started/articles/pre-installed-apps">Dev
     * Guide</a>.</p> </note>
     */
    inline CreateInstancesFromSnapshotRequest& WithUserData(const char* value) { SetUserData(value); return *this;}

    /**
     * <p>The name for your key pair.</p>
     */
    inline const Aws::String& GetKeyPairName() const{ return m_keyPairName; }

    /**
     * <p>The name for your key pair.</p>
     */
    inline void SetKeyPairName(const Aws::String& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = value; }

    /**
     * <p>The name for your key pair.</p>
     */
    inline void SetKeyPairName(Aws::String&& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = value; }

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
    inline CreateInstancesFromSnapshotRequest& WithKeyPairName(Aws::String&& value) { SetKeyPairName(value); return *this;}

    /**
     * <p>The name for your key pair.</p>
     */
    inline CreateInstancesFromSnapshotRequest& WithKeyPairName(const char* value) { SetKeyPairName(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_instanceNames;
    bool m_instanceNamesHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    Aws::String m_instanceSnapshotName;
    bool m_instanceSnapshotNameHasBeenSet;
    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet;
    Aws::String m_userData;
    bool m_userDataHasBeenSet;
    Aws::String m_keyPairName;
    bool m_keyPairNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
