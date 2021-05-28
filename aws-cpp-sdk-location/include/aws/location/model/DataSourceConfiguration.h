/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/IntendedUse.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>Specifies the data storage option chosen for requesting Places.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DataSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_LOCATIONSERVICE_API DataSourceConfiguration
  {
  public:
    DataSourceConfiguration();
    DataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    DataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies how the results of an operation will be stored by the caller. </p>
     * <p>Valid values include:</p> <ul> <li> <p> <code>SingleUse</code> specifies that
     * the results won't be stored. </p> </li> <li> <p> <code>Storage</code> specifies
     * that the result can be cached or stored in a database.</p>  <p>Place
     * index resources using HERE as a data provider can't be configured to store
     * results for locations in Japan when choosing <code>Storage</code> for the
     * <code>IntendedUse</code> parameter.</p>  </li> </ul> <p>Default
     * value: <code>SingleUse</code> </p>
     */
    inline const IntendedUse& GetIntendedUse() const{ return m_intendedUse; }

    /**
     * <p>Specifies how the results of an operation will be stored by the caller. </p>
     * <p>Valid values include:</p> <ul> <li> <p> <code>SingleUse</code> specifies that
     * the results won't be stored. </p> </li> <li> <p> <code>Storage</code> specifies
     * that the result can be cached or stored in a database.</p>  <p>Place
     * index resources using HERE as a data provider can't be configured to store
     * results for locations in Japan when choosing <code>Storage</code> for the
     * <code>IntendedUse</code> parameter.</p>  </li> </ul> <p>Default
     * value: <code>SingleUse</code> </p>
     */
    inline bool IntendedUseHasBeenSet() const { return m_intendedUseHasBeenSet; }

    /**
     * <p>Specifies how the results of an operation will be stored by the caller. </p>
     * <p>Valid values include:</p> <ul> <li> <p> <code>SingleUse</code> specifies that
     * the results won't be stored. </p> </li> <li> <p> <code>Storage</code> specifies
     * that the result can be cached or stored in a database.</p>  <p>Place
     * index resources using HERE as a data provider can't be configured to store
     * results for locations in Japan when choosing <code>Storage</code> for the
     * <code>IntendedUse</code> parameter.</p>  </li> </ul> <p>Default
     * value: <code>SingleUse</code> </p>
     */
    inline void SetIntendedUse(const IntendedUse& value) { m_intendedUseHasBeenSet = true; m_intendedUse = value; }

    /**
     * <p>Specifies how the results of an operation will be stored by the caller. </p>
     * <p>Valid values include:</p> <ul> <li> <p> <code>SingleUse</code> specifies that
     * the results won't be stored. </p> </li> <li> <p> <code>Storage</code> specifies
     * that the result can be cached or stored in a database.</p>  <p>Place
     * index resources using HERE as a data provider can't be configured to store
     * results for locations in Japan when choosing <code>Storage</code> for the
     * <code>IntendedUse</code> parameter.</p>  </li> </ul> <p>Default
     * value: <code>SingleUse</code> </p>
     */
    inline void SetIntendedUse(IntendedUse&& value) { m_intendedUseHasBeenSet = true; m_intendedUse = std::move(value); }

    /**
     * <p>Specifies how the results of an operation will be stored by the caller. </p>
     * <p>Valid values include:</p> <ul> <li> <p> <code>SingleUse</code> specifies that
     * the results won't be stored. </p> </li> <li> <p> <code>Storage</code> specifies
     * that the result can be cached or stored in a database.</p>  <p>Place
     * index resources using HERE as a data provider can't be configured to store
     * results for locations in Japan when choosing <code>Storage</code> for the
     * <code>IntendedUse</code> parameter.</p>  </li> </ul> <p>Default
     * value: <code>SingleUse</code> </p>
     */
    inline DataSourceConfiguration& WithIntendedUse(const IntendedUse& value) { SetIntendedUse(value); return *this;}

    /**
     * <p>Specifies how the results of an operation will be stored by the caller. </p>
     * <p>Valid values include:</p> <ul> <li> <p> <code>SingleUse</code> specifies that
     * the results won't be stored. </p> </li> <li> <p> <code>Storage</code> specifies
     * that the result can be cached or stored in a database.</p>  <p>Place
     * index resources using HERE as a data provider can't be configured to store
     * results for locations in Japan when choosing <code>Storage</code> for the
     * <code>IntendedUse</code> parameter.</p>  </li> </ul> <p>Default
     * value: <code>SingleUse</code> </p>
     */
    inline DataSourceConfiguration& WithIntendedUse(IntendedUse&& value) { SetIntendedUse(std::move(value)); return *this;}

  private:

    IntendedUse m_intendedUse;
    bool m_intendedUseHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
