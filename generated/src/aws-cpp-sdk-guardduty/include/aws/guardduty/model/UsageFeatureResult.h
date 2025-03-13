/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/UsageFeature.h>
#include <aws/guardduty/model/Total.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the result of the total usage based on the
   * feature.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UsageFeatureResult">AWS
   * API Reference</a></p>
   */
  class UsageFeatureResult
  {
  public:
    AWS_GUARDDUTY_API UsageFeatureResult() = default;
    AWS_GUARDDUTY_API UsageFeatureResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API UsageFeatureResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The feature that generated the usage cost.</p>
     */
    inline UsageFeature GetFeature() const { return m_feature; }
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
    inline void SetFeature(UsageFeature value) { m_featureHasBeenSet = true; m_feature = value; }
    inline UsageFeatureResult& WithFeature(UsageFeature value) { SetFeature(value); return *this;}
    ///@}

    ///@{
    
    inline const Total& GetTotal() const { return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    template<typename TotalT = Total>
    void SetTotal(TotalT&& value) { m_totalHasBeenSet = true; m_total = std::forward<TotalT>(value); }
    template<typename TotalT = Total>
    UsageFeatureResult& WithTotal(TotalT&& value) { SetTotal(std::forward<TotalT>(value)); return *this;}
    ///@}
  private:

    UsageFeature m_feature{UsageFeature::NOT_SET};
    bool m_featureHasBeenSet = false;

    Total m_total;
    bool m_totalHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
