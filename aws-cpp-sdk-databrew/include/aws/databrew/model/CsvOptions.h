/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Options that define how DataBrew will read a Csv file when creating a dataset
   * from that file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CsvOptions">AWS
   * API Reference</a></p>
   */
  class AWS_GLUEDATABREW_API CsvOptions
  {
  public:
    CsvOptions();
    CsvOptions(Aws::Utils::Json::JsonView jsonValue);
    CsvOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A single character that specifies the delimiter being used in the Csv
     * file.</p>
     */
    inline const Aws::String& GetDelimiter() const{ return m_delimiter; }

    /**
     * <p>A single character that specifies the delimiter being used in the Csv
     * file.</p>
     */
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }

    /**
     * <p>A single character that specifies the delimiter being used in the Csv
     * file.</p>
     */
    inline void SetDelimiter(const Aws::String& value) { m_delimiterHasBeenSet = true; m_delimiter = value; }

    /**
     * <p>A single character that specifies the delimiter being used in the Csv
     * file.</p>
     */
    inline void SetDelimiter(Aws::String&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::move(value); }

    /**
     * <p>A single character that specifies the delimiter being used in the Csv
     * file.</p>
     */
    inline void SetDelimiter(const char* value) { m_delimiterHasBeenSet = true; m_delimiter.assign(value); }

    /**
     * <p>A single character that specifies the delimiter being used in the Csv
     * file.</p>
     */
    inline CsvOptions& WithDelimiter(const Aws::String& value) { SetDelimiter(value); return *this;}

    /**
     * <p>A single character that specifies the delimiter being used in the Csv
     * file.</p>
     */
    inline CsvOptions& WithDelimiter(Aws::String&& value) { SetDelimiter(std::move(value)); return *this;}

    /**
     * <p>A single character that specifies the delimiter being used in the Csv
     * file.</p>
     */
    inline CsvOptions& WithDelimiter(const char* value) { SetDelimiter(value); return *this;}

  private:

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
