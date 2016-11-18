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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/Rule.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a request to the update device pool operation.</p>
   */
  class AWS_DEVICEFARM_API UpdateDevicePoolRequest : public DeviceFarmRequest
  {
  public:
    UpdateDevicePoolRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Resourc Name (ARN) of the Device Farm device pool you wish to
     * update.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resourc Name (ARN) of the Device Farm device pool you wish to
     * update.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resourc Name (ARN) of the Device Farm device pool you wish to
     * update.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resourc Name (ARN) of the Device Farm device pool you wish to
     * update.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resourc Name (ARN) of the Device Farm device pool you wish to
     * update.</p>
     */
    inline UpdateDevicePoolRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resourc Name (ARN) of the Device Farm device pool you wish to
     * update.</p>
     */
    inline UpdateDevicePoolRequest& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resourc Name (ARN) of the Device Farm device pool you wish to
     * update.</p>
     */
    inline UpdateDevicePoolRequest& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>A string representing the name of the device pool you wish to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A string representing the name of the device pool you wish to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A string representing the name of the device pool you wish to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A string representing the name of the device pool you wish to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A string representing the name of the device pool you wish to update.</p>
     */
    inline UpdateDevicePoolRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A string representing the name of the device pool you wish to update.</p>
     */
    inline UpdateDevicePoolRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>A string representing the name of the device pool you wish to update.</p>
     */
    inline UpdateDevicePoolRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>A description of the device pool you wish to update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the device pool you wish to update.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the device pool you wish to update.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the device pool you wish to update.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the device pool you wish to update.</p>
     */
    inline UpdateDevicePoolRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the device pool you wish to update.</p>
     */
    inline UpdateDevicePoolRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the device pool you wish to update.</p>
     */
    inline UpdateDevicePoolRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>Represents the rules you wish to modify for the device pool. Updating rules
     * is optional; however, if you choose to update rules for your request, the update
     * will replace the existing rules.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>Represents the rules you wish to modify for the device pool. Updating rules
     * is optional; however, if you choose to update rules for your request, the update
     * will replace the existing rules.</p>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>Represents the rules you wish to modify for the device pool. Updating rules
     * is optional; however, if you choose to update rules for your request, the update
     * will replace the existing rules.</p>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>Represents the rules you wish to modify for the device pool. Updating rules
     * is optional; however, if you choose to update rules for your request, the update
     * will replace the existing rules.</p>
     */
    inline UpdateDevicePoolRequest& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>Represents the rules you wish to modify for the device pool. Updating rules
     * is optional; however, if you choose to update rules for your request, the update
     * will replace the existing rules.</p>
     */
    inline UpdateDevicePoolRequest& WithRules(Aws::Vector<Rule>&& value) { SetRules(value); return *this;}

    /**
     * <p>Represents the rules you wish to modify for the device pool. Updating rules
     * is optional; however, if you choose to update rules for your request, the update
     * will replace the existing rules.</p>
     */
    inline UpdateDevicePoolRequest& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>Represents the rules you wish to modify for the device pool. Updating rules
     * is optional; however, if you choose to update rules for your request, the update
     * will replace the existing rules.</p>
     */
    inline UpdateDevicePoolRequest& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

  private:
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
