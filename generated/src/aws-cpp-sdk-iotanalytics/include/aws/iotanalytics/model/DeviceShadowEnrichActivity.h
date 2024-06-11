/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>An activity that adds information from the IoT Device Shadow service to a
   * message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeviceShadowEnrichActivity">AWS
   * API Reference</a></p>
   */
  class DeviceShadowEnrichActivity
  {
  public:
    AWS_IOTANALYTICS_API DeviceShadowEnrichActivity();
    AWS_IOTANALYTICS_API DeviceShadowEnrichActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DeviceShadowEnrichActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the <code>deviceShadowEnrich</code> activity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DeviceShadowEnrichActivity& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DeviceShadowEnrichActivity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DeviceShadowEnrichActivity& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the attribute that is added to the message.</p>
     */
    inline const Aws::String& GetAttribute() const{ return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(const Aws::String& value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline void SetAttribute(Aws::String&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }
    inline void SetAttribute(const char* value) { m_attributeHasBeenSet = true; m_attribute.assign(value); }
    inline DeviceShadowEnrichActivity& WithAttribute(const Aws::String& value) { SetAttribute(value); return *this;}
    inline DeviceShadowEnrichActivity& WithAttribute(Aws::String&& value) { SetAttribute(std::move(value)); return *this;}
    inline DeviceShadowEnrichActivity& WithAttribute(const char* value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IoT device whose shadow information is added to the
     * message.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }
    inline DeviceShadowEnrichActivity& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}
    inline DeviceShadowEnrichActivity& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}
    inline DeviceShadowEnrichActivity& WithThingName(const char* value) { SetThingName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that allows access to the device's shadow.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline DeviceShadowEnrichActivity& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DeviceShadowEnrichActivity& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DeviceShadowEnrichActivity& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline const Aws::String& GetNext() const{ return m_next; }
    inline bool NextHasBeenSet() const { return m_nextHasBeenSet; }
    inline void SetNext(const Aws::String& value) { m_nextHasBeenSet = true; m_next = value; }
    inline void SetNext(Aws::String&& value) { m_nextHasBeenSet = true; m_next = std::move(value); }
    inline void SetNext(const char* value) { m_nextHasBeenSet = true; m_next.assign(value); }
    inline DeviceShadowEnrichActivity& WithNext(const Aws::String& value) { SetNext(value); return *this;}
    inline DeviceShadowEnrichActivity& WithNext(Aws::String&& value) { SetNext(std::move(value)); return *this;}
    inline DeviceShadowEnrichActivity& WithNext(const char* value) { SetNext(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_attribute;
    bool m_attributeHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_next;
    bool m_nextHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
