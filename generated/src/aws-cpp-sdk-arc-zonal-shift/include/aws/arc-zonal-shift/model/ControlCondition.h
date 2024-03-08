/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-zonal-shift/model/ControlConditionType.h>
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
namespace ARCZonalShift
{
namespace Model
{

  /**
   * <p>A control condition is an alarm that you specify for a practice run. When you
   * configure practice runs with zonal autoshift for a resource, you specify Amazon
   * CloudWatch alarms, which you create in CloudWatch to use with the practice run.
   * The alarms that you specify are an <i>outcome alarm</i>, to monitor application
   * health during practice runs and, optionally, a <i>blocking alarm</i>, to block
   * practice runs from starting.</p> <p>Control condition alarms do not apply for
   * autoshifts.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-autoshift.considerations.html">
   * Considerations when you configure zonal autoshift</a> in the Amazon Route 53
   * Application Recovery Controller Developer Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/ControlCondition">AWS
   * API Reference</a></p>
   */
  class ControlCondition
  {
  public:
    AWS_ARCZONALSHIFT_API ControlCondition();
    AWS_ARCZONALSHIFT_API ControlCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API ControlCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon CloudWatch alarm that you
     * specify as a control condition for a practice run.</p>
     */
    inline const Aws::String& GetAlarmIdentifier() const{ return m_alarmIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon CloudWatch alarm that you
     * specify as a control condition for a practice run.</p>
     */
    inline bool AlarmIdentifierHasBeenSet() const { return m_alarmIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon CloudWatch alarm that you
     * specify as a control condition for a practice run.</p>
     */
    inline void SetAlarmIdentifier(const Aws::String& value) { m_alarmIdentifierHasBeenSet = true; m_alarmIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon CloudWatch alarm that you
     * specify as a control condition for a practice run.</p>
     */
    inline void SetAlarmIdentifier(Aws::String&& value) { m_alarmIdentifierHasBeenSet = true; m_alarmIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon CloudWatch alarm that you
     * specify as a control condition for a practice run.</p>
     */
    inline void SetAlarmIdentifier(const char* value) { m_alarmIdentifierHasBeenSet = true; m_alarmIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon CloudWatch alarm that you
     * specify as a control condition for a practice run.</p>
     */
    inline ControlCondition& WithAlarmIdentifier(const Aws::String& value) { SetAlarmIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon CloudWatch alarm that you
     * specify as a control condition for a practice run.</p>
     */
    inline ControlCondition& WithAlarmIdentifier(Aws::String&& value) { SetAlarmIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon CloudWatch alarm that you
     * specify as a control condition for a practice run.</p>
     */
    inline ControlCondition& WithAlarmIdentifier(const char* value) { SetAlarmIdentifier(value); return *this;}


    /**
     * <p>The type of alarm specified for a practice run. The only valid value is
     * <code>CLOUDWATCH</code>.</p>
     */
    inline const ControlConditionType& GetType() const{ return m_type; }

    /**
     * <p>The type of alarm specified for a practice run. The only valid value is
     * <code>CLOUDWATCH</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of alarm specified for a practice run. The only valid value is
     * <code>CLOUDWATCH</code>.</p>
     */
    inline void SetType(const ControlConditionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of alarm specified for a practice run. The only valid value is
     * <code>CLOUDWATCH</code>.</p>
     */
    inline void SetType(ControlConditionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of alarm specified for a practice run. The only valid value is
     * <code>CLOUDWATCH</code>.</p>
     */
    inline ControlCondition& WithType(const ControlConditionType& value) { SetType(value); return *this;}

    /**
     * <p>The type of alarm specified for a practice run. The only valid value is
     * <code>CLOUDWATCH</code>.</p>
     */
    inline ControlCondition& WithType(ControlConditionType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_alarmIdentifier;
    bool m_alarmIdentifierHasBeenSet = false;

    ControlConditionType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
