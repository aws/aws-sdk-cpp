/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A route calculator resource listed in your Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListRouteCalculatorsResponseEntry">AWS
   * API Reference</a></p>
   */
  class ListRouteCalculatorsResponseEntry
  {
  public:
    AWS_LOCATIONSERVICE_API ListRouteCalculatorsResponseEntry() = default;
    AWS_LOCATIONSERVICE_API ListRouteCalculatorsResponseEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API ListRouteCalculatorsResponseEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the route calculator resource.</p>
     */
    inline const Aws::String& GetCalculatorName() const { return m_calculatorName; }
    inline bool CalculatorNameHasBeenSet() const { return m_calculatorNameHasBeenSet; }
    template<typename CalculatorNameT = Aws::String>
    void SetCalculatorName(CalculatorNameT&& value) { m_calculatorNameHasBeenSet = true; m_calculatorName = std::forward<CalculatorNameT>(value); }
    template<typename CalculatorNameT = Aws::String>
    ListRouteCalculatorsResponseEntry& WithCalculatorName(CalculatorNameT&& value) { SetCalculatorName(std::forward<CalculatorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional description of the route calculator resource.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ListRouteCalculatorsResponseEntry& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data provider of traffic and road network data. Indicates one of the
     * available providers:</p> <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p>
     * <code>Grab</code> </p> </li> <li> <p> <code>Here</code> </p> </li> </ul> <p>For
     * more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline const Aws::String& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = Aws::String>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = Aws::String>
    ListRouteCalculatorsResponseEntry& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the route calculator resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p> <ul> <li> <p>For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    ListRouteCalculatorsResponseEntry& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the route calculator resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p> <ul> <li> <p>For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    ListRouteCalculatorsResponseEntry& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_calculatorName;
    bool m_calculatorNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
