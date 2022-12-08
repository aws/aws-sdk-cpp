/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Rule
  {
  public:
    AWS_DEVICEFARM_API Rule();
    AWS_DEVICEFARM_API Rule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The rule's stringified attribute. For example, specify the value as
     * <code>"\"abc\""</code>.</p> <p>The supported operators for each attribute are
     * provided in the following list.</p> <dl> <dt>APPIUM_VERSION</dt> <dd> <p>The
     * Appium version for the test.</p> <p>Supported operators: <code>CONTAINS</code>
     * </p> </dd> <dt>ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * (for example,
     * <code>arn:aws:devicefarm:us-west-2::device:12345Example</code>.</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>AVAILABILITY</dt> <dd> <p>The current availability of the device. Valid
     * values are AVAILABLE, HIGHLY_AVAILABLE, BUSY, or TEMPORARY_NOT_AVAILABLE.</p>
     * <p>Supported operators: <code>EQUALS</code> </p> </dd> <dt>FLEET_TYPE</dt> <dd>
     * <p>The fleet type. Valid values are PUBLIC or PRIVATE.</p> <p>Supported
     * operators: <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The
     * device form factor. Valid values are PHONE or TABLET.</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>INSTANCE_ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * instance.</p> <p>Supported operators: <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>INSTANCE_LABELS</dt> <dd> <p>The label of the device instance.</p>
     * <p>Supported operators: <code>CONTAINS</code> </p> </dd> <dt>MANUFACTURER</dt>
     * <dd> <p>The device manufacturer (for example, Apple).</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>MODEL</dt> <dd> <p>The device model, such as Apple iPad Air 2 or Google
     * Pixel.</p> <p>Supported operators: <code>CONTAINS</code>, <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>OS_VERSION</dt> <dd> <p>The
     * operating system version (for example, 10.3.2).</p> <p>Supported operators:
     * <code>EQUALS</code>, <code>GREATER_THAN</code>,
     * <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>, <code>LESS_THAN</code>,
     * <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>PLATFORM</dt> <dd> <p>The device platform. Valid values are ANDROID or
     * IOS.</p> <p>Supported operators: <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether
     * the device is enabled for remote access. Valid values are TRUE or FALSE.</p>
     * <p>Supported operators: <code>EQUALS</code> </p> </dd>
     * <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * debugging. Valid values are TRUE or FALSE.</p> <p>Supported operators:
     * <code>EQUALS</code> </p> <p>Because remote debugging is <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>, this filter is ignored.</p> </dd> </dl>
     */
    inline const DeviceAttribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The rule's stringified attribute. For example, specify the value as
     * <code>"\"abc\""</code>.</p> <p>The supported operators for each attribute are
     * provided in the following list.</p> <dl> <dt>APPIUM_VERSION</dt> <dd> <p>The
     * Appium version for the test.</p> <p>Supported operators: <code>CONTAINS</code>
     * </p> </dd> <dt>ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * (for example,
     * <code>arn:aws:devicefarm:us-west-2::device:12345Example</code>.</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>AVAILABILITY</dt> <dd> <p>The current availability of the device. Valid
     * values are AVAILABLE, HIGHLY_AVAILABLE, BUSY, or TEMPORARY_NOT_AVAILABLE.</p>
     * <p>Supported operators: <code>EQUALS</code> </p> </dd> <dt>FLEET_TYPE</dt> <dd>
     * <p>The fleet type. Valid values are PUBLIC or PRIVATE.</p> <p>Supported
     * operators: <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The
     * device form factor. Valid values are PHONE or TABLET.</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>INSTANCE_ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * instance.</p> <p>Supported operators: <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>INSTANCE_LABELS</dt> <dd> <p>The label of the device instance.</p>
     * <p>Supported operators: <code>CONTAINS</code> </p> </dd> <dt>MANUFACTURER</dt>
     * <dd> <p>The device manufacturer (for example, Apple).</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>MODEL</dt> <dd> <p>The device model, such as Apple iPad Air 2 or Google
     * Pixel.</p> <p>Supported operators: <code>CONTAINS</code>, <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>OS_VERSION</dt> <dd> <p>The
     * operating system version (for example, 10.3.2).</p> <p>Supported operators:
     * <code>EQUALS</code>, <code>GREATER_THAN</code>,
     * <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>, <code>LESS_THAN</code>,
     * <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>PLATFORM</dt> <dd> <p>The device platform. Valid values are ANDROID or
     * IOS.</p> <p>Supported operators: <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether
     * the device is enabled for remote access. Valid values are TRUE or FALSE.</p>
     * <p>Supported operators: <code>EQUALS</code> </p> </dd>
     * <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * debugging. Valid values are TRUE or FALSE.</p> <p>Supported operators:
     * <code>EQUALS</code> </p> <p>Because remote debugging is <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>, this filter is ignored.</p> </dd> </dl>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The rule's stringified attribute. For example, specify the value as
     * <code>"\"abc\""</code>.</p> <p>The supported operators for each attribute are
     * provided in the following list.</p> <dl> <dt>APPIUM_VERSION</dt> <dd> <p>The
     * Appium version for the test.</p> <p>Supported operators: <code>CONTAINS</code>
     * </p> </dd> <dt>ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * (for example,
     * <code>arn:aws:devicefarm:us-west-2::device:12345Example</code>.</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>AVAILABILITY</dt> <dd> <p>The current availability of the device. Valid
     * values are AVAILABLE, HIGHLY_AVAILABLE, BUSY, or TEMPORARY_NOT_AVAILABLE.</p>
     * <p>Supported operators: <code>EQUALS</code> </p> </dd> <dt>FLEET_TYPE</dt> <dd>
     * <p>The fleet type. Valid values are PUBLIC or PRIVATE.</p> <p>Supported
     * operators: <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The
     * device form factor. Valid values are PHONE or TABLET.</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>INSTANCE_ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * instance.</p> <p>Supported operators: <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>INSTANCE_LABELS</dt> <dd> <p>The label of the device instance.</p>
     * <p>Supported operators: <code>CONTAINS</code> </p> </dd> <dt>MANUFACTURER</dt>
     * <dd> <p>The device manufacturer (for example, Apple).</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>MODEL</dt> <dd> <p>The device model, such as Apple iPad Air 2 or Google
     * Pixel.</p> <p>Supported operators: <code>CONTAINS</code>, <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>OS_VERSION</dt> <dd> <p>The
     * operating system version (for example, 10.3.2).</p> <p>Supported operators:
     * <code>EQUALS</code>, <code>GREATER_THAN</code>,
     * <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>, <code>LESS_THAN</code>,
     * <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>PLATFORM</dt> <dd> <p>The device platform. Valid values are ANDROID or
     * IOS.</p> <p>Supported operators: <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether
     * the device is enabled for remote access. Valid values are TRUE or FALSE.</p>
     * <p>Supported operators: <code>EQUALS</code> </p> </dd>
     * <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * debugging. Valid values are TRUE or FALSE.</p> <p>Supported operators:
     * <code>EQUALS</code> </p> <p>Because remote debugging is <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>, this filter is ignored.</p> </dd> </dl>
     */
    inline void SetAttribute(const DeviceAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The rule's stringified attribute. For example, specify the value as
     * <code>"\"abc\""</code>.</p> <p>The supported operators for each attribute are
     * provided in the following list.</p> <dl> <dt>APPIUM_VERSION</dt> <dd> <p>The
     * Appium version for the test.</p> <p>Supported operators: <code>CONTAINS</code>
     * </p> </dd> <dt>ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * (for example,
     * <code>arn:aws:devicefarm:us-west-2::device:12345Example</code>.</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>AVAILABILITY</dt> <dd> <p>The current availability of the device. Valid
     * values are AVAILABLE, HIGHLY_AVAILABLE, BUSY, or TEMPORARY_NOT_AVAILABLE.</p>
     * <p>Supported operators: <code>EQUALS</code> </p> </dd> <dt>FLEET_TYPE</dt> <dd>
     * <p>The fleet type. Valid values are PUBLIC or PRIVATE.</p> <p>Supported
     * operators: <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The
     * device form factor. Valid values are PHONE or TABLET.</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>INSTANCE_ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * instance.</p> <p>Supported operators: <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>INSTANCE_LABELS</dt> <dd> <p>The label of the device instance.</p>
     * <p>Supported operators: <code>CONTAINS</code> </p> </dd> <dt>MANUFACTURER</dt>
     * <dd> <p>The device manufacturer (for example, Apple).</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>MODEL</dt> <dd> <p>The device model, such as Apple iPad Air 2 or Google
     * Pixel.</p> <p>Supported operators: <code>CONTAINS</code>, <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>OS_VERSION</dt> <dd> <p>The
     * operating system version (for example, 10.3.2).</p> <p>Supported operators:
     * <code>EQUALS</code>, <code>GREATER_THAN</code>,
     * <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>, <code>LESS_THAN</code>,
     * <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>PLATFORM</dt> <dd> <p>The device platform. Valid values are ANDROID or
     * IOS.</p> <p>Supported operators: <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether
     * the device is enabled for remote access. Valid values are TRUE or FALSE.</p>
     * <p>Supported operators: <code>EQUALS</code> </p> </dd>
     * <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * debugging. Valid values are TRUE or FALSE.</p> <p>Supported operators:
     * <code>EQUALS</code> </p> <p>Because remote debugging is <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>, this filter is ignored.</p> </dd> </dl>
     */
    inline void SetAttribute(DeviceAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The rule's stringified attribute. For example, specify the value as
     * <code>"\"abc\""</code>.</p> <p>The supported operators for each attribute are
     * provided in the following list.</p> <dl> <dt>APPIUM_VERSION</dt> <dd> <p>The
     * Appium version for the test.</p> <p>Supported operators: <code>CONTAINS</code>
     * </p> </dd> <dt>ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * (for example,
     * <code>arn:aws:devicefarm:us-west-2::device:12345Example</code>.</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>AVAILABILITY</dt> <dd> <p>The current availability of the device. Valid
     * values are AVAILABLE, HIGHLY_AVAILABLE, BUSY, or TEMPORARY_NOT_AVAILABLE.</p>
     * <p>Supported operators: <code>EQUALS</code> </p> </dd> <dt>FLEET_TYPE</dt> <dd>
     * <p>The fleet type. Valid values are PUBLIC or PRIVATE.</p> <p>Supported
     * operators: <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The
     * device form factor. Valid values are PHONE or TABLET.</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>INSTANCE_ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * instance.</p> <p>Supported operators: <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>INSTANCE_LABELS</dt> <dd> <p>The label of the device instance.</p>
     * <p>Supported operators: <code>CONTAINS</code> </p> </dd> <dt>MANUFACTURER</dt>
     * <dd> <p>The device manufacturer (for example, Apple).</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>MODEL</dt> <dd> <p>The device model, such as Apple iPad Air 2 or Google
     * Pixel.</p> <p>Supported operators: <code>CONTAINS</code>, <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>OS_VERSION</dt> <dd> <p>The
     * operating system version (for example, 10.3.2).</p> <p>Supported operators:
     * <code>EQUALS</code>, <code>GREATER_THAN</code>,
     * <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>, <code>LESS_THAN</code>,
     * <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>PLATFORM</dt> <dd> <p>The device platform. Valid values are ANDROID or
     * IOS.</p> <p>Supported operators: <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether
     * the device is enabled for remote access. Valid values are TRUE or FALSE.</p>
     * <p>Supported operators: <code>EQUALS</code> </p> </dd>
     * <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * debugging. Valid values are TRUE or FALSE.</p> <p>Supported operators:
     * <code>EQUALS</code> </p> <p>Because remote debugging is <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>, this filter is ignored.</p> </dd> </dl>
     */
    inline Rule& WithAttribute(const DeviceAttribute& value) { SetAttribute(value); return *this;}

    /**
     * <p>The rule's stringified attribute. For example, specify the value as
     * <code>"\"abc\""</code>.</p> <p>The supported operators for each attribute are
     * provided in the following list.</p> <dl> <dt>APPIUM_VERSION</dt> <dd> <p>The
     * Appium version for the test.</p> <p>Supported operators: <code>CONTAINS</code>
     * </p> </dd> <dt>ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * (for example,
     * <code>arn:aws:devicefarm:us-west-2::device:12345Example</code>.</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>AVAILABILITY</dt> <dd> <p>The current availability of the device. Valid
     * values are AVAILABLE, HIGHLY_AVAILABLE, BUSY, or TEMPORARY_NOT_AVAILABLE.</p>
     * <p>Supported operators: <code>EQUALS</code> </p> </dd> <dt>FLEET_TYPE</dt> <dd>
     * <p>The fleet type. Valid values are PUBLIC or PRIVATE.</p> <p>Supported
     * operators: <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The
     * device form factor. Valid values are PHONE or TABLET.</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>INSTANCE_ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * instance.</p> <p>Supported operators: <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>INSTANCE_LABELS</dt> <dd> <p>The label of the device instance.</p>
     * <p>Supported operators: <code>CONTAINS</code> </p> </dd> <dt>MANUFACTURER</dt>
     * <dd> <p>The device manufacturer (for example, Apple).</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>MODEL</dt> <dd> <p>The device model, such as Apple iPad Air 2 or Google
     * Pixel.</p> <p>Supported operators: <code>CONTAINS</code>, <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>OS_VERSION</dt> <dd> <p>The
     * operating system version (for example, 10.3.2).</p> <p>Supported operators:
     * <code>EQUALS</code>, <code>GREATER_THAN</code>,
     * <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>, <code>LESS_THAN</code>,
     * <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>PLATFORM</dt> <dd> <p>The device platform. Valid values are ANDROID or
     * IOS.</p> <p>Supported operators: <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether
     * the device is enabled for remote access. Valid values are TRUE or FALSE.</p>
     * <p>Supported operators: <code>EQUALS</code> </p> </dd>
     * <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * debugging. Valid values are TRUE or FALSE.</p> <p>Supported operators:
     * <code>EQUALS</code> </p> <p>Because remote debugging is <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>, this filter is ignored.</p> </dd> </dl>
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
    bool m_attributeHasBeenSet = false;

    RuleOperator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
