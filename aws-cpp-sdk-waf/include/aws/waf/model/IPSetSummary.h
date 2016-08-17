/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAF
{
namespace Model
{

  /**
   * <p>Contains the identifier and the name of the <code>IPSet</code>.</p>
   */
  class AWS_WAF_API IPSetSummary
  {
  public:
    IPSetSummary();
    IPSetSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    IPSetSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The <code>IPSetId</code> for an <a>IPSet</a>. You can use
     * <code>IPSetId</code> in a <a>GetIPSet</a> request to get detailed information
     * about an <a>IPSet</a>.</p>
     */
    inline const Aws::String& GetIPSetId() const{ return m_iPSetId; }

    /**
     * <p>The <code>IPSetId</code> for an <a>IPSet</a>. You can use
     * <code>IPSetId</code> in a <a>GetIPSet</a> request to get detailed information
     * about an <a>IPSet</a>.</p>
     */
    inline void SetIPSetId(const Aws::String& value) { m_iPSetIdHasBeenSet = true; m_iPSetId = value; }

    /**
     * <p>The <code>IPSetId</code> for an <a>IPSet</a>. You can use
     * <code>IPSetId</code> in a <a>GetIPSet</a> request to get detailed information
     * about an <a>IPSet</a>.</p>
     */
    inline void SetIPSetId(Aws::String&& value) { m_iPSetIdHasBeenSet = true; m_iPSetId = value; }

    /**
     * <p>The <code>IPSetId</code> for an <a>IPSet</a>. You can use
     * <code>IPSetId</code> in a <a>GetIPSet</a> request to get detailed information
     * about an <a>IPSet</a>.</p>
     */
    inline void SetIPSetId(const char* value) { m_iPSetIdHasBeenSet = true; m_iPSetId.assign(value); }

    /**
     * <p>The <code>IPSetId</code> for an <a>IPSet</a>. You can use
     * <code>IPSetId</code> in a <a>GetIPSet</a> request to get detailed information
     * about an <a>IPSet</a>.</p>
     */
    inline IPSetSummary& WithIPSetId(const Aws::String& value) { SetIPSetId(value); return *this;}

    /**
     * <p>The <code>IPSetId</code> for an <a>IPSet</a>. You can use
     * <code>IPSetId</code> in a <a>GetIPSet</a> request to get detailed information
     * about an <a>IPSet</a>.</p>
     */
    inline IPSetSummary& WithIPSetId(Aws::String&& value) { SetIPSetId(value); return *this;}

    /**
     * <p>The <code>IPSetId</code> for an <a>IPSet</a>. You can use
     * <code>IPSetId</code> in a <a>GetIPSet</a> request to get detailed information
     * about an <a>IPSet</a>.</p>
     */
    inline IPSetSummary& WithIPSetId(const char* value) { SetIPSetId(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>IPSet</a>. You can't change the name
     * of an <code>IPSet</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name or description of the <a>IPSet</a>. You can't change the name
     * of an <code>IPSet</code> after you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description of the <a>IPSet</a>. You can't change the name
     * of an <code>IPSet</code> after you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description of the <a>IPSet</a>. You can't change the name
     * of an <code>IPSet</code> after you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name or description of the <a>IPSet</a>. You can't change the name
     * of an <code>IPSet</code> after you create it.</p>
     */
    inline IPSetSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>IPSet</a>. You can't change the name
     * of an <code>IPSet</code> after you create it.</p>
     */
    inline IPSetSummary& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>IPSet</a>. You can't change the name
     * of an <code>IPSet</code> after you create it.</p>
     */
    inline IPSetSummary& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_iPSetId;
    bool m_iPSetIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
