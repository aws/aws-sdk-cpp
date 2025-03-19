/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ConsolidatedPolicyList.h>
#include <aws/cleanrooms/model/ConsolidatedPolicyAggregation.h>
#include <aws/cleanrooms/model/ConsolidatedPolicyCustom.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Controls on the analysis specifications that can be run on a configured
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConsolidatedPolicyV1">AWS
   * API Reference</a></p>
   */
  class ConsolidatedPolicyV1
  {
  public:
    AWS_CLEANROOMS_API ConsolidatedPolicyV1() = default;
    AWS_CLEANROOMS_API ConsolidatedPolicyV1(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConsolidatedPolicyV1& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The list of consolidated policies.</p>
     */
    inline const ConsolidatedPolicyList& GetList() const { return m_list; }
    inline bool ListHasBeenSet() const { return m_listHasBeenSet; }
    template<typename ListT = ConsolidatedPolicyList>
    void SetList(ListT&& value) { m_listHasBeenSet = true; m_list = std::forward<ListT>(value); }
    template<typename ListT = ConsolidatedPolicyList>
    ConsolidatedPolicyV1& WithList(ListT&& value) { SetList(std::forward<ListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The aggregation setting for the consolidated policy.</p>
     */
    inline const ConsolidatedPolicyAggregation& GetAggregation() const { return m_aggregation; }
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
    template<typename AggregationT = ConsolidatedPolicyAggregation>
    void SetAggregation(AggregationT&& value) { m_aggregationHasBeenSet = true; m_aggregation = std::forward<AggregationT>(value); }
    template<typename AggregationT = ConsolidatedPolicyAggregation>
    ConsolidatedPolicyV1& WithAggregation(AggregationT&& value) { SetAggregation(std::forward<AggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Custom policy</p>
     */
    inline const ConsolidatedPolicyCustom& GetCustom() const { return m_custom; }
    inline bool CustomHasBeenSet() const { return m_customHasBeenSet; }
    template<typename CustomT = ConsolidatedPolicyCustom>
    void SetCustom(CustomT&& value) { m_customHasBeenSet = true; m_custom = std::forward<CustomT>(value); }
    template<typename CustomT = ConsolidatedPolicyCustom>
    ConsolidatedPolicyV1& WithCustom(CustomT&& value) { SetCustom(std::forward<CustomT>(value)); return *this;}
    ///@}
  private:

    ConsolidatedPolicyList m_list;
    bool m_listHasBeenSet = false;

    ConsolidatedPolicyAggregation m_aggregation;
    bool m_aggregationHasBeenSet = false;

    ConsolidatedPolicyCustom m_custom;
    bool m_customHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
