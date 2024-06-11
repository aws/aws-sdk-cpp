/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/Principal.h>
#include <aws/kendra/model/HierarchicalPrincipal.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class UpdateAccessControlConfigurationRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API UpdateAccessControlConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccessControlConfiguration"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the index for an access control configuration.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }
    inline UpdateAccessControlConfigurationRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}
    inline UpdateAccessControlConfigurationRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}
    inline UpdateAccessControlConfigurationRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the access control configuration you want to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateAccessControlConfigurationRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateAccessControlConfigurationRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateAccessControlConfigurationRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the access control configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateAccessControlConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateAccessControlConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateAccessControlConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the access control configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateAccessControlConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateAccessControlConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateAccessControlConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information you want to update on principals (users and/or groups) and which
     * documents they should have access to. This is useful for user context filtering,
     * where search results are filtered based on the user or their group access to
     * documents.</p>
     */
    inline const Aws::Vector<Principal>& GetAccessControlList() const{ return m_accessControlList; }
    inline bool AccessControlListHasBeenSet() const { return m_accessControlListHasBeenSet; }
    inline void SetAccessControlList(const Aws::Vector<Principal>& value) { m_accessControlListHasBeenSet = true; m_accessControlList = value; }
    inline void SetAccessControlList(Aws::Vector<Principal>&& value) { m_accessControlListHasBeenSet = true; m_accessControlList = std::move(value); }
    inline UpdateAccessControlConfigurationRequest& WithAccessControlList(const Aws::Vector<Principal>& value) { SetAccessControlList(value); return *this;}
    inline UpdateAccessControlConfigurationRequest& WithAccessControlList(Aws::Vector<Principal>&& value) { SetAccessControlList(std::move(value)); return *this;}
    inline UpdateAccessControlConfigurationRequest& AddAccessControlList(const Principal& value) { m_accessControlListHasBeenSet = true; m_accessControlList.push_back(value); return *this; }
    inline UpdateAccessControlConfigurationRequest& AddAccessControlList(Principal&& value) { m_accessControlListHasBeenSet = true; m_accessControlList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The updated list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline const Aws::Vector<HierarchicalPrincipal>& GetHierarchicalAccessControlList() const{ return m_hierarchicalAccessControlList; }
    inline bool HierarchicalAccessControlListHasBeenSet() const { return m_hierarchicalAccessControlListHasBeenSet; }
    inline void SetHierarchicalAccessControlList(const Aws::Vector<HierarchicalPrincipal>& value) { m_hierarchicalAccessControlListHasBeenSet = true; m_hierarchicalAccessControlList = value; }
    inline void SetHierarchicalAccessControlList(Aws::Vector<HierarchicalPrincipal>&& value) { m_hierarchicalAccessControlListHasBeenSet = true; m_hierarchicalAccessControlList = std::move(value); }
    inline UpdateAccessControlConfigurationRequest& WithHierarchicalAccessControlList(const Aws::Vector<HierarchicalPrincipal>& value) { SetHierarchicalAccessControlList(value); return *this;}
    inline UpdateAccessControlConfigurationRequest& WithHierarchicalAccessControlList(Aws::Vector<HierarchicalPrincipal>&& value) { SetHierarchicalAccessControlList(std::move(value)); return *this;}
    inline UpdateAccessControlConfigurationRequest& AddHierarchicalAccessControlList(const HierarchicalPrincipal& value) { m_hierarchicalAccessControlListHasBeenSet = true; m_hierarchicalAccessControlList.push_back(value); return *this; }
    inline UpdateAccessControlConfigurationRequest& AddHierarchicalAccessControlList(HierarchicalPrincipal&& value) { m_hierarchicalAccessControlListHasBeenSet = true; m_hierarchicalAccessControlList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Principal> m_accessControlList;
    bool m_accessControlListHasBeenSet = false;

    Aws::Vector<HierarchicalPrincipal> m_hierarchicalAccessControlList;
    bool m_hierarchicalAccessControlListHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
