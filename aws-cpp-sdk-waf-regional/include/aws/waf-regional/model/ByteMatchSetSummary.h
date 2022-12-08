/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
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
namespace WAFRegional
{
namespace Model
{

  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>Returned by
   * <a>ListByteMatchSets</a>. Each <code>ByteMatchSetSummary</code> object includes
   * the <code>Name</code> and <code>ByteMatchSetId</code> for one
   * <a>ByteMatchSet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ByteMatchSetSummary">AWS
   * API Reference</a></p>
   */
  class ByteMatchSetSummary
  {
  public:
    AWS_WAFREGIONAL_API ByteMatchSetSummary();
    AWS_WAFREGIONAL_API ByteMatchSetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API ByteMatchSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_byteMatchSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
