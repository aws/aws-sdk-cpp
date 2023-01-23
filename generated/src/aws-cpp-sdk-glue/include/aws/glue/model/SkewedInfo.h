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
    AWS_GLUE_API SkewedInfo();
    AWS_GLUE_API SkewedInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SkewedInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of names of columns that contain skewed values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSkewedColumnNames() const{ return m_skewedColumnNames; }

    /**
     * <p>A list of names of columns that contain skewed values.</p>
     */
    inline bool SkewedColumnNamesHasBeenSet() const { return m_skewedColumnNamesHasBeenSet; }

    /**
     * <p>A list of names of columns that contain skewed values.</p>
     */
    inline void SetSkewedColumnNames(const Aws::Vector<Aws::String>& value) { m_skewedColumnNamesHasBeenSet = true; m_skewedColumnNames = value; }

    /**
     * <p>A list of names of columns that contain skewed values.</p>
     */
    inline void SetSkewedColumnNames(Aws::Vector<Aws::String>&& value) { m_skewedColumnNamesHasBeenSet = true; m_skewedColumnNames = std::move(value); }

    /**
     * <p>A list of names of columns that contain skewed values.</p>
     */
    inline SkewedInfo& WithSkewedColumnNames(const Aws::Vector<Aws::String>& value) { SetSkewedColumnNames(value); return *this;}

    /**
     * <p>A list of names of columns that contain skewed values.</p>
     */
    inline SkewedInfo& WithSkewedColumnNames(Aws::Vector<Aws::String>&& value) { SetSkewedColumnNames(std::move(value)); return *this;}

    /**
     * <p>A list of names of columns that contain skewed values.</p>
     */
    inline SkewedInfo& AddSkewedColumnNames(const Aws::String& value) { m_skewedColumnNamesHasBeenSet = true; m_skewedColumnNames.push_back(value); return *this; }

    /**
     * <p>A list of names of columns that contain skewed values.</p>
     */
    inline SkewedInfo& AddSkewedColumnNames(Aws::String&& value) { m_skewedColumnNamesHasBeenSet = true; m_skewedColumnNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of names of columns that contain skewed values.</p>
     */
    inline SkewedInfo& AddSkewedColumnNames(const char* value) { m_skewedColumnNamesHasBeenSet = true; m_skewedColumnNames.push_back(value); return *this; }


    /**
     * <p>A list of values that appear so frequently as to be considered skewed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSkewedColumnValues() const{ return m_skewedColumnValues; }

    /**
     * <p>A list of values that appear so frequently as to be considered skewed.</p>
     */
    inline bool SkewedColumnValuesHasBeenSet() const { return m_skewedColumnValuesHasBeenSet; }

    /**
     * <p>A list of values that appear so frequently as to be considered skewed.</p>
     */
    inline void SetSkewedColumnValues(const Aws::Vector<Aws::String>& value) { m_skewedColumnValuesHasBeenSet = true; m_skewedColumnValues = value; }

    /**
     * <p>A list of values that appear so frequently as to be considered skewed.</p>
     */
    inline void SetSkewedColumnValues(Aws::Vector<Aws::String>&& value) { m_skewedColumnValuesHasBeenSet = true; m_skewedColumnValues = std::move(value); }

    /**
     * <p>A list of values that appear so frequently as to be considered skewed.</p>
     */
    inline SkewedInfo& WithSkewedColumnValues(const Aws::Vector<Aws::String>& value) { SetSkewedColumnValues(value); return *this;}

    /**
     * <p>A list of values that appear so frequently as to be considered skewed.</p>
     */
    inline SkewedInfo& WithSkewedColumnValues(Aws::Vector<Aws::String>&& value) { SetSkewedColumnValues(std::move(value)); return *this;}

    /**
     * <p>A list of values that appear so frequently as to be considered skewed.</p>
     */
    inline SkewedInfo& AddSkewedColumnValues(const Aws::String& value) { m_skewedColumnValuesHasBeenSet = true; m_skewedColumnValues.push_back(value); return *this; }

    /**
     * <p>A list of values that appear so frequently as to be considered skewed.</p>
     */
    inline SkewedInfo& AddSkewedColumnValues(Aws::String&& value) { m_skewedColumnValuesHasBeenSet = true; m_skewedColumnValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of values that appear so frequently as to be considered skewed.</p>
     */
    inline SkewedInfo& AddSkewedColumnValues(const char* value) { m_skewedColumnValuesHasBeenSet = true; m_skewedColumnValues.push_back(value); return *this; }


    /**
     * <p>A mapping of skewed values to the columns that contain them.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSkewedColumnValueLocationMaps() const{ return m_skewedColumnValueLocationMaps; }

    /**
     * <p>A mapping of skewed values to the columns that contain them.</p>
     */
    inline bool SkewedColumnValueLocationMapsHasBeenSet() const { return m_skewedColumnValueLocationMapsHasBeenSet; }

    /**
     * <p>A mapping of skewed values to the columns that contain them.</p>
     */
    inline void SetSkewedColumnValueLocationMaps(const Aws::Map<Aws::String, Aws::String>& value) { m_skewedColumnValueLocationMapsHasBeenSet = true; m_skewedColumnValueLocationMaps = value; }

    /**
     * <p>A mapping of skewed values to the columns that contain them.</p>
     */
    inline void SetSkewedColumnValueLocationMaps(Aws::Map<Aws::String, Aws::String>&& value) { m_skewedColumnValueLocationMapsHasBeenSet = true; m_skewedColumnValueLocationMaps = std::move(value); }

    /**
     * <p>A mapping of skewed values to the columns that contain them.</p>
     */
    inline SkewedInfo& WithSkewedColumnValueLocationMaps(const Aws::Map<Aws::String, Aws::String>& value) { SetSkewedColumnValueLocationMaps(value); return *this;}

    /**
     * <p>A mapping of skewed values to the columns that contain them.</p>
     */
    inline SkewedInfo& WithSkewedColumnValueLocationMaps(Aws::Map<Aws::String, Aws::String>&& value) { SetSkewedColumnValueLocationMaps(std::move(value)); return *this;}

    /**
     * <p>A mapping of skewed values to the columns that contain them.</p>
     */
    inline SkewedInfo& AddSkewedColumnValueLocationMaps(const Aws::String& key, const Aws::String& value) { m_skewedColumnValueLocationMapsHasBeenSet = true; m_skewedColumnValueLocationMaps.emplace(key, value); return *this; }

    /**
     * <p>A mapping of skewed values to the columns that contain them.</p>
     */
    inline SkewedInfo& AddSkewedColumnValueLocationMaps(Aws::String&& key, const Aws::String& value) { m_skewedColumnValueLocationMapsHasBeenSet = true; m_skewedColumnValueLocationMaps.emplace(std::move(key), value); return *this; }

    /**
     * <p>A mapping of skewed values to the columns that contain them.</p>
     */
    inline SkewedInfo& AddSkewedColumnValueLocationMaps(const Aws::String& key, Aws::String&& value) { m_skewedColumnValueLocationMapsHasBeenSet = true; m_skewedColumnValueLocationMaps.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping of skewed values to the columns that contain them.</p>
     */
    inline SkewedInfo& AddSkewedColumnValueLocationMaps(Aws::String&& key, Aws::String&& value) { m_skewedColumnValueLocationMapsHasBeenSet = true; m_skewedColumnValueLocationMaps.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A mapping of skewed values to the columns that contain them.</p>
     */
    inline SkewedInfo& AddSkewedColumnValueLocationMaps(const char* key, Aws::String&& value) { m_skewedColumnValueLocationMapsHasBeenSet = true; m_skewedColumnValueLocationMaps.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping of skewed values to the columns that contain them.</p>
     */
    inline SkewedInfo& AddSkewedColumnValueLocationMaps(Aws::String&& key, const char* value) { m_skewedColumnValueLocationMapsHasBeenSet = true; m_skewedColumnValueLocationMaps.emplace(std::move(key), value); return *this; }

    /**
     * <p>A mapping of skewed values to the columns that contain them.</p>
     */
    inline SkewedInfo& AddSkewedColumnValueLocationMaps(const char* key, const char* value) { m_skewedColumnValueLocationMapsHasBeenSet = true; m_skewedColumnValueLocationMaps.emplace(key, value); return *this; }

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
