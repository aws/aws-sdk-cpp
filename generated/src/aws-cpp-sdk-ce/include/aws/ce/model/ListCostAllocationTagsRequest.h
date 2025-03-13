/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/ce/model/CostAllocationTagStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/CostAllocationTagType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class ListCostAllocationTagsRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API ListCostAllocationTagsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCostAllocationTags"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The status of cost allocation tag keys that are returned for this request.
     * </p>
     */
    inline CostAllocationTagStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CostAllocationTagStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListCostAllocationTagsRequest& WithStatus(CostAllocationTagStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of cost allocation tag keys that are returned for this request. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const { return m_tagKeys; }
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }
    template<typename TagKeysT = Aws::Vector<Aws::String>>
    void SetTagKeys(TagKeysT&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::forward<TagKeysT>(value); }
    template<typename TagKeysT = Aws::Vector<Aws::String>>
    ListCostAllocationTagsRequest& WithTagKeys(TagKeysT&& value) { SetTagKeys(std::forward<TagKeysT>(value)); return *this;}
    template<typename TagKeysT = Aws::String>
    ListCostAllocationTagsRequest& AddTagKeys(TagKeysT&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.emplace_back(std::forward<TagKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of <code>CostAllocationTag</code> object that are returned for this
     * request. The <code>AWSGenerated</code> type tags are tags that Amazon Web
     * Services defines and applies to support Amazon Web Services resources for cost
     * allocation purposes. The <code>UserDefined</code> type tags are tags that you
     * define, create, and apply to resources. </p>
     */
    inline CostAllocationTagType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CostAllocationTagType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ListCostAllocationTagsRequest& WithType(CostAllocationTagType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCostAllocationTagsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of objects that are returned for this request. By default,
     * the request returns 100 results. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCostAllocationTagsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    CostAllocationTagStatus m_status{CostAllocationTagStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;

    CostAllocationTagType m_type{CostAllocationTagType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
