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
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The configuration for using a content delivery network (CDN), like Amazon
   * CloudFront, for content and ad segment management. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CdnConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API CdnConfiguration
  {
  public:
    CdnConfiguration();
    CdnConfiguration(Aws::Utils::Json::JsonView jsonValue);
    CdnConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A non-default content delivery network (CDN) to serve ad segments. By
     * default, AWS Elemental MediaTailor uses Amazon CloudFront with default cache
     * settings as its CDN for ad segments. To set up an alternate CDN, create a rule
     * in your CDN for the following origin: ads.mediatailor.&lt;region>.amazonaws.com.
     * Then specify the rule's name in this AdSegmentUrlPrefix. When AWS Elemental
     * MediaTailor serves a manifest, it reports your CDN as the source for ad
     * segments.</p>
     */
    inline const Aws::String& GetAdSegmentUrlPrefix() const{ return m_adSegmentUrlPrefix; }

    /**
     * <p>A non-default content delivery network (CDN) to serve ad segments. By
     * default, AWS Elemental MediaTailor uses Amazon CloudFront with default cache
     * settings as its CDN for ad segments. To set up an alternate CDN, create a rule
     * in your CDN for the following origin: ads.mediatailor.&lt;region>.amazonaws.com.
     * Then specify the rule's name in this AdSegmentUrlPrefix. When AWS Elemental
     * MediaTailor serves a manifest, it reports your CDN as the source for ad
     * segments.</p>
     */
    inline bool AdSegmentUrlPrefixHasBeenSet() const { return m_adSegmentUrlPrefixHasBeenSet; }

    /**
     * <p>A non-default content delivery network (CDN) to serve ad segments. By
     * default, AWS Elemental MediaTailor uses Amazon CloudFront with default cache
     * settings as its CDN for ad segments. To set up an alternate CDN, create a rule
     * in your CDN for the following origin: ads.mediatailor.&lt;region>.amazonaws.com.
     * Then specify the rule's name in this AdSegmentUrlPrefix. When AWS Elemental
     * MediaTailor serves a manifest, it reports your CDN as the source for ad
     * segments.</p>
     */
    inline void SetAdSegmentUrlPrefix(const Aws::String& value) { m_adSegmentUrlPrefixHasBeenSet = true; m_adSegmentUrlPrefix = value; }

    /**
     * <p>A non-default content delivery network (CDN) to serve ad segments. By
     * default, AWS Elemental MediaTailor uses Amazon CloudFront with default cache
     * settings as its CDN for ad segments. To set up an alternate CDN, create a rule
     * in your CDN for the following origin: ads.mediatailor.&lt;region>.amazonaws.com.
     * Then specify the rule's name in this AdSegmentUrlPrefix. When AWS Elemental
     * MediaTailor serves a manifest, it reports your CDN as the source for ad
     * segments.</p>
     */
    inline void SetAdSegmentUrlPrefix(Aws::String&& value) { m_adSegmentUrlPrefixHasBeenSet = true; m_adSegmentUrlPrefix = std::move(value); }

    /**
     * <p>A non-default content delivery network (CDN) to serve ad segments. By
     * default, AWS Elemental MediaTailor uses Amazon CloudFront with default cache
     * settings as its CDN for ad segments. To set up an alternate CDN, create a rule
     * in your CDN for the following origin: ads.mediatailor.&lt;region>.amazonaws.com.
     * Then specify the rule's name in this AdSegmentUrlPrefix. When AWS Elemental
     * MediaTailor serves a manifest, it reports your CDN as the source for ad
     * segments.</p>
     */
    inline void SetAdSegmentUrlPrefix(const char* value) { m_adSegmentUrlPrefixHasBeenSet = true; m_adSegmentUrlPrefix.assign(value); }

    /**
     * <p>A non-default content delivery network (CDN) to serve ad segments. By
     * default, AWS Elemental MediaTailor uses Amazon CloudFront with default cache
     * settings as its CDN for ad segments. To set up an alternate CDN, create a rule
     * in your CDN for the following origin: ads.mediatailor.&lt;region>.amazonaws.com.
     * Then specify the rule's name in this AdSegmentUrlPrefix. When AWS Elemental
     * MediaTailor serves a manifest, it reports your CDN as the source for ad
     * segments.</p>
     */
    inline CdnConfiguration& WithAdSegmentUrlPrefix(const Aws::String& value) { SetAdSegmentUrlPrefix(value); return *this;}

    /**
     * <p>A non-default content delivery network (CDN) to serve ad segments. By
     * default, AWS Elemental MediaTailor uses Amazon CloudFront with default cache
     * settings as its CDN for ad segments. To set up an alternate CDN, create a rule
     * in your CDN for the following origin: ads.mediatailor.&lt;region>.amazonaws.com.
     * Then specify the rule's name in this AdSegmentUrlPrefix. When AWS Elemental
     * MediaTailor serves a manifest, it reports your CDN as the source for ad
     * segments.</p>
     */
    inline CdnConfiguration& WithAdSegmentUrlPrefix(Aws::String&& value) { SetAdSegmentUrlPrefix(std::move(value)); return *this;}

    /**
     * <p>A non-default content delivery network (CDN) to serve ad segments. By
     * default, AWS Elemental MediaTailor uses Amazon CloudFront with default cache
     * settings as its CDN for ad segments. To set up an alternate CDN, create a rule
     * in your CDN for the following origin: ads.mediatailor.&lt;region>.amazonaws.com.
     * Then specify the rule's name in this AdSegmentUrlPrefix. When AWS Elemental
     * MediaTailor serves a manifest, it reports your CDN as the source for ad
     * segments.</p>
     */
    inline CdnConfiguration& WithAdSegmentUrlPrefix(const char* value) { SetAdSegmentUrlPrefix(value); return *this;}


    /**
     * <p>A content delivery network (CDN) to cache content segments, so that content
     * requests don’t always have to go to the origin server. First, create a rule in
     * your CDN for the content segment origin server. Then specify the rule's name in
     * this ContentSegmentUrlPrefix. When AWS Elemental MediaTailor serves a manifest,
     * it reports your CDN as the source for content segments.</p>
     */
    inline const Aws::String& GetContentSegmentUrlPrefix() const{ return m_contentSegmentUrlPrefix; }

    /**
     * <p>A content delivery network (CDN) to cache content segments, so that content
     * requests don’t always have to go to the origin server. First, create a rule in
     * your CDN for the content segment origin server. Then specify the rule's name in
     * this ContentSegmentUrlPrefix. When AWS Elemental MediaTailor serves a manifest,
     * it reports your CDN as the source for content segments.</p>
     */
    inline bool ContentSegmentUrlPrefixHasBeenSet() const { return m_contentSegmentUrlPrefixHasBeenSet; }

    /**
     * <p>A content delivery network (CDN) to cache content segments, so that content
     * requests don’t always have to go to the origin server. First, create a rule in
     * your CDN for the content segment origin server. Then specify the rule's name in
     * this ContentSegmentUrlPrefix. When AWS Elemental MediaTailor serves a manifest,
     * it reports your CDN as the source for content segments.</p>
     */
    inline void SetContentSegmentUrlPrefix(const Aws::String& value) { m_contentSegmentUrlPrefixHasBeenSet = true; m_contentSegmentUrlPrefix = value; }

    /**
     * <p>A content delivery network (CDN) to cache content segments, so that content
     * requests don’t always have to go to the origin server. First, create a rule in
     * your CDN for the content segment origin server. Then specify the rule's name in
     * this ContentSegmentUrlPrefix. When AWS Elemental MediaTailor serves a manifest,
     * it reports your CDN as the source for content segments.</p>
     */
    inline void SetContentSegmentUrlPrefix(Aws::String&& value) { m_contentSegmentUrlPrefixHasBeenSet = true; m_contentSegmentUrlPrefix = std::move(value); }

    /**
     * <p>A content delivery network (CDN) to cache content segments, so that content
     * requests don’t always have to go to the origin server. First, create a rule in
     * your CDN for the content segment origin server. Then specify the rule's name in
     * this ContentSegmentUrlPrefix. When AWS Elemental MediaTailor serves a manifest,
     * it reports your CDN as the source for content segments.</p>
     */
    inline void SetContentSegmentUrlPrefix(const char* value) { m_contentSegmentUrlPrefixHasBeenSet = true; m_contentSegmentUrlPrefix.assign(value); }

    /**
     * <p>A content delivery network (CDN) to cache content segments, so that content
     * requests don’t always have to go to the origin server. First, create a rule in
     * your CDN for the content segment origin server. Then specify the rule's name in
     * this ContentSegmentUrlPrefix. When AWS Elemental MediaTailor serves a manifest,
     * it reports your CDN as the source for content segments.</p>
     */
    inline CdnConfiguration& WithContentSegmentUrlPrefix(const Aws::String& value) { SetContentSegmentUrlPrefix(value); return *this;}

    /**
     * <p>A content delivery network (CDN) to cache content segments, so that content
     * requests don’t always have to go to the origin server. First, create a rule in
     * your CDN for the content segment origin server. Then specify the rule's name in
     * this ContentSegmentUrlPrefix. When AWS Elemental MediaTailor serves a manifest,
     * it reports your CDN as the source for content segments.</p>
     */
    inline CdnConfiguration& WithContentSegmentUrlPrefix(Aws::String&& value) { SetContentSegmentUrlPrefix(std::move(value)); return *this;}

    /**
     * <p>A content delivery network (CDN) to cache content segments, so that content
     * requests don’t always have to go to the origin server. First, create a rule in
     * your CDN for the content segment origin server. Then specify the rule's name in
     * this ContentSegmentUrlPrefix. When AWS Elemental MediaTailor serves a manifest,
     * it reports your CDN as the source for content segments.</p>
     */
    inline CdnConfiguration& WithContentSegmentUrlPrefix(const char* value) { SetContentSegmentUrlPrefix(value); return *this;}

  private:

    Aws::String m_adSegmentUrlPrefix;
    bool m_adSegmentUrlPrefixHasBeenSet;

    Aws::String m_contentSegmentUrlPrefix;
    bool m_contentSegmentUrlPrefixHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
