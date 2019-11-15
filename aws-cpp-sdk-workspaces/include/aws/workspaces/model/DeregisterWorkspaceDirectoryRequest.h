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
  class AWS_WORKSPACES_API DeregisterWorkspaceDirectoryRequest : public WorkSpacesRequest
  {
  public:
    DeregisterWorkspaceDirectoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterWorkspaceDirectory"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    bool m_directoryIdHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
