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
   * <p>A request to list the <a>SqlInjectionMatchSet</a> objects created by the
   * current AWS account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListSqlInjectionMatchSetsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API ListSqlInjectionMatchSetsRequest : public WAFRegionalRequest
  {
  public:
    ListSqlInjectionMatchSetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSqlInjectionMatchSets"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <a>SqlInjectionMatchSet</a> objects than the value of <code>Limit</code>, AWS
     * WAF returns a <code>NextMarker</code> value in the response that allows you to
     * list another group of <code>SqlInjectionMatchSets</code>. For the second and
     * subsequent <code>ListSqlInjectionMatchSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>SqlInjectionMatchSets</code>.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <a>SqlInjectionMatchSet</a> objects than the value of <code>Limit</code>, AWS
     * WAF returns a <code>NextMarker</code> value in the response that allows you to
     * list another group of <code>SqlInjectionMatchSets</code>. For the second and
     * subsequent <code>ListSqlInjectionMatchSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>SqlInjectionMatchSets</code>.</p>
     */
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <a>SqlInjectionMatchSet</a> objects than the value of <code>Limit</code>, AWS
     * WAF returns a <code>NextMarker</code> value in the response that allows you to
     * list another group of <code>SqlInjectionMatchSets</code>. For the second and
     * subsequent <code>ListSqlInjectionMatchSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>SqlInjectionMatchSets</code>.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <a>SqlInjectionMatchSet</a> objects than the value of <code>Limit</code>, AWS
     * WAF returns a <code>NextMarker</code> value in the response that allows you to
     * list another group of <code>SqlInjectionMatchSets</code>. For the second and
     * subsequent <code>ListSqlInjectionMatchSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>SqlInjectionMatchSets</code>.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <a>SqlInjectionMatchSet</a> objects than the value of <code>Limit</code>, AWS
     * WAF returns a <code>NextMarker</code> value in the response that allows you to
     * list another group of <code>SqlInjectionMatchSets</code>. For the second and
     * subsequent <code>ListSqlInjectionMatchSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>SqlInjectionMatchSets</code>.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <a>SqlInjectionMatchSet</a> objects than the value of <code>Limit</code>, AWS
     * WAF returns a <code>NextMarker</code> value in the response that allows you to
     * list another group of <code>SqlInjectionMatchSets</code>. For the second and
     * subsequent <code>ListSqlInjectionMatchSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>SqlInjectionMatchSets</code>.</p>
     */
    inline ListSqlInjectionMatchSetsRequest& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <a>SqlInjectionMatchSet</a> objects than the value of <code>Limit</code>, AWS
     * WAF returns a <code>NextMarker</code> value in the response that allows you to
     * list another group of <code>SqlInjectionMatchSets</code>. For the second and
     * subsequent <code>ListSqlInjectionMatchSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>SqlInjectionMatchSets</code>.</p>
     */
    inline ListSqlInjectionMatchSetsRequest& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <a>SqlInjectionMatchSet</a> objects than the value of <code>Limit</code>, AWS
     * WAF returns a <code>NextMarker</code> value in the response that allows you to
     * list another group of <code>SqlInjectionMatchSets</code>. For the second and
     * subsequent <code>ListSqlInjectionMatchSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>SqlInjectionMatchSets</code>.</p>
     */
    inline ListSqlInjectionMatchSetsRequest& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>Specifies the number of <a>SqlInjectionMatchSet</a> objects that you want AWS
     * WAF to return for this request. If you have more
     * <code>SqlInjectionMatchSet</code> objects than the number you specify for
     * <code>Limit</code>, the response includes a <code>NextMarker</code> value that
     * you can use to get another batch of <code>Rules</code>.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Specifies the number of <a>SqlInjectionMatchSet</a> objects that you want AWS
     * WAF to return for this request. If you have more
     * <code>SqlInjectionMatchSet</code> objects than the number you specify for
     * <code>Limit</code>, the response includes a <code>NextMarker</code> value that
     * you can use to get another batch of <code>Rules</code>.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>Specifies the number of <a>SqlInjectionMatchSet</a> objects that you want AWS
     * WAF to return for this request. If you have more
     * <code>SqlInjectionMatchSet</code> objects than the number you specify for
     * <code>Limit</code>, the response includes a <code>NextMarker</code> value that
     * you can use to get another batch of <code>Rules</code>.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Specifies the number of <a>SqlInjectionMatchSet</a> objects that you want AWS
     * WAF to return for this request. If you have more
     * <code>SqlInjectionMatchSet</code> objects than the number you specify for
     * <code>Limit</code>, the response includes a <code>NextMarker</code> value that
     * you can use to get another batch of <code>Rules</code>.</p>
     */
    inline ListSqlInjectionMatchSetsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
