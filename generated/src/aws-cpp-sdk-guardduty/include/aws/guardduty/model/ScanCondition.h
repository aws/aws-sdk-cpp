/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/ScanConditionPair.h>
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
   * <p>Contains information about the condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ScanCondition">AWS
   * API Reference</a></p>
   */
  class ScanCondition
  {
  public:
    AWS_GUARDDUTY_API ScanCondition() = default;
    AWS_GUARDDUTY_API ScanCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ScanCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents an <i>mapEqual</i> <b/> condition to be applied to a single field
     * when triggering for malware scan.</p>
     */
    inline const Aws::Vector<ScanConditionPair>& GetMapEquals() const { return m_mapEquals; }
    inline bool MapEqualsHasBeenSet() const { return m_mapEqualsHasBeenSet; }
    template<typename MapEqualsT = Aws::Vector<ScanConditionPair>>
    void SetMapEquals(MapEqualsT&& value) { m_mapEqualsHasBeenSet = true; m_mapEquals = std::forward<MapEqualsT>(value); }
    template<typename MapEqualsT = Aws::Vector<ScanConditionPair>>
    ScanCondition& WithMapEquals(MapEqualsT&& value) { SetMapEquals(std::forward<MapEqualsT>(value)); return *this;}
    template<typename MapEqualsT = ScanConditionPair>
    ScanCondition& AddMapEquals(MapEqualsT&& value) { m_mapEqualsHasBeenSet = true; m_mapEquals.emplace_back(std::forward<MapEqualsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ScanConditionPair> m_mapEquals;
    bool m_mapEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
