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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentPermissionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API ModifyDocumentPermissionRequest : public SSMRequest
  {
  public:
    ModifyDocumentPermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDocumentPermission"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the document that you want to share.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the document that you want to share.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the document that you want to share.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the document that you want to share.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the document that you want to share.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the document that you want to share.</p>
     */
    inline ModifyDocumentPermissionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the document that you want to share.</p>
     */
    inline ModifyDocumentPermissionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the document that you want to share.</p>
     */
    inline ModifyDocumentPermissionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The permission type for the document. The permission type can be
     * <i>Share</i>.</p>
     */
    inline const DocumentPermissionType& GetPermissionType() const{ return m_permissionType; }

    /**
     * <p>The permission type for the document. The permission type can be
     * <i>Share</i>.</p>
     */
    inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }

    /**
     * <p>The permission type for the document. The permission type can be
     * <i>Share</i>.</p>
     */
    inline void SetPermissionType(const DocumentPermissionType& value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }

    /**
     * <p>The permission type for the document. The permission type can be
     * <i>Share</i>.</p>
     */
    inline void SetPermissionType(DocumentPermissionType&& value) { m_permissionTypeHasBeenSet = true; m_permissionType = std::move(value); }

    /**
     * <p>The permission type for the document. The permission type can be
     * <i>Share</i>.</p>
     */
    inline ModifyDocumentPermissionRequest& WithPermissionType(const DocumentPermissionType& value) { SetPermissionType(value); return *this;}

    /**
     * <p>The permission type for the document. The permission type can be
     * <i>Share</i>.</p>
     */
    inline ModifyDocumentPermissionRequest& WithPermissionType(DocumentPermissionType&& value) { SetPermissionType(std::move(value)); return *this;}


    /**
     * <p>The AWS user accounts that should have access to the document. The account
     * IDs can either be a group of account IDs or <i>All</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIdsToAdd() const{ return m_accountIdsToAdd; }

    /**
     * <p>The AWS user accounts that should have access to the document. The account
     * IDs can either be a group of account IDs or <i>All</i>.</p>
     */
    inline bool AccountIdsToAddHasBeenSet() const { return m_accountIdsToAddHasBeenSet; }

    /**
     * <p>The AWS user accounts that should have access to the document. The account
     * IDs can either be a group of account IDs or <i>All</i>.</p>
     */
    inline void SetAccountIdsToAdd(const Aws::Vector<Aws::String>& value) { m_accountIdsToAddHasBeenSet = true; m_accountIdsToAdd = value; }

    /**
     * <p>The AWS user accounts that should have access to the document. The account
     * IDs can either be a group of account IDs or <i>All</i>.</p>
     */
    inline void SetAccountIdsToAdd(Aws::Vector<Aws::String>&& value) { m_accountIdsToAddHasBeenSet = true; m_accountIdsToAdd = std::move(value); }

    /**
     * <p>The AWS user accounts that should have access to the document. The account
     * IDs can either be a group of account IDs or <i>All</i>.</p>
     */
    inline ModifyDocumentPermissionRequest& WithAccountIdsToAdd(const Aws::Vector<Aws::String>& value) { SetAccountIdsToAdd(value); return *this;}

    /**
     * <p>The AWS user accounts that should have access to the document. The account
     * IDs can either be a group of account IDs or <i>All</i>.</p>
     */
    inline ModifyDocumentPermissionRequest& WithAccountIdsToAdd(Aws::Vector<Aws::String>&& value) { SetAccountIdsToAdd(std::move(value)); return *this;}

    /**
     * <p>The AWS user accounts that should have access to the document. The account
     * IDs can either be a group of account IDs or <i>All</i>.</p>
     */
    inline ModifyDocumentPermissionRequest& AddAccountIdsToAdd(const Aws::String& value) { m_accountIdsToAddHasBeenSet = true; m_accountIdsToAdd.push_back(value); return *this; }

    /**
     * <p>The AWS user accounts that should have access to the document. The account
     * IDs can either be a group of account IDs or <i>All</i>.</p>
     */
    inline ModifyDocumentPermissionRequest& AddAccountIdsToAdd(Aws::String&& value) { m_accountIdsToAddHasBeenSet = true; m_accountIdsToAdd.push_back(std::move(value)); return *this; }

    /**
     * <p>The AWS user accounts that should have access to the document. The account
     * IDs can either be a group of account IDs or <i>All</i>.</p>
     */
    inline ModifyDocumentPermissionRequest& AddAccountIdsToAdd(const char* value) { m_accountIdsToAddHasBeenSet = true; m_accountIdsToAdd.push_back(value); return *this; }


    /**
     * <p>The AWS user accounts that should no longer have access to the document. The
     * AWS user account can either be a group of account IDs or <i>All</i>. This action
     * has a higher priority than <i>AccountIdsToAdd</i>. If you specify an account ID
     * to add and the same ID to remove, the system removes access to the document.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIdsToRemove() const{ return m_accountIdsToRemove; }

    /**
     * <p>The AWS user accounts that should no longer have access to the document. The
     * AWS user account can either be a group of account IDs or <i>All</i>. This action
     * has a higher priority than <i>AccountIdsToAdd</i>. If you specify an account ID
     * to add and the same ID to remove, the system removes access to the document.</p>
     */
    inline bool AccountIdsToRemoveHasBeenSet() const { return m_accountIdsToRemoveHasBeenSet; }

    /**
     * <p>The AWS user accounts that should no longer have access to the document. The
     * AWS user account can either be a group of account IDs or <i>All</i>. This action
     * has a higher priority than <i>AccountIdsToAdd</i>. If you specify an account ID
     * to add and the same ID to remove, the system removes access to the document.</p>
     */
    inline void SetAccountIdsToRemove(const Aws::Vector<Aws::String>& value) { m_accountIdsToRemoveHasBeenSet = true; m_accountIdsToRemove = value; }

    /**
     * <p>The AWS user accounts that should no longer have access to the document. The
     * AWS user account can either be a group of account IDs or <i>All</i>. This action
     * has a higher priority than <i>AccountIdsToAdd</i>. If you specify an account ID
     * to add and the same ID to remove, the system removes access to the document.</p>
     */
    inline void SetAccountIdsToRemove(Aws::Vector<Aws::String>&& value) { m_accountIdsToRemoveHasBeenSet = true; m_accountIdsToRemove = std::move(value); }

    /**
     * <p>The AWS user accounts that should no longer have access to the document. The
     * AWS user account can either be a group of account IDs or <i>All</i>. This action
     * has a higher priority than <i>AccountIdsToAdd</i>. If you specify an account ID
     * to add and the same ID to remove, the system removes access to the document.</p>
     */
    inline ModifyDocumentPermissionRequest& WithAccountIdsToRemove(const Aws::Vector<Aws::String>& value) { SetAccountIdsToRemove(value); return *this;}

    /**
     * <p>The AWS user accounts that should no longer have access to the document. The
     * AWS user account can either be a group of account IDs or <i>All</i>. This action
     * has a higher priority than <i>AccountIdsToAdd</i>. If you specify an account ID
     * to add and the same ID to remove, the system removes access to the document.</p>
     */
    inline ModifyDocumentPermissionRequest& WithAccountIdsToRemove(Aws::Vector<Aws::String>&& value) { SetAccountIdsToRemove(std::move(value)); return *this;}

    /**
     * <p>The AWS user accounts that should no longer have access to the document. The
     * AWS user account can either be a group of account IDs or <i>All</i>. This action
     * has a higher priority than <i>AccountIdsToAdd</i>. If you specify an account ID
     * to add and the same ID to remove, the system removes access to the document.</p>
     */
    inline ModifyDocumentPermissionRequest& AddAccountIdsToRemove(const Aws::String& value) { m_accountIdsToRemoveHasBeenSet = true; m_accountIdsToRemove.push_back(value); return *this; }

    /**
     * <p>The AWS user accounts that should no longer have access to the document. The
     * AWS user account can either be a group of account IDs or <i>All</i>. This action
     * has a higher priority than <i>AccountIdsToAdd</i>. If you specify an account ID
     * to add and the same ID to remove, the system removes access to the document.</p>
     */
    inline ModifyDocumentPermissionRequest& AddAccountIdsToRemove(Aws::String&& value) { m_accountIdsToRemoveHasBeenSet = true; m_accountIdsToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>The AWS user accounts that should no longer have access to the document. The
     * AWS user account can either be a group of account IDs or <i>All</i>. This action
     * has a higher priority than <i>AccountIdsToAdd</i>. If you specify an account ID
     * to add and the same ID to remove, the system removes access to the document.</p>
     */
    inline ModifyDocumentPermissionRequest& AddAccountIdsToRemove(const char* value) { m_accountIdsToRemoveHasBeenSet = true; m_accountIdsToRemove.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    DocumentPermissionType m_permissionType;
    bool m_permissionTypeHasBeenSet;

    Aws::Vector<Aws::String> m_accountIdsToAdd;
    bool m_accountIdsToAddHasBeenSet;

    Aws::Vector<Aws::String> m_accountIdsToRemove;
    bool m_accountIdsToRemoveHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
