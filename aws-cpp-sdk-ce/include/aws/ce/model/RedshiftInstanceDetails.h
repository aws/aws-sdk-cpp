/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Details about the Amazon Redshift instances that AWS recommends that you
   * purchase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/RedshiftInstanceDetails">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API RedshiftInstanceDetails
  {
  public:
    RedshiftInstanceDetails();
    RedshiftInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    RedshiftInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline const Aws::String& GetFamily() const{ return m_family; }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline void SetFamily(const Aws::String& value) { m_familyHasBeenSet = true; m_family = value; }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = std::move(value); }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline void SetFamily(const char* value) { m_familyHasBeenSet = true; m_family.assign(value); }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline RedshiftInstanceDetails& WithFamily(const Aws::String& value) { SetFamily(value); return *this;}

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline RedshiftInstanceDetails& WithFamily(Aws::String&& value) { SetFamily(std::move(value)); return *this;}

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline RedshiftInstanceDetails& WithFamily(const char* value) { SetFamily(value); return *this;}


    /**
     * <p>The type of node that AWS recommends.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The type of node that AWS recommends.</p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The type of node that AWS recommends.</p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The type of node that AWS recommends.</p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The type of node that AWS recommends.</p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The type of node that AWS recommends.</p>
     */
    inline RedshiftInstanceDetails& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The type of node that AWS recommends.</p>
     */
    inline RedshiftInstanceDetails& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The type of node that AWS recommends.</p>
     */
    inline RedshiftInstanceDetails& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline RedshiftInstanceDetails& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline RedshiftInstanceDetails& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline RedshiftInstanceDetails& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>Whether the recommendation is for a current-generation instance.</p>
     */
    inline bool GetCurrentGeneration() const{ return m_currentGeneration; }

    /**
     * <p>Whether the recommendation is for a current-generation instance.</p>
     */
    inline bool CurrentGenerationHasBeenSet() const { return m_currentGenerationHasBeenSet; }

    /**
     * <p>Whether the recommendation is for a current-generation instance.</p>
     */
    inline void SetCurrentGeneration(bool value) { m_currentGenerationHasBeenSet = true; m_currentGeneration = value; }

    /**
     * <p>Whether the recommendation is for a current-generation instance.</p>
     */
    inline RedshiftInstanceDetails& WithCurrentGeneration(bool value) { SetCurrentGeneration(value); return *this;}


    /**
     * <p>Whether the recommended reservation is size flexible.</p>
     */
    inline bool GetSizeFlexEligible() const{ return m_sizeFlexEligible; }

    /**
     * <p>Whether the recommended reservation is size flexible.</p>
     */
    inline bool SizeFlexEligibleHasBeenSet() const { return m_sizeFlexEligibleHasBeenSet; }

    /**
     * <p>Whether the recommended reservation is size flexible.</p>
     */
    inline void SetSizeFlexEligible(bool value) { m_sizeFlexEligibleHasBeenSet = true; m_sizeFlexEligible = value; }

    /**
     * <p>Whether the recommended reservation is size flexible.</p>
     */
    inline RedshiftInstanceDetails& WithSizeFlexEligible(bool value) { SetSizeFlexEligible(value); return *this;}

  private:

    Aws::String m_family;
    bool m_familyHasBeenSet;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    bool m_currentGeneration;
    bool m_currentGenerationHasBeenSet;

    bool m_sizeFlexEligible;
    bool m_sizeFlexEligibleHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
