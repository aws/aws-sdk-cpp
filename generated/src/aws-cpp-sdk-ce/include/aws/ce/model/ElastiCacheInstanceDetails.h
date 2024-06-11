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
   * <p>Details about the Amazon ElastiCache reservations that Amazon Web Services
   * recommends that you purchase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ElastiCacheInstanceDetails">AWS
   * API Reference</a></p>
   */
  class ElastiCacheInstanceDetails
  {
  public:
    AWS_COSTEXPLORER_API ElastiCacheInstanceDetails();
    AWS_COSTEXPLORER_API ElastiCacheInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ElastiCacheInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline const Aws::String& GetFamily() const{ return m_family; }
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }
    inline void SetFamily(const Aws::String& value) { m_familyHasBeenSet = true; m_family = value; }
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = std::move(value); }
    inline void SetFamily(const char* value) { m_familyHasBeenSet = true; m_family.assign(value); }
    inline ElastiCacheInstanceDetails& WithFamily(const Aws::String& value) { SetFamily(value); return *this;}
    inline ElastiCacheInstanceDetails& WithFamily(Aws::String&& value) { SetFamily(std::move(value)); return *this;}
    inline ElastiCacheInstanceDetails& WithFamily(const char* value) { SetFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of node that Amazon Web Services recommends.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }
    inline ElastiCacheInstanceDetails& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}
    inline ElastiCacheInstanceDetails& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}
    inline ElastiCacheInstanceDetails& WithNodeType(const char* value) { SetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the recommended reservation.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline ElastiCacheInstanceDetails& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline ElastiCacheInstanceDetails& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline ElastiCacheInstanceDetails& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the recommended reservation.</p>
     */
    inline const Aws::String& GetProductDescription() const{ return m_productDescription; }
    inline bool ProductDescriptionHasBeenSet() const { return m_productDescriptionHasBeenSet; }
    inline void SetProductDescription(const Aws::String& value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }
    inline void SetProductDescription(Aws::String&& value) { m_productDescriptionHasBeenSet = true; m_productDescription = std::move(value); }
    inline void SetProductDescription(const char* value) { m_productDescriptionHasBeenSet = true; m_productDescription.assign(value); }
    inline ElastiCacheInstanceDetails& WithProductDescription(const Aws::String& value) { SetProductDescription(value); return *this;}
    inline ElastiCacheInstanceDetails& WithProductDescription(Aws::String&& value) { SetProductDescription(std::move(value)); return *this;}
    inline ElastiCacheInstanceDetails& WithProductDescription(const char* value) { SetProductDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the recommendation is for a current generation
     * instance.</p>
     */
    inline bool GetCurrentGeneration() const{ return m_currentGeneration; }
    inline bool CurrentGenerationHasBeenSet() const { return m_currentGenerationHasBeenSet; }
    inline void SetCurrentGeneration(bool value) { m_currentGenerationHasBeenSet = true; m_currentGeneration = value; }
    inline ElastiCacheInstanceDetails& WithCurrentGeneration(bool value) { SetCurrentGeneration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the recommended reservation is size flexible.</p>
     */
    inline bool GetSizeFlexEligible() const{ return m_sizeFlexEligible; }
    inline bool SizeFlexEligibleHasBeenSet() const { return m_sizeFlexEligibleHasBeenSet; }
    inline void SetSizeFlexEligible(bool value) { m_sizeFlexEligibleHasBeenSet = true; m_sizeFlexEligible = value; }
    inline ElastiCacheInstanceDetails& WithSizeFlexEligible(bool value) { SetSizeFlexEligible(value); return *this;}
    ///@}
  private:

    Aws::String m_family;
    bool m_familyHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_productDescription;
    bool m_productDescriptionHasBeenSet = false;

    bool m_currentGeneration;
    bool m_currentGenerationHasBeenSet = false;

    bool m_sizeFlexEligible;
    bool m_sizeFlexEligibleHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
