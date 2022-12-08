/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/Tenancy.h>
#include <aws/workspaces/model/Tag.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class RegisterWorkspaceDirectoryRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API RegisterWorkspaceDirectoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterWorkspaceDirectory"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory. You cannot register a directory if it does
     * not have a status of Active. If the directory does not have a status of Active,
     * you will receive an InvalidResourceStateException error. If you have already
     * registered the maximum number of directories that you can register with Amazon
     * WorkSpaces, you will receive a ResourceLimitExceededException error. Deregister
     * directories that you are not using for WorkSpaces, and try again.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory. You cannot register a directory if it does
     * not have a status of Active. If the directory does not have a status of Active,
     * you will receive an InvalidResourceStateException error. If you have already
     * registered the maximum number of directories that you can register with Amazon
     * WorkSpaces, you will receive a ResourceLimitExceededException error. Deregister
     * directories that you are not using for WorkSpaces, and try again.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory. You cannot register a directory if it does
     * not have a status of Active. If the directory does not have a status of Active,
     * you will receive an InvalidResourceStateException error. If you have already
     * registered the maximum number of directories that you can register with Amazon
     * WorkSpaces, you will receive a ResourceLimitExceededException error. Deregister
     * directories that you are not using for WorkSpaces, and try again.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory. You cannot register a directory if it does
     * not have a status of Active. If the directory does not have a status of Active,
     * you will receive an InvalidResourceStateException error. If you have already
     * registered the maximum number of directories that you can register with Amazon
     * WorkSpaces, you will receive a ResourceLimitExceededException error. Deregister
     * directories that you are not using for WorkSpaces, and try again.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory. You cannot register a directory if it does
     * not have a status of Active. If the directory does not have a status of Active,
     * you will receive an InvalidResourceStateException error. If you have already
     * registered the maximum number of directories that you can register with Amazon
     * WorkSpaces, you will receive a ResourceLimitExceededException error. Deregister
     * directories that you are not using for WorkSpaces, and try again.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory. You cannot register a directory if it does
     * not have a status of Active. If the directory does not have a status of Active,
     * you will receive an InvalidResourceStateException error. If you have already
     * registered the maximum number of directories that you can register with Amazon
     * WorkSpaces, you will receive a ResourceLimitExceededException error. Deregister
     * directories that you are not using for WorkSpaces, and try again.</p>
     */
    inline RegisterWorkspaceDirectoryRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory. You cannot register a directory if it does
     * not have a status of Active. If the directory does not have a status of Active,
     * you will receive an InvalidResourceStateException error. If you have already
     * registered the maximum number of directories that you can register with Amazon
     * WorkSpaces, you will receive a ResourceLimitExceededException error. Deregister
     * directories that you are not using for WorkSpaces, and try again.</p>
     */
    inline RegisterWorkspaceDirectoryRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory. You cannot register a directory if it does
     * not have a status of Active. If the directory does not have a status of Active,
     * you will receive an InvalidResourceStateException error. If you have already
     * registered the maximum number of directories that you can register with Amazon
     * WorkSpaces, you will receive a ResourceLimitExceededException error. Deregister
     * directories that you are not using for WorkSpaces, and try again.</p>
     */
    inline RegisterWorkspaceDirectoryRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The identifiers of the subnets for your virtual private cloud (VPC). Make
     * sure that the subnets are in supported Availability Zones. The subnets must also
     * be in separate Availability Zones. If these conditions are not met, you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The identifiers of the subnets for your virtual private cloud (VPC). Make
     * sure that the subnets are in supported Availability Zones. The subnets must also
     * be in separate Availability Zones. If these conditions are not met, you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The identifiers of the subnets for your virtual private cloud (VPC). Make
     * sure that the subnets are in supported Availability Zones. The subnets must also
     * be in separate Availability Zones. If these conditions are not met, you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The identifiers of the subnets for your virtual private cloud (VPC). Make
     * sure that the subnets are in supported Availability Zones. The subnets must also
     * be in separate Availability Zones. If these conditions are not met, you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The identifiers of the subnets for your virtual private cloud (VPC). Make
     * sure that the subnets are in supported Availability Zones. The subnets must also
     * be in separate Availability Zones. If these conditions are not met, you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline RegisterWorkspaceDirectoryRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The identifiers of the subnets for your virtual private cloud (VPC). Make
     * sure that the subnets are in supported Availability Zones. The subnets must also
     * be in separate Availability Zones. If these conditions are not met, you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline RegisterWorkspaceDirectoryRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the subnets for your virtual private cloud (VPC). Make
     * sure that the subnets are in supported Availability Zones. The subnets must also
     * be in separate Availability Zones. If these conditions are not met, you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline RegisterWorkspaceDirectoryRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of the subnets for your virtual private cloud (VPC). Make
     * sure that the subnets are in supported Availability Zones. The subnets must also
     * be in separate Availability Zones. If these conditions are not met, you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline RegisterWorkspaceDirectoryRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of the subnets for your virtual private cloud (VPC). Make
     * sure that the subnets are in supported Availability Zones. The subnets must also
     * be in separate Availability Zones. If these conditions are not met, you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline RegisterWorkspaceDirectoryRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>Indicates whether Amazon WorkDocs is enabled or disabled. If you have enabled
     * this parameter and WorkDocs is not available in the Region, you will receive an
     * OperationNotSupportedException error. Set <code>EnableWorkDocs</code> to
     * disabled, and try again.</p>
     */
    inline bool GetEnableWorkDocs() const{ return m_enableWorkDocs; }

    /**
     * <p>Indicates whether Amazon WorkDocs is enabled or disabled. If you have enabled
     * this parameter and WorkDocs is not available in the Region, you will receive an
     * OperationNotSupportedException error. Set <code>EnableWorkDocs</code> to
     * disabled, and try again.</p>
     */
    inline bool EnableWorkDocsHasBeenSet() const { return m_enableWorkDocsHasBeenSet; }

    /**
     * <p>Indicates whether Amazon WorkDocs is enabled or disabled. If you have enabled
     * this parameter and WorkDocs is not available in the Region, you will receive an
     * OperationNotSupportedException error. Set <code>EnableWorkDocs</code> to
     * disabled, and try again.</p>
     */
    inline void SetEnableWorkDocs(bool value) { m_enableWorkDocsHasBeenSet = true; m_enableWorkDocs = value; }

    /**
     * <p>Indicates whether Amazon WorkDocs is enabled or disabled. If you have enabled
     * this parameter and WorkDocs is not available in the Region, you will receive an
     * OperationNotSupportedException error. Set <code>EnableWorkDocs</code> to
     * disabled, and try again.</p>
     */
    inline RegisterWorkspaceDirectoryRequest& WithEnableWorkDocs(bool value) { SetEnableWorkDocs(value); return *this;}


    /**
     * <p>Indicates whether self-service capabilities are enabled or disabled.</p>
     */
    inline bool GetEnableSelfService() const{ return m_enableSelfService; }

    /**
     * <p>Indicates whether self-service capabilities are enabled or disabled.</p>
     */
    inline bool EnableSelfServiceHasBeenSet() const { return m_enableSelfServiceHasBeenSet; }

    /**
     * <p>Indicates whether self-service capabilities are enabled or disabled.</p>
     */
    inline void SetEnableSelfService(bool value) { m_enableSelfServiceHasBeenSet = true; m_enableSelfService = value; }

    /**
     * <p>Indicates whether self-service capabilities are enabled or disabled.</p>
     */
    inline RegisterWorkspaceDirectoryRequest& WithEnableSelfService(bool value) { SetEnableSelfService(value); return *this;}


    /**
     * <p>Indicates whether your WorkSpace directory is dedicated or shared. To use
     * Bring Your Own License (BYOL) images, this value must be set to
     * <code>DEDICATED</code> and your Amazon Web Services account must be enabled for
     * BYOL. If your account has not been enabled for BYOL, you will receive an
     * InvalidParameterValuesException error. For more information about BYOL images,
     * see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">Bring
     * Your Own Windows Desktop Images</a>.</p>
     */
    inline const Tenancy& GetTenancy() const{ return m_tenancy; }

    /**
     * <p>Indicates whether your WorkSpace directory is dedicated or shared. To use
     * Bring Your Own License (BYOL) images, this value must be set to
     * <code>DEDICATED</code> and your Amazon Web Services account must be enabled for
     * BYOL. If your account has not been enabled for BYOL, you will receive an
     * InvalidParameterValuesException error. For more information about BYOL images,
     * see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">Bring
     * Your Own Windows Desktop Images</a>.</p>
     */
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }

    /**
     * <p>Indicates whether your WorkSpace directory is dedicated or shared. To use
     * Bring Your Own License (BYOL) images, this value must be set to
     * <code>DEDICATED</code> and your Amazon Web Services account must be enabled for
     * BYOL. If your account has not been enabled for BYOL, you will receive an
     * InvalidParameterValuesException error. For more information about BYOL images,
     * see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">Bring
     * Your Own Windows Desktop Images</a>.</p>
     */
    inline void SetTenancy(const Tenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }

    /**
     * <p>Indicates whether your WorkSpace directory is dedicated or shared. To use
     * Bring Your Own License (BYOL) images, this value must be set to
     * <code>DEDICATED</code> and your Amazon Web Services account must be enabled for
     * BYOL. If your account has not been enabled for BYOL, you will receive an
     * InvalidParameterValuesException error. For more information about BYOL images,
     * see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">Bring
     * Your Own Windows Desktop Images</a>.</p>
     */
    inline void SetTenancy(Tenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }

    /**
     * <p>Indicates whether your WorkSpace directory is dedicated or shared. To use
     * Bring Your Own License (BYOL) images, this value must be set to
     * <code>DEDICATED</code> and your Amazon Web Services account must be enabled for
     * BYOL. If your account has not been enabled for BYOL, you will receive an
     * InvalidParameterValuesException error. For more information about BYOL images,
     * see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">Bring
     * Your Own Windows Desktop Images</a>.</p>
     */
    inline RegisterWorkspaceDirectoryRequest& WithTenancy(const Tenancy& value) { SetTenancy(value); return *this;}

    /**
     * <p>Indicates whether your WorkSpace directory is dedicated or shared. To use
     * Bring Your Own License (BYOL) images, this value must be set to
     * <code>DEDICATED</code> and your Amazon Web Services account must be enabled for
     * BYOL. If your account has not been enabled for BYOL, you will receive an
     * InvalidParameterValuesException error. For more information about BYOL images,
     * see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">Bring
     * Your Own Windows Desktop Images</a>.</p>
     */
    inline RegisterWorkspaceDirectoryRequest& WithTenancy(Tenancy&& value) { SetTenancy(std::move(value)); return *this;}


    /**
     * <p>The tags associated with the directory.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the directory.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the directory.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the directory.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the directory.</p>
     */
    inline RegisterWorkspaceDirectoryRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the directory.</p>
     */
    inline RegisterWorkspaceDirectoryRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the directory.</p>
     */
    inline RegisterWorkspaceDirectoryRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with the directory.</p>
     */
    inline RegisterWorkspaceDirectoryRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    bool m_enableWorkDocs;
    bool m_enableWorkDocsHasBeenSet = false;

    bool m_enableSelfService;
    bool m_enableSelfServiceHasBeenSet = false;

    Tenancy m_tenancy;
    bool m_tenancyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
