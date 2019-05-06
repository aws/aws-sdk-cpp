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
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class AWS_WAF_API GetByteMatchSetRequest : public WAFRequest
  {
  public:
    GetByteMatchSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetByteMatchSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    bool m_byteMatchSetIdHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
