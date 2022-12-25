/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DeregisterWorkspaceDirectoryRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API DeregisterWorkspaceDirectoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterWorkspaceDirectory"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory. If any WorkSpaces are registered to this
     * directory, you must remove them before you deregister the directory, or you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory. If any WorkSpaces are registered to this
     * directory, you must remove them before you deregister the directory, or you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory. If any WorkSpaces are registered to this
     * directory, you must remove them before you deregister the directory, or you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory. If any WorkSpaces are registered to this
     * directory, you must remove them before you deregister the directory, or you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory. If any WorkSpaces are registered to this
     * directory, you must remove them before you deregister the directory, or you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory. If any WorkSpaces are registered to this
     * directory, you must remove them before you deregister the directory, or you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline DeregisterWorkspaceDirectoryRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory. If any WorkSpaces are registered to this
     * directory, you must remove them before you deregister the directory, or you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline DeregisterWorkspaceDirectoryRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory. If any WorkSpaces are registered to this
     * directory, you must remove them before you deregister the directory, or you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline DeregisterWorkspaceDirectoryRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
