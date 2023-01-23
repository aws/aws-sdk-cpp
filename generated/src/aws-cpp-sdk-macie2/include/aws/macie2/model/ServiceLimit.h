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
    AWS_MACIE2_API ServiceLimit();
    AWS_MACIE2_API ServiceLimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ServiceLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether the account has met the quota that corresponds to the
     * metric specified by the UsageByAccount.type field in the response.</p>
     */
    inline bool GetIsServiceLimited() const{ return m_isServiceLimited; }

    /**
     * <p>Specifies whether the account has met the quota that corresponds to the
     * metric specified by the UsageByAccount.type field in the response.</p>
     */
    inline bool IsServiceLimitedHasBeenSet() const { return m_isServiceLimitedHasBeenSet; }

    /**
     * <p>Specifies whether the account has met the quota that corresponds to the
     * metric specified by the UsageByAccount.type field in the response.</p>
     */
    inline void SetIsServiceLimited(bool value) { m_isServiceLimitedHasBeenSet = true; m_isServiceLimited = value; }

    /**
     * <p>Specifies whether the account has met the quota that corresponds to the
     * metric specified by the UsageByAccount.type field in the response.</p>
     */
    inline ServiceLimit& WithIsServiceLimited(bool value) { SetIsServiceLimited(value); return *this;}


    /**
     * <p>The unit of measurement for the value specified by the value field.</p>
     */
    inline const Unit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of measurement for the value specified by the value field.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of measurement for the value specified by the value field.</p>
     */
    inline void SetUnit(const Unit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of measurement for the value specified by the value field.</p>
     */
    inline void SetUnit(Unit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of measurement for the value specified by the value field.</p>
     */
    inline ServiceLimit& WithUnit(const Unit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of measurement for the value specified by the value field.</p>
     */
    inline ServiceLimit& WithUnit(Unit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>The value for the metric specified by the UsageByAccount.type field in the
     * response.</p>
     */
    inline long long GetValue() const{ return m_value; }

    /**
     * <p>The value for the metric specified by the UsageByAccount.type field in the
     * response.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for the metric specified by the UsageByAccount.type field in the
     * response.</p>
     */
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the metric specified by the UsageByAccount.type field in the
     * response.</p>
     */
    inline ServiceLimit& WithValue(long long value) { SetValue(value); return *this;}

  private:

    bool m_isServiceLimited;
    bool m_isServiceLimitedHasBeenSet = false;

    Unit m_unit;
    bool m_unitHasBeenSet = false;

    long long m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
