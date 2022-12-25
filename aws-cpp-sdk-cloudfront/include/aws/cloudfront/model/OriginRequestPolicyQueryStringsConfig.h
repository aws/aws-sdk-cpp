/**
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
    AWS_CLOUDFRONT_API OriginRequestPolicyQueryStringsConfig();
    AWS_CLOUDFRONT_API OriginRequestPolicyQueryStringsConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginRequestPolicyQueryStringsConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Determines whether any URL query strings in viewer requests are included in
     * requests that CloudFront sends to the origin. Valid values are:</p> <ul> <li>
     * <p> <code>none</code> – Query strings in viewer requests are not included in
     * requests that CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any query strings that are listed in a
     * <code>CachePolicy</code> <i>are</i> included in origin requests.</p> </li> <li>
     * <p> <code>whitelist</code> – The query strings in viewer requests that are
     * listed in the <code>QueryStringNames</code> type are included in requests that
     * CloudFront sends to the origin.</p> </li> <li> <p> <code>all</code> – All query
     * strings in viewer requests are included in requests that CloudFront sends to the
     * origin.</p> </li> </ul>
     */
    inline const OriginRequestPolicyQueryStringBehavior& GetQueryStringBehavior() const{ return m_queryStringBehavior; }

    /**
     * <p>Determines whether any URL query strings in viewer requests are included in
     * requests that CloudFront sends to the origin. Valid values are:</p> <ul> <li>
     * <p> <code>none</code> – Query strings in viewer requests are not included in
     * requests that CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any query strings that are listed in a
     * <code>CachePolicy</code> <i>are</i> included in origin requests.</p> </li> <li>
     * <p> <code>whitelist</code> – The query strings in viewer requests that are
     * listed in the <code>QueryStringNames</code> type are included in requests that
     * CloudFront sends to the origin.</p> </li> <li> <p> <code>all</code> – All query
     * strings in viewer requests are included in requests that CloudFront sends to the
     * origin.</p> </li> </ul>
     */
    inline bool QueryStringBehaviorHasBeenSet() const { return m_queryStringBehaviorHasBeenSet; }

    /**
     * <p>Determines whether any URL query strings in viewer requests are included in
     * requests that CloudFront sends to the origin. Valid values are:</p> <ul> <li>
     * <p> <code>none</code> – Query strings in viewer requests are not included in
     * requests that CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any query strings that are listed in a
     * <code>CachePolicy</code> <i>are</i> included in origin requests.</p> </li> <li>
     * <p> <code>whitelist</code> – The query strings in viewer requests that are
     * listed in the <code>QueryStringNames</code> type are included in requests that
     * CloudFront sends to the origin.</p> </li> <li> <p> <code>all</code> – All query
     * strings in viewer requests are included in requests that CloudFront sends to the
     * origin.</p> </li> </ul>
     */
    inline void SetQueryStringBehavior(const OriginRequestPolicyQueryStringBehavior& value) { m_queryStringBehaviorHasBeenSet = true; m_queryStringBehavior = value; }

    /**
     * <p>Determines whether any URL query strings in viewer requests are included in
     * requests that CloudFront sends to the origin. Valid values are:</p> <ul> <li>
     * <p> <code>none</code> – Query strings in viewer requests are not included in
     * requests that CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any query strings that are listed in a
     * <code>CachePolicy</code> <i>are</i> included in origin requests.</p> </li> <li>
     * <p> <code>whitelist</code> – The query strings in viewer requests that are
     * listed in the <code>QueryStringNames</code> type are included in requests that
     * CloudFront sends to the origin.</p> </li> <li> <p> <code>all</code> – All query
     * strings in viewer requests are included in requests that CloudFront sends to the
     * origin.</p> </li> </ul>
     */
    inline void SetQueryStringBehavior(OriginRequestPolicyQueryStringBehavior&& value) { m_queryStringBehaviorHasBeenSet = true; m_queryStringBehavior = std::move(value); }

    /**
     * <p>Determines whether any URL query strings in viewer requests are included in
     * requests that CloudFront sends to the origin. Valid values are:</p> <ul> <li>
     * <p> <code>none</code> – Query strings in viewer requests are not included in
     * requests that CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any query strings that are listed in a
     * <code>CachePolicy</code> <i>are</i> included in origin requests.</p> </li> <li>
     * <p> <code>whitelist</code> – The query strings in viewer requests that are
     * listed in the <code>QueryStringNames</code> type are included in requests that
     * CloudFront sends to the origin.</p> </li> <li> <p> <code>all</code> – All query
     * strings in viewer requests are included in requests that CloudFront sends to the
     * origin.</p> </li> </ul>
     */
    inline OriginRequestPolicyQueryStringsConfig& WithQueryStringBehavior(const OriginRequestPolicyQueryStringBehavior& value) { SetQueryStringBehavior(value); return *this;}

    /**
     * <p>Determines whether any URL query strings in viewer requests are included in
     * requests that CloudFront sends to the origin. Valid values are:</p> <ul> <li>
     * <p> <code>none</code> – Query strings in viewer requests are not included in
     * requests that CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any query strings that are listed in a
     * <code>CachePolicy</code> <i>are</i> included in origin requests.</p> </li> <li>
     * <p> <code>whitelist</code> – The query strings in viewer requests that are
     * listed in the <code>QueryStringNames</code> type are included in requests that
     * CloudFront sends to the origin.</p> </li> <li> <p> <code>all</code> – All query
     * strings in viewer requests are included in requests that CloudFront sends to the
     * origin.</p> </li> </ul>
     */
    inline OriginRequestPolicyQueryStringsConfig& WithQueryStringBehavior(OriginRequestPolicyQueryStringBehavior&& value) { SetQueryStringBehavior(std::move(value)); return *this;}


    /**
     * <p>Contains a list of the query strings in viewer requests that are included in
     * requests that CloudFront sends to the origin.</p>
     */
    inline const QueryStringNames& GetQueryStrings() const{ return m_queryStrings; }

    /**
     * <p>Contains a list of the query strings in viewer requests that are included in
     * requests that CloudFront sends to the origin.</p>
     */
    inline bool QueryStringsHasBeenSet() const { return m_queryStringsHasBeenSet; }

    /**
     * <p>Contains a list of the query strings in viewer requests that are included in
     * requests that CloudFront sends to the origin.</p>
     */
    inline void SetQueryStrings(const QueryStringNames& value) { m_queryStringsHasBeenSet = true; m_queryStrings = value; }

    /**
     * <p>Contains a list of the query strings in viewer requests that are included in
     * requests that CloudFront sends to the origin.</p>
     */
    inline void SetQueryStrings(QueryStringNames&& value) { m_queryStringsHasBeenSet = true; m_queryStrings = std::move(value); }

    /**
     * <p>Contains a list of the query strings in viewer requests that are included in
     * requests that CloudFront sends to the origin.</p>
     */
    inline OriginRequestPolicyQueryStringsConfig& WithQueryStrings(const QueryStringNames& value) { SetQueryStrings(value); return *this;}

    /**
     * <p>Contains a list of the query strings in viewer requests that are included in
     * requests that CloudFront sends to the origin.</p>
     */
    inline OriginRequestPolicyQueryStringsConfig& WithQueryStrings(QueryStringNames&& value) { SetQueryStrings(std::move(value)); return *this;}

  private:

    OriginRequestPolicyQueryStringBehavior m_queryStringBehavior;
    bool m_queryStringBehaviorHasBeenSet = false;

    QueryStringNames m_queryStrings;
    bool m_queryStringsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
