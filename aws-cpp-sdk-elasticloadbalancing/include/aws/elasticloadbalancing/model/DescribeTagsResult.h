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
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/ResponseMetadata.h>
#include <aws/elasticloadbalancing/model/TagDescription.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{
  /**
   * <p>Contains the output for DescribeTags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeTagsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCING_API DescribeTagsResult
  {
  public:
    DescribeTagsResult();
    DescribeTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the tags.</p>
     */
    inline const Aws::Vector<TagDescription>& GetTagDescriptions() const{ return m_tagDescriptions; }

    /**
     * <p>Information about the tags.</p>
     */
    inline void SetTagDescriptions(const Aws::Vector<TagDescription>& value) { m_tagDescriptions = value; }

    /**
     * <p>Information about the tags.</p>
     */
    inline void SetTagDescriptions(Aws::Vector<TagDescription>&& value) { m_tagDescriptions = std::move(value); }

    /**
     * <p>Information about the tags.</p>
     */
    inline DescribeTagsResult& WithTagDescriptions(const Aws::Vector<TagDescription>& value) { SetTagDescriptions(value); return *this;}

    /**
     * <p>Information about the tags.</p>
     */
    inline DescribeTagsResult& WithTagDescriptions(Aws::Vector<TagDescription>&& value) { SetTagDescriptions(std::move(value)); return *this;}

    /**
     * <p>Information about the tags.</p>
     */
    inline DescribeTagsResult& AddTagDescriptions(const TagDescription& value) { m_tagDescriptions.push_back(value); return *this; }

    /**
     * <p>Information about the tags.</p>
     */
    inline DescribeTagsResult& AddTagDescriptions(TagDescription&& value) { m_tagDescriptions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTagsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTagsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TagDescription> m_tagDescriptions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
