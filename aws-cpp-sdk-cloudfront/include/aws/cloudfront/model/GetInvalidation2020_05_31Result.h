/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetInvalidationResult">AWS
   * API Reference</a></p>
   */
  class GetInvalidation2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetInvalidation2020_05_31Result();
    AWS_CLOUDFRONT_API GetInvalidation2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetInvalidation2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The invalidation's information. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/InvalidationDatatype.html">Invalidation
     * Complex Type</a>.</p>
     */
    inline const Invalidation& GetInvalidation() const{ return m_invalidation; }

    /**
     * <p>The invalidation's information. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/InvalidationDatatype.html">Invalidation
     * Complex Type</a>.</p>
     */
    inline void SetInvalidation(const Invalidation& value) { m_invalidation = value; }

    /**
     * <p>The invalidation's information. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/InvalidationDatatype.html">Invalidation
     * Complex Type</a>.</p>
     */
    inline void SetInvalidation(Invalidation&& value) { m_invalidation = std::move(value); }

    /**
     * <p>The invalidation's information. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/InvalidationDatatype.html">Invalidation
     * Complex Type</a>.</p>
     */
    inline GetInvalidation2020_05_31Result& WithInvalidation(const Invalidation& value) { SetInvalidation(value); return *this;}

    /**
     * <p>The invalidation's information. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/InvalidationDatatype.html">Invalidation
     * Complex Type</a>.</p>
     */
    inline GetInvalidation2020_05_31Result& WithInvalidation(Invalidation&& value) { SetInvalidation(std::move(value)); return *this;}

  private:

    Invalidation m_invalidation;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
