/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ce/model/Coverage.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>A group of reservations that share a set of attributes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ReservationCoverageGroup">AWS
   * API Reference</a></p>
   */
  class ReservationCoverageGroup
  {
  public:
    AWS_COSTEXPLORER_API ReservationCoverageGroup() = default;
    AWS_COSTEXPLORER_API ReservationCoverageGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ReservationCoverageGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    ReservationCoverageGroup& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    ReservationCoverageGroup& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>How much instance usage this group of reservations covered.</p>
     */
    inline const Coverage& GetCoverage() const { return m_coverage; }
    inline bool CoverageHasBeenSet() const { return m_coverageHasBeenSet; }
    template<typename CoverageT = Coverage>
    void SetCoverage(CoverageT&& value) { m_coverageHasBeenSet = true; m_coverage = std::forward<CoverageT>(value); }
    template<typename CoverageT = Coverage>
    ReservationCoverageGroup& WithCoverage(CoverageT&& value) { SetCoverage(std::forward<CoverageT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Coverage m_coverage;
    bool m_coverageHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
