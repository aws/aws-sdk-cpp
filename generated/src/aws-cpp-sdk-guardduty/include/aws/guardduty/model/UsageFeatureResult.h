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
    AWS_GUARDDUTY_API UsageFeatureResult();
    AWS_GUARDDUTY_API UsageFeatureResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API UsageFeatureResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The feature that generated the usage cost.</p>
     */
    inline const UsageFeature& GetFeature() const{ return m_feature; }

    /**
     * <p>The feature that generated the usage cost.</p>
     */
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }

    /**
     * <p>The feature that generated the usage cost.</p>
     */
    inline void SetFeature(const UsageFeature& value) { m_featureHasBeenSet = true; m_feature = value; }

    /**
     * <p>The feature that generated the usage cost.</p>
     */
    inline void SetFeature(UsageFeature&& value) { m_featureHasBeenSet = true; m_feature = std::move(value); }

    /**
     * <p>The feature that generated the usage cost.</p>
     */
    inline UsageFeatureResult& WithFeature(const UsageFeature& value) { SetFeature(value); return *this;}

    /**
     * <p>The feature that generated the usage cost.</p>
     */
    inline UsageFeatureResult& WithFeature(UsageFeature&& value) { SetFeature(std::move(value)); return *this;}


    
    inline const Total& GetTotal() const{ return m_total; }

    
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    
    inline void SetTotal(const Total& value) { m_totalHasBeenSet = true; m_total = value; }

    
    inline void SetTotal(Total&& value) { m_totalHasBeenSet = true; m_total = std::move(value); }

    
    inline UsageFeatureResult& WithTotal(const Total& value) { SetTotal(value); return *this;}

    
    inline UsageFeatureResult& WithTotal(Total&& value) { SetTotal(std::move(value)); return *this;}

  private:

    UsageFeature m_feature;
    bool m_featureHasBeenSet = false;

    Total m_total;
    bool m_totalHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
