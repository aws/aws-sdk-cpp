/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/MigrationHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/AWSMigrationHub/model/ResourceAttribute.h>
#include <utility>

namespace Aws
{
namespace MigrationHub
{
namespace Model
{

  /**
   */
  class AWS_MIGRATIONHUB_API PutResourceAttributesRequest : public MigrationHubRequest
  {
  public:
    PutResourceAttributesRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourceAttributes"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline const Aws::String& GetProgressUpdateStream() const{ return m_progressUpdateStream; }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline void SetProgressUpdateStream(const Aws::String& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = value; }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline void SetProgressUpdateStream(Aws::String&& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = std::move(value); }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline void SetProgressUpdateStream(const char* value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream.assign(value); }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline PutResourceAttributesRequest& WithProgressUpdateStream(const Aws::String& value) { SetProgressUpdateStream(value); return *this;}

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline PutResourceAttributesRequest& WithProgressUpdateStream(Aws::String&& value) { SetProgressUpdateStream(std::move(value)); return *this;}

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline PutResourceAttributesRequest& WithProgressUpdateStream(const char* value) { SetProgressUpdateStream(value); return *this;}


    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline const Aws::String& GetMigrationTaskName() const{ return m_migrationTaskName; }

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline void SetMigrationTaskName(const Aws::String& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = value; }

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline void SetMigrationTaskName(Aws::String&& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = std::move(value); }

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline void SetMigrationTaskName(const char* value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName.assign(value); }

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline PutResourceAttributesRequest& WithMigrationTaskName(const Aws::String& value) { SetMigrationTaskName(value); return *this;}

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline PutResourceAttributesRequest& WithMigrationTaskName(Aws::String&& value) { SetMigrationTaskName(std::move(value)); return *this;}

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline PutResourceAttributesRequest& WithMigrationTaskName(const char* value) { SetMigrationTaskName(value); return *this;}


    /**
     * <p>Information about the resource that is being migrated. This data will be used
     * to map the task to a resource in the Application Discovery Service (ADS)'s
     * repository.</p> <note> <p>In the <code>ResourceAttribute</code> object array,
     * the <code>Type</code> field is reserved for the following values:
     * <code>IPV4_ADDRESS | IPV6_ADDRESS | MAC_ADDRESS | FQDN | VM_MANAGER_ID |
     * VM_MANAGED_OBJECT_REFERENCE | VM_NAME | VM_PATH | BIOS_ID |
     * MOTHERBOARD_SERIAL_NUMBER</code>, and the identifying value can be a string up
     * to 256 characters.</p> </note> <important> <p>If any "VM" related value is used
     * for a <code>ResourceAttribute</code> object, it is required that
     * <code>VM_MANAGER_ID</code>, as a minimum, is always used. If it is not used, the
     * server will not be associated in the Application Discovery Service (ADS)'s
     * repository using any of the other "VM" related values, and you will experience
     * data loss. See the Example section below for a use case of specifying "VM"
     * related values.</p> </important>
     */
    inline const Aws::Vector<ResourceAttribute>& GetResourceAttributeList() const{ return m_resourceAttributeList; }

    /**
     * <p>Information about the resource that is being migrated. This data will be used
     * to map the task to a resource in the Application Discovery Service (ADS)'s
     * repository.</p> <note> <p>In the <code>ResourceAttribute</code> object array,
     * the <code>Type</code> field is reserved for the following values:
     * <code>IPV4_ADDRESS | IPV6_ADDRESS | MAC_ADDRESS | FQDN | VM_MANAGER_ID |
     * VM_MANAGED_OBJECT_REFERENCE | VM_NAME | VM_PATH | BIOS_ID |
     * MOTHERBOARD_SERIAL_NUMBER</code>, and the identifying value can be a string up
     * to 256 characters.</p> </note> <important> <p>If any "VM" related value is used
     * for a <code>ResourceAttribute</code> object, it is required that
     * <code>VM_MANAGER_ID</code>, as a minimum, is always used. If it is not used, the
     * server will not be associated in the Application Discovery Service (ADS)'s
     * repository using any of the other "VM" related values, and you will experience
     * data loss. See the Example section below for a use case of specifying "VM"
     * related values.</p> </important>
     */
    inline void SetResourceAttributeList(const Aws::Vector<ResourceAttribute>& value) { m_resourceAttributeListHasBeenSet = true; m_resourceAttributeList = value; }

    /**
     * <p>Information about the resource that is being migrated. This data will be used
     * to map the task to a resource in the Application Discovery Service (ADS)'s
     * repository.</p> <note> <p>In the <code>ResourceAttribute</code> object array,
     * the <code>Type</code> field is reserved for the following values:
     * <code>IPV4_ADDRESS | IPV6_ADDRESS | MAC_ADDRESS | FQDN | VM_MANAGER_ID |
     * VM_MANAGED_OBJECT_REFERENCE | VM_NAME | VM_PATH | BIOS_ID |
     * MOTHERBOARD_SERIAL_NUMBER</code>, and the identifying value can be a string up
     * to 256 characters.</p> </note> <important> <p>If any "VM" related value is used
     * for a <code>ResourceAttribute</code> object, it is required that
     * <code>VM_MANAGER_ID</code>, as a minimum, is always used. If it is not used, the
     * server will not be associated in the Application Discovery Service (ADS)'s
     * repository using any of the other "VM" related values, and you will experience
     * data loss. See the Example section below for a use case of specifying "VM"
     * related values.</p> </important>
     */
    inline void SetResourceAttributeList(Aws::Vector<ResourceAttribute>&& value) { m_resourceAttributeListHasBeenSet = true; m_resourceAttributeList = std::move(value); }

    /**
     * <p>Information about the resource that is being migrated. This data will be used
     * to map the task to a resource in the Application Discovery Service (ADS)'s
     * repository.</p> <note> <p>In the <code>ResourceAttribute</code> object array,
     * the <code>Type</code> field is reserved for the following values:
     * <code>IPV4_ADDRESS | IPV6_ADDRESS | MAC_ADDRESS | FQDN | VM_MANAGER_ID |
     * VM_MANAGED_OBJECT_REFERENCE | VM_NAME | VM_PATH | BIOS_ID |
     * MOTHERBOARD_SERIAL_NUMBER</code>, and the identifying value can be a string up
     * to 256 characters.</p> </note> <important> <p>If any "VM" related value is used
     * for a <code>ResourceAttribute</code> object, it is required that
     * <code>VM_MANAGER_ID</code>, as a minimum, is always used. If it is not used, the
     * server will not be associated in the Application Discovery Service (ADS)'s
     * repository using any of the other "VM" related values, and you will experience
     * data loss. See the Example section below for a use case of specifying "VM"
     * related values.</p> </important>
     */
    inline PutResourceAttributesRequest& WithResourceAttributeList(const Aws::Vector<ResourceAttribute>& value) { SetResourceAttributeList(value); return *this;}

    /**
     * <p>Information about the resource that is being migrated. This data will be used
     * to map the task to a resource in the Application Discovery Service (ADS)'s
     * repository.</p> <note> <p>In the <code>ResourceAttribute</code> object array,
     * the <code>Type</code> field is reserved for the following values:
     * <code>IPV4_ADDRESS | IPV6_ADDRESS | MAC_ADDRESS | FQDN | VM_MANAGER_ID |
     * VM_MANAGED_OBJECT_REFERENCE | VM_NAME | VM_PATH | BIOS_ID |
     * MOTHERBOARD_SERIAL_NUMBER</code>, and the identifying value can be a string up
     * to 256 characters.</p> </note> <important> <p>If any "VM" related value is used
     * for a <code>ResourceAttribute</code> object, it is required that
     * <code>VM_MANAGER_ID</code>, as a minimum, is always used. If it is not used, the
     * server will not be associated in the Application Discovery Service (ADS)'s
     * repository using any of the other "VM" related values, and you will experience
     * data loss. See the Example section below for a use case of specifying "VM"
     * related values.</p> </important>
     */
    inline PutResourceAttributesRequest& WithResourceAttributeList(Aws::Vector<ResourceAttribute>&& value) { SetResourceAttributeList(std::move(value)); return *this;}

    /**
     * <p>Information about the resource that is being migrated. This data will be used
     * to map the task to a resource in the Application Discovery Service (ADS)'s
     * repository.</p> <note> <p>In the <code>ResourceAttribute</code> object array,
     * the <code>Type</code> field is reserved for the following values:
     * <code>IPV4_ADDRESS | IPV6_ADDRESS | MAC_ADDRESS | FQDN | VM_MANAGER_ID |
     * VM_MANAGED_OBJECT_REFERENCE | VM_NAME | VM_PATH | BIOS_ID |
     * MOTHERBOARD_SERIAL_NUMBER</code>, and the identifying value can be a string up
     * to 256 characters.</p> </note> <important> <p>If any "VM" related value is used
     * for a <code>ResourceAttribute</code> object, it is required that
     * <code>VM_MANAGER_ID</code>, as a minimum, is always used. If it is not used, the
     * server will not be associated in the Application Discovery Service (ADS)'s
     * repository using any of the other "VM" related values, and you will experience
     * data loss. See the Example section below for a use case of specifying "VM"
     * related values.</p> </important>
     */
    inline PutResourceAttributesRequest& AddResourceAttributeList(const ResourceAttribute& value) { m_resourceAttributeListHasBeenSet = true; m_resourceAttributeList.push_back(value); return *this; }

    /**
     * <p>Information about the resource that is being migrated. This data will be used
     * to map the task to a resource in the Application Discovery Service (ADS)'s
     * repository.</p> <note> <p>In the <code>ResourceAttribute</code> object array,
     * the <code>Type</code> field is reserved for the following values:
     * <code>IPV4_ADDRESS | IPV6_ADDRESS | MAC_ADDRESS | FQDN | VM_MANAGER_ID |
     * VM_MANAGED_OBJECT_REFERENCE | VM_NAME | VM_PATH | BIOS_ID |
     * MOTHERBOARD_SERIAL_NUMBER</code>, and the identifying value can be a string up
     * to 256 characters.</p> </note> <important> <p>If any "VM" related value is used
     * for a <code>ResourceAttribute</code> object, it is required that
     * <code>VM_MANAGER_ID</code>, as a minimum, is always used. If it is not used, the
     * server will not be associated in the Application Discovery Service (ADS)'s
     * repository using any of the other "VM" related values, and you will experience
     * data loss. See the Example section below for a use case of specifying "VM"
     * related values.</p> </important>
     */
    inline PutResourceAttributesRequest& AddResourceAttributeList(ResourceAttribute&& value) { m_resourceAttributeListHasBeenSet = true; m_resourceAttributeList.push_back(std::move(value)); return *this; }


    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline PutResourceAttributesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_progressUpdateStream;
    bool m_progressUpdateStreamHasBeenSet;

    Aws::String m_migrationTaskName;
    bool m_migrationTaskNameHasBeenSet;

    Aws::Vector<ResourceAttribute> m_resourceAttributeList;
    bool m_resourceAttributeListHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
