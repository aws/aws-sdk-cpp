/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Contains the specific price and frequency of a recurring charges for a
   * reserved Elasticsearch instance, or for a reserved Elasticsearch instance
   * offering.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/RecurringCharge">AWS
   * API Reference</a></p>
   */
  class RecurringCharge
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API RecurringCharge() = default;
    AWS_ELASTICSEARCHSERVICE_API RecurringCharge(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API RecurringCharge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The monetary amount of the recurring charge.</p>
     */
    inline double GetRecurringChargeAmount() const { return m_recurringChargeAmount; }
    inline bool RecurringChargeAmountHasBeenSet() const { return m_recurringChargeAmountHasBeenSet; }
    inline void SetRecurringChargeAmount(double value) { m_recurringChargeAmountHasBeenSet = true; m_recurringChargeAmount = value; }
    inline RecurringCharge& WithRecurringChargeAmount(double value) { SetRecurringChargeAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency of the recurring charge.</p>
     */
    inline const Aws::String& GetRecurringChargeFrequency() const { return m_recurringChargeFrequency; }
    inline bool RecurringChargeFrequencyHasBeenSet() const { return m_recurringChargeFrequencyHasBeenSet; }
    template<typename RecurringChargeFrequencyT = Aws::String>
    void SetRecurringChargeFrequency(RecurringChargeFrequencyT&& value) { m_recurringChargeFrequencyHasBeenSet = true; m_recurringChargeFrequency = std::forward<RecurringChargeFrequencyT>(value); }
    template<typename RecurringChargeFrequencyT = Aws::String>
    RecurringCharge& WithRecurringChargeFrequency(RecurringChargeFrequencyT&& value) { SetRecurringChargeFrequency(std::forward<RecurringChargeFrequencyT>(value)); return *this;}
    ///@}
  private:

    double m_recurringChargeAmount{0.0};
    bool m_recurringChargeAmountHasBeenSet = false;

    Aws::String m_recurringChargeFrequency;
    bool m_recurringChargeFrequencyHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
