/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/Tag.h>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>AddTags</a></code> operation.
   * Specify the tags that you want to attach to the Elasticsearch domain.</p>
   */
  class AWS_ELASTICSEARCHSERVICE_API AddTagsRequest : public ElasticsearchServiceRequest
  {
  public:
    AddTagsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p> Specify the <code>ARN</code> for which you want to add the tags.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p> Specify the <code>ARN</code> for which you want to add the tags.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p> Specify the <code>ARN</code> for which you want to add the tags.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p> Specify the <code>ARN</code> for which you want to add the tags.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p> Specify the <code>ARN</code> for which you want to add the tags.</p>
     */
    inline AddTagsRequest& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p> Specify the <code>ARN</code> for which you want to add the tags.</p>
     */
    inline AddTagsRequest& WithARN(Aws::String&& value) { SetARN(value); return *this;}

    /**
     * <p> Specify the <code>ARN</code> for which you want to add the tags.</p>
     */
    inline AddTagsRequest& WithARN(const char* value) { SetARN(value); return *this;}

    /**
     * <p> List of <code>Tag</code> that need to be added for the Elasticsearch domain.
     * </p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    /**
     * <p> List of <code>Tag</code> that need to be added for the Elasticsearch domain.
     * </p>
     */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p> List of <code>Tag</code> that need to be added for the Elasticsearch domain.
     * </p>
     */
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p> List of <code>Tag</code> that need to be added for the Elasticsearch domain.
     * </p>
     */
    inline AddTagsRequest& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /**
     * <p> List of <code>Tag</code> that need to be added for the Elasticsearch domain.
     * </p>
     */
    inline AddTagsRequest& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(value); return *this;}

    /**
     * <p> List of <code>Tag</code> that need to be added for the Elasticsearch domain.
     * </p>
     */
    inline AddTagsRequest& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p> List of <code>Tag</code> that need to be added for the Elasticsearch domain.
     * </p>
     */
    inline AddTagsRequest& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

  private:
    Aws::String m_aRN;
    bool m_aRNHasBeenSet;
    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
