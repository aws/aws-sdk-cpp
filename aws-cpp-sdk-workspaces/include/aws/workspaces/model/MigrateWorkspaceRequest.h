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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class AWS_WORKSPACES_API MigrateWorkspaceRequest : public WorkSpacesRequest
  {
  public:
    MigrateWorkspaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "MigrateWorkspace"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the WorkSpace to migrate from.</p>
     */
    inline const Aws::String& GetSourceWorkspaceId() const{ return m_sourceWorkspaceId; }

    /**
     * <p>The identifier of the WorkSpace to migrate from.</p>
     */
    inline bool SourceWorkspaceIdHasBeenSet() const { return m_sourceWorkspaceIdHasBeenSet; }

    /**
     * <p>The identifier of the WorkSpace to migrate from.</p>
     */
    inline void SetSourceWorkspaceId(const Aws::String& value) { m_sourceWorkspaceIdHasBeenSet = true; m_sourceWorkspaceId = value; }

    /**
     * <p>The identifier of the WorkSpace to migrate from.</p>
     */
    inline void SetSourceWorkspaceId(Aws::String&& value) { m_sourceWorkspaceIdHasBeenSet = true; m_sourceWorkspaceId = std::move(value); }

    /**
     * <p>The identifier of the WorkSpace to migrate from.</p>
     */
    inline void SetSourceWorkspaceId(const char* value) { m_sourceWorkspaceIdHasBeenSet = true; m_sourceWorkspaceId.assign(value); }

    /**
     * <p>The identifier of the WorkSpace to migrate from.</p>
     */
    inline MigrateWorkspaceRequest& WithSourceWorkspaceId(const Aws::String& value) { SetSourceWorkspaceId(value); return *this;}

    /**
     * <p>The identifier of the WorkSpace to migrate from.</p>
     */
    inline MigrateWorkspaceRequest& WithSourceWorkspaceId(Aws::String&& value) { SetSourceWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the WorkSpace to migrate from.</p>
     */
    inline MigrateWorkspaceRequest& WithSourceWorkspaceId(const char* value) { SetSourceWorkspaceId(value); return *this;}


    /**
     * <p>The identifier of the target bundle type to migrate the WorkSpace to.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The identifier of the target bundle type to migrate the WorkSpace to.</p>
     */
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }

    /**
     * <p>The identifier of the target bundle type to migrate the WorkSpace to.</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The identifier of the target bundle type to migrate the WorkSpace to.</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }

    /**
     * <p>The identifier of the target bundle type to migrate the WorkSpace to.</p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p>The identifier of the target bundle type to migrate the WorkSpace to.</p>
     */
    inline MigrateWorkspaceRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The identifier of the target bundle type to migrate the WorkSpace to.</p>
     */
    inline MigrateWorkspaceRequest& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the target bundle type to migrate the WorkSpace to.</p>
     */
    inline MigrateWorkspaceRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}

  private:

    Aws::String m_sourceWorkspaceId;
    bool m_sourceWorkspaceIdHasBeenSet;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
