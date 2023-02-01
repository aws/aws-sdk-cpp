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
   * <p>Represents a set of options that define how DataBrew will write a
   * comma-separated value (CSV) file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CsvOutputOptions">AWS
   * API Reference</a></p>
   */
  class CsvOutputOptions
  {
  public:
    AWS_GLUEDATABREW_API CsvOutputOptions();
    AWS_GLUEDATABREW_API CsvOutputOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API CsvOutputOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A single character that specifies the delimiter used to create CSV job
     * output.</p>
     */
    inline const Aws::String& GetDelimiter() const{ return m_delimiter; }

    /**
     * <p>A single character that specifies the delimiter used to create CSV job
     * output.</p>
     */
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }

    /**
     * <p>A single character that specifies the delimiter used to create CSV job
     * output.</p>
     */
    inline void SetDelimiter(const Aws::String& value) { m_delimiterHasBeenSet = true; m_delimiter = value; }

    /**
     * <p>A single character that specifies the delimiter used to create CSV job
     * output.</p>
     */
    inline void SetDelimiter(Aws::String&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::move(value); }

    /**
     * <p>A single character that specifies the delimiter used to create CSV job
     * output.</p>
     */
    inline void SetDelimiter(const char* value) { m_delimiterHasBeenSet = true; m_delimiter.assign(value); }

    /**
     * <p>A single character that specifies the delimiter used to create CSV job
     * output.</p>
     */
    inline CsvOutputOptions& WithDelimiter(const Aws::String& value) { SetDelimiter(value); return *this;}

    /**
     * <p>A single character that specifies the delimiter used to create CSV job
     * output.</p>
     */
    inline CsvOutputOptions& WithDelimiter(Aws::String&& value) { SetDelimiter(std::move(value)); return *this;}

    /**
     * <p>A single character that specifies the delimiter used to create CSV job
     * output.</p>
     */
    inline CsvOutputOptions& WithDelimiter(const char* value) { SetDelimiter(value); return *this;}

  private:

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
