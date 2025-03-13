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
    AWS_BACKUP_API FrameworkControl() = default;
    AWS_BACKUP_API FrameworkControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API FrameworkControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a control. This name is between 1 and 256 characters.</p>
     */
    inline const Aws::String& GetControlName() const { return m_controlName; }
    inline bool ControlNameHasBeenSet() const { return m_controlNameHasBeenSet; }
    template<typename ControlNameT = Aws::String>
    void SetControlName(ControlNameT&& value) { m_controlNameHasBeenSet = true; m_controlName = std::forward<ControlNameT>(value); }
    template<typename ControlNameT = Aws::String>
    FrameworkControl& WithControlName(ControlNameT&& value) { SetControlName(std::forward<ControlNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name/value pairs.</p>
     */
    inline const Aws::Vector<ControlInputParameter>& GetControlInputParameters() const { return m_controlInputParameters; }
    inline bool ControlInputParametersHasBeenSet() const { return m_controlInputParametersHasBeenSet; }
    template<typename ControlInputParametersT = Aws::Vector<ControlInputParameter>>
    void SetControlInputParameters(ControlInputParametersT&& value) { m_controlInputParametersHasBeenSet = true; m_controlInputParameters = std::forward<ControlInputParametersT>(value); }
    template<typename ControlInputParametersT = Aws::Vector<ControlInputParameter>>
    FrameworkControl& WithControlInputParameters(ControlInputParametersT&& value) { SetControlInputParameters(std::forward<ControlInputParametersT>(value)); return *this;}
    template<typename ControlInputParametersT = ControlInputParameter>
    FrameworkControl& AddControlInputParameters(ControlInputParametersT&& value) { m_controlInputParametersHasBeenSet = true; m_controlInputParameters.emplace_back(std::forward<ControlInputParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The scope of a control. The control scope defines what the control will
     * evaluate. Three examples of control scopes are: a specific backup plan, all
     * backup plans with a specific tag, or all backup plans.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_ControlScope.html">
     * <code>ControlScope</code>.</a> </p>
     */
    inline const ControlScope& GetControlScope() const { return m_controlScope; }
    inline bool ControlScopeHasBeenSet() const { return m_controlScopeHasBeenSet; }
    template<typename ControlScopeT = ControlScope>
    void SetControlScope(ControlScopeT&& value) { m_controlScopeHasBeenSet = true; m_controlScope = std::forward<ControlScopeT>(value); }
    template<typename ControlScopeT = ControlScope>
    FrameworkControl& WithControlScope(ControlScopeT&& value) { SetControlScope(std::forward<ControlScopeT>(value)); return *this;}
    ///@}
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
