/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/Highlight.h>
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
namespace GeoPlaces
{
namespace Model
{

  /**
   * <p>Describes how the parts of the textQuery matched the input query by returning
   * the sections of the response which matched to textQuery terms.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/SuggestAddressHighlights">AWS
   * API Reference</a></p>
   */
  class SuggestAddressHighlights
  {
  public:
    AWS_GEOPLACES_API SuggestAddressHighlights();
    AWS_GEOPLACES_API SuggestAddressHighlights(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API SuggestAddressHighlights& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the starting and ending indexes of the places in the result which
     * were identified to match the textQuery. This result is useful for providing
     * emphasis to results where the user query directly matched to make selecting the
     * correct result from a list easier for an end user.</p>
     */
    inline const Aws::Vector<Highlight>& GetLabel() const{ return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    inline void SetLabel(const Aws::Vector<Highlight>& value) { m_labelHasBeenSet = true; m_label = value; }
    inline void SetLabel(Aws::Vector<Highlight>&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }
    inline SuggestAddressHighlights& WithLabel(const Aws::Vector<Highlight>& value) { SetLabel(value); return *this;}
    inline SuggestAddressHighlights& WithLabel(Aws::Vector<Highlight>&& value) { SetLabel(std::move(value)); return *this;}
    inline SuggestAddressHighlights& AddLabel(const Highlight& value) { m_labelHasBeenSet = true; m_label.push_back(value); return *this; }
    inline SuggestAddressHighlights& AddLabel(Highlight&& value) { m_labelHasBeenSet = true; m_label.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Highlight> m_label;
    bool m_labelHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
