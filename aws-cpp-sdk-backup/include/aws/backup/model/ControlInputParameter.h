/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>A list of parameters for a control. A control can have zero, one, or more
   * than one parameter. An example of a control with two parameters is: "backup plan
   * frequency is at least <code>daily</code> and the retention period is at least
   * <code>1 year</code>". The first parameter is <code>daily</code>. The second
   * parameter is <code>1 year</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ControlInputParameter">AWS
   * API Reference</a></p>
   */
  class ControlInputParameter
  {
  public:
    AWS_BACKUP_API ControlInputParameter();
    AWS_BACKUP_API ControlInputParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API ControlInputParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a parameter, for example, <code>BackupPlanFrequency</code>.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }

    /**
     * <p>The name of a parameter, for example, <code>BackupPlanFrequency</code>.</p>
     */
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }

    /**
     * <p>The name of a parameter, for example, <code>BackupPlanFrequency</code>.</p>
     */
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }

    /**
     * <p>The name of a parameter, for example, <code>BackupPlanFrequency</code>.</p>
     */
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }

    /**
     * <p>The name of a parameter, for example, <code>BackupPlanFrequency</code>.</p>
     */
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }

    /**
     * <p>The name of a parameter, for example, <code>BackupPlanFrequency</code>.</p>
     */
    inline ControlInputParameter& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}

    /**
     * <p>The name of a parameter, for example, <code>BackupPlanFrequency</code>.</p>
     */
    inline ControlInputParameter& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}

    /**
     * <p>The name of a parameter, for example, <code>BackupPlanFrequency</code>.</p>
     */
    inline ControlInputParameter& WithParameterName(const char* value) { SetParameterName(value); return *this;}


    /**
     * <p>The value of parameter, for example, <code>hourly</code>.</p>
     */
    inline const Aws::String& GetParameterValue() const{ return m_parameterValue; }

    /**
     * <p>The value of parameter, for example, <code>hourly</code>.</p>
     */
    inline bool ParameterValueHasBeenSet() const { return m_parameterValueHasBeenSet; }

    /**
     * <p>The value of parameter, for example, <code>hourly</code>.</p>
     */
    inline void SetParameterValue(const Aws::String& value) { m_parameterValueHasBeenSet = true; m_parameterValue = value; }

    /**
     * <p>The value of parameter, for example, <code>hourly</code>.</p>
     */
    inline void SetParameterValue(Aws::String&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = std::move(value); }

    /**
     * <p>The value of parameter, for example, <code>hourly</code>.</p>
     */
    inline void SetParameterValue(const char* value) { m_parameterValueHasBeenSet = true; m_parameterValue.assign(value); }

    /**
     * <p>The value of parameter, for example, <code>hourly</code>.</p>
     */
    inline ControlInputParameter& WithParameterValue(const Aws::String& value) { SetParameterValue(value); return *this;}

    /**
     * <p>The value of parameter, for example, <code>hourly</code>.</p>
     */
    inline ControlInputParameter& WithParameterValue(Aws::String&& value) { SetParameterValue(std::move(value)); return *this;}

    /**
     * <p>The value of parameter, for example, <code>hourly</code>.</p>
     */
    inline ControlInputParameter& WithParameterValue(const char* value) { SetParameterValue(value); return *this;}

  private:

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
