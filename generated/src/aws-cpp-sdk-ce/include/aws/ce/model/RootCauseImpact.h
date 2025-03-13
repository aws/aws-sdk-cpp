/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>

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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The dollar value of the root cause.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/RootCauseImpact">AWS
   * API Reference</a></p>
   */
  class RootCauseImpact
  {
  public:
    AWS_COSTEXPLORER_API RootCauseImpact() = default;
    AWS_COSTEXPLORER_API RootCauseImpact(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API RootCauseImpact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dollar amount that this root cause contributed to the anomaly's
     * TotalImpact.</p>
     */
    inline double GetContribution() const { return m_contribution; }
    inline bool ContributionHasBeenSet() const { return m_contributionHasBeenSet; }
    inline void SetContribution(double value) { m_contributionHasBeenSet = true; m_contribution = value; }
    inline RootCauseImpact& WithContribution(double value) { SetContribution(value); return *this;}
    ///@}
  private:

    double m_contribution{0.0};
    bool m_contributionHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
