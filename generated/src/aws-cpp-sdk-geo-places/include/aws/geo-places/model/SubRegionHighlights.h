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
   * <p>Indicates the starting and ending index of the sub-region in the text query
   * that match the found title. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/SubRegionHighlights">AWS
   * API Reference</a></p>
   */
  class SubRegionHighlights
  {
  public:
    AWS_GEOPLACES_API SubRegionHighlights() = default;
    AWS_GEOPLACES_API SubRegionHighlights(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API SubRegionHighlights& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the starting and ending index of the sub-region in the text query
     * that match the found title. </p>
     */
    inline const Aws::Vector<Highlight>& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::Vector<Highlight>>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::Vector<Highlight>>
    SubRegionHighlights& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    template<typename CodeT = Highlight>
    SubRegionHighlights& AddCode(CodeT&& value) { m_codeHasBeenSet = true; m_code.emplace_back(std::forward<CodeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the starting and ending index of the name in the text query that
     * match the found title. </p>
     */
    inline const Aws::Vector<Highlight>& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::Vector<Highlight>>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::Vector<Highlight>>
    SubRegionHighlights& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    template<typename NameT = Highlight>
    SubRegionHighlights& AddName(NameT&& value) { m_nameHasBeenSet = true; m_name.emplace_back(std::forward<NameT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Highlight> m_code;
    bool m_codeHasBeenSet = false;

    Aws::Vector<Highlight> m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
