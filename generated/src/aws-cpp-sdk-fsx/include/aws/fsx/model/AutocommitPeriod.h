/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/AutocommitPeriodType.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>Sets the autocommit period of files in an FSx for ONTAP SnapLock volume,
   * which determines how long the files must remain unmodified before they're
   * automatically transitioned to the write once, read many (WORM) state. </p>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/worm-state.html#worm-state-autocommit">Autocommit</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/AutocommitPeriod">AWS
   * API Reference</a></p>
   */
  class AutocommitPeriod
  {
  public:
    AWS_FSX_API AutocommitPeriod();
    AWS_FSX_API AutocommitPeriod(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API AutocommitPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the type of time for the autocommit period of a file in an FSx for
     * ONTAP SnapLock volume. Setting this value to <code>NONE</code> disables
     * autocommit. The default value is <code>NONE</code>. </p>
     */
    inline const AutocommitPeriodType& GetType() const{ return m_type; }

    /**
     * <p>Defines the type of time for the autocommit period of a file in an FSx for
     * ONTAP SnapLock volume. Setting this value to <code>NONE</code> disables
     * autocommit. The default value is <code>NONE</code>. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Defines the type of time for the autocommit period of a file in an FSx for
     * ONTAP SnapLock volume. Setting this value to <code>NONE</code> disables
     * autocommit. The default value is <code>NONE</code>. </p>
     */
    inline void SetType(const AutocommitPeriodType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Defines the type of time for the autocommit period of a file in an FSx for
     * ONTAP SnapLock volume. Setting this value to <code>NONE</code> disables
     * autocommit. The default value is <code>NONE</code>. </p>
     */
    inline void SetType(AutocommitPeriodType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Defines the type of time for the autocommit period of a file in an FSx for
     * ONTAP SnapLock volume. Setting this value to <code>NONE</code> disables
     * autocommit. The default value is <code>NONE</code>. </p>
     */
    inline AutocommitPeriod& WithType(const AutocommitPeriodType& value) { SetType(value); return *this;}

    /**
     * <p>Defines the type of time for the autocommit period of a file in an FSx for
     * ONTAP SnapLock volume. Setting this value to <code>NONE</code> disables
     * autocommit. The default value is <code>NONE</code>. </p>
     */
    inline AutocommitPeriod& WithType(AutocommitPeriodType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Defines the amount of time for the autocommit period of a file in an FSx for
     * ONTAP SnapLock volume. The following ranges are valid: </p> <ul> <li> <p>
     * <code>Minutes</code>: 5 - 65,535</p> </li> <li> <p> <code>Hours</code>: 1 -
     * 65,535</p> </li> <li> <p> <code>Days</code>: 1 - 3,650</p> </li> <li> <p>
     * <code>Months</code>: 1 - 120</p> </li> <li> <p> <code>Years</code>: 1 - 10</p>
     * </li> </ul>
     */
    inline int GetValue() const{ return m_value; }

    /**
     * <p>Defines the amount of time for the autocommit period of a file in an FSx for
     * ONTAP SnapLock volume. The following ranges are valid: </p> <ul> <li> <p>
     * <code>Minutes</code>: 5 - 65,535</p> </li> <li> <p> <code>Hours</code>: 1 -
     * 65,535</p> </li> <li> <p> <code>Days</code>: 1 - 3,650</p> </li> <li> <p>
     * <code>Months</code>: 1 - 120</p> </li> <li> <p> <code>Years</code>: 1 - 10</p>
     * </li> </ul>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Defines the amount of time for the autocommit period of a file in an FSx for
     * ONTAP SnapLock volume. The following ranges are valid: </p> <ul> <li> <p>
     * <code>Minutes</code>: 5 - 65,535</p> </li> <li> <p> <code>Hours</code>: 1 -
     * 65,535</p> </li> <li> <p> <code>Days</code>: 1 - 3,650</p> </li> <li> <p>
     * <code>Months</code>: 1 - 120</p> </li> <li> <p> <code>Years</code>: 1 - 10</p>
     * </li> </ul>
     */
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Defines the amount of time for the autocommit period of a file in an FSx for
     * ONTAP SnapLock volume. The following ranges are valid: </p> <ul> <li> <p>
     * <code>Minutes</code>: 5 - 65,535</p> </li> <li> <p> <code>Hours</code>: 1 -
     * 65,535</p> </li> <li> <p> <code>Days</code>: 1 - 3,650</p> </li> <li> <p>
     * <code>Months</code>: 1 - 120</p> </li> <li> <p> <code>Years</code>: 1 - 10</p>
     * </li> </ul>
     */
    inline AutocommitPeriod& WithValue(int value) { SetValue(value); return *this;}

  private:

    AutocommitPeriodType m_type;
    bool m_typeHasBeenSet = false;

    int m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
