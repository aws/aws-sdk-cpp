/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/FreeFormLayoutElement.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The free-form layout configuration of a section.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FreeFormSectionLayoutConfiguration">AWS
   * API Reference</a></p>
   */
  class FreeFormSectionLayoutConfiguration
  {
  public:
    AWS_QUICKSIGHT_API FreeFormSectionLayoutConfiguration();
    AWS_QUICKSIGHT_API FreeFormSectionLayoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FreeFormSectionLayoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The elements that are included in the free-form layout.</p>
     */
    inline const Aws::Vector<FreeFormLayoutElement>& GetElements() const{ return m_elements; }

    /**
     * <p>The elements that are included in the free-form layout.</p>
     */
    inline bool ElementsHasBeenSet() const { return m_elementsHasBeenSet; }

    /**
     * <p>The elements that are included in the free-form layout.</p>
     */
    inline void SetElements(const Aws::Vector<FreeFormLayoutElement>& value) { m_elementsHasBeenSet = true; m_elements = value; }

    /**
     * <p>The elements that are included in the free-form layout.</p>
     */
    inline void SetElements(Aws::Vector<FreeFormLayoutElement>&& value) { m_elementsHasBeenSet = true; m_elements = std::move(value); }

    /**
     * <p>The elements that are included in the free-form layout.</p>
     */
    inline FreeFormSectionLayoutConfiguration& WithElements(const Aws::Vector<FreeFormLayoutElement>& value) { SetElements(value); return *this;}

    /**
     * <p>The elements that are included in the free-form layout.</p>
     */
    inline FreeFormSectionLayoutConfiguration& WithElements(Aws::Vector<FreeFormLayoutElement>&& value) { SetElements(std::move(value)); return *this;}

    /**
     * <p>The elements that are included in the free-form layout.</p>
     */
    inline FreeFormSectionLayoutConfiguration& AddElements(const FreeFormLayoutElement& value) { m_elementsHasBeenSet = true; m_elements.push_back(value); return *this; }

    /**
     * <p>The elements that are included in the free-form layout.</p>
     */
    inline FreeFormSectionLayoutConfiguration& AddElements(FreeFormLayoutElement&& value) { m_elementsHasBeenSet = true; m_elements.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FreeFormLayoutElement> m_elements;
    bool m_elementsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
