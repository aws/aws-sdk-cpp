/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/honeycode/model/SourceDataColumnProperties.h>
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
namespace Honeycode
{
namespace Model
{

  /**
   * <p>An object that contains the options relating to the destination of the import
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/DestinationOptions">AWS
   * API Reference</a></p>
   */
  class DestinationOptions
  {
  public:
    AWS_HONEYCODE_API DestinationOptions();
    AWS_HONEYCODE_API DestinationOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API DestinationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A map of the column id to the import properties for each column.</p>
     */
    inline const Aws::Map<Aws::String, SourceDataColumnProperties>& GetColumnMap() const{ return m_columnMap; }

    /**
     * <p>A map of the column id to the import properties for each column.</p>
     */
    inline bool ColumnMapHasBeenSet() const { return m_columnMapHasBeenSet; }

    /**
     * <p>A map of the column id to the import properties for each column.</p>
     */
    inline void SetColumnMap(const Aws::Map<Aws::String, SourceDataColumnProperties>& value) { m_columnMapHasBeenSet = true; m_columnMap = value; }

    /**
     * <p>A map of the column id to the import properties for each column.</p>
     */
    inline void SetColumnMap(Aws::Map<Aws::String, SourceDataColumnProperties>&& value) { m_columnMapHasBeenSet = true; m_columnMap = std::move(value); }

    /**
     * <p>A map of the column id to the import properties for each column.</p>
     */
    inline DestinationOptions& WithColumnMap(const Aws::Map<Aws::String, SourceDataColumnProperties>& value) { SetColumnMap(value); return *this;}

    /**
     * <p>A map of the column id to the import properties for each column.</p>
     */
    inline DestinationOptions& WithColumnMap(Aws::Map<Aws::String, SourceDataColumnProperties>&& value) { SetColumnMap(std::move(value)); return *this;}

    /**
     * <p>A map of the column id to the import properties for each column.</p>
     */
    inline DestinationOptions& AddColumnMap(const Aws::String& key, const SourceDataColumnProperties& value) { m_columnMapHasBeenSet = true; m_columnMap.emplace(key, value); return *this; }

    /**
     * <p>A map of the column id to the import properties for each column.</p>
     */
    inline DestinationOptions& AddColumnMap(Aws::String&& key, const SourceDataColumnProperties& value) { m_columnMapHasBeenSet = true; m_columnMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of the column id to the import properties for each column.</p>
     */
    inline DestinationOptions& AddColumnMap(const Aws::String& key, SourceDataColumnProperties&& value) { m_columnMapHasBeenSet = true; m_columnMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the column id to the import properties for each column.</p>
     */
    inline DestinationOptions& AddColumnMap(Aws::String&& key, SourceDataColumnProperties&& value) { m_columnMapHasBeenSet = true; m_columnMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of the column id to the import properties for each column.</p>
     */
    inline DestinationOptions& AddColumnMap(const char* key, SourceDataColumnProperties&& value) { m_columnMapHasBeenSet = true; m_columnMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the column id to the import properties for each column.</p>
     */
    inline DestinationOptions& AddColumnMap(const char* key, const SourceDataColumnProperties& value) { m_columnMapHasBeenSet = true; m_columnMap.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, SourceDataColumnProperties> m_columnMap;
    bool m_columnMapHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
