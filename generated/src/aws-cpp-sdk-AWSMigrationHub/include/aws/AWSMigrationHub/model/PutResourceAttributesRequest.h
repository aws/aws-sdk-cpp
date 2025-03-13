/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PutResourceAttributesRequest : public MigrationHubRequest
  {
  public:
    AWS_MIGRATIONHUB_API PutResourceAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourceAttributes"; }

    AWS_MIGRATIONHUB_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline const Aws::String& GetProgressUpdateStream() const { return m_progressUpdateStream; }
    inline bool ProgressUpdateStreamHasBeenSet() const { return m_progressUpdateStreamHasBeenSet; }
    template<typename ProgressUpdateStreamT = Aws::String>
    void SetProgressUpdateStream(ProgressUpdateStreamT&& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = std::forward<ProgressUpdateStreamT>(value); }
    template<typename ProgressUpdateStreamT = Aws::String>
    PutResourceAttributesRequest& WithProgressUpdateStream(ProgressUpdateStreamT&& value) { SetProgressUpdateStream(std::forward<ProgressUpdateStreamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier that references the migration task. <i>Do not store
     * personal data in this field.</i> </p>
     */
    inline const Aws::String& GetMigrationTaskName() const { return m_migrationTaskName; }
    inline bool MigrationTaskNameHasBeenSet() const { return m_migrationTaskNameHasBeenSet; }
    template<typename MigrationTaskNameT = Aws::String>
    void SetMigrationTaskName(MigrationTaskNameT&& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = std::forward<MigrationTaskNameT>(value); }
    template<typename MigrationTaskNameT = Aws::String>
    PutResourceAttributesRequest& WithMigrationTaskName(MigrationTaskNameT&& value) { SetMigrationTaskName(std::forward<MigrationTaskNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the resource that is being migrated. This data will be used
     * to map the task to a resource in the Application Discovery Service
     * repository.</p>  <p>Takes the object array of
     * <code>ResourceAttribute</code> where the <code>Type</code> field is reserved for
     * the following values: <code>IPV4_ADDRESS | IPV6_ADDRESS | MAC_ADDRESS | FQDN |
     * VM_MANAGER_ID | VM_MANAGED_OBJECT_REFERENCE | VM_NAME | VM_PATH | BIOS_ID |
     * MOTHERBOARD_SERIAL_NUMBER</code> where the identifying value can be a string up
     * to 256 characters.</p>   <ul> <li> <p>If any "VM" related
     * value is set for a <code>ResourceAttribute</code> object, it is required that
     * <code>VM_MANAGER_ID</code>, as a minimum, is always set. If
     * <code>VM_MANAGER_ID</code> is not set, then all "VM" fields will be discarded
     * and "VM" fields will not be used for matching the migration task to a server in
     * Application Discovery Service repository. See the <a
     * href="https://docs.aws.amazon.com/migrationhub/latest/ug/API_PutResourceAttributes.html#API_PutResourceAttributes_Examples">Example</a>
     * section below for a use case of specifying "VM" related values.</p> </li> <li>
     * <p> If a server you are trying to match has multiple IP or MAC addresses, you
     * should provide as many as you know in separate type/value pairs passed to the
     * <code>ResourceAttributeList</code> parameter to maximize the chances of
     * matching.</p> </li> </ul> 
     */
    inline const Aws::Vector<ResourceAttribute>& GetResourceAttributeList() const { return m_resourceAttributeList; }
    inline bool ResourceAttributeListHasBeenSet() const { return m_resourceAttributeListHasBeenSet; }
    template<typename ResourceAttributeListT = Aws::Vector<ResourceAttribute>>
    void SetResourceAttributeList(ResourceAttributeListT&& value) { m_resourceAttributeListHasBeenSet = true; m_resourceAttributeList = std::forward<ResourceAttributeListT>(value); }
    template<typename ResourceAttributeListT = Aws::Vector<ResourceAttribute>>
    PutResourceAttributesRequest& WithResourceAttributeList(ResourceAttributeListT&& value) { SetResourceAttributeList(std::forward<ResourceAttributeListT>(value)); return *this;}
    template<typename ResourceAttributeListT = ResourceAttribute>
    PutResourceAttributesRequest& AddResourceAttributeList(ResourceAttributeListT&& value) { m_resourceAttributeListHasBeenSet = true; m_resourceAttributeList.emplace_back(std::forward<ResourceAttributeListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline PutResourceAttributesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_progressUpdateStream;
    bool m_progressUpdateStreamHasBeenSet = false;

    Aws::String m_migrationTaskName;
    bool m_migrationTaskNameHasBeenSet = false;

    Aws::Vector<ResourceAttribute> m_resourceAttributeList;
    bool m_resourceAttributeListHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
