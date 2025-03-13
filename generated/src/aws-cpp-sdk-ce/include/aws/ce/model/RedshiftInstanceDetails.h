/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
   * <p>Details about the Amazon Redshift reservations that Amazon Web Services
   * recommends that you purchase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/RedshiftInstanceDetails">AWS
   * API Reference</a></p>
   */
  class RedshiftInstanceDetails
  {
  public:
    AWS_COSTEXPLORER_API RedshiftInstanceDetails() = default;
    AWS_COSTEXPLORER_API RedshiftInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API RedshiftInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline const Aws::String& GetFamily() const { return m_family; }
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }
    template<typename FamilyT = Aws::String>
    void SetFamily(FamilyT&& value) { m_familyHasBeenSet = true; m_family = std::forward<FamilyT>(value); }
    template<typename FamilyT = Aws::String>
    RedshiftInstanceDetails& WithFamily(FamilyT&& value) { SetFamily(std::forward<FamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of node that Amazon Web Services recommends.</p>
     */
    inline const Aws::String& GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    template<typename NodeTypeT = Aws::String>
    void SetNodeType(NodeTypeT&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::forward<NodeTypeT>(value); }
    template<typename NodeTypeT = Aws::String>
    RedshiftInstanceDetails& WithNodeType(NodeTypeT&& value) { SetNodeType(std::forward<NodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the recommended reservation.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    RedshiftInstanceDetails& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the recommendation is for a current-generation
     * instance.</p>
     */
    inline bool GetCurrentGeneration() const { return m_currentGeneration; }
    inline bool CurrentGenerationHasBeenSet() const { return m_currentGenerationHasBeenSet; }
    inline void SetCurrentGeneration(bool value) { m_currentGenerationHasBeenSet = true; m_currentGeneration = value; }
    inline RedshiftInstanceDetails& WithCurrentGeneration(bool value) { SetCurrentGeneration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the recommended reservation is size flexible.</p>
     */
    inline bool GetSizeFlexEligible() const { return m_sizeFlexEligible; }
    inline bool SizeFlexEligibleHasBeenSet() const { return m_sizeFlexEligibleHasBeenSet; }
    inline void SetSizeFlexEligible(bool value) { m_sizeFlexEligibleHasBeenSet = true; m_sizeFlexEligible = value; }
    inline RedshiftInstanceDetails& WithSizeFlexEligible(bool value) { SetSizeFlexEligible(value); return *this;}
    ///@}
  private:

    Aws::String m_family;
    bool m_familyHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    bool m_currentGeneration{false};
    bool m_currentGenerationHasBeenSet = false;

    bool m_sizeFlexEligible{false};
    bool m_sizeFlexEligibleHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
