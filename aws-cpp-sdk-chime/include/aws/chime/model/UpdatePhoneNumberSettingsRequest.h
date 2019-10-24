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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class AWS_CHIME_API UpdatePhoneNumberSettingsRequest : public ChimeRequest
  {
  public:
    UpdatePhoneNumberSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePhoneNumberSettings"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline const Aws::String& GetCallingName() const{ return m_callingName; }

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline bool CallingNameHasBeenSet() const { return m_callingNameHasBeenSet; }

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline void SetCallingName(const Aws::String& value) { m_callingNameHasBeenSet = true; m_callingName = value; }

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline void SetCallingName(Aws::String&& value) { m_callingNameHasBeenSet = true; m_callingName = std::move(value); }

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline void SetCallingName(const char* value) { m_callingNameHasBeenSet = true; m_callingName.assign(value); }

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline UpdatePhoneNumberSettingsRequest& WithCallingName(const Aws::String& value) { SetCallingName(value); return *this;}

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline UpdatePhoneNumberSettingsRequest& WithCallingName(Aws::String&& value) { SetCallingName(std::move(value)); return *this;}

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline UpdatePhoneNumberSettingsRequest& WithCallingName(const char* value) { SetCallingName(value); return *this;}

  private:

    Aws::String m_callingName;
    bool m_callingNameHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
