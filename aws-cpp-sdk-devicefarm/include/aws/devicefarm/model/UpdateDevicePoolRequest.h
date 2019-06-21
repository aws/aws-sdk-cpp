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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/Rule.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a request to the update device pool operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateDevicePoolRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API UpdateDevicePoolRequest : public DeviceFarmRequest
  {
  public:
    UpdateDevicePoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDevicePool"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the Device Farm device pool you wish to
     * update.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Device Farm device pool you wish to
     * update.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Device Farm device pool you wish to
     * update.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Device Farm device pool you wish to
     * update.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Device Farm device pool you wish to
     * update.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Device Farm device pool you wish to
     * update.</p>
     */
    inline UpdateDevicePoolRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Device Farm device pool you wish to
     * update.</p>
     */
    inline UpdateDevicePoolRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Device Farm device pool you wish to
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
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A string representing the name of the device pool you wish to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A string representing the name of the device pool you wish to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

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
    inline UpdateDevicePoolRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

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
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the device pool you wish to update.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the device pool you wish to update.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

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
    inline UpdateDevicePoolRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

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
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

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
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

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
    inline UpdateDevicePoolRequest& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}

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
    inline UpdateDevicePoolRequest& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of devices that Device Farm can add to your device pool. Device
     * Farm adds devices that are available and that meet the criteria that you assign
     * for the <code>rules</code> parameter. Depending on how many devices meet these
     * constraints, your device pool might contain fewer devices than the value for
     * this parameter.</p> <p>By specifying the maximum number of devices, you can
     * control the costs that you incur by running tests.</p> <p>If you use this
     * parameter in your request, you cannot use the <code>clearMaxDevices</code>
     * parameter in the same request.</p>
     */
    inline int GetMaxDevices() const{ return m_maxDevices; }

    /**
     * <p>The number of devices that Device Farm can add to your device pool. Device
     * Farm adds devices that are available and that meet the criteria that you assign
     * for the <code>rules</code> parameter. Depending on how many devices meet these
     * constraints, your device pool might contain fewer devices than the value for
     * this parameter.</p> <p>By specifying the maximum number of devices, you can
     * control the costs that you incur by running tests.</p> <p>If you use this
     * parameter in your request, you cannot use the <code>clearMaxDevices</code>
     * parameter in the same request.</p>
     */
    inline bool MaxDevicesHasBeenSet() const { return m_maxDevicesHasBeenSet; }

    /**
     * <p>The number of devices that Device Farm can add to your device pool. Device
     * Farm adds devices that are available and that meet the criteria that you assign
     * for the <code>rules</code> parameter. Depending on how many devices meet these
     * constraints, your device pool might contain fewer devices than the value for
     * this parameter.</p> <p>By specifying the maximum number of devices, you can
     * control the costs that you incur by running tests.</p> <p>If you use this
     * parameter in your request, you cannot use the <code>clearMaxDevices</code>
     * parameter in the same request.</p>
     */
    inline void SetMaxDevices(int value) { m_maxDevicesHasBeenSet = true; m_maxDevices = value; }

    /**
     * <p>The number of devices that Device Farm can add to your device pool. Device
     * Farm adds devices that are available and that meet the criteria that you assign
     * for the <code>rules</code> parameter. Depending on how many devices meet these
     * constraints, your device pool might contain fewer devices than the value for
     * this parameter.</p> <p>By specifying the maximum number of devices, you can
     * control the costs that you incur by running tests.</p> <p>If you use this
     * parameter in your request, you cannot use the <code>clearMaxDevices</code>
     * parameter in the same request.</p>
     */
    inline UpdateDevicePoolRequest& WithMaxDevices(int value) { SetMaxDevices(value); return *this;}


    /**
     * <p>Sets whether the <code>maxDevices</code> parameter applies to your device
     * pool. If you set this parameter to <code>true</code>, the
     * <code>maxDevices</code> parameter does not apply, and Device Farm does not limit
     * the number of devices that it adds to your device pool. In this case, Device
     * Farm adds all available devices that meet the criteria that are specified for
     * the <code>rules</code> parameter.</p> <p>If you use this parameter in your
     * request, you cannot use the <code>maxDevices</code> parameter in the same
     * request.</p>
     */
    inline bool GetClearMaxDevices() const{ return m_clearMaxDevices; }

    /**
     * <p>Sets whether the <code>maxDevices</code> parameter applies to your device
     * pool. If you set this parameter to <code>true</code>, the
     * <code>maxDevices</code> parameter does not apply, and Device Farm does not limit
     * the number of devices that it adds to your device pool. In this case, Device
     * Farm adds all available devices that meet the criteria that are specified for
     * the <code>rules</code> parameter.</p> <p>If you use this parameter in your
     * request, you cannot use the <code>maxDevices</code> parameter in the same
     * request.</p>
     */
    inline bool ClearMaxDevicesHasBeenSet() const { return m_clearMaxDevicesHasBeenSet; }

    /**
     * <p>Sets whether the <code>maxDevices</code> parameter applies to your device
     * pool. If you set this parameter to <code>true</code>, the
     * <code>maxDevices</code> parameter does not apply, and Device Farm does not limit
     * the number of devices that it adds to your device pool. In this case, Device
     * Farm adds all available devices that meet the criteria that are specified for
     * the <code>rules</code> parameter.</p> <p>If you use this parameter in your
     * request, you cannot use the <code>maxDevices</code> parameter in the same
     * request.</p>
     */
    inline void SetClearMaxDevices(bool value) { m_clearMaxDevicesHasBeenSet = true; m_clearMaxDevices = value; }

    /**
     * <p>Sets whether the <code>maxDevices</code> parameter applies to your device
     * pool. If you set this parameter to <code>true</code>, the
     * <code>maxDevices</code> parameter does not apply, and Device Farm does not limit
     * the number of devices that it adds to your device pool. In this case, Device
     * Farm adds all available devices that meet the criteria that are specified for
     * the <code>rules</code> parameter.</p> <p>If you use this parameter in your
     * request, you cannot use the <code>maxDevices</code> parameter in the same
     * request.</p>
     */
    inline UpdateDevicePoolRequest& WithClearMaxDevices(bool value) { SetClearMaxDevices(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet;

    int m_maxDevices;
    bool m_maxDevicesHasBeenSet;

    bool m_clearMaxDevices;
    bool m_clearMaxDevicesHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
