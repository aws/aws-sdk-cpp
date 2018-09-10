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

#include <aws/workspaces/model/FailedCreateWorkspaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

FailedCreateWorkspaceRequest::FailedCreateWorkspaceRequest() : 
    m_workspaceRequestHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

FailedCreateWorkspaceRequest::FailedCreateWorkspaceRequest(JsonView jsonValue) : 
    m_workspaceRequestHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

FailedCreateWorkspaceRequest& FailedCreateWorkspaceRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkspaceRequest"))
  {
    m_workspaceRequest = jsonValue.GetObject("WorkspaceRequest");

    m_workspaceRequestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue FailedCreateWorkspaceRequest::Jsonize() const
{
  JsonValue payload;

  if(m_workspaceRequestHasBeenSet)
  {
   payload.WithObject("WorkspaceRequest", m_workspaceRequest.Jsonize());

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
