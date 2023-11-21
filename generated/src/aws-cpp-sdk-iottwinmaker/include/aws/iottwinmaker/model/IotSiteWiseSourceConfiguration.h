/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/IotSiteWiseSourceConfigurationFilter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The metadata transfer job AWS IoT SiteWise source
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/IotSiteWiseSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class IotSiteWiseSourceConfiguration
  {
  public:
    AWS_IOTTWINMAKER_API IotSiteWiseSourceConfiguration();
    AWS_IOTTWINMAKER_API IotSiteWiseSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API IotSiteWiseSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS IoT SiteWise soucre configuration filters.</p>
     */
    inline const Aws::Vector<IotSiteWiseSourceConfigurationFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The AWS IoT SiteWise soucre configuration filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The AWS IoT SiteWise soucre configuration filters.</p>
     */
    inline void SetFilters(const Aws::Vector<IotSiteWiseSourceConfigurationFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The AWS IoT SiteWise soucre configuration filters.</p>
     */
    inline void SetFilters(Aws::Vector<IotSiteWiseSourceConfigurationFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The AWS IoT SiteWise soucre configuration filters.</p>
     */
    inline IotSiteWiseSourceConfiguration& WithFilters(const Aws::Vector<IotSiteWiseSourceConfigurationFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The AWS IoT SiteWise soucre configuration filters.</p>
     */
    inline IotSiteWiseSourceConfiguration& WithFilters(Aws::Vector<IotSiteWiseSourceConfigurationFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The AWS IoT SiteWise soucre configuration filters.</p>
     */
    inline IotSiteWiseSourceConfiguration& AddFilters(const IotSiteWiseSourceConfigurationFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The AWS IoT SiteWise soucre configuration filters.</p>
     */
    inline IotSiteWiseSourceConfiguration& AddFilters(IotSiteWiseSourceConfigurationFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<IotSiteWiseSourceConfigurationFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
