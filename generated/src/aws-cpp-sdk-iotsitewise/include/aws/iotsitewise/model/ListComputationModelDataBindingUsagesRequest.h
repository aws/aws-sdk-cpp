/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/model/DataBindingValueFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class ListComputationModelDataBindingUsagesRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API ListComputationModelDataBindingUsagesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListComputationModelDataBindingUsages"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A filter used to limit the returned data binding usages based on specific
     * data binding values. You can filter by asset, asset model, asset property, or
     * asset model property to find all computation models using these specific data
     * sources.</p>
     */
    inline const DataBindingValueFilter& GetDataBindingValueFilter() const { return m_dataBindingValueFilter; }
    inline bool DataBindingValueFilterHasBeenSet() const { return m_dataBindingValueFilterHasBeenSet; }
    template<typename DataBindingValueFilterT = DataBindingValueFilter>
    void SetDataBindingValueFilter(DataBindingValueFilterT&& value) { m_dataBindingValueFilterHasBeenSet = true; m_dataBindingValueFilter = std::forward<DataBindingValueFilterT>(value); }
    template<typename DataBindingValueFilterT = DataBindingValueFilter>
    ListComputationModelDataBindingUsagesRequest& WithDataBindingValueFilter(DataBindingValueFilterT&& value) { SetDataBindingValueFilter(std::forward<DataBindingValueFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListComputationModelDataBindingUsagesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results returned for each paginated request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListComputationModelDataBindingUsagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    DataBindingValueFilter m_dataBindingValueFilter;
    bool m_dataBindingValueFilterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
