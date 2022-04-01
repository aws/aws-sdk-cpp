﻿/**
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
  class AWS_WAFREGIONAL_API ListRegexPatternSetsRequest : public WAFRegionalRequest
  {
  public:
    ListRegexPatternSetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRegexPatternSets"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <code>RegexPatternSet</code> objects than the value of <code>Limit</code>, AWS
     * WAF returns a <code>NextMarker</code> value in the response that allows you to
     * list another group of <code>RegexPatternSet</code> objects. For the second and
     * subsequent <code>ListRegexPatternSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>RegexPatternSet</code> objects.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <code>RegexPatternSet</code> objects than the value of <code>Limit</code>, AWS
     * WAF returns a <code>NextMarker</code> value in the response that allows you to
     * list another group of <code>RegexPatternSet</code> objects. For the second and
     * subsequent <code>ListRegexPatternSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>RegexPatternSet</code> objects.</p>
     */
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <code>RegexPatternSet</code> objects than the value of <code>Limit</code>, AWS
     * WAF returns a <code>NextMarker</code> value in the response that allows you to
     * list another group of <code>RegexPatternSet</code> objects. For the second and
     * subsequent <code>ListRegexPatternSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>RegexPatternSet</code> objects.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <code>RegexPatternSet</code> objects than the value of <code>Limit</code>, AWS
     * WAF returns a <code>NextMarker</code> value in the response that allows you to
     * list another group of <code>RegexPatternSet</code> objects. For the second and
     * subsequent <code>ListRegexPatternSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>RegexPatternSet</code> objects.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <code>RegexPatternSet</code> objects than the value of <code>Limit</code>, AWS
     * WAF returns a <code>NextMarker</code> value in the response that allows you to
     * list another group of <code>RegexPatternSet</code> objects. For the second and
     * subsequent <code>ListRegexPatternSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>RegexPatternSet</code> objects.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <code>RegexPatternSet</code> objects than the value of <code>Limit</code>, AWS
     * WAF returns a <code>NextMarker</code> value in the response that allows you to
     * list another group of <code>RegexPatternSet</code> objects. For the second and
     * subsequent <code>ListRegexPatternSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>RegexPatternSet</code> objects.</p>
     */
    inline ListRegexPatternSetsRequest& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <code>RegexPatternSet</code> objects than the value of <code>Limit</code>, AWS
     * WAF returns a <code>NextMarker</code> value in the response that allows you to
     * list another group of <code>RegexPatternSet</code> objects. For the second and
     * subsequent <code>ListRegexPatternSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>RegexPatternSet</code> objects.</p>
     */
    inline ListRegexPatternSetsRequest& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <code>RegexPatternSet</code> objects than the value of <code>Limit</code>, AWS
     * WAF returns a <code>NextMarker</code> value in the response that allows you to
     * list another group of <code>RegexPatternSet</code> objects. For the second and
     * subsequent <code>ListRegexPatternSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>RegexPatternSet</code> objects.</p>
     */
    inline ListRegexPatternSetsRequest& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>Specifies the number of <code>RegexPatternSet</code> objects that you want
     * AWS WAF to return for this request. If you have more
     * <code>RegexPatternSet</code> objects than the number you specify for
     * <code>Limit</code>, the response includes a <code>NextMarker</code> value that
     * you can use to get another batch of <code>RegexPatternSet</code> objects.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Specifies the number of <code>RegexPatternSet</code> objects that you want
     * AWS WAF to return for this request. If you have more
     * <code>RegexPatternSet</code> objects than the number you specify for
     * <code>Limit</code>, the response includes a <code>NextMarker</code> value that
     * you can use to get another batch of <code>RegexPatternSet</code> objects.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>Specifies the number of <code>RegexPatternSet</code> objects that you want
     * AWS WAF to return for this request. If you have more
     * <code>RegexPatternSet</code> objects than the number you specify for
     * <code>Limit</code>, the response includes a <code>NextMarker</code> value that
     * you can use to get another batch of <code>RegexPatternSet</code> objects.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Specifies the number of <code>RegexPatternSet</code> objects that you want
     * AWS WAF to return for this request. If you have more
     * <code>RegexPatternSet</code> objects than the number you specify for
     * <code>Limit</code>, the response includes a <code>NextMarker</code> value that
     * you can use to get another batch of <code>RegexPatternSet</code> objects.</p>
     */
    inline ListRegexPatternSetsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
