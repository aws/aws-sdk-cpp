/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/TimeBasedCollectionScheme.h>
#include <aws/iotfleetwise/model/ConditionBasedCollectionScheme.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Specifies what data to collect and how often or when to collect
   * it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CollectionScheme">AWS
   * API Reference</a></p>
   */
  class CollectionScheme
  {
  public:
    AWS_IOTFLEETWISE_API CollectionScheme() = default;
    AWS_IOTFLEETWISE_API CollectionScheme(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API CollectionScheme& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about a collection scheme that uses a time period to decide how
     * often to collect data.</p>
     */
    inline const TimeBasedCollectionScheme& GetTimeBasedCollectionScheme() const { return m_timeBasedCollectionScheme; }
    inline bool TimeBasedCollectionSchemeHasBeenSet() const { return m_timeBasedCollectionSchemeHasBeenSet; }
    template<typename TimeBasedCollectionSchemeT = TimeBasedCollectionScheme>
    void SetTimeBasedCollectionScheme(TimeBasedCollectionSchemeT&& value) { m_timeBasedCollectionSchemeHasBeenSet = true; m_timeBasedCollectionScheme = std::forward<TimeBasedCollectionSchemeT>(value); }
    template<typename TimeBasedCollectionSchemeT = TimeBasedCollectionScheme>
    CollectionScheme& WithTimeBasedCollectionScheme(TimeBasedCollectionSchemeT&& value) { SetTimeBasedCollectionScheme(std::forward<TimeBasedCollectionSchemeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a collection scheme that uses a simple logical expression
     * to recognize what data to collect.</p>
     */
    inline const ConditionBasedCollectionScheme& GetConditionBasedCollectionScheme() const { return m_conditionBasedCollectionScheme; }
    inline bool ConditionBasedCollectionSchemeHasBeenSet() const { return m_conditionBasedCollectionSchemeHasBeenSet; }
    template<typename ConditionBasedCollectionSchemeT = ConditionBasedCollectionScheme>
    void SetConditionBasedCollectionScheme(ConditionBasedCollectionSchemeT&& value) { m_conditionBasedCollectionSchemeHasBeenSet = true; m_conditionBasedCollectionScheme = std::forward<ConditionBasedCollectionSchemeT>(value); }
    template<typename ConditionBasedCollectionSchemeT = ConditionBasedCollectionScheme>
    CollectionScheme& WithConditionBasedCollectionScheme(ConditionBasedCollectionSchemeT&& value) { SetConditionBasedCollectionScheme(std::forward<ConditionBasedCollectionSchemeT>(value)); return *this;}
    ///@}
  private:

    TimeBasedCollectionScheme m_timeBasedCollectionScheme;
    bool m_timeBasedCollectionSchemeHasBeenSet = false;

    ConditionBasedCollectionScheme m_conditionBasedCollectionScheme;
    bool m_conditionBasedCollectionSchemeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
