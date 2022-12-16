/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/Tags.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListTagsForResourceResult">AWS
   * API Reference</a></p>
   */
  class ListTagsForResource2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListTagsForResource2020_05_31Result();
    AWS_CLOUDFRONT_API ListTagsForResource2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListTagsForResource2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains zero or more <code>Tag</code> elements.</p>
     */
    inline const Tags& GetTags() const{ return m_tags; }

    /**
     * <p>A complex type that contains zero or more <code>Tag</code> elements.</p>
     */
    inline void SetTags(const Tags& value) { m_tags = value; }

    /**
     * <p>A complex type that contains zero or more <code>Tag</code> elements.</p>
     */
    inline void SetTags(Tags&& value) { m_tags = std::move(value); }

    /**
     * <p>A complex type that contains zero or more <code>Tag</code> elements.</p>
     */
    inline ListTagsForResource2020_05_31Result& WithTags(const Tags& value) { SetTags(value); return *this;}

    /**
     * <p>A complex type that contains zero or more <code>Tag</code> elements.</p>
     */
    inline ListTagsForResource2020_05_31Result& WithTags(Tags&& value) { SetTags(std::move(value)); return *this;}

  private:

    Tags m_tags;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
