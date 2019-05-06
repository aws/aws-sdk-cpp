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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for DeleteInputSecurityGroupRequest<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInputSecurityGroupRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API DeleteInputSecurityGroupRequest : public MediaLiveRequest
  {
  public:
    DeleteInputSecurityGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInputSecurityGroup"; }

    Aws::String SerializePayload() const override;


    /**
     * The Input Security Group to delete
     */
    inline const Aws::String& GetInputSecurityGroupId() const{ return m_inputSecurityGroupId; }

    /**
     * The Input Security Group to delete
     */
    inline bool InputSecurityGroupIdHasBeenSet() const { return m_inputSecurityGroupIdHasBeenSet; }

    /**
     * The Input Security Group to delete
     */
    inline void SetInputSecurityGroupId(const Aws::String& value) { m_inputSecurityGroupIdHasBeenSet = true; m_inputSecurityGroupId = value; }

    /**
     * The Input Security Group to delete
     */
    inline void SetInputSecurityGroupId(Aws::String&& value) { m_inputSecurityGroupIdHasBeenSet = true; m_inputSecurityGroupId = std::move(value); }

    /**
     * The Input Security Group to delete
     */
    inline void SetInputSecurityGroupId(const char* value) { m_inputSecurityGroupIdHasBeenSet = true; m_inputSecurityGroupId.assign(value); }

    /**
     * The Input Security Group to delete
     */
    inline DeleteInputSecurityGroupRequest& WithInputSecurityGroupId(const Aws::String& value) { SetInputSecurityGroupId(value); return *this;}

    /**
     * The Input Security Group to delete
     */
    inline DeleteInputSecurityGroupRequest& WithInputSecurityGroupId(Aws::String&& value) { SetInputSecurityGroupId(std::move(value)); return *this;}

    /**
     * The Input Security Group to delete
     */
    inline DeleteInputSecurityGroupRequest& WithInputSecurityGroupId(const char* value) { SetInputSecurityGroupId(value); return *this;}

  private:

    Aws::String m_inputSecurityGroupId;
    bool m_inputSecurityGroupIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
