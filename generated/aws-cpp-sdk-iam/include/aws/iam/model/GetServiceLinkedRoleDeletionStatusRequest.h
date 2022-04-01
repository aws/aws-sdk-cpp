﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API GetServiceLinkedRoleDeletionStatusRequest : public IAMRequest
  {
  public:
    GetServiceLinkedRoleDeletionStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetServiceLinkedRoleDeletionStatus"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The deletion task identifier. This identifier is returned by the
     * <a>DeleteServiceLinkedRole</a> operation in the format
     * <code>task/aws-service-role/&lt;service-principal-name&gt;/&lt;role-name&gt;/&lt;task-uuid&gt;</code>.</p>
     */
    inline const Aws::String& GetDeletionTaskId() const{ return m_deletionTaskId; }

    /**
     * <p>The deletion task identifier. This identifier is returned by the
     * <a>DeleteServiceLinkedRole</a> operation in the format
     * <code>task/aws-service-role/&lt;service-principal-name&gt;/&lt;role-name&gt;/&lt;task-uuid&gt;</code>.</p>
     */
    inline bool DeletionTaskIdHasBeenSet() const { return m_deletionTaskIdHasBeenSet; }

    /**
     * <p>The deletion task identifier. This identifier is returned by the
     * <a>DeleteServiceLinkedRole</a> operation in the format
     * <code>task/aws-service-role/&lt;service-principal-name&gt;/&lt;role-name&gt;/&lt;task-uuid&gt;</code>.</p>
     */
    inline void SetDeletionTaskId(const Aws::String& value) { m_deletionTaskIdHasBeenSet = true; m_deletionTaskId = value; }

    /**
     * <p>The deletion task identifier. This identifier is returned by the
     * <a>DeleteServiceLinkedRole</a> operation in the format
     * <code>task/aws-service-role/&lt;service-principal-name&gt;/&lt;role-name&gt;/&lt;task-uuid&gt;</code>.</p>
     */
    inline void SetDeletionTaskId(Aws::String&& value) { m_deletionTaskIdHasBeenSet = true; m_deletionTaskId = std::move(value); }

    /**
     * <p>The deletion task identifier. This identifier is returned by the
     * <a>DeleteServiceLinkedRole</a> operation in the format
     * <code>task/aws-service-role/&lt;service-principal-name&gt;/&lt;role-name&gt;/&lt;task-uuid&gt;</code>.</p>
     */
    inline void SetDeletionTaskId(const char* value) { m_deletionTaskIdHasBeenSet = true; m_deletionTaskId.assign(value); }

    /**
     * <p>The deletion task identifier. This identifier is returned by the
     * <a>DeleteServiceLinkedRole</a> operation in the format
     * <code>task/aws-service-role/&lt;service-principal-name&gt;/&lt;role-name&gt;/&lt;task-uuid&gt;</code>.</p>
     */
    inline GetServiceLinkedRoleDeletionStatusRequest& WithDeletionTaskId(const Aws::String& value) { SetDeletionTaskId(value); return *this;}

    /**
     * <p>The deletion task identifier. This identifier is returned by the
     * <a>DeleteServiceLinkedRole</a> operation in the format
     * <code>task/aws-service-role/&lt;service-principal-name&gt;/&lt;role-name&gt;/&lt;task-uuid&gt;</code>.</p>
     */
    inline GetServiceLinkedRoleDeletionStatusRequest& WithDeletionTaskId(Aws::String&& value) { SetDeletionTaskId(std::move(value)); return *this;}

    /**
     * <p>The deletion task identifier. This identifier is returned by the
     * <a>DeleteServiceLinkedRole</a> operation in the format
     * <code>task/aws-service-role/&lt;service-principal-name&gt;/&lt;role-name&gt;/&lt;task-uuid&gt;</code>.</p>
     */
    inline GetServiceLinkedRoleDeletionStatusRequest& WithDeletionTaskId(const char* value) { SetDeletionTaskId(value); return *this;}

  private:

    Aws::String m_deletionTaskId;
    bool m_deletionTaskIdHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
