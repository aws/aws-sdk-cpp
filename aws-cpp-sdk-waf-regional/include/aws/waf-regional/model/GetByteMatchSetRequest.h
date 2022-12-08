/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class GetByteMatchSetRequest : public WAFRegionalRequest
  {
  public:
    AWS_WAFREGIONAL_API GetByteMatchSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetByteMatchSet"; }

    AWS_WAFREGIONAL_API Aws::String SerializePayload() const override;

    AWS_WAFREGIONAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>ByteMatchSetId</code> of the <a>ByteMatchSet</a> that you want to
     * get. <code>ByteMatchSetId</code> is returned by <a>CreateByteMatchSet</a> and by
     * <a>ListByteMatchSets</a>.</p>
     */
    inline const Aws::String& GetByteMatchSetId() const{ return m_byteMatchSetId; }

    /**
     * <p>The <code>ByteMatchSetId</code> of the <a>ByteMatchSet</a> that you want to
     * get. <code>ByteMatchSetId</code> is returned by <a>CreateByteMatchSet</a> and by
     * <a>ListByteMatchSets</a>.</p>
     */
    inline bool ByteMatchSetIdHasBeenSet() const { return m_byteMatchSetIdHasBeenSet; }

    /**
     * <p>The <code>ByteMatchSetId</code> of the <a>ByteMatchSet</a> that you want to
     * get. <code>ByteMatchSetId</code> is returned by <a>CreateByteMatchSet</a> and by
     * <a>ListByteMatchSets</a>.</p>
     */
    inline void SetByteMatchSetId(const Aws::String& value) { m_byteMatchSetIdHasBeenSet = true; m_byteMatchSetId = value; }

    /**
     * <p>The <code>ByteMatchSetId</code> of the <a>ByteMatchSet</a> that you want to
     * get. <code>ByteMatchSetId</code> is returned by <a>CreateByteMatchSet</a> and by
     * <a>ListByteMatchSets</a>.</p>
     */
    inline void SetByteMatchSetId(Aws::String&& value) { m_byteMatchSetIdHasBeenSet = true; m_byteMatchSetId = std::move(value); }

    /**
     * <p>The <code>ByteMatchSetId</code> of the <a>ByteMatchSet</a> that you want to
     * get. <code>ByteMatchSetId</code> is returned by <a>CreateByteMatchSet</a> and by
     * <a>ListByteMatchSets</a>.</p>
     */
    inline void SetByteMatchSetId(const char* value) { m_byteMatchSetIdHasBeenSet = true; m_byteMatchSetId.assign(value); }

    /**
     * <p>The <code>ByteMatchSetId</code> of the <a>ByteMatchSet</a> that you want to
     * get. <code>ByteMatchSetId</code> is returned by <a>CreateByteMatchSet</a> and by
     * <a>ListByteMatchSets</a>.</p>
     */
    inline GetByteMatchSetRequest& WithByteMatchSetId(const Aws::String& value) { SetByteMatchSetId(value); return *this;}

    /**
     * <p>The <code>ByteMatchSetId</code> of the <a>ByteMatchSet</a> that you want to
     * get. <code>ByteMatchSetId</code> is returned by <a>CreateByteMatchSet</a> and by
     * <a>ListByteMatchSets</a>.</p>
     */
    inline GetByteMatchSetRequest& WithByteMatchSetId(Aws::String&& value) { SetByteMatchSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>ByteMatchSetId</code> of the <a>ByteMatchSet</a> that you want to
     * get. <code>ByteMatchSetId</code> is returned by <a>CreateByteMatchSet</a> and by
     * <a>ListByteMatchSets</a>.</p>
     */
    inline GetByteMatchSetRequest& WithByteMatchSetId(const char* value) { SetByteMatchSetId(value); return *this;}

  private:

    Aws::String m_byteMatchSetId;
    bool m_byteMatchSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
