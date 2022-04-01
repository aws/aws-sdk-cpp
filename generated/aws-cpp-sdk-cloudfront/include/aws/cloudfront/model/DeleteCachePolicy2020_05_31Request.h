﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class AWS_CLOUDFRONT_API DeleteCachePolicy2020_05_31Request : public CloudFrontRequest
  {
  public:
    DeleteCachePolicy2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCachePolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for the cache policy that you are deleting. To get the
     * identifier, you can use <code>ListCachePolicies</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the cache policy that you are deleting. To get the
     * identifier, you can use <code>ListCachePolicies</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the cache policy that you are deleting. To get the
     * identifier, you can use <code>ListCachePolicies</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the cache policy that you are deleting. To get the
     * identifier, you can use <code>ListCachePolicies</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the cache policy that you are deleting. To get the
     * identifier, you can use <code>ListCachePolicies</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the cache policy that you are deleting. To get the
     * identifier, you can use <code>ListCachePolicies</code>.</p>
     */
    inline DeleteCachePolicy2020_05_31Request& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the cache policy that you are deleting. To get the
     * identifier, you can use <code>ListCachePolicies</code>.</p>
     */
    inline DeleteCachePolicy2020_05_31Request& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the cache policy that you are deleting. To get the
     * identifier, you can use <code>ListCachePolicies</code>.</p>
     */
    inline DeleteCachePolicy2020_05_31Request& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The version of the cache policy that you are deleting. The version is the
     * cache policy’s <code>ETag</code> value, which you can get using
     * <code>ListCachePolicies</code>, <code>GetCachePolicy</code>, or
     * <code>GetCachePolicyConfig</code>.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }

    /**
     * <p>The version of the cache policy that you are deleting. The version is the
     * cache policy’s <code>ETag</code> value, which you can get using
     * <code>ListCachePolicies</code>, <code>GetCachePolicy</code>, or
     * <code>GetCachePolicyConfig</code>.</p>
     */
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }

    /**
     * <p>The version of the cache policy that you are deleting. The version is the
     * cache policy’s <code>ETag</code> value, which you can get using
     * <code>ListCachePolicies</code>, <code>GetCachePolicy</code>, or
     * <code>GetCachePolicyConfig</code>.</p>
     */
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }

    /**
     * <p>The version of the cache policy that you are deleting. The version is the
     * cache policy’s <code>ETag</code> value, which you can get using
     * <code>ListCachePolicies</code>, <code>GetCachePolicy</code>, or
     * <code>GetCachePolicyConfig</code>.</p>
     */
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }

    /**
     * <p>The version of the cache policy that you are deleting. The version is the
     * cache policy’s <code>ETag</code> value, which you can get using
     * <code>ListCachePolicies</code>, <code>GetCachePolicy</code>, or
     * <code>GetCachePolicyConfig</code>.</p>
     */
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }

    /**
     * <p>The version of the cache policy that you are deleting. The version is the
     * cache policy’s <code>ETag</code> value, which you can get using
     * <code>ListCachePolicies</code>, <code>GetCachePolicy</code>, or
     * <code>GetCachePolicyConfig</code>.</p>
     */
    inline DeleteCachePolicy2020_05_31Request& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}

    /**
     * <p>The version of the cache policy that you are deleting. The version is the
     * cache policy’s <code>ETag</code> value, which you can get using
     * <code>ListCachePolicies</code>, <code>GetCachePolicy</code>, or
     * <code>GetCachePolicyConfig</code>.</p>
     */
    inline DeleteCachePolicy2020_05_31Request& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}

    /**
     * <p>The version of the cache policy that you are deleting. The version is the
     * cache policy’s <code>ETag</code> value, which you can get using
     * <code>ListCachePolicies</code>, <code>GetCachePolicy</code>, or
     * <code>GetCachePolicyConfig</code>.</p>
     */
    inline DeleteCachePolicy2020_05_31Request& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
