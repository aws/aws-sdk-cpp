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
   * <p>Details about the Amazon OpenSearch Service reservations that Amazon Web
   * Services recommends that you purchase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ESInstanceDetails">AWS
   * API Reference</a></p>
   */
  class ESInstanceDetails
  {
  public:
    AWS_COSTEXPLORER_API ESInstanceDetails() = default;
    AWS_COSTEXPLORER_API ESInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ESInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The class of instance that Amazon Web Services recommends.</p>
     */
    inline const Aws::String& GetInstanceClass() const { return m_instanceClass; }
    inline bool InstanceClassHasBeenSet() const { return m_instanceClassHasBeenSet; }
    template<typename InstanceClassT = Aws::String>
    void SetInstanceClass(InstanceClassT&& value) { m_instanceClassHasBeenSet = true; m_instanceClass = std::forward<InstanceClassT>(value); }
    template<typename InstanceClassT = Aws::String>
    ESInstanceDetails& WithInstanceClass(InstanceClassT&& value) { SetInstanceClass(std::forward<InstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of instance that Amazon Web Services recommends.</p>
     */
    inline const Aws::String& GetInstanceSize() const { return m_instanceSize; }
    inline bool InstanceSizeHasBeenSet() const { return m_instanceSizeHasBeenSet; }
    template<typename InstanceSizeT = Aws::String>
    void SetInstanceSize(InstanceSizeT&& value) { m_instanceSizeHasBeenSet = true; m_instanceSize = std::forward<InstanceSizeT>(value); }
    template<typename InstanceSizeT = Aws::String>
    ESInstanceDetails& WithInstanceSize(InstanceSizeT&& value) { SetInstanceSize(std::forward<InstanceSizeT>(value)); return *this;}
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
    ESInstanceDetails& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the recommendation is for a current-generation
     * instance.</p>
     */
    inline bool GetCurrentGeneration() const { return m_currentGeneration; }
    inline bool CurrentGenerationHasBeenSet() const { return m_currentGenerationHasBeenSet; }
    inline void SetCurrentGeneration(bool value) { m_currentGenerationHasBeenSet = true; m_currentGeneration = value; }
    inline ESInstanceDetails& WithCurrentGeneration(bool value) { SetCurrentGeneration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the recommended reservation is size flexible.</p>
     */
    inline bool GetSizeFlexEligible() const { return m_sizeFlexEligible; }
    inline bool SizeFlexEligibleHasBeenSet() const { return m_sizeFlexEligibleHasBeenSet; }
    inline void SetSizeFlexEligible(bool value) { m_sizeFlexEligibleHasBeenSet = true; m_sizeFlexEligible = value; }
    inline ESInstanceDetails& WithSizeFlexEligible(bool value) { SetSizeFlexEligible(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceClass;
    bool m_instanceClassHasBeenSet = false;

    Aws::String m_instanceSize;
    bool m_instanceSizeHasBeenSet = false;

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
