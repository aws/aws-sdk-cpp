/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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


    /**
     * <p>A unique identifier for the resource set. This ID is returned in the
     * responses to create and list commands. You provide it to operations like update
     * and delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier for the resource set. This ID is returned in the
     * responses to create and list commands. You provide it to operations like update
     * and delete.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier for the resource set. This ID is returned in the
     * responses to create and list commands. You provide it to operations like update
     * and delete.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier for the resource set. This ID is returned in the
     * responses to create and list commands. You provide it to operations like update
     * and delete.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier for the resource set. This ID is returned in the
     * responses to create and list commands. You provide it to operations like update
     * and delete.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier for the resource set. This ID is returned in the
     * responses to create and list commands. You provide it to operations like update
     * and delete.</p>
     */
    inline ResourceSet& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier for the resource set. This ID is returned in the
     * responses to create and list commands. You provide it to operations like update
     * and delete.</p>
     */
    inline ResourceSet& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the resource set. This ID is returned in the
     * responses to create and list commands. You provide it to operations like update
     * and delete.</p>
     */
    inline ResourceSet& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The descriptive name of the resource set. You can't change the name of a
     * resource set after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The descriptive name of the resource set. You can't change the name of a
     * resource set after you create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The descriptive name of the resource set. You can't change the name of a
     * resource set after you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The descriptive name of the resource set. You can't change the name of a
     * resource set after you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The descriptive name of the resource set. You can't change the name of a
     * resource set after you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The descriptive name of the resource set. You can't change the name of a
     * resource set after you create it.</p>
     */
    inline ResourceSet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The descriptive name of the resource set. You can't change the name of a
     * resource set after you create it.</p>
     */
    inline ResourceSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the resource set. You can't change the name of a
     * resource set after you create it.</p>
     */
    inline ResourceSet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the resource set.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the resource set.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the resource set.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the resource set.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the resource set.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the resource set.</p>
     */
    inline ResourceSet& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the resource set.</p>
     */
    inline ResourceSet& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the resource set.</p>
     */
    inline ResourceSet& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }

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
    inline void SetUpdateToken(const Aws::String& value) { m_updateTokenHasBeenSet = true; m_updateToken = value; }

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
    inline void SetUpdateToken(Aws::String&& value) { m_updateTokenHasBeenSet = true; m_updateToken = std::move(value); }

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
    inline void SetUpdateToken(const char* value) { m_updateTokenHasBeenSet = true; m_updateToken.assign(value); }

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
    inline ResourceSet& WithUpdateToken(const Aws::String& value) { SetUpdateToken(value); return *this;}

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
    inline ResourceSet& WithUpdateToken(Aws::String&& value) { SetUpdateToken(std::move(value)); return *this;}

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
    inline ResourceSet& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}


    /**
     * <p>Determines the resources that can be associated to the resource set.
     * Depending on your setting for max results and the number of resource sets, a
     * single call might not return the full list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypeList() const{ return m_resourceTypeList; }

    /**
     * <p>Determines the resources that can be associated to the resource set.
     * Depending on your setting for max results and the number of resource sets, a
     * single call might not return the full list.</p>
     */
    inline bool ResourceTypeListHasBeenSet() const { return m_resourceTypeListHasBeenSet; }

    /**
     * <p>Determines the resources that can be associated to the resource set.
     * Depending on your setting for max results and the number of resource sets, a
     * single call might not return the full list.</p>
     */
    inline void SetResourceTypeList(const Aws::Vector<Aws::String>& value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList = value; }

    /**
     * <p>Determines the resources that can be associated to the resource set.
     * Depending on your setting for max results and the number of resource sets, a
     * single call might not return the full list.</p>
     */
    inline void SetResourceTypeList(Aws::Vector<Aws::String>&& value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList = std::move(value); }

    /**
     * <p>Determines the resources that can be associated to the resource set.
     * Depending on your setting for max results and the number of resource sets, a
     * single call might not return the full list.</p>
     */
    inline ResourceSet& WithResourceTypeList(const Aws::Vector<Aws::String>& value) { SetResourceTypeList(value); return *this;}

    /**
     * <p>Determines the resources that can be associated to the resource set.
     * Depending on your setting for max results and the number of resource sets, a
     * single call might not return the full list.</p>
     */
    inline ResourceSet& WithResourceTypeList(Aws::Vector<Aws::String>&& value) { SetResourceTypeList(std::move(value)); return *this;}

    /**
     * <p>Determines the resources that can be associated to the resource set.
     * Depending on your setting for max results and the number of resource sets, a
     * single call might not return the full list.</p>
     */
    inline ResourceSet& AddResourceTypeList(const Aws::String& value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList.push_back(value); return *this; }

    /**
     * <p>Determines the resources that can be associated to the resource set.
     * Depending on your setting for max results and the number of resource sets, a
     * single call might not return the full list.</p>
     */
    inline ResourceSet& AddResourceTypeList(Aws::String&& value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList.push_back(std::move(value)); return *this; }

    /**
     * <p>Determines the resources that can be associated to the resource set.
     * Depending on your setting for max results and the number of resource sets, a
     * single call might not return the full list.</p>
     */
    inline ResourceSet& AddResourceTypeList(const char* value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList.push_back(value); return *this; }


    /**
     * <p>The last time that the resource set was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The last time that the resource set was changed.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The last time that the resource set was changed.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The last time that the resource set was changed.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The last time that the resource set was changed.</p>
     */
    inline ResourceSet& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The last time that the resource set was changed.</p>
     */
    inline ResourceSet& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
