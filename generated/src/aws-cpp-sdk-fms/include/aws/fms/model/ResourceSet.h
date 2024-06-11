﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/fms/model/ResourceSetStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{

  /**
   * <p>A set of resources to include in a policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ResourceSet">AWS API
   * Reference</a></p>
   */
  class ResourceSet
  {
  public:
    AWS_FMS_API ResourceSet();
    AWS_FMS_API ResourceSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API ResourceSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the resource set. This ID is returned in the
     * responses to create and list commands. You provide it to operations like update
     * and delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ResourceSet& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ResourceSet& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ResourceSet& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptive name of the resource set. You can't change the name of a
     * resource set after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ResourceSet& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ResourceSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ResourceSet& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the resource set.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ResourceSet& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ResourceSet& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ResourceSet& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional token that you can use for optimistic locking. Firewall Manager
     * returns a token to your requests that access the resource set. The token marks
     * the state of the resource set resource at the time of the request. Update tokens
     * are not allowed when creating a resource set. After creation, each subsequent
     * update call to the resource set requires the update token. </p> <p>To make an
     * unconditional change to the resource set, omit the token in your update request.
     * Without the token, Firewall Manager performs your updates regardless of whether
     * the resource set has changed since you last retrieved it.</p> <p>To make a
     * conditional change to the resource set, provide the token in your update
     * request. Firewall Manager uses the token to ensure that the resource set hasn't
     * changed since you last retrieved it. If it has changed, the operation fails with
     * an <code>InvalidTokenException</code>. If this happens, retrieve the resource
     * set again to get a current copy of it with a new token. Reapply your changes as
     * needed, then try the operation again using the new token. </p>
     */
    inline const Aws::String& GetUpdateToken() const{ return m_updateToken; }
    inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }
    inline void SetUpdateToken(const Aws::String& value) { m_updateTokenHasBeenSet = true; m_updateToken = value; }
    inline void SetUpdateToken(Aws::String&& value) { m_updateTokenHasBeenSet = true; m_updateToken = std::move(value); }
    inline void SetUpdateToken(const char* value) { m_updateTokenHasBeenSet = true; m_updateToken.assign(value); }
    inline ResourceSet& WithUpdateToken(const Aws::String& value) { SetUpdateToken(value); return *this;}
    inline ResourceSet& WithUpdateToken(Aws::String&& value) { SetUpdateToken(std::move(value)); return *this;}
    inline ResourceSet& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the resources that can be associated to the resource set.
     * Depending on your setting for max results and the number of resource sets, a
     * single call might not return the full list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypeList() const{ return m_resourceTypeList; }
    inline bool ResourceTypeListHasBeenSet() const { return m_resourceTypeListHasBeenSet; }
    inline void SetResourceTypeList(const Aws::Vector<Aws::String>& value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList = value; }
    inline void SetResourceTypeList(Aws::Vector<Aws::String>&& value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList = std::move(value); }
    inline ResourceSet& WithResourceTypeList(const Aws::Vector<Aws::String>& value) { SetResourceTypeList(value); return *this;}
    inline ResourceSet& WithResourceTypeList(Aws::Vector<Aws::String>&& value) { SetResourceTypeList(std::move(value)); return *this;}
    inline ResourceSet& AddResourceTypeList(const Aws::String& value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList.push_back(value); return *this; }
    inline ResourceSet& AddResourceTypeList(Aws::String&& value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList.push_back(std::move(value)); return *this; }
    inline ResourceSet& AddResourceTypeList(const char* value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last time that the resource set was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline ResourceSet& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline ResourceSet& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the resource set is in or out of an admin's Region
     * scope.</p> <ul> <li> <p> <code>ACTIVE</code> - The administrator can manage and
     * delete the resource set.</p> </li> <li> <p> <code>OUT_OF_ADMIN_SCOPE</code> -
     * The administrator can view the resource set, but they can't edit or delete the
     * resource set. Existing protections stay in place. Any new resource that come
     * into scope of the resource set won't be protected.</p> </li> </ul>
     */
    inline const ResourceSetStatus& GetResourceSetStatus() const{ return m_resourceSetStatus; }
    inline bool ResourceSetStatusHasBeenSet() const { return m_resourceSetStatusHasBeenSet; }
    inline void SetResourceSetStatus(const ResourceSetStatus& value) { m_resourceSetStatusHasBeenSet = true; m_resourceSetStatus = value; }
    inline void SetResourceSetStatus(ResourceSetStatus&& value) { m_resourceSetStatusHasBeenSet = true; m_resourceSetStatus = std::move(value); }
    inline ResourceSet& WithResourceSetStatus(const ResourceSetStatus& value) { SetResourceSetStatus(value); return *this;}
    inline ResourceSet& WithResourceSetStatus(ResourceSetStatus&& value) { SetResourceSetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_updateToken;
    bool m_updateTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTypeList;
    bool m_resourceTypeListHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    ResourceSetStatus m_resourceSetStatus;
    bool m_resourceSetStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
