/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/Invalidation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{
  /**
   * <p>The returned result of the corresponding request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateInvalidationResult">AWS
   * API Reference</a></p>
   */
  class CreateInvalidation2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API CreateInvalidation2020_05_31Result();
    AWS_CLOUDFRONT_API CreateInvalidation2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API CreateInvalidation2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The fully qualified URI of the distribution and invalidation batch request,
     * including the <code>Invalidation ID</code>.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The fully qualified URI of the distribution and invalidation batch request,
     * including the <code>Invalidation ID</code>.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The fully qualified URI of the distribution and invalidation batch request,
     * including the <code>Invalidation ID</code>.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The fully qualified URI of the distribution and invalidation batch request,
     * including the <code>Invalidation ID</code>.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The fully qualified URI of the distribution and invalidation batch request,
     * including the <code>Invalidation ID</code>.</p>
     */
    inline CreateInvalidation2020_05_31Result& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The fully qualified URI of the distribution and invalidation batch request,
     * including the <code>Invalidation ID</code>.</p>
     */
    inline CreateInvalidation2020_05_31Result& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The fully qualified URI of the distribution and invalidation batch request,
     * including the <code>Invalidation ID</code>.</p>
     */
    inline CreateInvalidation2020_05_31Result& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The invalidation's information.</p>
     */
    inline const Invalidation& GetInvalidation() const{ return m_invalidation; }

    /**
     * <p>The invalidation's information.</p>
     */
    inline void SetInvalidation(const Invalidation& value) { m_invalidation = value; }

    /**
     * <p>The invalidation's information.</p>
     */
    inline void SetInvalidation(Invalidation&& value) { m_invalidation = std::move(value); }

    /**
     * <p>The invalidation's information.</p>
     */
    inline CreateInvalidation2020_05_31Result& WithInvalidation(const Invalidation& value) { SetInvalidation(value); return *this;}

    /**
     * <p>The invalidation's information.</p>
     */
    inline CreateInvalidation2020_05_31Result& WithInvalidation(Invalidation&& value) { SetInvalidation(std::move(value)); return *this;}

  private:

    Aws::String m_location;

    Invalidation m_invalidation;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
