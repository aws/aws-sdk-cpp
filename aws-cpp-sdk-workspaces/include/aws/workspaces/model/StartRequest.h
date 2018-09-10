﻿/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Information used to start a WorkSpace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/StartRequest">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API StartRequest
  {
  public:
    StartRequest();
    StartRequest(Aws::Utils::Json::JsonView jsonValue);
    StartRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline StartRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline StartRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline StartRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
