/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>The OpenX SerDe. Used by Firehose for deserializing data, which means
   * converting it from the JSON format in preparation for serializing it to the
   * Parquet or ORC format. This is one of two deserializers you can choose,
   * depending on which one offers the functionality you need. The other option is
   * the native Hive / HCatalog JsonSerDe.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/OpenXJsonSerDe">AWS
   * API Reference</a></p>
   */
  class OpenXJsonSerDe
  {
  public:
    AWS_FIREHOSE_API OpenXJsonSerDe() = default;
    AWS_FIREHOSE_API OpenXJsonSerDe(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API OpenXJsonSerDe& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When set to <code>true</code>, specifies that the names of the keys include
     * dots and that you want Firehose to replace them with underscores. This is useful
     * because Apache Hive does not allow dots in column names. For example, if the
     * JSON contains a key whose name is "a.b", you can define the column name to be
     * "a_b" when using this option.</p> <p>The default is <code>false</code>.</p>
     */
    inline bool GetConvertDotsInJsonKeysToUnderscores() const { return m_convertDotsInJsonKeysToUnderscores; }
    inline bool ConvertDotsInJsonKeysToUnderscoresHasBeenSet() const { return m_convertDotsInJsonKeysToUnderscoresHasBeenSet; }
    inline void SetConvertDotsInJsonKeysToUnderscores(bool value) { m_convertDotsInJsonKeysToUnderscoresHasBeenSet = true; m_convertDotsInJsonKeysToUnderscores = value; }
    inline OpenXJsonSerDe& WithConvertDotsInJsonKeysToUnderscores(bool value) { SetConvertDotsInJsonKeysToUnderscores(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, which is the default, Firehose converts JSON
     * keys to lowercase before deserializing them.</p>
     */
    inline bool GetCaseInsensitive() const { return m_caseInsensitive; }
    inline bool CaseInsensitiveHasBeenSet() const { return m_caseInsensitiveHasBeenSet; }
    inline void SetCaseInsensitive(bool value) { m_caseInsensitiveHasBeenSet = true; m_caseInsensitive = value; }
    inline OpenXJsonSerDe& WithCaseInsensitive(bool value) { SetCaseInsensitive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maps column names to JSON keys that aren't identical to the column names.
     * This is useful when the JSON contains keys that are Hive keywords. For example,
     * <code>timestamp</code> is a Hive keyword. If you have a JSON key named
     * <code>timestamp</code>, set this parameter to <code>{"ts": "timestamp"}</code>
     * to map this key to a column named <code>ts</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetColumnToJsonKeyMappings() const { return m_columnToJsonKeyMappings; }
    inline bool ColumnToJsonKeyMappingsHasBeenSet() const { return m_columnToJsonKeyMappingsHasBeenSet; }
    template<typename ColumnToJsonKeyMappingsT = Aws::Map<Aws::String, Aws::String>>
    void SetColumnToJsonKeyMappings(ColumnToJsonKeyMappingsT&& value) { m_columnToJsonKeyMappingsHasBeenSet = true; m_columnToJsonKeyMappings = std::forward<ColumnToJsonKeyMappingsT>(value); }
    template<typename ColumnToJsonKeyMappingsT = Aws::Map<Aws::String, Aws::String>>
    OpenXJsonSerDe& WithColumnToJsonKeyMappings(ColumnToJsonKeyMappingsT&& value) { SetColumnToJsonKeyMappings(std::forward<ColumnToJsonKeyMappingsT>(value)); return *this;}
    template<typename ColumnToJsonKeyMappingsKeyT = Aws::String, typename ColumnToJsonKeyMappingsValueT = Aws::String>
    OpenXJsonSerDe& AddColumnToJsonKeyMappings(ColumnToJsonKeyMappingsKeyT&& key, ColumnToJsonKeyMappingsValueT&& value) {
      m_columnToJsonKeyMappingsHasBeenSet = true; m_columnToJsonKeyMappings.emplace(std::forward<ColumnToJsonKeyMappingsKeyT>(key), std::forward<ColumnToJsonKeyMappingsValueT>(value)); return *this;
    }
    ///@}
  private:

    bool m_convertDotsInJsonKeysToUnderscores{false};
    bool m_convertDotsInJsonKeysToUnderscoresHasBeenSet = false;

    bool m_caseInsensitive{false};
    bool m_caseInsensitiveHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_columnToJsonKeyMappings;
    bool m_columnToJsonKeyMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
