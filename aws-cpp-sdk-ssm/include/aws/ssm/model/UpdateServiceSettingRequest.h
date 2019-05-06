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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   * <p>The request body of the UpdateServiceSetting API action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateServiceSettingRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API UpdateServiceSettingRequest : public SSMRequest
  {
  public:
    UpdateServiceSettingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceSetting"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the service setting to update.</p>
     */
    inline const Aws::String& GetSettingId() const{ return m_settingId; }

    /**
     * <p>The ID of the service setting to update.</p>
     */
    inline bool SettingIdHasBeenSet() const { return m_settingIdHasBeenSet; }

    /**
     * <p>The ID of the service setting to update.</p>
     */
    inline void SetSettingId(const Aws::String& value) { m_settingIdHasBeenSet = true; m_settingId = value; }

    /**
     * <p>The ID of the service setting to update.</p>
     */
    inline void SetSettingId(Aws::String&& value) { m_settingIdHasBeenSet = true; m_settingId = std::move(value); }

    /**
     * <p>The ID of the service setting to update.</p>
     */
    inline void SetSettingId(const char* value) { m_settingIdHasBeenSet = true; m_settingId.assign(value); }

    /**
     * <p>The ID of the service setting to update.</p>
     */
    inline UpdateServiceSettingRequest& WithSettingId(const Aws::String& value) { SetSettingId(value); return *this;}

    /**
     * <p>The ID of the service setting to update.</p>
     */
    inline UpdateServiceSettingRequest& WithSettingId(Aws::String&& value) { SetSettingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service setting to update.</p>
     */
    inline UpdateServiceSettingRequest& WithSettingId(const char* value) { SetSettingId(value); return *this;}


    /**
     * <p>The new value to specify for the service setting.</p>
     */
    inline const Aws::String& GetSettingValue() const{ return m_settingValue; }

    /**
     * <p>The new value to specify for the service setting.</p>
     */
    inline bool SettingValueHasBeenSet() const { return m_settingValueHasBeenSet; }

    /**
     * <p>The new value to specify for the service setting.</p>
     */
    inline void SetSettingValue(const Aws::String& value) { m_settingValueHasBeenSet = true; m_settingValue = value; }

    /**
     * <p>The new value to specify for the service setting.</p>
     */
    inline void SetSettingValue(Aws::String&& value) { m_settingValueHasBeenSet = true; m_settingValue = std::move(value); }

    /**
     * <p>The new value to specify for the service setting.</p>
     */
    inline void SetSettingValue(const char* value) { m_settingValueHasBeenSet = true; m_settingValue.assign(value); }

    /**
     * <p>The new value to specify for the service setting.</p>
     */
    inline UpdateServiceSettingRequest& WithSettingValue(const Aws::String& value) { SetSettingValue(value); return *this;}

    /**
     * <p>The new value to specify for the service setting.</p>
     */
    inline UpdateServiceSettingRequest& WithSettingValue(Aws::String&& value) { SetSettingValue(std::move(value)); return *this;}

    /**
     * <p>The new value to specify for the service setting.</p>
     */
    inline UpdateServiceSettingRequest& WithSettingValue(const char* value) { SetSettingValue(value); return *this;}

  private:

    Aws::String m_settingId;
    bool m_settingIdHasBeenSet;

    Aws::String m_settingValue;
    bool m_settingValueHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
