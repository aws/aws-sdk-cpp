/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/CsvHeaderOption.h>
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
  class AWS_GLUE_API CsvClassifier
  {
  public:
    CsvClassifier();
    CsvClassifier(Aws::Utils::Json::JsonView jsonValue);
    CsvClassifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the classifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the classifier.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the classifier.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the classifier.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the classifier.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the classifier.</p>
     */
    inline CsvClassifier& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the classifier.</p>
     */
    inline CsvClassifier& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the classifier.</p>
     */
    inline CsvClassifier& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The time that this classifier was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that this classifier was registered.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time that this classifier was registered.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time that this classifier was registered.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time that this classifier was registered.</p>
     */
    inline CsvClassifier& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that this classifier was registered.</p>
     */
    inline CsvClassifier& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time that this classifier was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The time that this classifier was last updated.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>The time that this classifier was last updated.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The time that this classifier was last updated.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The time that this classifier was last updated.</p>
     */
    inline CsvClassifier& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The time that this classifier was last updated.</p>
     */
    inline CsvClassifier& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>The version of this classifier.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The version of this classifier.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of this classifier.</p>
     */
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of this classifier.</p>
     */
    inline CsvClassifier& WithVersion(long long value) { SetVersion(value); return *this;}


    /**
     * <p>A custom symbol to denote what separates each column entry in the row.</p>
     */
    inline const Aws::String& GetDelimiter() const{ return m_delimiter; }

    /**
     * <p>A custom symbol to denote what separates each column entry in the row.</p>
     */
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }

    /**
     * <p>A custom symbol to denote what separates each column entry in the row.</p>
     */
    inline void SetDelimiter(const Aws::String& value) { m_delimiterHasBeenSet = true; m_delimiter = value; }

    /**
     * <p>A custom symbol to denote what separates each column entry in the row.</p>
     */
    inline void SetDelimiter(Aws::String&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::move(value); }

    /**
     * <p>A custom symbol to denote what separates each column entry in the row.</p>
     */
    inline void SetDelimiter(const char* value) { m_delimiterHasBeenSet = true; m_delimiter.assign(value); }

    /**
     * <p>A custom symbol to denote what separates each column entry in the row.</p>
     */
    inline CsvClassifier& WithDelimiter(const Aws::String& value) { SetDelimiter(value); return *this;}

    /**
     * <p>A custom symbol to denote what separates each column entry in the row.</p>
     */
    inline CsvClassifier& WithDelimiter(Aws::String&& value) { SetDelimiter(std::move(value)); return *this;}

    /**
     * <p>A custom symbol to denote what separates each column entry in the row.</p>
     */
    inline CsvClassifier& WithDelimiter(const char* value) { SetDelimiter(value); return *this;}


    /**
     * <p>A custom symbol to denote what combines content into a single column value.
     * It must be different from the column delimiter.</p>
     */
    inline const Aws::String& GetQuoteSymbol() const{ return m_quoteSymbol; }

    /**
     * <p>A custom symbol to denote what combines content into a single column value.
     * It must be different from the column delimiter.</p>
     */
    inline bool QuoteSymbolHasBeenSet() const { return m_quoteSymbolHasBeenSet; }

    /**
     * <p>A custom symbol to denote what combines content into a single column value.
     * It must be different from the column delimiter.</p>
     */
    inline void SetQuoteSymbol(const Aws::String& value) { m_quoteSymbolHasBeenSet = true; m_quoteSymbol = value; }

    /**
     * <p>A custom symbol to denote what combines content into a single column value.
     * It must be different from the column delimiter.</p>
     */
    inline void SetQuoteSymbol(Aws::String&& value) { m_quoteSymbolHasBeenSet = true; m_quoteSymbol = std::move(value); }

    /**
     * <p>A custom symbol to denote what combines content into a single column value.
     * It must be different from the column delimiter.</p>
     */
    inline void SetQuoteSymbol(const char* value) { m_quoteSymbolHasBeenSet = true; m_quoteSymbol.assign(value); }

    /**
     * <p>A custom symbol to denote what combines content into a single column value.
     * It must be different from the column delimiter.</p>
     */
    inline CsvClassifier& WithQuoteSymbol(const Aws::String& value) { SetQuoteSymbol(value); return *this;}

    /**
     * <p>A custom symbol to denote what combines content into a single column value.
     * It must be different from the column delimiter.</p>
     */
    inline CsvClassifier& WithQuoteSymbol(Aws::String&& value) { SetQuoteSymbol(std::move(value)); return *this;}

    /**
     * <p>A custom symbol to denote what combines content into a single column value.
     * It must be different from the column delimiter.</p>
     */
    inline CsvClassifier& WithQuoteSymbol(const char* value) { SetQuoteSymbol(value); return *this;}


    /**
     * <p>Indicates whether the CSV file contains a header.</p>
     */
    inline const CsvHeaderOption& GetContainsHeader() const{ return m_containsHeader; }

    /**
     * <p>Indicates whether the CSV file contains a header.</p>
     */
    inline bool ContainsHeaderHasBeenSet() const { return m_containsHeaderHasBeenSet; }

    /**
     * <p>Indicates whether the CSV file contains a header.</p>
     */
    inline void SetContainsHeader(const CsvHeaderOption& value) { m_containsHeaderHasBeenSet = true; m_containsHeader = value; }

    /**
     * <p>Indicates whether the CSV file contains a header.</p>
     */
    inline void SetContainsHeader(CsvHeaderOption&& value) { m_containsHeaderHasBeenSet = true; m_containsHeader = std::move(value); }

    /**
     * <p>Indicates whether the CSV file contains a header.</p>
     */
    inline CsvClassifier& WithContainsHeader(const CsvHeaderOption& value) { SetContainsHeader(value); return *this;}

    /**
     * <p>Indicates whether the CSV file contains a header.</p>
     */
    inline CsvClassifier& WithContainsHeader(CsvHeaderOption&& value) { SetContainsHeader(std::move(value)); return *this;}


    /**
     * <p>A list of strings representing column names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHeader() const{ return m_header; }

    /**
     * <p>A list of strings representing column names.</p>
     */
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }

    /**
     * <p>A list of strings representing column names.</p>
     */
    inline void SetHeader(const Aws::Vector<Aws::String>& value) { m_headerHasBeenSet = true; m_header = value; }

    /**
     * <p>A list of strings representing column names.</p>
     */
    inline void SetHeader(Aws::Vector<Aws::String>&& value) { m_headerHasBeenSet = true; m_header = std::move(value); }

    /**
     * <p>A list of strings representing column names.</p>
     */
    inline CsvClassifier& WithHeader(const Aws::Vector<Aws::String>& value) { SetHeader(value); return *this;}

    /**
     * <p>A list of strings representing column names.</p>
     */
    inline CsvClassifier& WithHeader(Aws::Vector<Aws::String>&& value) { SetHeader(std::move(value)); return *this;}

    /**
     * <p>A list of strings representing column names.</p>
     */
    inline CsvClassifier& AddHeader(const Aws::String& value) { m_headerHasBeenSet = true; m_header.push_back(value); return *this; }

    /**
     * <p>A list of strings representing column names.</p>
     */
    inline CsvClassifier& AddHeader(Aws::String&& value) { m_headerHasBeenSet = true; m_header.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of strings representing column names.</p>
     */
    inline CsvClassifier& AddHeader(const char* value) { m_headerHasBeenSet = true; m_header.push_back(value); return *this; }


    /**
     * <p>Specifies not to trim values before identifying the type of column values.
     * The default value is <code>true</code>.</p>
     */
    inline bool GetDisableValueTrimming() const{ return m_disableValueTrimming; }

    /**
     * <p>Specifies not to trim values before identifying the type of column values.
     * The default value is <code>true</code>.</p>
     */
    inline bool DisableValueTrimmingHasBeenSet() const { return m_disableValueTrimmingHasBeenSet; }

    /**
     * <p>Specifies not to trim values before identifying the type of column values.
     * The default value is <code>true</code>.</p>
     */
    inline void SetDisableValueTrimming(bool value) { m_disableValueTrimmingHasBeenSet = true; m_disableValueTrimming = value; }

    /**
     * <p>Specifies not to trim values before identifying the type of column values.
     * The default value is <code>true</code>.</p>
     */
    inline CsvClassifier& WithDisableValueTrimming(bool value) { SetDisableValueTrimming(value); return *this;}


    /**
     * <p>Enables the processing of files that contain only one column.</p>
     */
    inline bool GetAllowSingleColumn() const{ return m_allowSingleColumn; }

    /**
     * <p>Enables the processing of files that contain only one column.</p>
     */
    inline bool AllowSingleColumnHasBeenSet() const { return m_allowSingleColumnHasBeenSet; }

    /**
     * <p>Enables the processing of files that contain only one column.</p>
     */
    inline void SetAllowSingleColumn(bool value) { m_allowSingleColumnHasBeenSet = true; m_allowSingleColumn = value; }

    /**
     * <p>Enables the processing of files that contain only one column.</p>
     */
    inline CsvClassifier& WithAllowSingleColumn(bool value) { SetAllowSingleColumn(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet;

    long long m_version;
    bool m_versionHasBeenSet;

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet;

    Aws::String m_quoteSymbol;
    bool m_quoteSymbolHasBeenSet;

    CsvHeaderOption m_containsHeader;
    bool m_containsHeaderHasBeenSet;

    Aws::Vector<Aws::String> m_header;
    bool m_headerHasBeenSet;

    bool m_disableValueTrimming;
    bool m_disableValueTrimmingHasBeenSet;

    bool m_allowSingleColumn;
    bool m_allowSingleColumnHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
