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
  class AWS_LIGHTSAIL_API CreateInstancesRequest : public LightsailRequest
  {
  public:
    CreateInstancesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The names to use for your new Lightsail instances. Separate multiple values
     * using quotation marks and commas, for example:
     * <code>["MyFirstInstance","MySecondInstance"]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceNames() const{ return m_instanceNames; }

    /**
     * <p>The names to use for your new Lightsail instances. Separate multiple values
     * using quotation marks and commas, for example:
     * <code>["MyFirstInstance","MySecondInstance"]</code> </p>
     */
    inline void SetInstanceNames(const Aws::Vector<Aws::String>& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = value; }

    /**
     * <p>The names to use for your new Lightsail instances. Separate multiple values
     * using quotation marks and commas, for example:
     * <code>["MyFirstInstance","MySecondInstance"]</code> </p>
     */
    inline void SetInstanceNames(Aws::Vector<Aws::String>&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = value; }

    /**
     * <p>The names to use for your new Lightsail instances. Separate multiple values
     * using quotation marks and commas, for example:
     * <code>["MyFirstInstance","MySecondInstance"]</code> </p>
     */
    inline CreateInstancesRequest& WithInstanceNames(const Aws::Vector<Aws::String>& value) { SetInstanceNames(value); return *this;}

    /**
     * <p>The names to use for your new Lightsail instances. Separate multiple values
     * using quotation marks and commas, for example:
     * <code>["MyFirstInstance","MySecondInstance"]</code> </p>
     */
    inline CreateInstancesRequest& WithInstanceNames(Aws::Vector<Aws::String>&& value) { SetInstanceNames(value); return *this;}

    /**
     * <p>The names to use for your new Lightsail instances. Separate multiple values
     * using quotation marks and commas, for example:
     * <code>["MyFirstInstance","MySecondInstance"]</code> </p>
     */
    inline CreateInstancesRequest& AddInstanceNames(const Aws::String& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }

    /**
     * <p>The names to use for your new Lightsail instances. Separate multiple values
     * using quotation marks and commas, for example:
     * <code>["MyFirstInstance","MySecondInstance"]</code> </p>
     */
    inline CreateInstancesRequest& AddInstanceNames(Aws::String&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }

    /**
     * <p>The names to use for your new Lightsail instances. Separate multiple values
     * using quotation marks and commas, for example:
     * <code>["MyFirstInstance","MySecondInstance"]</code> </p>
     */
    inline CreateInstancesRequest& AddInstanceNames(const char* value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }

    /**
     * <p>The Availability Zone in which to create your instance. Use the following
     * format: <code>us-east-1a</code> (case sensitive).</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which to create your instance. Use the following
     * format: <code>us-east-1a</code> (case sensitive).</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which to create your instance. Use the following
     * format: <code>us-east-1a</code> (case sensitive).</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which to create your instance. Use the following
     * format: <code>us-east-1a</code> (case sensitive).</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which to create your instance. Use the following
     * format: <code>us-east-1a</code> (case sensitive).</p>
     */
    inline CreateInstancesRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which to create your instance. Use the following
     * format: <code>us-east-1a</code> (case sensitive).</p>
     */
    inline CreateInstancesRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which to create your instance. Use the following
     * format: <code>us-east-1a</code> (case sensitive).</p>
     */
    inline CreateInstancesRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The name for your custom image.</p>
     */
    inline const Aws::String& GetCustomImageName() const{ return m_customImageName; }

    /**
     * <p>The name for your custom image.</p>
     */
    inline void SetCustomImageName(const Aws::String& value) { m_customImageNameHasBeenSet = true; m_customImageName = value; }

    /**
     * <p>The name for your custom image.</p>
     */
    inline void SetCustomImageName(Aws::String&& value) { m_customImageNameHasBeenSet = true; m_customImageName = value; }

    /**
     * <p>The name for your custom image.</p>
     */
    inline void SetCustomImageName(const char* value) { m_customImageNameHasBeenSet = true; m_customImageName.assign(value); }

    /**
     * <p>The name for your custom image.</p>
     */
    inline CreateInstancesRequest& WithCustomImageName(const Aws::String& value) { SetCustomImageName(value); return *this;}

    /**
     * <p>The name for your custom image.</p>
     */
    inline CreateInstancesRequest& WithCustomImageName(Aws::String&& value) { SetCustomImageName(value); return *this;}

    /**
     * <p>The name for your custom image.</p>
     */
    inline CreateInstancesRequest& WithCustomImageName(const char* value) { SetCustomImageName(value); return *this;}

    /**
     * <p>The ID for a virtual private server image (e.g.,
     * <code>app_wordpress_4_4</code> or <code>app_lamp_7_0</code>). Use the get
     * blueprints operation to return a list of available images (or
     * <i>blueprints</i>).</p>
     */
    inline const Aws::String& GetBlueprintId() const{ return m_blueprintId; }

    /**
     * <p>The ID for a virtual private server image (e.g.,
     * <code>app_wordpress_4_4</code> or <code>app_lamp_7_0</code>). Use the get
     * blueprints operation to return a list of available images (or
     * <i>blueprints</i>).</p>
     */
    inline void SetBlueprintId(const Aws::String& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = value; }

    /**
     * <p>The ID for a virtual private server image (e.g.,
     * <code>app_wordpress_4_4</code> or <code>app_lamp_7_0</code>). Use the get
     * blueprints operation to return a list of available images (or
     * <i>blueprints</i>).</p>
     */
    inline void SetBlueprintId(Aws::String&& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = value; }

    /**
     * <p>The ID for a virtual private server image (e.g.,
     * <code>app_wordpress_4_4</code> or <code>app_lamp_7_0</code>). Use the get
     * blueprints operation to return a list of available images (or
     * <i>blueprints</i>).</p>
     */
    inline void SetBlueprintId(const char* value) { m_blueprintIdHasBeenSet = true; m_blueprintId.assign(value); }

    /**
     * <p>The ID for a virtual private server image (e.g.,
     * <code>app_wordpress_4_4</code> or <code>app_lamp_7_0</code>). Use the get
     * blueprints operation to return a list of available images (or
     * <i>blueprints</i>).</p>
     */
    inline CreateInstancesRequest& WithBlueprintId(const Aws::String& value) { SetBlueprintId(value); return *this;}

    /**
     * <p>The ID for a virtual private server image (e.g.,
     * <code>app_wordpress_4_4</code> or <code>app_lamp_7_0</code>). Use the get
     * blueprints operation to return a list of available images (or
     * <i>blueprints</i>).</p>
     */
    inline CreateInstancesRequest& WithBlueprintId(Aws::String&& value) { SetBlueprintId(value); return *this;}

    /**
     * <p>The ID for a virtual private server image (e.g.,
     * <code>app_wordpress_4_4</code> or <code>app_lamp_7_0</code>). Use the get
     * blueprints operation to return a list of available images (or
     * <i>blueprints</i>).</p>
     */
    inline CreateInstancesRequest& WithBlueprintId(const char* value) { SetBlueprintId(value); return *this;}

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
    inline CreateInstancesRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The bundle of specification information for your virtual private server (or
     * <i>instance</i>), including the pricing plan (e.g., <code>micro_1_0</code>).</p>
     */
    inline CreateInstancesRequest& WithBundleId(Aws::String&& value) { SetBundleId(value); return *this;}

    /**
     * <p>The bundle of specification information for your virtual private server (or
     * <i>instance</i>), including the pricing plan (e.g., <code>micro_1_0</code>).</p>
     */
    inline CreateInstancesRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get –y update</code>.</p>
     * <note> <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a
     * complete list, see the <a
     * href="http://lightsail.aws.amazon.com/ls/docs/getting-started/articles/pre-installed-apps">Dev
     * Guide</a>.</p> </note>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get –y update</code>.</p>
     * <note> <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a
     * complete list, see the <a
     * href="http://lightsail.aws.amazon.com/ls/docs/getting-started/articles/pre-installed-apps">Dev
     * Guide</a>.</p> </note>
     */
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get –y update</code>.</p>
     * <note> <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a
     * complete list, see the <a
     * href="http://lightsail.aws.amazon.com/ls/docs/getting-started/articles/pre-installed-apps">Dev
     * Guide</a>.</p> </note>
     */
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get –y update</code>.</p>
     * <note> <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a
     * complete list, see the <a
     * href="http://lightsail.aws.amazon.com/ls/docs/getting-started/articles/pre-installed-apps">Dev
     * Guide</a>.</p> </note>
     */
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get –y update</code>.</p>
     * <note> <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a
     * complete list, see the <a
     * href="http://lightsail.aws.amazon.com/ls/docs/getting-started/articles/pre-installed-apps">Dev
     * Guide</a>.</p> </note>
     */
    inline CreateInstancesRequest& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get –y update</code>.</p>
     * <note> <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a
     * complete list, see the <a
     * href="http://lightsail.aws.amazon.com/ls/docs/getting-started/articles/pre-installed-apps">Dev
     * Guide</a>.</p> </note>
     */
    inline CreateInstancesRequest& WithUserData(Aws::String&& value) { SetUserData(value); return *this;}

    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get –y update</code>.</p>
     * <note> <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a
     * complete list, see the <a
     * href="http://lightsail.aws.amazon.com/ls/docs/getting-started/articles/pre-installed-apps">Dev
     * Guide</a>.</p> </note>
     */
    inline CreateInstancesRequest& WithUserData(const char* value) { SetUserData(value); return *this;}

    /**
     * <p>The name of your key pair.</p>
     */
    inline const Aws::String& GetKeyPairName() const{ return m_keyPairName; }

    /**
     * <p>The name of your key pair.</p>
     */
    inline void SetKeyPairName(const Aws::String& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = value; }

    /**
     * <p>The name of your key pair.</p>
     */
    inline void SetKeyPairName(Aws::String&& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = value; }

    /**
     * <p>The name of your key pair.</p>
     */
    inline void SetKeyPairName(const char* value) { m_keyPairNameHasBeenSet = true; m_keyPairName.assign(value); }

    /**
     * <p>The name of your key pair.</p>
     */
    inline CreateInstancesRequest& WithKeyPairName(const Aws::String& value) { SetKeyPairName(value); return *this;}

    /**
     * <p>The name of your key pair.</p>
     */
    inline CreateInstancesRequest& WithKeyPairName(Aws::String&& value) { SetKeyPairName(value); return *this;}

    /**
     * <p>The name of your key pair.</p>
     */
    inline CreateInstancesRequest& WithKeyPairName(const char* value) { SetKeyPairName(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_instanceNames;
    bool m_instanceNamesHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    Aws::String m_customImageName;
    bool m_customImageNameHasBeenSet;
    Aws::String m_blueprintId;
    bool m_blueprintIdHasBeenSet;
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
