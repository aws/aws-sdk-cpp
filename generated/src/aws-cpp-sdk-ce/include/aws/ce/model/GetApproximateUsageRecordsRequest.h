/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/ce/model/Granularity.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/ApproximationDimension.h>
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
  class GetApproximateUsageRecordsRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetApproximateUsageRecordsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetApproximateUsageRecords"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>How granular you want the data to be. You can enable data at hourly or daily
     * granularity.</p>
     */
    inline Granularity GetGranularity() const { return m_granularity; }
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }
    inline void SetGranularity(Granularity value) { m_granularityHasBeenSet = true; m_granularity = value; }
    inline GetApproximateUsageRecordsRequest& WithGranularity(Granularity value) { SetGranularity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service metadata for the service or services you want to query. If not
     * specified, all elements are returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServices() const { return m_services; }
    inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }
    template<typename ServicesT = Aws::Vector<Aws::String>>
    void SetServices(ServicesT&& value) { m_servicesHasBeenSet = true; m_services = std::forward<ServicesT>(value); }
    template<typename ServicesT = Aws::Vector<Aws::String>>
    GetApproximateUsageRecordsRequest& WithServices(ServicesT&& value) { SetServices(std::forward<ServicesT>(value)); return *this;}
    template<typename ServicesT = Aws::String>
    GetApproximateUsageRecordsRequest& AddServices(ServicesT&& value) { m_servicesHasBeenSet = true; m_services.emplace_back(std::forward<ServicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The service to evaluate for the usage records. You can choose resource-level
     * data at daily granularity, or hourly granularity with or without resource-level
     * data.</p>
     */
    inline ApproximationDimension GetApproximationDimension() const { return m_approximationDimension; }
    inline bool ApproximationDimensionHasBeenSet() const { return m_approximationDimensionHasBeenSet; }
    inline void SetApproximationDimension(ApproximationDimension value) { m_approximationDimensionHasBeenSet = true; m_approximationDimension = value; }
    inline GetApproximateUsageRecordsRequest& WithApproximationDimension(ApproximationDimension value) { SetApproximationDimension(value); return *this;}
    ///@}
  private:

    Granularity m_granularity{Granularity::NOT_SET};
    bool m_granularityHasBeenSet = false;

    Aws::Vector<Aws::String> m_services;
    bool m_servicesHasBeenSet = false;

    ApproximationDimension m_approximationDimension{ApproximationDimension::NOT_SET};
    bool m_approximationDimensionHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
