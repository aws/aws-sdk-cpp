/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/DevicePoolType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/Rule.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a collection of device types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DevicePool">AWS
   * API Reference</a></p>
   */
  class DevicePool
  {
  public:
    AWS_DEVICEFARM_API DevicePool();
    AWS_DEVICEFARM_API DevicePool(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API DevicePool& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device pool's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DevicePool& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DevicePool& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DevicePool& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device pool's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DevicePool& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DevicePool& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DevicePool& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device pool's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DevicePool& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DevicePool& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DevicePool& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device pool's type.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>CURATED: A device pool that is created and managed by AWS Device Farm.</p>
     * </li> <li> <p>PRIVATE: A device pool that is created and managed by the device
     * pool developer.</p> </li> </ul>
     */
    inline const DevicePoolType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DevicePoolType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DevicePoolType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DevicePool& WithType(const DevicePoolType& value) { SetType(value); return *this;}
    inline DevicePool& WithType(DevicePoolType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the device pool's rules.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }
    inline DevicePool& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}
    inline DevicePool& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}
    inline DevicePool& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }
    inline DevicePool& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of devices that Device Farm can add to your device pool. Device
     * Farm adds devices that are available and meet the criteria that you assign for
     * the <code>rules</code> parameter. Depending on how many devices meet these
     * constraints, your device pool might contain fewer devices than the value for
     * this parameter.</p> <p>By specifying the maximum number of devices, you can
     * control the costs that you incur by running tests.</p>
     */
    inline int GetMaxDevices() const{ return m_maxDevices; }
    inline bool MaxDevicesHasBeenSet() const { return m_maxDevicesHasBeenSet; }
    inline void SetMaxDevices(int value) { m_maxDevicesHasBeenSet = true; m_maxDevices = value; }
    inline DevicePool& WithMaxDevices(int value) { SetMaxDevices(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DevicePoolType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;

    int m_maxDevices;
    bool m_maxDevicesHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
