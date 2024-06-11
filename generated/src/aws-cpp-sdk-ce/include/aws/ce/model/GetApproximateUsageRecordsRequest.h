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
    AWS_COSTEXPLORER_API GetApproximateUsageRecordsRequest();

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
    inline const Granularity& GetGranularity() const{ return m_granularity; }
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }
    inline void SetGranularity(const Granularity& value) { m_granularityHasBeenSet = true; m_granularity = value; }
    inline void SetGranularity(Granularity&& value) { m_granularityHasBeenSet = true; m_granularity = std::move(value); }
    inline GetApproximateUsageRecordsRequest& WithGranularity(const Granularity& value) { SetGranularity(value); return *this;}
    inline GetApproximateUsageRecordsRequest& WithGranularity(Granularity&& value) { SetGranularity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service metadata for the service or services you want to query. If not
     * specified, all elements are returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServices() const{ return m_services; }
    inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }
    inline void SetServices(const Aws::Vector<Aws::String>& value) { m_servicesHasBeenSet = true; m_services = value; }
    inline void SetServices(Aws::Vector<Aws::String>&& value) { m_servicesHasBeenSet = true; m_services = std::move(value); }
    inline GetApproximateUsageRecordsRequest& WithServices(const Aws::Vector<Aws::String>& value) { SetServices(value); return *this;}
    inline GetApproximateUsageRecordsRequest& WithServices(Aws::Vector<Aws::String>&& value) { SetServices(std::move(value)); return *this;}
    inline GetApproximateUsageRecordsRequest& AddServices(const Aws::String& value) { m_servicesHasBeenSet = true; m_services.push_back(value); return *this; }
    inline GetApproximateUsageRecordsRequest& AddServices(Aws::String&& value) { m_servicesHasBeenSet = true; m_services.push_back(std::move(value)); return *this; }
    inline GetApproximateUsageRecordsRequest& AddServices(const char* value) { m_servicesHasBeenSet = true; m_services.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The service to evaluate for the usage records. You can choose resource-level
     * data at daily granularity, or hourly granularity with or without resource-level
     * data.</p>
     */
    inline const ApproximationDimension& GetApproximationDimension() const{ return m_approximationDimension; }
    inline bool ApproximationDimensionHasBeenSet() const { return m_approximationDimensionHasBeenSet; }
    inline void SetApproximationDimension(const ApproximationDimension& value) { m_approximationDimensionHasBeenSet = true; m_approximationDimension = value; }
    inline void SetApproximationDimension(ApproximationDimension&& value) { m_approximationDimensionHasBeenSet = true; m_approximationDimension = std::move(value); }
    inline GetApproximateUsageRecordsRequest& WithApproximationDimension(const ApproximationDimension& value) { SetApproximationDimension(value); return *this;}
    inline GetApproximateUsageRecordsRequest& WithApproximationDimension(ApproximationDimension&& value) { SetApproximationDimension(std::move(value)); return *this;}
    ///@}
  private:

    Granularity m_granularity;
    bool m_granularityHasBeenSet = false;

    Aws::Vector<Aws::String> m_services;
    bool m_servicesHasBeenSet = false;

    ApproximationDimension m_approximationDimension;
    bool m_approximationDimensionHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
