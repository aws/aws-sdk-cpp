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
#include <aws/devicefarm/model/DeviceAttribute.h>
#include <aws/devicefarm/model/RuleOperator.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a condition for a device pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/Rule">AWS API
   * Reference</a></p>
   */
  class AWS_DEVICEFARM_API Rule
  {
  public:
    Rule();
    Rule(Aws::Utils::Json::JsonView jsonValue);
    Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The rule's stringified attribute. For example, specify the value as
     * <code>"\"abc\""</code>.</p> <p>The supported operators for each attribute are
     * provided in the following list.</p> <dl> <dt>APPIUM_VERSION</dt> <dd> <p>The
     * Appium version for the test.</p> <p> <i>Supported operators</i>:
     * <code>CONTAINS</code> </p> </dd> <dt>ARN</dt> <dd> <p>The Amazon Resource Name
     * (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>AVAILABILITY</dt> <dd> <p>The current availability of the device.
     * Valid values are "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>FLEET_TYPE</dt> <dd> <p>The fleet type. Valid
     * values are "PUBLIC" or "PRIVATE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The device form
     * factor. Valid values are "PHONE" or "TABLET".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>INSTANCE_ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * instance.</p> <p> <i>Supported operators</i>: <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>INSTANCE_LABELS</dt> <dd> <p>The label of the
     * device instance.</p> <p> <i>Supported operators</i>: <code>CONTAINS</code> </p>
     * </dd> <dt>MANUFACTURER</dt> <dd> <p>The device manufacturer. For example,
     * "Apple".</p> <p> <i>Supported operators</i>: <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>MODEL</dt> <dd> <p>The
     * device model, such as "Apple iPad Air 2" or "Google Pixel".</p> <p> <i>Supported
     * operators</i>: <code>CONTAINS</code>, <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>OS_VERSION</dt> <dd> <p>The operating system
     * version. For example, "10.3.2".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code>, <code>GREATER_THAN</code>,
     * <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>, <code>LESS_THAN</code>,
     * <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>PLATFORM</dt> <dd> <p>The device platform. Valid values are "ANDROID" or
     * "IOS".</p> <p> <i>Supported operators</i>: <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether
     * the device is enabled for remote access. Valid values are "TRUE" or "FALSE".</p>
     * <p> <i>Supported operators</i>: <code>EQUALS</code> </p> </dd>
     * <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * debugging. Valid values are "TRUE" or "FALSE".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code> </p> </dd> </dl>
     */
    inline const DeviceAttribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The rule's stringified attribute. For example, specify the value as
     * <code>"\"abc\""</code>.</p> <p>The supported operators for each attribute are
     * provided in the following list.</p> <dl> <dt>APPIUM_VERSION</dt> <dd> <p>The
     * Appium version for the test.</p> <p> <i>Supported operators</i>:
     * <code>CONTAINS</code> </p> </dd> <dt>ARN</dt> <dd> <p>The Amazon Resource Name
     * (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>AVAILABILITY</dt> <dd> <p>The current availability of the device.
     * Valid values are "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>FLEET_TYPE</dt> <dd> <p>The fleet type. Valid
     * values are "PUBLIC" or "PRIVATE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The device form
     * factor. Valid values are "PHONE" or "TABLET".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>INSTANCE_ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * instance.</p> <p> <i>Supported operators</i>: <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>INSTANCE_LABELS</dt> <dd> <p>The label of the
     * device instance.</p> <p> <i>Supported operators</i>: <code>CONTAINS</code> </p>
     * </dd> <dt>MANUFACTURER</dt> <dd> <p>The device manufacturer. For example,
     * "Apple".</p> <p> <i>Supported operators</i>: <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>MODEL</dt> <dd> <p>The
     * device model, such as "Apple iPad Air 2" or "Google Pixel".</p> <p> <i>Supported
     * operators</i>: <code>CONTAINS</code>, <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>OS_VERSION</dt> <dd> <p>The operating system
     * version. For example, "10.3.2".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code>, <code>GREATER_THAN</code>,
     * <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>, <code>LESS_THAN</code>,
     * <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>PLATFORM</dt> <dd> <p>The device platform. Valid values are "ANDROID" or
     * "IOS".</p> <p> <i>Supported operators</i>: <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether
     * the device is enabled for remote access. Valid values are "TRUE" or "FALSE".</p>
     * <p> <i>Supported operators</i>: <code>EQUALS</code> </p> </dd>
     * <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * debugging. Valid values are "TRUE" or "FALSE".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code> </p> </dd> </dl>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The rule's stringified attribute. For example, specify the value as
     * <code>"\"abc\""</code>.</p> <p>The supported operators for each attribute are
     * provided in the following list.</p> <dl> <dt>APPIUM_VERSION</dt> <dd> <p>The
     * Appium version for the test.</p> <p> <i>Supported operators</i>:
     * <code>CONTAINS</code> </p> </dd> <dt>ARN</dt> <dd> <p>The Amazon Resource Name
     * (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>AVAILABILITY</dt> <dd> <p>The current availability of the device.
     * Valid values are "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>FLEET_TYPE</dt> <dd> <p>The fleet type. Valid
     * values are "PUBLIC" or "PRIVATE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The device form
     * factor. Valid values are "PHONE" or "TABLET".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>INSTANCE_ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * instance.</p> <p> <i>Supported operators</i>: <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>INSTANCE_LABELS</dt> <dd> <p>The label of the
     * device instance.</p> <p> <i>Supported operators</i>: <code>CONTAINS</code> </p>
     * </dd> <dt>MANUFACTURER</dt> <dd> <p>The device manufacturer. For example,
     * "Apple".</p> <p> <i>Supported operators</i>: <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>MODEL</dt> <dd> <p>The
     * device model, such as "Apple iPad Air 2" or "Google Pixel".</p> <p> <i>Supported
     * operators</i>: <code>CONTAINS</code>, <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>OS_VERSION</dt> <dd> <p>The operating system
     * version. For example, "10.3.2".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code>, <code>GREATER_THAN</code>,
     * <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>, <code>LESS_THAN</code>,
     * <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>PLATFORM</dt> <dd> <p>The device platform. Valid values are "ANDROID" or
     * "IOS".</p> <p> <i>Supported operators</i>: <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether
     * the device is enabled for remote access. Valid values are "TRUE" or "FALSE".</p>
     * <p> <i>Supported operators</i>: <code>EQUALS</code> </p> </dd>
     * <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * debugging. Valid values are "TRUE" or "FALSE".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code> </p> </dd> </dl>
     */
    inline void SetAttribute(const DeviceAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The rule's stringified attribute. For example, specify the value as
     * <code>"\"abc\""</code>.</p> <p>The supported operators for each attribute are
     * provided in the following list.</p> <dl> <dt>APPIUM_VERSION</dt> <dd> <p>The
     * Appium version for the test.</p> <p> <i>Supported operators</i>:
     * <code>CONTAINS</code> </p> </dd> <dt>ARN</dt> <dd> <p>The Amazon Resource Name
     * (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>AVAILABILITY</dt> <dd> <p>The current availability of the device.
     * Valid values are "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>FLEET_TYPE</dt> <dd> <p>The fleet type. Valid
     * values are "PUBLIC" or "PRIVATE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The device form
     * factor. Valid values are "PHONE" or "TABLET".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>INSTANCE_ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * instance.</p> <p> <i>Supported operators</i>: <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>INSTANCE_LABELS</dt> <dd> <p>The label of the
     * device instance.</p> <p> <i>Supported operators</i>: <code>CONTAINS</code> </p>
     * </dd> <dt>MANUFACTURER</dt> <dd> <p>The device manufacturer. For example,
     * "Apple".</p> <p> <i>Supported operators</i>: <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>MODEL</dt> <dd> <p>The
     * device model, such as "Apple iPad Air 2" or "Google Pixel".</p> <p> <i>Supported
     * operators</i>: <code>CONTAINS</code>, <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>OS_VERSION</dt> <dd> <p>The operating system
     * version. For example, "10.3.2".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code>, <code>GREATER_THAN</code>,
     * <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>, <code>LESS_THAN</code>,
     * <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>PLATFORM</dt> <dd> <p>The device platform. Valid values are "ANDROID" or
     * "IOS".</p> <p> <i>Supported operators</i>: <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether
     * the device is enabled for remote access. Valid values are "TRUE" or "FALSE".</p>
     * <p> <i>Supported operators</i>: <code>EQUALS</code> </p> </dd>
     * <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * debugging. Valid values are "TRUE" or "FALSE".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code> </p> </dd> </dl>
     */
    inline void SetAttribute(DeviceAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The rule's stringified attribute. For example, specify the value as
     * <code>"\"abc\""</code>.</p> <p>The supported operators for each attribute are
     * provided in the following list.</p> <dl> <dt>APPIUM_VERSION</dt> <dd> <p>The
     * Appium version for the test.</p> <p> <i>Supported operators</i>:
     * <code>CONTAINS</code> </p> </dd> <dt>ARN</dt> <dd> <p>The Amazon Resource Name
     * (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>AVAILABILITY</dt> <dd> <p>The current availability of the device.
     * Valid values are "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>FLEET_TYPE</dt> <dd> <p>The fleet type. Valid
     * values are "PUBLIC" or "PRIVATE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The device form
     * factor. Valid values are "PHONE" or "TABLET".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>INSTANCE_ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * instance.</p> <p> <i>Supported operators</i>: <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>INSTANCE_LABELS</dt> <dd> <p>The label of the
     * device instance.</p> <p> <i>Supported operators</i>: <code>CONTAINS</code> </p>
     * </dd> <dt>MANUFACTURER</dt> <dd> <p>The device manufacturer. For example,
     * "Apple".</p> <p> <i>Supported operators</i>: <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>MODEL</dt> <dd> <p>The
     * device model, such as "Apple iPad Air 2" or "Google Pixel".</p> <p> <i>Supported
     * operators</i>: <code>CONTAINS</code>, <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>OS_VERSION</dt> <dd> <p>The operating system
     * version. For example, "10.3.2".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code>, <code>GREATER_THAN</code>,
     * <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>, <code>LESS_THAN</code>,
     * <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>PLATFORM</dt> <dd> <p>The device platform. Valid values are "ANDROID" or
     * "IOS".</p> <p> <i>Supported operators</i>: <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether
     * the device is enabled for remote access. Valid values are "TRUE" or "FALSE".</p>
     * <p> <i>Supported operators</i>: <code>EQUALS</code> </p> </dd>
     * <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * debugging. Valid values are "TRUE" or "FALSE".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code> </p> </dd> </dl>
     */
    inline Rule& WithAttribute(const DeviceAttribute& value) { SetAttribute(value); return *this;}

    /**
     * <p>The rule's stringified attribute. For example, specify the value as
     * <code>"\"abc\""</code>.</p> <p>The supported operators for each attribute are
     * provided in the following list.</p> <dl> <dt>APPIUM_VERSION</dt> <dd> <p>The
     * Appium version for the test.</p> <p> <i>Supported operators</i>:
     * <code>CONTAINS</code> </p> </dd> <dt>ARN</dt> <dd> <p>The Amazon Resource Name
     * (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>AVAILABILITY</dt> <dd> <p>The current availability of the device.
     * Valid values are "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>FLEET_TYPE</dt> <dd> <p>The fleet type. Valid
     * values are "PUBLIC" or "PRIVATE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The device form
     * factor. Valid values are "PHONE" or "TABLET".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>INSTANCE_ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * instance.</p> <p> <i>Supported operators</i>: <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>INSTANCE_LABELS</dt> <dd> <p>The label of the
     * device instance.</p> <p> <i>Supported operators</i>: <code>CONTAINS</code> </p>
     * </dd> <dt>MANUFACTURER</dt> <dd> <p>The device manufacturer. For example,
     * "Apple".</p> <p> <i>Supported operators</i>: <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>MODEL</dt> <dd> <p>The
     * device model, such as "Apple iPad Air 2" or "Google Pixel".</p> <p> <i>Supported
     * operators</i>: <code>CONTAINS</code>, <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>OS_VERSION</dt> <dd> <p>The operating system
     * version. For example, "10.3.2".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code>, <code>GREATER_THAN</code>,
     * <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>, <code>LESS_THAN</code>,
     * <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>PLATFORM</dt> <dd> <p>The device platform. Valid values are "ANDROID" or
     * "IOS".</p> <p> <i>Supported operators</i>: <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether
     * the device is enabled for remote access. Valid values are "TRUE" or "FALSE".</p>
     * <p> <i>Supported operators</i>: <code>EQUALS</code> </p> </dd>
     * <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * debugging. Valid values are "TRUE" or "FALSE".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code> </p> </dd> </dl>
     */
    inline Rule& WithAttribute(DeviceAttribute&& value) { SetAttribute(std::move(value)); return *this;}


    /**
     * <p>Specifies how Device Farm compares the rule's attribute to the value. For the
     * operators that are supported by each attribute, see the attribute
     * descriptions.</p>
     */
    inline const RuleOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>Specifies how Device Farm compares the rule's attribute to the value. For the
     * operators that are supported by each attribute, see the attribute
     * descriptions.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>Specifies how Device Farm compares the rule's attribute to the value. For the
     * operators that are supported by each attribute, see the attribute
     * descriptions.</p>
     */
    inline void SetOperator(const RuleOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>Specifies how Device Farm compares the rule's attribute to the value. For the
     * operators that are supported by each attribute, see the attribute
     * descriptions.</p>
     */
    inline void SetOperator(RuleOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>Specifies how Device Farm compares the rule's attribute to the value. For the
     * operators that are supported by each attribute, see the attribute
     * descriptions.</p>
     */
    inline Rule& WithOperator(const RuleOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>Specifies how Device Farm compares the rule's attribute to the value. For the
     * operators that are supported by each attribute, see the attribute
     * descriptions.</p>
     */
    inline Rule& WithOperator(RuleOperator&& value) { SetOperator(std::move(value)); return *this;}


    /**
     * <p>The rule's value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The rule's value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The rule's value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The rule's value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The rule's value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The rule's value.</p>
     */
    inline Rule& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The rule's value.</p>
     */
    inline Rule& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The rule's value.</p>
     */
    inline Rule& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    DeviceAttribute m_attribute;
    bool m_attributeHasBeenSet;

    RuleOperator m_operator;
    bool m_operatorHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
