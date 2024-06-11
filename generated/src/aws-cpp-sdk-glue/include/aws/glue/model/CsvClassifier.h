﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/CsvHeaderOption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/CsvSerdeOption.h>
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
   * <p>A classifier for custom <code>CSV</code> content.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CsvClassifier">AWS
   * API Reference</a></p>
   */
  class CsvClassifier
  {
  public:
    AWS_GLUE_API CsvClassifier();
    AWS_GLUE_API CsvClassifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CsvClassifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the classifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CsvClassifier& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CsvClassifier& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CsvClassifier& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this classifier was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline CsvClassifier& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline CsvClassifier& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this classifier was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }
    inline CsvClassifier& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}
    inline CsvClassifier& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of this classifier.</p>
     */
    inline long long GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline CsvClassifier& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom symbol to denote what separates each column entry in the row.</p>
     */
    inline const Aws::String& GetDelimiter() const{ return m_delimiter; }
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
    inline void SetDelimiter(const Aws::String& value) { m_delimiterHasBeenSet = true; m_delimiter = value; }
    inline void SetDelimiter(Aws::String&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::move(value); }
    inline void SetDelimiter(const char* value) { m_delimiterHasBeenSet = true; m_delimiter.assign(value); }
    inline CsvClassifier& WithDelimiter(const Aws::String& value) { SetDelimiter(value); return *this;}
    inline CsvClassifier& WithDelimiter(Aws::String&& value) { SetDelimiter(std::move(value)); return *this;}
    inline CsvClassifier& WithDelimiter(const char* value) { SetDelimiter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom symbol to denote what combines content into a single column value.
     * It must be different from the column delimiter.</p>
     */
    inline const Aws::String& GetQuoteSymbol() const{ return m_quoteSymbol; }
    inline bool QuoteSymbolHasBeenSet() const { return m_quoteSymbolHasBeenSet; }
    inline void SetQuoteSymbol(const Aws::String& value) { m_quoteSymbolHasBeenSet = true; m_quoteSymbol = value; }
    inline void SetQuoteSymbol(Aws::String&& value) { m_quoteSymbolHasBeenSet = true; m_quoteSymbol = std::move(value); }
    inline void SetQuoteSymbol(const char* value) { m_quoteSymbolHasBeenSet = true; m_quoteSymbol.assign(value); }
    inline CsvClassifier& WithQuoteSymbol(const Aws::String& value) { SetQuoteSymbol(value); return *this;}
    inline CsvClassifier& WithQuoteSymbol(Aws::String&& value) { SetQuoteSymbol(std::move(value)); return *this;}
    inline CsvClassifier& WithQuoteSymbol(const char* value) { SetQuoteSymbol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the CSV file contains a header.</p>
     */
    inline const CsvHeaderOption& GetContainsHeader() const{ return m_containsHeader; }
    inline bool ContainsHeaderHasBeenSet() const { return m_containsHeaderHasBeenSet; }
    inline void SetContainsHeader(const CsvHeaderOption& value) { m_containsHeaderHasBeenSet = true; m_containsHeader = value; }
    inline void SetContainsHeader(CsvHeaderOption&& value) { m_containsHeaderHasBeenSet = true; m_containsHeader = std::move(value); }
    inline CsvClassifier& WithContainsHeader(const CsvHeaderOption& value) { SetContainsHeader(value); return *this;}
    inline CsvClassifier& WithContainsHeader(CsvHeaderOption&& value) { SetContainsHeader(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of strings representing column names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHeader() const{ return m_header; }
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }
    inline void SetHeader(const Aws::Vector<Aws::String>& value) { m_headerHasBeenSet = true; m_header = value; }
    inline void SetHeader(Aws::Vector<Aws::String>&& value) { m_headerHasBeenSet = true; m_header = std::move(value); }
    inline CsvClassifier& WithHeader(const Aws::Vector<Aws::String>& value) { SetHeader(value); return *this;}
    inline CsvClassifier& WithHeader(Aws::Vector<Aws::String>&& value) { SetHeader(std::move(value)); return *this;}
    inline CsvClassifier& AddHeader(const Aws::String& value) { m_headerHasBeenSet = true; m_header.push_back(value); return *this; }
    inline CsvClassifier& AddHeader(Aws::String&& value) { m_headerHasBeenSet = true; m_header.push_back(std::move(value)); return *this; }
    inline CsvClassifier& AddHeader(const char* value) { m_headerHasBeenSet = true; m_header.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies not to trim values before identifying the type of column values.
     * The default value is <code>true</code>.</p>
     */
    inline bool GetDisableValueTrimming() const{ return m_disableValueTrimming; }
    inline bool DisableValueTrimmingHasBeenSet() const { return m_disableValueTrimmingHasBeenSet; }
    inline void SetDisableValueTrimming(bool value) { m_disableValueTrimmingHasBeenSet = true; m_disableValueTrimming = value; }
    inline CsvClassifier& WithDisableValueTrimming(bool value) { SetDisableValueTrimming(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables the processing of files that contain only one column.</p>
     */
    inline bool GetAllowSingleColumn() const{ return m_allowSingleColumn; }
    inline bool AllowSingleColumnHasBeenSet() const { return m_allowSingleColumnHasBeenSet; }
    inline void SetAllowSingleColumn(bool value) { m_allowSingleColumnHasBeenSet = true; m_allowSingleColumn = value; }
    inline CsvClassifier& WithAllowSingleColumn(bool value) { SetAllowSingleColumn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables the custom datatype to be configured.</p>
     */
    inline bool GetCustomDatatypeConfigured() const{ return m_customDatatypeConfigured; }
    inline bool CustomDatatypeConfiguredHasBeenSet() const { return m_customDatatypeConfiguredHasBeenSet; }
    inline void SetCustomDatatypeConfigured(bool value) { m_customDatatypeConfiguredHasBeenSet = true; m_customDatatypeConfigured = value; }
    inline CsvClassifier& WithCustomDatatypeConfigured(bool value) { SetCustomDatatypeConfigured(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom datatypes including "BINARY", "BOOLEAN", "DATE", "DECIMAL",
     * "DOUBLE", "FLOAT", "INT", "LONG", "SHORT", "STRING", "TIMESTAMP".</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomDatatypes() const{ return m_customDatatypes; }
    inline bool CustomDatatypesHasBeenSet() const { return m_customDatatypesHasBeenSet; }
    inline void SetCustomDatatypes(const Aws::Vector<Aws::String>& value) { m_customDatatypesHasBeenSet = true; m_customDatatypes = value; }
    inline void SetCustomDatatypes(Aws::Vector<Aws::String>&& value) { m_customDatatypesHasBeenSet = true; m_customDatatypes = std::move(value); }
    inline CsvClassifier& WithCustomDatatypes(const Aws::Vector<Aws::String>& value) { SetCustomDatatypes(value); return *this;}
    inline CsvClassifier& WithCustomDatatypes(Aws::Vector<Aws::String>&& value) { SetCustomDatatypes(std::move(value)); return *this;}
    inline CsvClassifier& AddCustomDatatypes(const Aws::String& value) { m_customDatatypesHasBeenSet = true; m_customDatatypes.push_back(value); return *this; }
    inline CsvClassifier& AddCustomDatatypes(Aws::String&& value) { m_customDatatypesHasBeenSet = true; m_customDatatypes.push_back(std::move(value)); return *this; }
    inline CsvClassifier& AddCustomDatatypes(const char* value) { m_customDatatypesHasBeenSet = true; m_customDatatypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Sets the SerDe for processing CSV in the classifier, which will be applied in
     * the Data Catalog. Valid values are <code>OpenCSVSerDe</code>,
     * <code>LazySimpleSerDe</code>, and <code>None</code>. You can specify the
     * <code>None</code> value when you want the crawler to do the detection.</p>
     */
    inline const CsvSerdeOption& GetSerde() const{ return m_serde; }
    inline bool SerdeHasBeenSet() const { return m_serdeHasBeenSet; }
    inline void SetSerde(const CsvSerdeOption& value) { m_serdeHasBeenSet = true; m_serde = value; }
    inline void SetSerde(CsvSerdeOption&& value) { m_serdeHasBeenSet = true; m_serde = std::move(value); }
    inline CsvClassifier& WithSerde(const CsvSerdeOption& value) { SetSerde(value); return *this;}
    inline CsvClassifier& WithSerde(CsvSerdeOption&& value) { SetSerde(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    long long m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;

    Aws::String m_quoteSymbol;
    bool m_quoteSymbolHasBeenSet = false;

    CsvHeaderOption m_containsHeader;
    bool m_containsHeaderHasBeenSet = false;

    Aws::Vector<Aws::String> m_header;
    bool m_headerHasBeenSet = false;

    bool m_disableValueTrimming;
    bool m_disableValueTrimmingHasBeenSet = false;

    bool m_allowSingleColumn;
    bool m_allowSingleColumnHasBeenSet = false;

    bool m_customDatatypeConfigured;
    bool m_customDatatypeConfiguredHasBeenSet = false;

    Aws::Vector<Aws::String> m_customDatatypes;
    bool m_customDatatypesHasBeenSet = false;

    CsvSerdeOption m_serde;
    bool m_serdeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
