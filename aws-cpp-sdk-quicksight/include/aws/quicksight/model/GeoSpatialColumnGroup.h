/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/GeoSpatialCountryCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Geospatial column group that denotes a hierarchy.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeoSpatialColumnGroup">AWS
   * API Reference</a></p>
   */
  class GeoSpatialColumnGroup
  {
  public:
    AWS_QUICKSIGHT_API GeoSpatialColumnGroup();
    AWS_QUICKSIGHT_API GeoSpatialColumnGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeoSpatialColumnGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A display name for the hierarchy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A display name for the hierarchy.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A display name for the hierarchy.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A display name for the hierarchy.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A display name for the hierarchy.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A display name for the hierarchy.</p>
     */
    inline GeoSpatialColumnGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A display name for the hierarchy.</p>
     */
    inline GeoSpatialColumnGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A display name for the hierarchy.</p>
     */
    inline GeoSpatialColumnGroup& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Country code.</p>
     */
    inline const GeoSpatialCountryCode& GetCountryCode() const{ return m_countryCode; }

    /**
     * <p>Country code.</p>
     */
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }

    /**
     * <p>Country code.</p>
     */
    inline void SetCountryCode(const GeoSpatialCountryCode& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }

    /**
     * <p>Country code.</p>
     */
    inline void SetCountryCode(GeoSpatialCountryCode&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }

    /**
     * <p>Country code.</p>
     */
    inline GeoSpatialColumnGroup& WithCountryCode(const GeoSpatialCountryCode& value) { SetCountryCode(value); return *this;}

    /**
     * <p>Country code.</p>
     */
    inline GeoSpatialColumnGroup& WithCountryCode(GeoSpatialCountryCode&& value) { SetCountryCode(std::move(value)); return *this;}


    /**
     * <p>Columns in this hierarchy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumns() const{ return m_columns; }

    /**
     * <p>Columns in this hierarchy.</p>
     */
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }

    /**
     * <p>Columns in this hierarchy.</p>
     */
    inline void SetColumns(const Aws::Vector<Aws::String>& value) { m_columnsHasBeenSet = true; m_columns = value; }

    /**
     * <p>Columns in this hierarchy.</p>
     */
    inline void SetColumns(Aws::Vector<Aws::String>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }

    /**
     * <p>Columns in this hierarchy.</p>
     */
    inline GeoSpatialColumnGroup& WithColumns(const Aws::Vector<Aws::String>& value) { SetColumns(value); return *this;}

    /**
     * <p>Columns in this hierarchy.</p>
     */
    inline GeoSpatialColumnGroup& WithColumns(Aws::Vector<Aws::String>&& value) { SetColumns(std::move(value)); return *this;}

    /**
     * <p>Columns in this hierarchy.</p>
     */
    inline GeoSpatialColumnGroup& AddColumns(const Aws::String& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }

    /**
     * <p>Columns in this hierarchy.</p>
     */
    inline GeoSpatialColumnGroup& AddColumns(Aws::String&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }

    /**
     * <p>Columns in this hierarchy.</p>
     */
    inline GeoSpatialColumnGroup& AddColumns(const char* value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    GeoSpatialCountryCode m_countryCode;
    bool m_countryCodeHasBeenSet = false;

    Aws::Vector<Aws::String> m_columns;
    bool m_columnsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
