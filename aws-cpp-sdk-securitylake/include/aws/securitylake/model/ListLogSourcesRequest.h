/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/Dimension.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class ListLogSourcesRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API ListLogSourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLogSources"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>Lists the log sources in input order, namely Region, source type, and member
     * account.</p>
     */
    inline const Aws::Vector<Dimension>& GetInputOrder() const{ return m_inputOrder; }

    /**
     * <p>Lists the log sources in input order, namely Region, source type, and member
     * account.</p>
     */
    inline bool InputOrderHasBeenSet() const { return m_inputOrderHasBeenSet; }

    /**
     * <p>Lists the log sources in input order, namely Region, source type, and member
     * account.</p>
     */
    inline void SetInputOrder(const Aws::Vector<Dimension>& value) { m_inputOrderHasBeenSet = true; m_inputOrder = value; }

    /**
     * <p>Lists the log sources in input order, namely Region, source type, and member
     * account.</p>
     */
    inline void SetInputOrder(Aws::Vector<Dimension>&& value) { m_inputOrderHasBeenSet = true; m_inputOrder = std::move(value); }

    /**
     * <p>Lists the log sources in input order, namely Region, source type, and member
     * account.</p>
     */
    inline ListLogSourcesRequest& WithInputOrder(const Aws::Vector<Dimension>& value) { SetInputOrder(value); return *this;}

    /**
     * <p>Lists the log sources in input order, namely Region, source type, and member
     * account.</p>
     */
    inline ListLogSourcesRequest& WithInputOrder(Aws::Vector<Dimension>&& value) { SetInputOrder(std::move(value)); return *this;}

    /**
     * <p>Lists the log sources in input order, namely Region, source type, and member
     * account.</p>
     */
    inline ListLogSourcesRequest& AddInputOrder(const Dimension& value) { m_inputOrderHasBeenSet = true; m_inputOrder.push_back(value); return *this; }

    /**
     * <p>Lists the log sources in input order, namely Region, source type, and member
     * account.</p>
     */
    inline ListLogSourcesRequest& AddInputOrder(Dimension&& value) { m_inputOrderHasBeenSet = true; m_inputOrder.push_back(std::move(value)); return *this; }


    /**
     * <p>List the view of log sources for enabled Security Lake accounts in all
     * Regions and source types.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetListAllDimensions() const{ return m_listAllDimensions; }

    /**
     * <p>List the view of log sources for enabled Security Lake accounts in all
     * Regions and source types.</p>
     */
    inline bool ListAllDimensionsHasBeenSet() const { return m_listAllDimensionsHasBeenSet; }

    /**
     * <p>List the view of log sources for enabled Security Lake accounts in all
     * Regions and source types.</p>
     */
    inline void SetListAllDimensions(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { m_listAllDimensionsHasBeenSet = true; m_listAllDimensions = value; }

    /**
     * <p>List the view of log sources for enabled Security Lake accounts in all
     * Regions and source types.</p>
     */
    inline void SetListAllDimensions(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { m_listAllDimensionsHasBeenSet = true; m_listAllDimensions = std::move(value); }

    /**
     * <p>List the view of log sources for enabled Security Lake accounts in all
     * Regions and source types.</p>
     */
    inline ListLogSourcesRequest& WithListAllDimensions(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { SetListAllDimensions(value); return *this;}

    /**
     * <p>List the view of log sources for enabled Security Lake accounts in all
     * Regions and source types.</p>
     */
    inline ListLogSourcesRequest& WithListAllDimensions(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { SetListAllDimensions(std::move(value)); return *this;}

    /**
     * <p>List the view of log sources for enabled Security Lake accounts in all
     * Regions and source types.</p>
     */
    inline ListLogSourcesRequest& AddListAllDimensions(const Aws::String& key, const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_listAllDimensionsHasBeenSet = true; m_listAllDimensions.emplace(key, value); return *this; }

    /**
     * <p>List the view of log sources for enabled Security Lake accounts in all
     * Regions and source types.</p>
     */
    inline ListLogSourcesRequest& AddListAllDimensions(Aws::String&& key, const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_listAllDimensionsHasBeenSet = true; m_listAllDimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>List the view of log sources for enabled Security Lake accounts in all
     * Regions and source types.</p>
     */
    inline ListLogSourcesRequest& AddListAllDimensions(const Aws::String& key, Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_listAllDimensionsHasBeenSet = true; m_listAllDimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>List the view of log sources for enabled Security Lake accounts in all
     * Regions and source types.</p>
     */
    inline ListLogSourcesRequest& AddListAllDimensions(Aws::String&& key, Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_listAllDimensionsHasBeenSet = true; m_listAllDimensions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>List the view of log sources for enabled Security Lake accounts in all
     * Regions and source types.</p>
     */
    inline ListLogSourcesRequest& AddListAllDimensions(const char* key, Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_listAllDimensionsHasBeenSet = true; m_listAllDimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>List the view of log sources for enabled Security Lake accounts in all
     * Regions and source types.</p>
     */
    inline ListLogSourcesRequest& AddListAllDimensions(const char* key, const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_listAllDimensionsHasBeenSet = true; m_listAllDimensions.emplace(key, value); return *this; }


    /**
     * <p>List the view of log sources for enabled Security Lake accounts for the
     * entire region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetListSingleDimension() const{ return m_listSingleDimension; }

    /**
     * <p>List the view of log sources for enabled Security Lake accounts for the
     * entire region.</p>
     */
    inline bool ListSingleDimensionHasBeenSet() const { return m_listSingleDimensionHasBeenSet; }

    /**
     * <p>List the view of log sources for enabled Security Lake accounts for the
     * entire region.</p>
     */
    inline void SetListSingleDimension(const Aws::Vector<Aws::String>& value) { m_listSingleDimensionHasBeenSet = true; m_listSingleDimension = value; }

    /**
     * <p>List the view of log sources for enabled Security Lake accounts for the
     * entire region.</p>
     */
    inline void SetListSingleDimension(Aws::Vector<Aws::String>&& value) { m_listSingleDimensionHasBeenSet = true; m_listSingleDimension = std::move(value); }

    /**
     * <p>List the view of log sources for enabled Security Lake accounts for the
     * entire region.</p>
     */
    inline ListLogSourcesRequest& WithListSingleDimension(const Aws::Vector<Aws::String>& value) { SetListSingleDimension(value); return *this;}

    /**
     * <p>List the view of log sources for enabled Security Lake accounts for the
     * entire region.</p>
     */
    inline ListLogSourcesRequest& WithListSingleDimension(Aws::Vector<Aws::String>&& value) { SetListSingleDimension(std::move(value)); return *this;}

    /**
     * <p>List the view of log sources for enabled Security Lake accounts for the
     * entire region.</p>
     */
    inline ListLogSourcesRequest& AddListSingleDimension(const Aws::String& value) { m_listSingleDimensionHasBeenSet = true; m_listSingleDimension.push_back(value); return *this; }

    /**
     * <p>List the view of log sources for enabled Security Lake accounts for the
     * entire region.</p>
     */
    inline ListLogSourcesRequest& AddListSingleDimension(Aws::String&& value) { m_listSingleDimensionHasBeenSet = true; m_listSingleDimension.push_back(std::move(value)); return *this; }

    /**
     * <p>List the view of log sources for enabled Security Lake accounts for the
     * entire region.</p>
     */
    inline ListLogSourcesRequest& AddListSingleDimension(const char* value) { m_listSingleDimensionHasBeenSet = true; m_listSingleDimension.push_back(value); return *this; }


    /**
     * <p>Lists the log sources for the specified source types in enabled Security Lake
     * accounts for the entire Region, for selected member accounts.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetListTwoDimensions() const{ return m_listTwoDimensions; }

    /**
     * <p>Lists the log sources for the specified source types in enabled Security Lake
     * accounts for the entire Region, for selected member accounts.</p>
     */
    inline bool ListTwoDimensionsHasBeenSet() const { return m_listTwoDimensionsHasBeenSet; }

    /**
     * <p>Lists the log sources for the specified source types in enabled Security Lake
     * accounts for the entire Region, for selected member accounts.</p>
     */
    inline void SetListTwoDimensions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_listTwoDimensionsHasBeenSet = true; m_listTwoDimensions = value; }

    /**
     * <p>Lists the log sources for the specified source types in enabled Security Lake
     * accounts for the entire Region, for selected member accounts.</p>
     */
    inline void SetListTwoDimensions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_listTwoDimensionsHasBeenSet = true; m_listTwoDimensions = std::move(value); }

    /**
     * <p>Lists the log sources for the specified source types in enabled Security Lake
     * accounts for the entire Region, for selected member accounts.</p>
     */
    inline ListLogSourcesRequest& WithListTwoDimensions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetListTwoDimensions(value); return *this;}

    /**
     * <p>Lists the log sources for the specified source types in enabled Security Lake
     * accounts for the entire Region, for selected member accounts.</p>
     */
    inline ListLogSourcesRequest& WithListTwoDimensions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetListTwoDimensions(std::move(value)); return *this;}

    /**
     * <p>Lists the log sources for the specified source types in enabled Security Lake
     * accounts for the entire Region, for selected member accounts.</p>
     */
    inline ListLogSourcesRequest& AddListTwoDimensions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_listTwoDimensionsHasBeenSet = true; m_listTwoDimensions.emplace(key, value); return *this; }

    /**
     * <p>Lists the log sources for the specified source types in enabled Security Lake
     * accounts for the entire Region, for selected member accounts.</p>
     */
    inline ListLogSourcesRequest& AddListTwoDimensions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_listTwoDimensionsHasBeenSet = true; m_listTwoDimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Lists the log sources for the specified source types in enabled Security Lake
     * accounts for the entire Region, for selected member accounts.</p>
     */
    inline ListLogSourcesRequest& AddListTwoDimensions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_listTwoDimensionsHasBeenSet = true; m_listTwoDimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Lists the log sources for the specified source types in enabled Security Lake
     * accounts for the entire Region, for selected member accounts.</p>
     */
    inline ListLogSourcesRequest& AddListTwoDimensions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_listTwoDimensionsHasBeenSet = true; m_listTwoDimensions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Lists the log sources for the specified source types in enabled Security Lake
     * accounts for the entire Region, for selected member accounts.</p>
     */
    inline ListLogSourcesRequest& AddListTwoDimensions(const char* key, Aws::Vector<Aws::String>&& value) { m_listTwoDimensionsHasBeenSet = true; m_listTwoDimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Lists the log sources for the specified source types in enabled Security Lake
     * accounts for the entire Region, for selected member accounts.</p>
     */
    inline ListLogSourcesRequest& AddListTwoDimensions(const char* key, const Aws::Vector<Aws::String>& value) { m_listTwoDimensionsHasBeenSet = true; m_listTwoDimensions.emplace(key, value); return *this; }


    /**
     * <p>The maximum number of accounts for which the configuration is displayed.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of accounts for which the configuration is displayed.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of accounts for which the configuration is displayed.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of accounts for which the configuration is displayed.</p>
     */
    inline ListLogSourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline ListLogSourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline ListLogSourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline ListLogSourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Dimension> m_inputOrder;
    bool m_inputOrderHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_listAllDimensions;
    bool m_listAllDimensionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_listSingleDimension;
    bool m_listSingleDimensionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_listTwoDimensions;
    bool m_listTwoDimensionsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
