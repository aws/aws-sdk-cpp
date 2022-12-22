/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>A single regular expression. This is used in a
   * <a>RegexPatternSet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Regex">AWS API
   * Reference</a></p>
   */
  class Regex
  {
  public:
    AWS_WAFV2_API Regex();
    AWS_WAFV2_API Regex(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Regex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The string representing the regular expression.</p>
     */
    inline const Aws::String& GetRegexString() const{ return m_regexString; }

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline bool RegexStringHasBeenSet() const { return m_regexStringHasBeenSet; }

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline void SetRegexString(const Aws::String& value) { m_regexStringHasBeenSet = true; m_regexString = value; }

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline void SetRegexString(Aws::String&& value) { m_regexStringHasBeenSet = true; m_regexString = std::move(value); }

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline void SetRegexString(const char* value) { m_regexStringHasBeenSet = true; m_regexString.assign(value); }

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline Regex& WithRegexString(const Aws::String& value) { SetRegexString(value); return *this;}

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline Regex& WithRegexString(Aws::String&& value) { SetRegexString(std::move(value)); return *this;}

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline Regex& WithRegexString(const char* value) { SetRegexString(value); return *this;}

  private:

    Aws::String m_regexString;
    bool m_regexStringHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
