/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/CachePolicyQueryStringBehavior.h>
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
   * (and if so, which query strings) are included in the cache key and automatically
   * included in requests that CloudFront sends to the origin.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CachePolicyQueryStringsConfig">AWS
   * API Reference</a></p>
   */
  class CachePolicyQueryStringsConfig
  {
  public:
    AWS_CLOUDFRONT_API CachePolicyQueryStringsConfig();
    AWS_CLOUDFRONT_API CachePolicyQueryStringsConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API CachePolicyQueryStringsConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Determines whether any URL query strings in viewer requests are included in
     * the cache key and automatically included in requests that CloudFront sends to
     * the origin. Valid values are:</p> <ul> <li> <p> <code>none</code> – Query
     * strings in viewer requests are not included in the cache key and are not
     * automatically included in requests that CloudFront sends to the origin. Even
     * when this field is set to <code>none</code>, any query strings that are listed
     * in an <code>OriginRequestPolicy</code> <i>are</i> included in origin
     * requests.</p> </li> <li> <p> <code>whitelist</code> – The query strings in
     * viewer requests that are listed in the <code>QueryStringNames</code> type are
     * included in the cache key and automatically included in requests that CloudFront
     * sends to the origin.</p> </li> <li> <p> <code>allExcept</code> – All query
     * strings in viewer requests that are <i> <b>not</b> </i> listed in the
     * <code>QueryStringNames</code> type are included in the cache key and
     * automatically included in requests that CloudFront sends to the origin.</p>
     * </li> <li> <p> <code>all</code> – All query strings in viewer requests are
     * included in the cache key and are automatically included in requests that
     * CloudFront sends to the origin.</p> </li> </ul>
     */
    inline const CachePolicyQueryStringBehavior& GetQueryStringBehavior() const{ return m_queryStringBehavior; }

    /**
     * <p>Determines whether any URL query strings in viewer requests are included in
     * the cache key and automatically included in requests that CloudFront sends to
     * the origin. Valid values are:</p> <ul> <li> <p> <code>none</code> – Query
     * strings in viewer requests are not included in the cache key and are not
     * automatically included in requests that CloudFront sends to the origin. Even
     * when this field is set to <code>none</code>, any query strings that are listed
     * in an <code>OriginRequestPolicy</code> <i>are</i> included in origin
     * requests.</p> </li> <li> <p> <code>whitelist</code> – The query strings in
     * viewer requests that are listed in the <code>QueryStringNames</code> type are
     * included in the cache key and automatically included in requests that CloudFront
     * sends to the origin.</p> </li> <li> <p> <code>allExcept</code> – All query
     * strings in viewer requests that are <i> <b>not</b> </i> listed in the
     * <code>QueryStringNames</code> type are included in the cache key and
     * automatically included in requests that CloudFront sends to the origin.</p>
     * </li> <li> <p> <code>all</code> – All query strings in viewer requests are
     * included in the cache key and are automatically included in requests that
     * CloudFront sends to the origin.</p> </li> </ul>
     */
    inline bool QueryStringBehaviorHasBeenSet() const { return m_queryStringBehaviorHasBeenSet; }

    /**
     * <p>Determines whether any URL query strings in viewer requests are included in
     * the cache key and automatically included in requests that CloudFront sends to
     * the origin. Valid values are:</p> <ul> <li> <p> <code>none</code> – Query
     * strings in viewer requests are not included in the cache key and are not
     * automatically included in requests that CloudFront sends to the origin. Even
     * when this field is set to <code>none</code>, any query strings that are listed
     * in an <code>OriginRequestPolicy</code> <i>are</i> included in origin
     * requests.</p> </li> <li> <p> <code>whitelist</code> – The query strings in
     * viewer requests that are listed in the <code>QueryStringNames</code> type are
     * included in the cache key and automatically included in requests that CloudFront
     * sends to the origin.</p> </li> <li> <p> <code>allExcept</code> – All query
     * strings in viewer requests that are <i> <b>not</b> </i> listed in the
     * <code>QueryStringNames</code> type are included in the cache key and
     * automatically included in requests that CloudFront sends to the origin.</p>
     * </li> <li> <p> <code>all</code> – All query strings in viewer requests are
     * included in the cache key and are automatically included in requests that
     * CloudFront sends to the origin.</p> </li> </ul>
     */
    inline void SetQueryStringBehavior(const CachePolicyQueryStringBehavior& value) { m_queryStringBehaviorHasBeenSet = true; m_queryStringBehavior = value; }

    /**
     * <p>Determines whether any URL query strings in viewer requests are included in
     * the cache key and automatically included in requests that CloudFront sends to
     * the origin. Valid values are:</p> <ul> <li> <p> <code>none</code> – Query
     * strings in viewer requests are not included in the cache key and are not
     * automatically included in requests that CloudFront sends to the origin. Even
     * when this field is set to <code>none</code>, any query strings that are listed
     * in an <code>OriginRequestPolicy</code> <i>are</i> included in origin
     * requests.</p> </li> <li> <p> <code>whitelist</code> – The query strings in
     * viewer requests that are listed in the <code>QueryStringNames</code> type are
     * included in the cache key and automatically included in requests that CloudFront
     * sends to the origin.</p> </li> <li> <p> <code>allExcept</code> – All query
     * strings in viewer requests that are <i> <b>not</b> </i> listed in the
     * <code>QueryStringNames</code> type are included in the cache key and
     * automatically included in requests that CloudFront sends to the origin.</p>
     * </li> <li> <p> <code>all</code> – All query strings in viewer requests are
     * included in the cache key and are automatically included in requests that
     * CloudFront sends to the origin.</p> </li> </ul>
     */
    inline void SetQueryStringBehavior(CachePolicyQueryStringBehavior&& value) { m_queryStringBehaviorHasBeenSet = true; m_queryStringBehavior = std::move(value); }

    /**
     * <p>Determines whether any URL query strings in viewer requests are included in
     * the cache key and automatically included in requests that CloudFront sends to
     * the origin. Valid values are:</p> <ul> <li> <p> <code>none</code> – Query
     * strings in viewer requests are not included in the cache key and are not
     * automatically included in requests that CloudFront sends to the origin. Even
     * when this field is set to <code>none</code>, any query strings that are listed
     * in an <code>OriginRequestPolicy</code> <i>are</i> included in origin
     * requests.</p> </li> <li> <p> <code>whitelist</code> – The query strings in
     * viewer requests that are listed in the <code>QueryStringNames</code> type are
     * included in the cache key and automatically included in requests that CloudFront
     * sends to the origin.</p> </li> <li> <p> <code>allExcept</code> – All query
     * strings in viewer requests that are <i> <b>not</b> </i> listed in the
     * <code>QueryStringNames</code> type are included in the cache key and
     * automatically included in requests that CloudFront sends to the origin.</p>
     * </li> <li> <p> <code>all</code> – All query strings in viewer requests are
     * included in the cache key and are automatically included in requests that
     * CloudFront sends to the origin.</p> </li> </ul>
     */
    inline CachePolicyQueryStringsConfig& WithQueryStringBehavior(const CachePolicyQueryStringBehavior& value) { SetQueryStringBehavior(value); return *this;}

    /**
     * <p>Determines whether any URL query strings in viewer requests are included in
     * the cache key and automatically included in requests that CloudFront sends to
     * the origin. Valid values are:</p> <ul> <li> <p> <code>none</code> – Query
     * strings in viewer requests are not included in the cache key and are not
     * automatically included in requests that CloudFront sends to the origin. Even
     * when this field is set to <code>none</code>, any query strings that are listed
     * in an <code>OriginRequestPolicy</code> <i>are</i> included in origin
     * requests.</p> </li> <li> <p> <code>whitelist</code> – The query strings in
     * viewer requests that are listed in the <code>QueryStringNames</code> type are
     * included in the cache key and automatically included in requests that CloudFront
     * sends to the origin.</p> </li> <li> <p> <code>allExcept</code> – All query
     * strings in viewer requests that are <i> <b>not</b> </i> listed in the
     * <code>QueryStringNames</code> type are included in the cache key and
     * automatically included in requests that CloudFront sends to the origin.</p>
     * </li> <li> <p> <code>all</code> – All query strings in viewer requests are
     * included in the cache key and are automatically included in requests that
     * CloudFront sends to the origin.</p> </li> </ul>
     */
    inline CachePolicyQueryStringsConfig& WithQueryStringBehavior(CachePolicyQueryStringBehavior&& value) { SetQueryStringBehavior(std::move(value)); return *this;}


    /**
     * <p>Contains the specific query strings in viewer requests that either <i>
     * <b>are</b> </i> or <i> <b>are not</b> </i> included in the cache key and
     * automatically included in requests that CloudFront sends to the origin. The
     * behavior depends on whether the <code>QueryStringBehavior</code> field in the
     * <code>CachePolicyQueryStringsConfig</code> type is set to <code>whitelist</code>
     * (the listed query strings <i> <b>are</b> </i> included) or
     * <code>allExcept</code> (the listed query strings <i> <b>are not</b> </i>
     * included, but all other query strings are).</p>
     */
    inline const QueryStringNames& GetQueryStrings() const{ return m_queryStrings; }

    /**
     * <p>Contains the specific query strings in viewer requests that either <i>
     * <b>are</b> </i> or <i> <b>are not</b> </i> included in the cache key and
     * automatically included in requests that CloudFront sends to the origin. The
     * behavior depends on whether the <code>QueryStringBehavior</code> field in the
     * <code>CachePolicyQueryStringsConfig</code> type is set to <code>whitelist</code>
     * (the listed query strings <i> <b>are</b> </i> included) or
     * <code>allExcept</code> (the listed query strings <i> <b>are not</b> </i>
     * included, but all other query strings are).</p>
     */
    inline bool QueryStringsHasBeenSet() const { return m_queryStringsHasBeenSet; }

    /**
     * <p>Contains the specific query strings in viewer requests that either <i>
     * <b>are</b> </i> or <i> <b>are not</b> </i> included in the cache key and
     * automatically included in requests that CloudFront sends to the origin. The
     * behavior depends on whether the <code>QueryStringBehavior</code> field in the
     * <code>CachePolicyQueryStringsConfig</code> type is set to <code>whitelist</code>
     * (the listed query strings <i> <b>are</b> </i> included) or
     * <code>allExcept</code> (the listed query strings <i> <b>are not</b> </i>
     * included, but all other query strings are).</p>
     */
    inline void SetQueryStrings(const QueryStringNames& value) { m_queryStringsHasBeenSet = true; m_queryStrings = value; }

    /**
     * <p>Contains the specific query strings in viewer requests that either <i>
     * <b>are</b> </i> or <i> <b>are not</b> </i> included in the cache key and
     * automatically included in requests that CloudFront sends to the origin. The
     * behavior depends on whether the <code>QueryStringBehavior</code> field in the
     * <code>CachePolicyQueryStringsConfig</code> type is set to <code>whitelist</code>
     * (the listed query strings <i> <b>are</b> </i> included) or
     * <code>allExcept</code> (the listed query strings <i> <b>are not</b> </i>
     * included, but all other query strings are).</p>
     */
    inline void SetQueryStrings(QueryStringNames&& value) { m_queryStringsHasBeenSet = true; m_queryStrings = std::move(value); }

    /**
     * <p>Contains the specific query strings in viewer requests that either <i>
     * <b>are</b> </i> or <i> <b>are not</b> </i> included in the cache key and
     * automatically included in requests that CloudFront sends to the origin. The
     * behavior depends on whether the <code>QueryStringBehavior</code> field in the
     * <code>CachePolicyQueryStringsConfig</code> type is set to <code>whitelist</code>
     * (the listed query strings <i> <b>are</b> </i> included) or
     * <code>allExcept</code> (the listed query strings <i> <b>are not</b> </i>
     * included, but all other query strings are).</p>
     */
    inline CachePolicyQueryStringsConfig& WithQueryStrings(const QueryStringNames& value) { SetQueryStrings(value); return *this;}

    /**
     * <p>Contains the specific query strings in viewer requests that either <i>
     * <b>are</b> </i> or <i> <b>are not</b> </i> included in the cache key and
     * automatically included in requests that CloudFront sends to the origin. The
     * behavior depends on whether the <code>QueryStringBehavior</code> field in the
     * <code>CachePolicyQueryStringsConfig</code> type is set to <code>whitelist</code>
     * (the listed query strings <i> <b>are</b> </i> included) or
     * <code>allExcept</code> (the listed query strings <i> <b>are not</b> </i>
     * included, but all other query strings are).</p>
     */
    inline CachePolicyQueryStringsConfig& WithQueryStrings(QueryStringNames&& value) { SetQueryStrings(std::move(value)); return *this;}

  private:

    CachePolicyQueryStringBehavior m_queryStringBehavior;
    bool m_queryStringBehaviorHasBeenSet = false;

    QueryStringNames m_queryStrings;
    bool m_queryStringsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
