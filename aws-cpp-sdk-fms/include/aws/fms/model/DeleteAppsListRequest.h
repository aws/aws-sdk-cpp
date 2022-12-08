/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class DeleteAppsListRequest : public FMSRequest
  {
  public:
    AWS_FMS_API DeleteAppsListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAppsList"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the applications list that you want to delete. You can retrieve
     * this ID from <code>PutAppsList</code>, <code>ListAppsLists</code>, and
     * <code>GetAppsList</code>.</p>
     */
    inline const Aws::String& GetListId() const{ return m_listId; }

    /**
     * <p>The ID of the applications list that you want to delete. You can retrieve
     * this ID from <code>PutAppsList</code>, <code>ListAppsLists</code>, and
     * <code>GetAppsList</code>.</p>
     */
    inline bool ListIdHasBeenSet() const { return m_listIdHasBeenSet; }

    /**
     * <p>The ID of the applications list that you want to delete. You can retrieve
     * this ID from <code>PutAppsList</code>, <code>ListAppsLists</code>, and
     * <code>GetAppsList</code>.</p>
     */
    inline void SetListId(const Aws::String& value) { m_listIdHasBeenSet = true; m_listId = value; }

    /**
     * <p>The ID of the applications list that you want to delete. You can retrieve
     * this ID from <code>PutAppsList</code>, <code>ListAppsLists</code>, and
     * <code>GetAppsList</code>.</p>
     */
    inline void SetListId(Aws::String&& value) { m_listIdHasBeenSet = true; m_listId = std::move(value); }

    /**
     * <p>The ID of the applications list that you want to delete. You can retrieve
     * this ID from <code>PutAppsList</code>, <code>ListAppsLists</code>, and
     * <code>GetAppsList</code>.</p>
     */
    inline void SetListId(const char* value) { m_listIdHasBeenSet = true; m_listId.assign(value); }

    /**
     * <p>The ID of the applications list that you want to delete. You can retrieve
     * this ID from <code>PutAppsList</code>, <code>ListAppsLists</code>, and
     * <code>GetAppsList</code>.</p>
     */
    inline DeleteAppsListRequest& WithListId(const Aws::String& value) { SetListId(value); return *this;}

    /**
     * <p>The ID of the applications list that you want to delete. You can retrieve
     * this ID from <code>PutAppsList</code>, <code>ListAppsLists</code>, and
     * <code>GetAppsList</code>.</p>
     */
    inline DeleteAppsListRequest& WithListId(Aws::String&& value) { SetListId(std::move(value)); return *this;}

    /**
     * <p>The ID of the applications list that you want to delete. You can retrieve
     * this ID from <code>PutAppsList</code>, <code>ListAppsLists</code>, and
     * <code>GetAppsList</code>.</p>
     */
    inline DeleteAppsListRequest& WithListId(const char* value) { SetListId(value); return *this;}

  private:

    Aws::String m_listId;
    bool m_listIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
