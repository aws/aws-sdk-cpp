/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class CreateRouteCalculatorRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API CreateRouteCalculatorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRouteCalculator"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the route calculator resource. </p> <p>Requirements:</p> <ul>
     * <li> <p>Can use alphanumeric characters (A–Z, a–z, 0–9) , hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique Route calculator
     * resource name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExampleRouteCalculator</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetCalculatorName() const { return m_calculatorName; }
    inline bool CalculatorNameHasBeenSet() const { return m_calculatorNameHasBeenSet; }
    template<typename CalculatorNameT = Aws::String>
    void SetCalculatorName(CalculatorNameT&& value) { m_calculatorNameHasBeenSet = true; m_calculatorName = std::forward<CalculatorNameT>(value); }
    template<typename CalculatorNameT = Aws::String>
    CreateRouteCalculatorRequest& WithCalculatorName(CalculatorNameT&& value) { SetCalculatorName(std::forward<CalculatorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the data provider of traffic and road network data.</p> 
     * <p>This field is case-sensitive. Enter the valid values as shown. For example,
     * entering <code>HERE</code> returns an error.</p>  <p>Valid values
     * include:</p> <ul> <li> <p> <code>Esri</code> – For additional information about
     * <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/esri.html">Esri</a>'s
     * coverage in your region of interest, see <a
     * href="https://doc.arcgis.com/en/arcgis-online/reference/network-coverage.htm">Esri
     * details on street networks and traffic coverage</a>.</p> <p>Route calculators
     * that use Esri as a data source only calculate routes that are shorter than 400
     * km.</p> </li> <li> <p> <code>Grab</code> – Grab provides routing functionality
     * for Southeast Asia. For additional information about <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/grab.html">GrabMaps</a>'
     * coverage, see <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/grab.html#grab-coverage-area">GrabMaps
     * countries and areas covered</a>.</p> </li> <li> <p> <code>Here</code> – For
     * additional information about <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/HERE.html">HERE
     * Technologies</a>' coverage in your region of interest, see <a
     * href="https://developer.here.com/documentation/routing-api/dev_guide/topics/coverage/car-routing.html">HERE
     * car routing coverage</a> and <a
     * href="https://developer.here.com/documentation/routing-api/dev_guide/topics/coverage/truck-routing.html">HERE
     * truck routing coverage</a>.</p> </li> </ul> <p>For additional information , see
     * <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/what-is-data-provider.html">Data
     * providers</a> on the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = Aws::String>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = Aws::String>
    CreateRouteCalculatorRequest& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional description for the route calculator resource.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateRouteCalculatorRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies one or more tags to the route calculator resource. A tag is a
     * key-value pair helps manage, identify, search, and filter your resources by
     * labelling them.</p> <ul> <li> <p>For example: { <code>"tag1" : "value1"</code>,
     * <code>"tag2" : "value2"</code>}</p> </li> </ul> <p>Format: <code>"key" :
     * "value"</code> </p> <p>Restrictions:</p> <ul> <li> <p>Maximum 50 tags per
     * resource</p> </li> <li> <p>Each resource tag must be unique with a maximum of
     * one value.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>Can use alphanumeric characters (A–Z, a–z, 0–9), and the
     * following characters: + - = . _ : / @. </p> </li> <li> <p>Cannot use "aws:" as a
     * prefix for a key.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateRouteCalculatorRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateRouteCalculatorRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_calculatorName;
    bool m_calculatorNameHasBeenSet = false;

    Aws::String m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
