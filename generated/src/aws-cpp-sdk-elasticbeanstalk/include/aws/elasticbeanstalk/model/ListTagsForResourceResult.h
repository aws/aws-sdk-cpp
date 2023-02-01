/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/Tag.h>
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
namespace ElasticBeanstalk
{
namespace Model
{
  class ListTagsForResourceResult
  {
  public:
    AWS_ELASTICBEANSTALK_API ListTagsForResourceResult();
    AWS_ELASTICBEANSTALK_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which a tag list was
     * requested.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which a tag list was
     * requested.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which a tag list was
     * requested.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which a tag list was
     * requested.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which a tag list was
     * requested.</p>
     */
    inline ListTagsForResourceResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which a tag list was
     * requested.</p>
     */
    inline ListTagsForResourceResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which a tag list was
     * requested.</p>
     */
    inline ListTagsForResourceResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>A list of tag key-value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetResourceTags() const{ return m_resourceTags; }

    /**
     * <p>A list of tag key-value pairs.</p>
     */
    inline void SetResourceTags(const Aws::Vector<Tag>& value) { m_resourceTags = value; }

    /**
     * <p>A list of tag key-value pairs.</p>
     */
    inline void SetResourceTags(Aws::Vector<Tag>&& value) { m_resourceTags = std::move(value); }

    /**
     * <p>A list of tag key-value pairs.</p>
     */
    inline ListTagsForResourceResult& WithResourceTags(const Aws::Vector<Tag>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>A list of tag key-value pairs.</p>
     */
    inline ListTagsForResourceResult& WithResourceTags(Aws::Vector<Tag>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p>A list of tag key-value pairs.</p>
     */
    inline ListTagsForResourceResult& AddResourceTags(const Tag& value) { m_resourceTags.push_back(value); return *this; }

    /**
     * <p>A list of tag key-value pairs.</p>
     */
    inline ListTagsForResourceResult& AddResourceTags(Tag&& value) { m_resourceTags.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListTagsForResourceResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListTagsForResourceResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_resourceArn;

    Aws::Vector<Tag> m_resourceTags;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
