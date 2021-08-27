/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API CreateUserHierarchyGroupRequest : public ConnectRequest
  {
  public:
    CreateUserHierarchyGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUserHierarchyGroup"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the user hierarchy group. Must not be more than 100
     * characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the user hierarchy group. Must not be more than 100
     * characters.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the user hierarchy group. Must not be more than 100
     * characters.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the user hierarchy group. Must not be more than 100
     * characters.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the user hierarchy group. Must not be more than 100
     * characters.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the user hierarchy group. Must not be more than 100
     * characters.</p>
     */
    inline CreateUserHierarchyGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the user hierarchy group. Must not be more than 100
     * characters.</p>
     */
    inline CreateUserHierarchyGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the user hierarchy group. Must not be more than 100
     * characters.</p>
     */
    inline CreateUserHierarchyGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier for the parent hierarchy group. The user hierarchy is created
     * at level one if the parent group ID is null.</p>
     */
    inline const Aws::String& GetParentGroupId() const{ return m_parentGroupId; }

    /**
     * <p>The identifier for the parent hierarchy group. The user hierarchy is created
     * at level one if the parent group ID is null.</p>
     */
    inline bool ParentGroupIdHasBeenSet() const { return m_parentGroupIdHasBeenSet; }

    /**
     * <p>The identifier for the parent hierarchy group. The user hierarchy is created
     * at level one if the parent group ID is null.</p>
     */
    inline void SetParentGroupId(const Aws::String& value) { m_parentGroupIdHasBeenSet = true; m_parentGroupId = value; }

    /**
     * <p>The identifier for the parent hierarchy group. The user hierarchy is created
     * at level one if the parent group ID is null.</p>
     */
    inline void SetParentGroupId(Aws::String&& value) { m_parentGroupIdHasBeenSet = true; m_parentGroupId = std::move(value); }

    /**
     * <p>The identifier for the parent hierarchy group. The user hierarchy is created
     * at level one if the parent group ID is null.</p>
     */
    inline void SetParentGroupId(const char* value) { m_parentGroupIdHasBeenSet = true; m_parentGroupId.assign(value); }

    /**
     * <p>The identifier for the parent hierarchy group. The user hierarchy is created
     * at level one if the parent group ID is null.</p>
     */
    inline CreateUserHierarchyGroupRequest& WithParentGroupId(const Aws::String& value) { SetParentGroupId(value); return *this;}

    /**
     * <p>The identifier for the parent hierarchy group. The user hierarchy is created
     * at level one if the parent group ID is null.</p>
     */
    inline CreateUserHierarchyGroupRequest& WithParentGroupId(Aws::String&& value) { SetParentGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the parent hierarchy group. The user hierarchy is created
     * at level one if the parent group ID is null.</p>
     */
    inline CreateUserHierarchyGroupRequest& WithParentGroupId(const char* value) { SetParentGroupId(value); return *this;}


    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline CreateUserHierarchyGroupRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline CreateUserHierarchyGroupRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline CreateUserHierarchyGroupRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_parentGroupId;
    bool m_parentGroupIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
