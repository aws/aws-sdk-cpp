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
#include <aws/workspaces/model/WorkspaceRequest.h>
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
   * <p>Describes a WorkSpace that cannot be created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/FailedCreateWorkspaceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API FailedCreateWorkspaceRequest
  {
  public:
    FailedCreateWorkspaceRequest();
    FailedCreateWorkspaceRequest(Aws::Utils::Json::JsonView jsonValue);
    FailedCreateWorkspaceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the WorkSpace.</p>
     */
    inline const WorkspaceRequest& GetWorkspaceRequest() const{ return m_workspaceRequest; }

    /**
     * <p>Information about the WorkSpace.</p>
     */
    inline bool WorkspaceRequestHasBeenSet() const { return m_workspaceRequestHasBeenSet; }

    /**
     * <p>Information about the WorkSpace.</p>
     */
    inline void SetWorkspaceRequest(const WorkspaceRequest& value) { m_workspaceRequestHasBeenSet = true; m_workspaceRequest = value; }

    /**
     * <p>Information about the WorkSpace.</p>
     */
    inline void SetWorkspaceRequest(WorkspaceRequest&& value) { m_workspaceRequestHasBeenSet = true; m_workspaceRequest = std::move(value); }

    /**
     * <p>Information about the WorkSpace.</p>
     */
    inline FailedCreateWorkspaceRequest& WithWorkspaceRequest(const WorkspaceRequest& value) { SetWorkspaceRequest(value); return *this;}

    /**
     * <p>Information about the WorkSpace.</p>
     */
    inline FailedCreateWorkspaceRequest& WithWorkspaceRequest(WorkspaceRequest&& value) { SetWorkspaceRequest(std::move(value)); return *this;}


    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline FailedCreateWorkspaceRequest& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline FailedCreateWorkspaceRequest& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline FailedCreateWorkspaceRequest& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline FailedCreateWorkspaceRequest& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline FailedCreateWorkspaceRequest& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
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
