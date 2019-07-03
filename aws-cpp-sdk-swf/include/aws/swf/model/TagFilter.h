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
#include <aws/swf/SWF_EXPORTS.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Used to filter the workflow executions in visibility APIs based on a
   * tag.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/TagFilter">AWS API
   * Reference</a></p>
   */
  class AWS_SWF_API TagFilter
  {
  public:
    TagFilter();
    TagFilter(Aws::Utils::Json::JsonView jsonValue);
    TagFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the tag that must be associated with the execution for it to meet
     * the filter criteria.</p> <p>Tags may only contain unicode letters, digits,
     * whitespace, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline const Aws::String& GetTag() const{ return m_tag; }

    /**
     * <p> Specifies the tag that must be associated with the execution for it to meet
     * the filter criteria.</p> <p>Tags may only contain unicode letters, digits,
     * whitespace, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline bool TagHasBeenSet() const { return m_tagHasBeenSet; }

    /**
     * <p> Specifies the tag that must be associated with the execution for it to meet
     * the filter criteria.</p> <p>Tags may only contain unicode letters, digits,
     * whitespace, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline void SetTag(const Aws::String& value) { m_tagHasBeenSet = true; m_tag = value; }

    /**
     * <p> Specifies the tag that must be associated with the execution for it to meet
     * the filter criteria.</p> <p>Tags may only contain unicode letters, digits,
     * whitespace, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline void SetTag(Aws::String&& value) { m_tagHasBeenSet = true; m_tag = std::move(value); }

    /**
     * <p> Specifies the tag that must be associated with the execution for it to meet
     * the filter criteria.</p> <p>Tags may only contain unicode letters, digits,
     * whitespace, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline void SetTag(const char* value) { m_tagHasBeenSet = true; m_tag.assign(value); }

    /**
     * <p> Specifies the tag that must be associated with the execution for it to meet
     * the filter criteria.</p> <p>Tags may only contain unicode letters, digits,
     * whitespace, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline TagFilter& WithTag(const Aws::String& value) { SetTag(value); return *this;}

    /**
     * <p> Specifies the tag that must be associated with the execution for it to meet
     * the filter criteria.</p> <p>Tags may only contain unicode letters, digits,
     * whitespace, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline TagFilter& WithTag(Aws::String&& value) { SetTag(std::move(value)); return *this;}

    /**
     * <p> Specifies the tag that must be associated with the execution for it to meet
     * the filter criteria.</p> <p>Tags may only contain unicode letters, digits,
     * whitespace, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline TagFilter& WithTag(const char* value) { SetTag(value); return *this;}

  private:

    Aws::String m_tag;
    bool m_tagHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
