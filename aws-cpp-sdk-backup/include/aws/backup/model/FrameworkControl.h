/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/ControlScope.h>
#include <aws/backup/model/ControlInputParameter.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>Contains detailed information about all of the controls of a framework. Each
   * framework must contain at least one control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/FrameworkControl">AWS
   * API Reference</a></p>
   */
  class FrameworkControl
  {
  public:
    AWS_BACKUP_API FrameworkControl();
    AWS_BACKUP_API FrameworkControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API FrameworkControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a control. This name is between 1 and 256 characters.</p>
     */
    inline const Aws::String& GetControlName() const{ return m_controlName; }

    /**
     * <p>The name of a control. This name is between 1 and 256 characters.</p>
     */
    inline bool ControlNameHasBeenSet() const { return m_controlNameHasBeenSet; }

    /**
     * <p>The name of a control. This name is between 1 and 256 characters.</p>
     */
    inline void SetControlName(const Aws::String& value) { m_controlNameHasBeenSet = true; m_controlName = value; }

    /**
     * <p>The name of a control. This name is between 1 and 256 characters.</p>
     */
    inline void SetControlName(Aws::String&& value) { m_controlNameHasBeenSet = true; m_controlName = std::move(value); }

    /**
     * <p>The name of a control. This name is between 1 and 256 characters.</p>
     */
    inline void SetControlName(const char* value) { m_controlNameHasBeenSet = true; m_controlName.assign(value); }

    /**
     * <p>The name of a control. This name is between 1 and 256 characters.</p>
     */
    inline FrameworkControl& WithControlName(const Aws::String& value) { SetControlName(value); return *this;}

    /**
     * <p>The name of a control. This name is between 1 and 256 characters.</p>
     */
    inline FrameworkControl& WithControlName(Aws::String&& value) { SetControlName(std::move(value)); return *this;}

    /**
     * <p>The name of a control. This name is between 1 and 256 characters.</p>
     */
    inline FrameworkControl& WithControlName(const char* value) { SetControlName(value); return *this;}


    /**
     * <p>A list of <code>ParameterName</code> and <code>ParameterValue</code>
     * pairs.</p>
     */
    inline const Aws::Vector<ControlInputParameter>& GetControlInputParameters() const{ return m_controlInputParameters; }

    /**
     * <p>A list of <code>ParameterName</code> and <code>ParameterValue</code>
     * pairs.</p>
     */
    inline bool ControlInputParametersHasBeenSet() const { return m_controlInputParametersHasBeenSet; }

    /**
     * <p>A list of <code>ParameterName</code> and <code>ParameterValue</code>
     * pairs.</p>
     */
    inline void SetControlInputParameters(const Aws::Vector<ControlInputParameter>& value) { m_controlInputParametersHasBeenSet = true; m_controlInputParameters = value; }

    /**
     * <p>A list of <code>ParameterName</code> and <code>ParameterValue</code>
     * pairs.</p>
     */
    inline void SetControlInputParameters(Aws::Vector<ControlInputParameter>&& value) { m_controlInputParametersHasBeenSet = true; m_controlInputParameters = std::move(value); }

    /**
     * <p>A list of <code>ParameterName</code> and <code>ParameterValue</code>
     * pairs.</p>
     */
    inline FrameworkControl& WithControlInputParameters(const Aws::Vector<ControlInputParameter>& value) { SetControlInputParameters(value); return *this;}

    /**
     * <p>A list of <code>ParameterName</code> and <code>ParameterValue</code>
     * pairs.</p>
     */
    inline FrameworkControl& WithControlInputParameters(Aws::Vector<ControlInputParameter>&& value) { SetControlInputParameters(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ParameterName</code> and <code>ParameterValue</code>
     * pairs.</p>
     */
    inline FrameworkControl& AddControlInputParameters(const ControlInputParameter& value) { m_controlInputParametersHasBeenSet = true; m_controlInputParameters.push_back(value); return *this; }

    /**
     * <p>A list of <code>ParameterName</code> and <code>ParameterValue</code>
     * pairs.</p>
     */
    inline FrameworkControl& AddControlInputParameters(ControlInputParameter&& value) { m_controlInputParametersHasBeenSet = true; m_controlInputParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>The scope of a control. The control scope defines what the control will
     * evaluate. Three examples of control scopes are: a specific backup plan, all
     * backup plans with a specific tag, or all backup plans. For more information, see
     * <a href="aws-backup/latest/devguide/API_ControlScope.html">
     * <code>ControlScope</code>.</a> </p>
     */
    inline const ControlScope& GetControlScope() const{ return m_controlScope; }

    /**
     * <p>The scope of a control. The control scope defines what the control will
     * evaluate. Three examples of control scopes are: a specific backup plan, all
     * backup plans with a specific tag, or all backup plans. For more information, see
     * <a href="aws-backup/latest/devguide/API_ControlScope.html">
     * <code>ControlScope</code>.</a> </p>
     */
    inline bool ControlScopeHasBeenSet() const { return m_controlScopeHasBeenSet; }

    /**
     * <p>The scope of a control. The control scope defines what the control will
     * evaluate. Three examples of control scopes are: a specific backup plan, all
     * backup plans with a specific tag, or all backup plans. For more information, see
     * <a href="aws-backup/latest/devguide/API_ControlScope.html">
     * <code>ControlScope</code>.</a> </p>
     */
    inline void SetControlScope(const ControlScope& value) { m_controlScopeHasBeenSet = true; m_controlScope = value; }

    /**
     * <p>The scope of a control. The control scope defines what the control will
     * evaluate. Three examples of control scopes are: a specific backup plan, all
     * backup plans with a specific tag, or all backup plans. For more information, see
     * <a href="aws-backup/latest/devguide/API_ControlScope.html">
     * <code>ControlScope</code>.</a> </p>
     */
    inline void SetControlScope(ControlScope&& value) { m_controlScopeHasBeenSet = true; m_controlScope = std::move(value); }

    /**
     * <p>The scope of a control. The control scope defines what the control will
     * evaluate. Three examples of control scopes are: a specific backup plan, all
     * backup plans with a specific tag, or all backup plans. For more information, see
     * <a href="aws-backup/latest/devguide/API_ControlScope.html">
     * <code>ControlScope</code>.</a> </p>
     */
    inline FrameworkControl& WithControlScope(const ControlScope& value) { SetControlScope(value); return *this;}

    /**
     * <p>The scope of a control. The control scope defines what the control will
     * evaluate. Three examples of control scopes are: a specific backup plan, all
     * backup plans with a specific tag, or all backup plans. For more information, see
     * <a href="aws-backup/latest/devguide/API_ControlScope.html">
     * <code>ControlScope</code>.</a> </p>
     */
    inline FrameworkControl& WithControlScope(ControlScope&& value) { SetControlScope(std::move(value)); return *this;}

  private:

    Aws::String m_controlName;
    bool m_controlNameHasBeenSet = false;

    Aws::Vector<ControlInputParameter> m_controlInputParameters;
    bool m_controlInputParametersHasBeenSet = false;

    ControlScope m_controlScope;
    bool m_controlScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
