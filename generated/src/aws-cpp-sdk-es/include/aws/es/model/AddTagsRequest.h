/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>AddTags</a></code> operation.
   * Specify the tags that you want to attach to the Elasticsearch
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AddTagsRequest">AWS
   * API Reference</a></p>
   */
  class AddTagsRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AddTagsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddTags"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> Specify the <code>ARN</code> for which you want to add the tags.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    AddTagsRequest& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of <code>Tag</code> that need to be added for the Elasticsearch domain.
     * </p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    template<typename TagListT = Aws::Vector<Tag>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Tag>>
    AddTagsRequest& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Tag>
    AddTagsRequest& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
