/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/config/model/StoredQuery.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class PutStoredQueryRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API PutStoredQueryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutStoredQuery"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of <code>StoredQuery</code> objects. The mandatory fields are
     * <code>QueryName</code> and <code>Expression</code>.</p>  <p>When you are
     * creating a query, you must provide a query name and an expression. When you are
     * updating a query, you must provide a query name but updating the description is
     * optional.</p> 
     */
    inline const StoredQuery& GetStoredQuery() const { return m_storedQuery; }
    inline bool StoredQueryHasBeenSet() const { return m_storedQueryHasBeenSet; }
    template<typename StoredQueryT = StoredQuery>
    void SetStoredQuery(StoredQueryT&& value) { m_storedQueryHasBeenSet = true; m_storedQuery = std::forward<StoredQueryT>(value); }
    template<typename StoredQueryT = StoredQuery>
    PutStoredQueryRequest& WithStoredQuery(StoredQueryT&& value) { SetStoredQuery(std::forward<StoredQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>Tags</code> object.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    PutStoredQueryRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    PutStoredQueryRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    StoredQuery m_storedQuery;
    bool m_storedQueryHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
