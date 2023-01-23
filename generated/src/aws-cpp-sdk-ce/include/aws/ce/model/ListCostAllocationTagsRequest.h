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
    AWS_COSTEXPLORER_API ListCostAllocationTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCostAllocationTags"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The status of cost allocation tag keys that are returned for this request.
     * </p>
     */
    inline const CostAllocationTagStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of cost allocation tag keys that are returned for this request.
     * </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of cost allocation tag keys that are returned for this request.
     * </p>
     */
    inline void SetStatus(const CostAllocationTagStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of cost allocation tag keys that are returned for this request.
     * </p>
     */
    inline void SetStatus(CostAllocationTagStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of cost allocation tag keys that are returned for this request.
     * </p>
     */
    inline ListCostAllocationTagsRequest& WithStatus(const CostAllocationTagStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of cost allocation tag keys that are returned for this request.
     * </p>
     */
    inline ListCostAllocationTagsRequest& WithStatus(CostAllocationTagStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The list of cost allocation tag keys that are returned for this request. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>The list of cost allocation tag keys that are returned for this request. </p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>The list of cost allocation tag keys that are returned for this request. </p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>The list of cost allocation tag keys that are returned for this request. </p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>The list of cost allocation tag keys that are returned for this request. </p>
     */
    inline ListCostAllocationTagsRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>The list of cost allocation tag keys that are returned for this request. </p>
     */
    inline ListCostAllocationTagsRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>The list of cost allocation tag keys that are returned for this request. </p>
     */
    inline ListCostAllocationTagsRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>The list of cost allocation tag keys that are returned for this request. </p>
     */
    inline ListCostAllocationTagsRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of cost allocation tag keys that are returned for this request. </p>
     */
    inline ListCostAllocationTagsRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }


    /**
     * <p>The type of <code>CostAllocationTag</code> object that are returned for this
     * request. The <code>AWSGenerated</code> type tags are tags that Amazon Web
     * Services defines and applies to support Amazon Web Services resources for cost
     * allocation purposes. The <code>UserDefined</code> type tags are tags that you
     * define, create, and apply to resources. </p>
     */
    inline const CostAllocationTagType& GetType() const{ return m_type; }

    /**
     * <p>The type of <code>CostAllocationTag</code> object that are returned for this
     * request. The <code>AWSGenerated</code> type tags are tags that Amazon Web
     * Services defines and applies to support Amazon Web Services resources for cost
     * allocation purposes. The <code>UserDefined</code> type tags are tags that you
     * define, create, and apply to resources. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of <code>CostAllocationTag</code> object that are returned for this
     * request. The <code>AWSGenerated</code> type tags are tags that Amazon Web
     * Services defines and applies to support Amazon Web Services resources for cost
     * allocation purposes. The <code>UserDefined</code> type tags are tags that you
     * define, create, and apply to resources. </p>
     */
    inline void SetType(const CostAllocationTagType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of <code>CostAllocationTag</code> object that are returned for this
     * request. The <code>AWSGenerated</code> type tags are tags that Amazon Web
     * Services defines and applies to support Amazon Web Services resources for cost
     * allocation purposes. The <code>UserDefined</code> type tags are tags that you
     * define, create, and apply to resources. </p>
     */
    inline void SetType(CostAllocationTagType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of <code>CostAllocationTag</code> object that are returned for this
     * request. The <code>AWSGenerated</code> type tags are tags that Amazon Web
     * Services defines and applies to support Amazon Web Services resources for cost
     * allocation purposes. The <code>UserDefined</code> type tags are tags that you
     * define, create, and apply to resources. </p>
     */
    inline ListCostAllocationTagsRequest& WithType(const CostAllocationTagType& value) { SetType(value); return *this;}

    /**
     * <p>The type of <code>CostAllocationTag</code> object that are returned for this
     * request. The <code>AWSGenerated</code> type tags are tags that Amazon Web
     * Services defines and applies to support Amazon Web Services resources for cost
     * allocation purposes. The <code>UserDefined</code> type tags are tags that you
     * define, create, and apply to resources. </p>
     */
    inline ListCostAllocationTagsRequest& WithType(CostAllocationTagType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline ListCostAllocationTagsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline ListCostAllocationTagsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline ListCostAllocationTagsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of objects that are returned for this request. By default,
     * the request returns 100 results. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of objects that are returned for this request. By default,
     * the request returns 100 results. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of objects that are returned for this request. By default,
     * the request returns 100 results. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of objects that are returned for this request. By default,
     * the request returns 100 results. </p>
     */
    inline ListCostAllocationTagsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    CostAllocationTagStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;

    CostAllocationTagType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
