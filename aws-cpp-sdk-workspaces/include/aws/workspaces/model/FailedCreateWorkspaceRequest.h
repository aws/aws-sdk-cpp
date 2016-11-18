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
#include <aws/workspaces/model/WorkspaceRequest.h>
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
   * <p>Contains information about a WorkSpace that could not be created.</p>
   */
  class AWS_WORKSPACES_API FailedCreateWorkspaceRequest
  {
  public:
    FailedCreateWorkspaceRequest();
    FailedCreateWorkspaceRequest(const Aws::Utils::Json::JsonValue& jsonValue);
    FailedCreateWorkspaceRequest& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A <a>FailedCreateWorkspaceRequest$WorkspaceRequest</a> object that contains
     * the information about the WorkSpace that could not be created.</p>
     */
    inline const WorkspaceRequest& GetWorkspaceRequest() const{ return m_workspaceRequest; }

    /**
     * <p>A <a>FailedCreateWorkspaceRequest$WorkspaceRequest</a> object that contains
     * the information about the WorkSpace that could not be created.</p>
     */
    inline void SetWorkspaceRequest(const WorkspaceRequest& value) { m_workspaceRequestHasBeenSet = true; m_workspaceRequest = value; }

    /**
     * <p>A <a>FailedCreateWorkspaceRequest$WorkspaceRequest</a> object that contains
     * the information about the WorkSpace that could not be created.</p>
     */
    inline void SetWorkspaceRequest(WorkspaceRequest&& value) { m_workspaceRequestHasBeenSet = true; m_workspaceRequest = value; }

    /**
     * <p>A <a>FailedCreateWorkspaceRequest$WorkspaceRequest</a> object that contains
     * the information about the WorkSpace that could not be created.</p>
     */
    inline FailedCreateWorkspaceRequest& WithWorkspaceRequest(const WorkspaceRequest& value) { SetWorkspaceRequest(value); return *this;}

    /**
     * <p>A <a>FailedCreateWorkspaceRequest$WorkspaceRequest</a> object that contains
     * the information about the WorkSpace that could not be created.</p>
     */
    inline FailedCreateWorkspaceRequest& WithWorkspaceRequest(WorkspaceRequest&& value) { SetWorkspaceRequest(value); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code.</p>
     */
    inline FailedCreateWorkspaceRequest& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline FailedCreateWorkspaceRequest& WithErrorCode(Aws::String&& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline FailedCreateWorkspaceRequest& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}

    /**
     * <p>The textual error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The textual error message.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The textual error message.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The textual error message.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The textual error message.</p>
     */
    inline FailedCreateWorkspaceRequest& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The textual error message.</p>
     */
    inline FailedCreateWorkspaceRequest& WithErrorMessage(Aws::String&& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The textual error message.</p>
     */
    inline FailedCreateWorkspaceRequest& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:
    WorkspaceRequest m_workspaceRequest;
    bool m_workspaceRequestHasBeenSet;
    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;
    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
