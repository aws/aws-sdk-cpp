﻿/*
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
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   * <p>A request to create a <a>SqlInjectionMatchSet</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/CreateSqlInjectionMatchSetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_WAF_API CreateSqlInjectionMatchSetRequest : public WAFRequest
  {
  public:
    CreateSqlInjectionMatchSetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A friendly name or description for the <a>SqlInjectionMatchSet</a> that
     * you're creating. You can't change <code>Name</code> after you create the
     * <code>SqlInjectionMatchSet</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name or description for the <a>SqlInjectionMatchSet</a> that
     * you're creating. You can't change <code>Name</code> after you create the
     * <code>SqlInjectionMatchSet</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description for the <a>SqlInjectionMatchSet</a> that
     * you're creating. You can't change <code>Name</code> after you create the
     * <code>SqlInjectionMatchSet</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description for the <a>SqlInjectionMatchSet</a> that
     * you're creating. You can't change <code>Name</code> after you create the
     * <code>SqlInjectionMatchSet</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name or description for the <a>SqlInjectionMatchSet</a> that
     * you're creating. You can't change <code>Name</code> after you create the
     * <code>SqlInjectionMatchSet</code>.</p>
     */
    inline CreateSqlInjectionMatchSetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description for the <a>SqlInjectionMatchSet</a> that
     * you're creating. You can't change <code>Name</code> after you create the
     * <code>SqlInjectionMatchSet</code>.</p>
     */
    inline CreateSqlInjectionMatchSetRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description for the <a>SqlInjectionMatchSet</a> that
     * you're creating. You can't change <code>Name</code> after you create the
     * <code>SqlInjectionMatchSet</code>.</p>
     */
    inline CreateSqlInjectionMatchSetRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeTokenHasBeenSet = true; m_changeToken.assign(value); }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline CreateSqlInjectionMatchSetRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline CreateSqlInjectionMatchSetRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline CreateSqlInjectionMatchSetRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
