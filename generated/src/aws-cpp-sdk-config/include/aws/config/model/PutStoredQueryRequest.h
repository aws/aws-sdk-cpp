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
    AWS_CONFIGSERVICE_API PutStoredQueryRequest();

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
    inline const StoredQuery& GetStoredQuery() const{ return m_storedQuery; }
    inline bool StoredQueryHasBeenSet() const { return m_storedQueryHasBeenSet; }
    inline void SetStoredQuery(const StoredQuery& value) { m_storedQueryHasBeenSet = true; m_storedQuery = value; }
    inline void SetStoredQuery(StoredQuery&& value) { m_storedQueryHasBeenSet = true; m_storedQuery = std::move(value); }
    inline PutStoredQueryRequest& WithStoredQuery(const StoredQuery& value) { SetStoredQuery(value); return *this;}
    inline PutStoredQueryRequest& WithStoredQuery(StoredQuery&& value) { SetStoredQuery(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>Tags</code> object.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PutStoredQueryRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline PutStoredQueryRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline PutStoredQueryRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline PutStoredQueryRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
