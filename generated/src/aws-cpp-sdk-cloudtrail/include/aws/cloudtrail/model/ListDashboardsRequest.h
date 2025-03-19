/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/DashboardType.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class ListDashboardsRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API ListDashboardsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDashboards"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> Specify a name prefix to filter on. </p>
     */
    inline const Aws::String& GetNamePrefix() const { return m_namePrefix; }
    inline bool NamePrefixHasBeenSet() const { return m_namePrefixHasBeenSet; }
    template<typename NamePrefixT = Aws::String>
    void SetNamePrefix(NamePrefixT&& value) { m_namePrefixHasBeenSet = true; m_namePrefix = std::forward<NamePrefixT>(value); }
    template<typename NamePrefixT = Aws::String>
    ListDashboardsRequest& WithNamePrefix(NamePrefixT&& value) { SetNamePrefix(std::forward<NamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specify a dashboard type to filter on: <code>CUSTOM</code> or
     * <code>MANAGED</code>. </p>
     */
    inline DashboardType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DashboardType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ListDashboardsRequest& WithType(DashboardType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A token you can use to get the next page of dashboard results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDashboardsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of dashboards to display on a single page. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDashboardsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_namePrefix;
    bool m_namePrefixHasBeenSet = false;

    DashboardType m_type{DashboardType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
