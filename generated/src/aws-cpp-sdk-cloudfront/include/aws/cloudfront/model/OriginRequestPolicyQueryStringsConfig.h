﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/OriginRequestPolicyQueryStringBehavior.h>
#include <aws/cloudfront/model/QueryStringNames.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>An object that determines whether any URL query strings in viewer requests
   * (and if so, which query strings) are included in requests that CloudFront sends
   * to the origin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginRequestPolicyQueryStringsConfig">AWS
   * API Reference</a></p>
   */
  class OriginRequestPolicyQueryStringsConfig
  {
  public:
    AWS_CLOUDFRONT_API OriginRequestPolicyQueryStringsConfig() = default;
    AWS_CLOUDFRONT_API OriginRequestPolicyQueryStringsConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginRequestPolicyQueryStringsConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Determines whether any URL query strings in viewer requests are included in
     * requests that CloudFront sends to the origin. Valid values are:</p> <ul> <li>
     * <p> <code>none</code> – No query strings in viewer requests are included in
     * requests that CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any query strings that are listed in a
     * <code>CachePolicy</code> <i>are</i> included in origin requests.</p> </li> <li>
     * <p> <code>whitelist</code> – Only the query strings in viewer requests that are
     * listed in the <code>QueryStringNames</code> type are included in requests that
     * CloudFront sends to the origin.</p> </li> <li> <p> <code>all</code> – All query
     * strings in viewer requests are included in requests that CloudFront sends to the
     * origin.</p> </li> <li> <p> <code>allExcept</code> – All query strings in viewer
     * requests are included in requests that CloudFront sends to the origin, <i>
     * <b>except</b> </i> for those listed in the <code>QueryStringNames</code> type,
     * which are not included.</p> </li> </ul>
     */
    inline OriginRequestPolicyQueryStringBehavior GetQueryStringBehavior() const { return m_queryStringBehavior; }
    inline bool QueryStringBehaviorHasBeenSet() const { return m_queryStringBehaviorHasBeenSet; }
    inline void SetQueryStringBehavior(OriginRequestPolicyQueryStringBehavior value) { m_queryStringBehaviorHasBeenSet = true; m_queryStringBehavior = value; }
    inline OriginRequestPolicyQueryStringsConfig& WithQueryStringBehavior(OriginRequestPolicyQueryStringBehavior value) { SetQueryStringBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the specific query strings in viewer requests that either <i>
     * <b>are</b> </i> or <i> <b>are not</b> </i> included in requests that CloudFront
     * sends to the origin. The behavior depends on whether the
     * <code>QueryStringBehavior</code> field in the
     * <code>OriginRequestPolicyQueryStringsConfig</code> type is set to
     * <code>whitelist</code> (the listed query strings <i> <b>are</b> </i> included)
     * or <code>allExcept</code> (the listed query strings <i> <b>are not</b> </i>
     * included, but all other query strings are).</p>
     */
    inline const QueryStringNames& GetQueryStrings() const { return m_queryStrings; }
    inline bool QueryStringsHasBeenSet() const { return m_queryStringsHasBeenSet; }
    template<typename QueryStringsT = QueryStringNames>
    void SetQueryStrings(QueryStringsT&& value) { m_queryStringsHasBeenSet = true; m_queryStrings = std::forward<QueryStringsT>(value); }
    template<typename QueryStringsT = QueryStringNames>
    OriginRequestPolicyQueryStringsConfig& WithQueryStrings(QueryStringsT&& value) { SetQueryStrings(std::forward<QueryStringsT>(value)); return *this;}
    ///@}
  private:

    OriginRequestPolicyQueryStringBehavior m_queryStringBehavior{OriginRequestPolicyQueryStringBehavior::NOT_SET};
    bool m_queryStringBehaviorHasBeenSet = false;

    QueryStringNames m_queryStrings;
    bool m_queryStringsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
