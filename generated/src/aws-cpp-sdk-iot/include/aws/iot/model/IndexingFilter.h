/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/GeoLocationTarget.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Provides additional selections for named shadows and geolocation data. </p>
   * <p>To add named shadows to your fleet indexing configuration, set
   * <code>namedShadowIndexingMode</code> to be ON and specify your shadow names in
   * <code>namedShadowNames</code> filter.</p> <p>To add geolocation data to your
   * fleet indexing configuration: </p> <ul> <li> <p>If you store geolocation data in
   * a class/unnamed shadow, set <code>thingIndexingMode</code> to be
   * <code>REGISTRY_AND_SHADOW</code> and specify your geolocation data in
   * <code>geoLocations</code> filter. </p> </li> <li> <p>If you store geolocation
   * data in a named shadow, set <code>namedShadowIndexingMode</code> to be
   * <code>ON</code>, add the shadow name in <code>namedShadowNames</code> filter,
   * and specify your geolocation data in <code>geoLocations</code> filter. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/managing-fleet-index.html">Managing
   * fleet indexing</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/IndexingFilter">AWS
   * API Reference</a></p>
   */
  class IndexingFilter
  {
  public:
    AWS_IOT_API IndexingFilter();
    AWS_IOT_API IndexingFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API IndexingFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The shadow names that you select to index. The default maximum number of
     * shadow names for indexing is 10. To increase the limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNamedShadowNames() const{ return m_namedShadowNames; }

    /**
     * <p>The shadow names that you select to index. The default maximum number of
     * shadow names for indexing is 10. To increase the limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>. </p>
     */
    inline bool NamedShadowNamesHasBeenSet() const { return m_namedShadowNamesHasBeenSet; }

    /**
     * <p>The shadow names that you select to index. The default maximum number of
     * shadow names for indexing is 10. To increase the limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>. </p>
     */
    inline void SetNamedShadowNames(const Aws::Vector<Aws::String>& value) { m_namedShadowNamesHasBeenSet = true; m_namedShadowNames = value; }

    /**
     * <p>The shadow names that you select to index. The default maximum number of
     * shadow names for indexing is 10. To increase the limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>. </p>
     */
    inline void SetNamedShadowNames(Aws::Vector<Aws::String>&& value) { m_namedShadowNamesHasBeenSet = true; m_namedShadowNames = std::move(value); }

    /**
     * <p>The shadow names that you select to index. The default maximum number of
     * shadow names for indexing is 10. To increase the limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>. </p>
     */
    inline IndexingFilter& WithNamedShadowNames(const Aws::Vector<Aws::String>& value) { SetNamedShadowNames(value); return *this;}

    /**
     * <p>The shadow names that you select to index. The default maximum number of
     * shadow names for indexing is 10. To increase the limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>. </p>
     */
    inline IndexingFilter& WithNamedShadowNames(Aws::Vector<Aws::String>&& value) { SetNamedShadowNames(std::move(value)); return *this;}

    /**
     * <p>The shadow names that you select to index. The default maximum number of
     * shadow names for indexing is 10. To increase the limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>. </p>
     */
    inline IndexingFilter& AddNamedShadowNames(const Aws::String& value) { m_namedShadowNamesHasBeenSet = true; m_namedShadowNames.push_back(value); return *this; }

    /**
     * <p>The shadow names that you select to index. The default maximum number of
     * shadow names for indexing is 10. To increase the limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>. </p>
     */
    inline IndexingFilter& AddNamedShadowNames(Aws::String&& value) { m_namedShadowNamesHasBeenSet = true; m_namedShadowNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The shadow names that you select to index. The default maximum number of
     * shadow names for indexing is 10. To increase the limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>. </p>
     */
    inline IndexingFilter& AddNamedShadowNames(const char* value) { m_namedShadowNamesHasBeenSet = true; m_namedShadowNames.push_back(value); return *this; }


    /**
     * <p>The list of geolocation targets that you select to index. The default maximum
     * number of geolocation targets for indexing is <code>1</code>. To increase the
     * limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline const Aws::Vector<GeoLocationTarget>& GetGeoLocations() const{ return m_geoLocations; }

    /**
     * <p>The list of geolocation targets that you select to index. The default maximum
     * number of geolocation targets for indexing is <code>1</code>. To increase the
     * limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline bool GeoLocationsHasBeenSet() const { return m_geoLocationsHasBeenSet; }

    /**
     * <p>The list of geolocation targets that you select to index. The default maximum
     * number of geolocation targets for indexing is <code>1</code>. To increase the
     * limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline void SetGeoLocations(const Aws::Vector<GeoLocationTarget>& value) { m_geoLocationsHasBeenSet = true; m_geoLocations = value; }

    /**
     * <p>The list of geolocation targets that you select to index. The default maximum
     * number of geolocation targets for indexing is <code>1</code>. To increase the
     * limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline void SetGeoLocations(Aws::Vector<GeoLocationTarget>&& value) { m_geoLocationsHasBeenSet = true; m_geoLocations = std::move(value); }

    /**
     * <p>The list of geolocation targets that you select to index. The default maximum
     * number of geolocation targets for indexing is <code>1</code>. To increase the
     * limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline IndexingFilter& WithGeoLocations(const Aws::Vector<GeoLocationTarget>& value) { SetGeoLocations(value); return *this;}

    /**
     * <p>The list of geolocation targets that you select to index. The default maximum
     * number of geolocation targets for indexing is <code>1</code>. To increase the
     * limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline IndexingFilter& WithGeoLocations(Aws::Vector<GeoLocationTarget>&& value) { SetGeoLocations(std::move(value)); return *this;}

    /**
     * <p>The list of geolocation targets that you select to index. The default maximum
     * number of geolocation targets for indexing is <code>1</code>. To increase the
     * limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline IndexingFilter& AddGeoLocations(const GeoLocationTarget& value) { m_geoLocationsHasBeenSet = true; m_geoLocations.push_back(value); return *this; }

    /**
     * <p>The list of geolocation targets that you select to index. The default maximum
     * number of geolocation targets for indexing is <code>1</code>. To increase the
     * limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline IndexingFilter& AddGeoLocations(GeoLocationTarget&& value) { m_geoLocationsHasBeenSet = true; m_geoLocations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_namedShadowNames;
    bool m_namedShadowNamesHasBeenSet = false;

    Aws::Vector<GeoLocationTarget> m_geoLocations;
    bool m_geoLocationsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
