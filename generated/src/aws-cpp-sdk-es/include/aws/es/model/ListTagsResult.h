/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>The result of a <code>ListTags</code> operation. Contains tags for all
   * requested Elasticsearch domains.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListTagsResponse">AWS
   * API Reference</a></p>
   */
  class ListTagsResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ListTagsResult();
    AWS_ELASTICSEARCHSERVICE_API ListTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API ListTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> List of <code>Tag</code> for the requested Elasticsearch domain.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    /**
     * <p> List of <code>Tag</code> for the requested Elasticsearch domain.</p>
     */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagList = value; }

    /**
     * <p> List of <code>Tag</code> for the requested Elasticsearch domain.</p>
     */
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagList = std::move(value); }

    /**
     * <p> List of <code>Tag</code> for the requested Elasticsearch domain.</p>
     */
    inline ListTagsResult& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /**
     * <p> List of <code>Tag</code> for the requested Elasticsearch domain.</p>
     */
    inline ListTagsResult& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p> List of <code>Tag</code> for the requested Elasticsearch domain.</p>
     */
    inline ListTagsResult& AddTagList(const Tag& value) { m_tagList.push_back(value); return *this; }

    /**
     * <p> List of <code>Tag</code> for the requested Elasticsearch domain.</p>
     */
    inline ListTagsResult& AddTagList(Tag&& value) { m_tagList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTagsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTagsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTagsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Tag> m_tagList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
