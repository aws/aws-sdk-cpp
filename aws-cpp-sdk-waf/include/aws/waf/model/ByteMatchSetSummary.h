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
#include <aws/waf/WAF_EXPORTS.h>
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
namespace WAF
{
namespace Model
{

  /**
   * <p>Returned by <a>ListByteMatchSets</a>. Each <code>ByteMatchSetSummary</code>
   * object includes the <code>Name</code> and <code>ByteMatchSetId</code> for one
   * <a>ByteMatchSet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ByteMatchSetSummary">AWS
   * API Reference</a></p>
   */
  class AWS_WAF_API ByteMatchSetSummary
  {
  public:
    ByteMatchSetSummary();
    ByteMatchSetSummary(Aws::Utils::Json::JsonView jsonValue);
    ByteMatchSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>ByteMatchSetId</code> for a <code>ByteMatchSet</code>. You use
     * <code>ByteMatchSetId</code> to get information about a
     * <code>ByteMatchSet</code>, update a <code>ByteMatchSet</code>, remove a
     * <code>ByteMatchSet</code> from a <code>Rule</code>, and delete a
     * <code>ByteMatchSet</code> from AWS WAF.</p> <p> <code>ByteMatchSetId</code> is
     * returned by <a>CreateByteMatchSet</a> and by <a>ListByteMatchSets</a>.</p>
     */
    inline const Aws::String& GetByteMatchSetId() const{ return m_byteMatchSetId; }

    /**
     * <p>The <code>ByteMatchSetId</code> for a <code>ByteMatchSet</code>. You use
     * <code>ByteMatchSetId</code> to get information about a
     * <code>ByteMatchSet</code>, update a <code>ByteMatchSet</code>, remove a
     * <code>ByteMatchSet</code> from a <code>Rule</code>, and delete a
     * <code>ByteMatchSet</code> from AWS WAF.</p> <p> <code>ByteMatchSetId</code> is
     * returned by <a>CreateByteMatchSet</a> and by <a>ListByteMatchSets</a>.</p>
     */
    inline bool ByteMatchSetIdHasBeenSet() const { return m_byteMatchSetIdHasBeenSet; }

    /**
     * <p>The <code>ByteMatchSetId</code> for a <code>ByteMatchSet</code>. You use
     * <code>ByteMatchSetId</code> to get information about a
     * <code>ByteMatchSet</code>, update a <code>ByteMatchSet</code>, remove a
     * <code>ByteMatchSet</code> from a <code>Rule</code>, and delete a
     * <code>ByteMatchSet</code> from AWS WAF.</p> <p> <code>ByteMatchSetId</code> is
     * returned by <a>CreateByteMatchSet</a> and by <a>ListByteMatchSets</a>.</p>
     */
    inline void SetByteMatchSetId(const Aws::String& value) { m_byteMatchSetIdHasBeenSet = true; m_byteMatchSetId = value; }

    /**
     * <p>The <code>ByteMatchSetId</code> for a <code>ByteMatchSet</code>. You use
     * <code>ByteMatchSetId</code> to get information about a
     * <code>ByteMatchSet</code>, update a <code>ByteMatchSet</code>, remove a
     * <code>ByteMatchSet</code> from a <code>Rule</code>, and delete a
     * <code>ByteMatchSet</code> from AWS WAF.</p> <p> <code>ByteMatchSetId</code> is
     * returned by <a>CreateByteMatchSet</a> and by <a>ListByteMatchSets</a>.</p>
     */
    inline void SetByteMatchSetId(Aws::String&& value) { m_byteMatchSetIdHasBeenSet = true; m_byteMatchSetId = std::move(value); }

    /**
     * <p>The <code>ByteMatchSetId</code> for a <code>ByteMatchSet</code>. You use
     * <code>ByteMatchSetId</code> to get information about a
     * <code>ByteMatchSet</code>, update a <code>ByteMatchSet</code>, remove a
     * <code>ByteMatchSet</code> from a <code>Rule</code>, and delete a
     * <code>ByteMatchSet</code> from AWS WAF.</p> <p> <code>ByteMatchSetId</code> is
     * returned by <a>CreateByteMatchSet</a> and by <a>ListByteMatchSets</a>.</p>
     */
    inline void SetByteMatchSetId(const char* value) { m_byteMatchSetIdHasBeenSet = true; m_byteMatchSetId.assign(value); }

    /**
     * <p>The <code>ByteMatchSetId</code> for a <code>ByteMatchSet</code>. You use
     * <code>ByteMatchSetId</code> to get information about a
     * <code>ByteMatchSet</code>, update a <code>ByteMatchSet</code>, remove a
     * <code>ByteMatchSet</code> from a <code>Rule</code>, and delete a
     * <code>ByteMatchSet</code> from AWS WAF.</p> <p> <code>ByteMatchSetId</code> is
     * returned by <a>CreateByteMatchSet</a> and by <a>ListByteMatchSets</a>.</p>
     */
    inline ByteMatchSetSummary& WithByteMatchSetId(const Aws::String& value) { SetByteMatchSetId(value); return *this;}

    /**
     * <p>The <code>ByteMatchSetId</code> for a <code>ByteMatchSet</code>. You use
     * <code>ByteMatchSetId</code> to get information about a
     * <code>ByteMatchSet</code>, update a <code>ByteMatchSet</code>, remove a
     * <code>ByteMatchSet</code> from a <code>Rule</code>, and delete a
     * <code>ByteMatchSet</code> from AWS WAF.</p> <p> <code>ByteMatchSetId</code> is
     * returned by <a>CreateByteMatchSet</a> and by <a>ListByteMatchSets</a>.</p>
     */
    inline ByteMatchSetSummary& WithByteMatchSetId(Aws::String&& value) { SetByteMatchSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>ByteMatchSetId</code> for a <code>ByteMatchSet</code>. You use
     * <code>ByteMatchSetId</code> to get information about a
     * <code>ByteMatchSet</code>, update a <code>ByteMatchSet</code>, remove a
     * <code>ByteMatchSet</code> from a <code>Rule</code>, and delete a
     * <code>ByteMatchSet</code> from AWS WAF.</p> <p> <code>ByteMatchSetId</code> is
     * returned by <a>CreateByteMatchSet</a> and by <a>ListByteMatchSets</a>.</p>
     */
    inline ByteMatchSetSummary& WithByteMatchSetId(const char* value) { SetByteMatchSetId(value); return *this;}


    /**
     * <p>A friendly name or description of the <a>ByteMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>ByteMatchSet</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name or description of the <a>ByteMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>ByteMatchSet</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name or description of the <a>ByteMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>ByteMatchSet</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description of the <a>ByteMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>ByteMatchSet</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name or description of the <a>ByteMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>ByteMatchSet</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name or description of the <a>ByteMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>ByteMatchSet</code>.</p>
     */
    inline ByteMatchSetSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>ByteMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>ByteMatchSet</code>.</p>
     */
    inline ByteMatchSetSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description of the <a>ByteMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>ByteMatchSet</code>.</p>
     */
    inline ByteMatchSetSummary& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_byteMatchSetId;
    bool m_byteMatchSetIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
