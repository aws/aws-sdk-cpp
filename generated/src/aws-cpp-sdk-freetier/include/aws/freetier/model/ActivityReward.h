/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/freetier/model/MonetaryAmount.h>
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
namespace FreeTier
{
namespace Model
{

  /**
   * <p> The summary of the rewards granted as a result of activities completed.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/freetier-2023-09-07/ActivityReward">AWS
   * API Reference</a></p>
   */
  class ActivityReward
  {
  public:
    AWS_FREETIER_API ActivityReward() = default;
    AWS_FREETIER_API ActivityReward(Aws::Utils::Json::JsonView jsonValue);
    AWS_FREETIER_API ActivityReward& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FREETIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The credits gained by activity rewards. </p>
     */
    inline const MonetaryAmount& GetCredit() const { return m_credit; }
    inline bool CreditHasBeenSet() const { return m_creditHasBeenSet; }
    template<typename CreditT = MonetaryAmount>
    void SetCredit(CreditT&& value) { m_creditHasBeenSet = true; m_credit = std::forward<CreditT>(value); }
    template<typename CreditT = MonetaryAmount>
    ActivityReward& WithCredit(CreditT&& value) { SetCredit(std::forward<CreditT>(value)); return *this;}
    ///@}
  private:

    MonetaryAmount m_credit;
    bool m_creditHasBeenSet = false;
  };

} // namespace Model
} // namespace FreeTier
} // namespace Aws
