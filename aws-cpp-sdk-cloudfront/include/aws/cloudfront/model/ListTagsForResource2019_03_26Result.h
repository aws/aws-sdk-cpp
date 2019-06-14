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
   * <p> The returned result of the corresponding request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListTagsForResourceResult">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API ListTagsForResource2019_03_26Result
  {
  public:
    ListTagsForResource2019_03_26Result();
    ListTagsForResource2019_03_26Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListTagsForResource2019_03_26Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p> A complex type that contains zero or more <code>Tag</code> elements.</p>
     */
    inline const Tags& GetTags() const{ return m_tags; }

    /**
     * <p> A complex type that contains zero or more <code>Tag</code> elements.</p>
     */
    inline void SetTags(const Tags& value) { m_tags = value; }

    /**
     * <p> A complex type that contains zero or more <code>Tag</code> elements.</p>
     */
    inline void SetTags(Tags&& value) { m_tags = std::move(value); }

    /**
     * <p> A complex type that contains zero or more <code>Tag</code> elements.</p>
     */
    inline ListTagsForResource2019_03_26Result& WithTags(const Tags& value) { SetTags(value); return *this;}

    /**
     * <p> A complex type that contains zero or more <code>Tag</code> elements.</p>
     */
    inline ListTagsForResource2019_03_26Result& WithTags(Tags&& value) { SetTags(std::move(value)); return *this;}

  private:

    Tags m_tags;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
