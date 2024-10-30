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
   * <p>Indicates the starting and ending index of the region in the text query that
   * match the found title. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/RegionHighlights">AWS
   * API Reference</a></p>
   */
  class RegionHighlights
  {
  public:
    AWS_GEOPLACES_API RegionHighlights();
    AWS_GEOPLACES_API RegionHighlights(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API RegionHighlights& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the starting and ending index of the region in the text query that
     * match the found title. </p>
     */
    inline const Aws::Vector<Highlight>& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::Vector<Highlight>& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::Vector<Highlight>&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline RegionHighlights& WithCode(const Aws::Vector<Highlight>& value) { SetCode(value); return *this;}
    inline RegionHighlights& WithCode(Aws::Vector<Highlight>&& value) { SetCode(std::move(value)); return *this;}
    inline RegionHighlights& AddCode(const Highlight& value) { m_codeHasBeenSet = true; m_code.push_back(value); return *this; }
    inline RegionHighlights& AddCode(Highlight&& value) { m_codeHasBeenSet = true; m_code.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the starting and ending index of the region name in the text query
     * that match the found title. </p>
     */
    inline const Aws::Vector<Highlight>& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::Vector<Highlight>& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::Vector<Highlight>&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline RegionHighlights& WithName(const Aws::Vector<Highlight>& value) { SetName(value); return *this;}
    inline RegionHighlights& WithName(Aws::Vector<Highlight>&& value) { SetName(std::move(value)); return *this;}
    inline RegionHighlights& AddName(const Highlight& value) { m_nameHasBeenSet = true; m_name.push_back(value); return *this; }
    inline RegionHighlights& AddName(Highlight&& value) { m_nameHasBeenSet = true; m_name.push_back(std::move(value)); return *this; }
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
