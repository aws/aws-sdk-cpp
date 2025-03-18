/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies skewed values in a table. Skewed values are those that occur with
   * very high frequency.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SkewedInfo">AWS API
   * Reference</a></p>
   */
  class SkewedInfo
  {
  public:
    AWS_GLUE_API SkewedInfo() = default;
    AWS_GLUE_API SkewedInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SkewedInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of names of columns that contain skewed values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSkewedColumnNames() const { return m_skewedColumnNames; }
    inline bool SkewedColumnNamesHasBeenSet() const { return m_skewedColumnNamesHasBeenSet; }
    template<typename SkewedColumnNamesT = Aws::Vector<Aws::String>>
    void SetSkewedColumnNames(SkewedColumnNamesT&& value) { m_skewedColumnNamesHasBeenSet = true; m_skewedColumnNames = std::forward<SkewedColumnNamesT>(value); }
    template<typename SkewedColumnNamesT = Aws::Vector<Aws::String>>
    SkewedInfo& WithSkewedColumnNames(SkewedColumnNamesT&& value) { SetSkewedColumnNames(std::forward<SkewedColumnNamesT>(value)); return *this;}
    template<typename SkewedColumnNamesT = Aws::String>
    SkewedInfo& AddSkewedColumnNames(SkewedColumnNamesT&& value) { m_skewedColumnNamesHasBeenSet = true; m_skewedColumnNames.emplace_back(std::forward<SkewedColumnNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of values that appear so frequently as to be considered skewed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSkewedColumnValues() const { return m_skewedColumnValues; }
    inline bool SkewedColumnValuesHasBeenSet() const { return m_skewedColumnValuesHasBeenSet; }
    template<typename SkewedColumnValuesT = Aws::Vector<Aws::String>>
    void SetSkewedColumnValues(SkewedColumnValuesT&& value) { m_skewedColumnValuesHasBeenSet = true; m_skewedColumnValues = std::forward<SkewedColumnValuesT>(value); }
    template<typename SkewedColumnValuesT = Aws::Vector<Aws::String>>
    SkewedInfo& WithSkewedColumnValues(SkewedColumnValuesT&& value) { SetSkewedColumnValues(std::forward<SkewedColumnValuesT>(value)); return *this;}
    template<typename SkewedColumnValuesT = Aws::String>
    SkewedInfo& AddSkewedColumnValues(SkewedColumnValuesT&& value) { m_skewedColumnValuesHasBeenSet = true; m_skewedColumnValues.emplace_back(std::forward<SkewedColumnValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A mapping of skewed values to the columns that contain them.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSkewedColumnValueLocationMaps() const { return m_skewedColumnValueLocationMaps; }
    inline bool SkewedColumnValueLocationMapsHasBeenSet() const { return m_skewedColumnValueLocationMapsHasBeenSet; }
    template<typename SkewedColumnValueLocationMapsT = Aws::Map<Aws::String, Aws::String>>
    void SetSkewedColumnValueLocationMaps(SkewedColumnValueLocationMapsT&& value) { m_skewedColumnValueLocationMapsHasBeenSet = true; m_skewedColumnValueLocationMaps = std::forward<SkewedColumnValueLocationMapsT>(value); }
    template<typename SkewedColumnValueLocationMapsT = Aws::Map<Aws::String, Aws::String>>
    SkewedInfo& WithSkewedColumnValueLocationMaps(SkewedColumnValueLocationMapsT&& value) { SetSkewedColumnValueLocationMaps(std::forward<SkewedColumnValueLocationMapsT>(value)); return *this;}
    template<typename SkewedColumnValueLocationMapsKeyT = Aws::String, typename SkewedColumnValueLocationMapsValueT = Aws::String>
    SkewedInfo& AddSkewedColumnValueLocationMaps(SkewedColumnValueLocationMapsKeyT&& key, SkewedColumnValueLocationMapsValueT&& value) {
      m_skewedColumnValueLocationMapsHasBeenSet = true; m_skewedColumnValueLocationMaps.emplace(std::forward<SkewedColumnValueLocationMapsKeyT>(key), std::forward<SkewedColumnValueLocationMapsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<Aws::String> m_skewedColumnNames;
    bool m_skewedColumnNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_skewedColumnValues;
    bool m_skewedColumnValuesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_skewedColumnValueLocationMaps;
    bool m_skewedColumnValueLocationMapsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
