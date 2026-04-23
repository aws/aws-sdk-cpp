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

#include <aws/workspaces/model/WorkspaceImage.h>
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

WorkspaceImage::WorkspaceImage() : 
    m_imageIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_operatingSystemHasBeenSet(false),
    m_state(WorkspaceImageState::NOT_SET),
    m_stateHasBeenSet(false),
    m_requiredTenancy(WorkspaceImageRequiredTenancy::NOT_SET),
    m_requiredTenancyHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

WorkspaceImage::WorkspaceImage(JsonView jsonValue) : 
    m_imageIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_operatingSystemHasBeenSet(false),
    m_state(WorkspaceImageState::NOT_SET),
    m_stateHasBeenSet(false),
    m_requiredTenancy(WorkspaceImageRequiredTenancy::NOT_SET),
    m_requiredTenancyHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

WorkspaceImage& WorkspaceImage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImageId"))
  {
    m_imageId = jsonValue.GetString("ImageId");

    m_imageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperatingSystem"))
  {
    m_operatingSystem = jsonValue.GetObject("OperatingSystem");

    m_operatingSystemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = WorkspaceImageStateMapper::GetWorkspaceImageStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequiredTenancy"))
  {
    m_requiredTenancy = WorkspaceImageRequiredTenancyMapper::GetWorkspaceImageRequiredTenancyForName(jsonValue.GetString("RequiredTenancy"));

    m_requiredTenancyHasBeenSet = true;
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

JsonValue WorkspaceImage::Jsonize() const
{
  JsonValue payload;

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("ImageId", m_imageId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithObject("OperatingSystem", m_operatingSystem.Jsonize());

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", WorkspaceImageStateMapper::GetNameForWorkspaceImageState(m_state));
  }

  if(m_requiredTenancyHasBeenSet)
  {
   payload.WithString("RequiredTenancy", WorkspaceImageRequiredTenancyMapper::GetNameForWorkspaceImageRequiredTenancy(m_requiredTenancy));
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
