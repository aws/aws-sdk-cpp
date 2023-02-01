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
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class CreateAccessControlConfigurationRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API CreateAccessControlConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccessControlConfiguration"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index to create an access control configuration for
     * your documents.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index to create an access control configuration for
     * your documents.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index to create an access control configuration for
     * your documents.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index to create an access control configuration for
     * your documents.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index to create an access control configuration for
     * your documents.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index to create an access control configuration for
     * your documents.</p>
     */
    inline CreateAccessControlConfigurationRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index to create an access control configuration for
     * your documents.</p>
     */
    inline CreateAccessControlConfigurationRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index to create an access control configuration for
     * your documents.</p>
     */
    inline CreateAccessControlConfigurationRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>A name for the access control configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the access control configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the access control configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the access control configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the access control configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the access control configuration.</p>
     */
    inline CreateAccessControlConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the access control configuration.</p>
     */
    inline CreateAccessControlConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the access control configuration.</p>
     */
    inline CreateAccessControlConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description for the access control configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the access control configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the access control configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the access control configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the access control configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the access control configuration.</p>
     */
    inline CreateAccessControlConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the access control configuration.</p>
     */
    inline CreateAccessControlConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the access control configuration.</p>
     */
    inline CreateAccessControlConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline const Aws::Vector<Principal>& GetAccessControlList() const{ return m_accessControlList; }

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline bool AccessControlListHasBeenSet() const { return m_accessControlListHasBeenSet; }

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline void SetAccessControlList(const Aws::Vector<Principal>& value) { m_accessControlListHasBeenSet = true; m_accessControlList = value; }

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline void SetAccessControlList(Aws::Vector<Principal>&& value) { m_accessControlListHasBeenSet = true; m_accessControlList = std::move(value); }

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline CreateAccessControlConfigurationRequest& WithAccessControlList(const Aws::Vector<Principal>& value) { SetAccessControlList(value); return *this;}

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline CreateAccessControlConfigurationRequest& WithAccessControlList(Aws::Vector<Principal>&& value) { SetAccessControlList(std::move(value)); return *this;}

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline CreateAccessControlConfigurationRequest& AddAccessControlList(const Principal& value) { m_accessControlListHasBeenSet = true; m_accessControlList.push_back(value); return *this; }

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline CreateAccessControlConfigurationRequest& AddAccessControlList(Principal&& value) { m_accessControlListHasBeenSet = true; m_accessControlList.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline const Aws::Vector<HierarchicalPrincipal>& GetHierarchicalAccessControlList() const{ return m_hierarchicalAccessControlList; }

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline bool HierarchicalAccessControlListHasBeenSet() const { return m_hierarchicalAccessControlListHasBeenSet; }

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline void SetHierarchicalAccessControlList(const Aws::Vector<HierarchicalPrincipal>& value) { m_hierarchicalAccessControlListHasBeenSet = true; m_hierarchicalAccessControlList = value; }

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline void SetHierarchicalAccessControlList(Aws::Vector<HierarchicalPrincipal>&& value) { m_hierarchicalAccessControlListHasBeenSet = true; m_hierarchicalAccessControlList = std::move(value); }

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline CreateAccessControlConfigurationRequest& WithHierarchicalAccessControlList(const Aws::Vector<HierarchicalPrincipal>& value) { SetHierarchicalAccessControlList(value); return *this;}

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline CreateAccessControlConfigurationRequest& WithHierarchicalAccessControlList(Aws::Vector<HierarchicalPrincipal>&& value) { SetHierarchicalAccessControlList(std::move(value)); return *this;}

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline CreateAccessControlConfigurationRequest& AddHierarchicalAccessControlList(const HierarchicalPrincipal& value) { m_hierarchicalAccessControlListHasBeenSet = true; m_hierarchicalAccessControlList.push_back(value); return *this; }

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline CreateAccessControlConfigurationRequest& AddHierarchicalAccessControlList(HierarchicalPrincipal&& value) { m_hierarchicalAccessControlListHasBeenSet = true; m_hierarchicalAccessControlList.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that you provide to identify the request to create an access control
     * configuration. Multiple calls to the
     * <code>CreateAccessControlConfiguration</code> API with the same client token
     * will create only one access control configuration.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that you provide to identify the request to create an access control
     * configuration. Multiple calls to the
     * <code>CreateAccessControlConfiguration</code> API with the same client token
     * will create only one access control configuration.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that you provide to identify the request to create an access control
     * configuration. Multiple calls to the
     * <code>CreateAccessControlConfiguration</code> API with the same client token
     * will create only one access control configuration.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that you provide to identify the request to create an access control
     * configuration. Multiple calls to the
     * <code>CreateAccessControlConfiguration</code> API with the same client token
     * will create only one access control configuration.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that you provide to identify the request to create an access control
     * configuration. Multiple calls to the
     * <code>CreateAccessControlConfiguration</code> API with the same client token
     * will create only one access control configuration.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that you provide to identify the request to create an access control
     * configuration. Multiple calls to the
     * <code>CreateAccessControlConfiguration</code> API with the same client token
     * will create only one access control configuration.</p>
     */
    inline CreateAccessControlConfigurationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that you provide to identify the request to create an access control
     * configuration. Multiple calls to the
     * <code>CreateAccessControlConfiguration</code> API with the same client token
     * will create only one access control configuration.</p>
     */
    inline CreateAccessControlConfigurationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that you provide to identify the request to create an access control
     * configuration. Multiple calls to the
     * <code>CreateAccessControlConfiguration</code> API with the same client token
     * will create only one access control configuration.</p>
     */
    inline CreateAccessControlConfigurationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Principal> m_accessControlList;
    bool m_accessControlListHasBeenSet = false;

    Aws::Vector<HierarchicalPrincipal> m_hierarchicalAccessControlList;
    bool m_hierarchicalAccessControlListHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
