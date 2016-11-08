/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Contains information used with the <a>RebootWorkspaces</a> operation to
   * reboot a WorkSpace.</p>
   */
  class AWS_WORKSPACES_API RebootRequest
  {
  public:
    RebootRequest();
    RebootRequest(const Aws::Utils::Json::JsonValue& jsonValue);
    RebootRequest& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The identifier of the WorkSpace to reboot.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The identifier of the WorkSpace to reboot.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The identifier of the WorkSpace to reboot.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The identifier of the WorkSpace to reboot.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The identifier of the WorkSpace to reboot.</p>
     */
    inline RebootRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The identifier of the WorkSpace to reboot.</p>
     */
    inline RebootRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The identifier of the WorkSpace to reboot.</p>
     */
    inline RebootRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:
    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
