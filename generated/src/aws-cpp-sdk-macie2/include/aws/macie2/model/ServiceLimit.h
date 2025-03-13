/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/Unit.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies a current quota for an Amazon Macie account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ServiceLimit">AWS
   * API Reference</a></p>
   */
  class ServiceLimit
  {
  public:
    AWS_MACIE2_API ServiceLimit() = default;
    AWS_MACIE2_API ServiceLimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ServiceLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether the account has met the quota that corresponds to the
     * metric specified by the UsageByAccount.type field in the response.</p>
     */
    inline bool GetIsServiceLimited() const { return m_isServiceLimited; }
    inline bool IsServiceLimitedHasBeenSet() const { return m_isServiceLimitedHasBeenSet; }
    inline void SetIsServiceLimited(bool value) { m_isServiceLimitedHasBeenSet = true; m_isServiceLimited = value; }
    inline ServiceLimit& WithIsServiceLimited(bool value) { SetIsServiceLimited(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of measurement for the value specified by the value field.</p>
     */
    inline Unit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(Unit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline ServiceLimit& WithUnit(Unit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the metric specified by the UsageByAccount.type field in the
     * response.</p>
     */
    inline long long GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }
    inline ServiceLimit& WithValue(long long value) { SetValue(value); return *this;}
    ///@}
  private:

    bool m_isServiceLimited{false};
    bool m_isServiceLimitedHasBeenSet = false;

    Unit m_unit{Unit::NOT_SET};
    bool m_unitHasBeenSet = false;

    long long m_value{0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
