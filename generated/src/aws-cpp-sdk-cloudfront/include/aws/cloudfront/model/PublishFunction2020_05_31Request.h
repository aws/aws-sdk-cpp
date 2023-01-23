/**
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
  class PublishFunction2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API PublishFunction2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PublishFunction"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the function that you are publishing.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the function that you are publishing.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the function that you are publishing.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the function that you are publishing.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the function that you are publishing.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the function that you are publishing.</p>
     */
    inline PublishFunction2020_05_31Request& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the function that you are publishing.</p>
     */
    inline PublishFunction2020_05_31Request& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the function that you are publishing.</p>
     */
    inline PublishFunction2020_05_31Request& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current version (<code>ETag</code> value) of the function that you are
     * publishing, which you can get using <code>DescribeFunction</code>.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }

    /**
     * <p>The current version (<code>ETag</code> value) of the function that you are
     * publishing, which you can get using <code>DescribeFunction</code>.</p>
     */
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }

    /**
     * <p>The current version (<code>ETag</code> value) of the function that you are
     * publishing, which you can get using <code>DescribeFunction</code>.</p>
     */
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }

    /**
     * <p>The current version (<code>ETag</code> value) of the function that you are
     * publishing, which you can get using <code>DescribeFunction</code>.</p>
     */
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }

    /**
     * <p>The current version (<code>ETag</code> value) of the function that you are
     * publishing, which you can get using <code>DescribeFunction</code>.</p>
     */
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }

    /**
     * <p>The current version (<code>ETag</code> value) of the function that you are
     * publishing, which you can get using <code>DescribeFunction</code>.</p>
     */
    inline PublishFunction2020_05_31Request& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}

    /**
     * <p>The current version (<code>ETag</code> value) of the function that you are
     * publishing, which you can get using <code>DescribeFunction</code>.</p>
     */
    inline PublishFunction2020_05_31Request& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}

    /**
     * <p>The current version (<code>ETag</code> value) of the function that you are
     * publishing, which you can get using <code>DescribeFunction</code>.</p>
     */
    inline PublishFunction2020_05_31Request& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
