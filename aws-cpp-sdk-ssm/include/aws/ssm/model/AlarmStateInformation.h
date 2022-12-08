/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ExternalAlarmState.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The details about the state of your CloudWatch alarm.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AlarmStateInformation">AWS
   * API Reference</a></p>
   */
  class AlarmStateInformation
  {
  public:
    AWS_SSM_API AlarmStateInformation();
    AWS_SSM_API AlarmStateInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AlarmStateInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of your CloudWatch alarm.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of your CloudWatch alarm.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of your CloudWatch alarm.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of your CloudWatch alarm.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of your CloudWatch alarm.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of your CloudWatch alarm.</p>
     */
    inline AlarmStateInformation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of your CloudWatch alarm.</p>
     */
    inline AlarmStateInformation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of your CloudWatch alarm.</p>
     */
    inline AlarmStateInformation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The state of your CloudWatch alarm.</p>
     */
    inline const ExternalAlarmState& GetState() const{ return m_state; }

    /**
     * <p>The state of your CloudWatch alarm.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of your CloudWatch alarm.</p>
     */
    inline void SetState(const ExternalAlarmState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of your CloudWatch alarm.</p>
     */
    inline void SetState(ExternalAlarmState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of your CloudWatch alarm.</p>
     */
    inline AlarmStateInformation& WithState(const ExternalAlarmState& value) { SetState(value); return *this;}

    /**
     * <p>The state of your CloudWatch alarm.</p>
     */
    inline AlarmStateInformation& WithState(ExternalAlarmState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ExternalAlarmState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
