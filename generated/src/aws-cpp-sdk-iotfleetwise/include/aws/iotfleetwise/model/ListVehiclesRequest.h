/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class ListVehiclesRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API ListVehiclesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVehicles"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of a vehicle model (model manifest). You can
     * use this optional parameter to list only the vehicles created from a certain
     * vehicle model. </p>
     */
    inline const Aws::String& GetModelManifestArn() const{ return m_modelManifestArn; }
    inline bool ModelManifestArnHasBeenSet() const { return m_modelManifestArnHasBeenSet; }
    inline void SetModelManifestArn(const Aws::String& value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn = value; }
    inline void SetModelManifestArn(Aws::String&& value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn = std::move(value); }
    inline void SetModelManifestArn(const char* value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn.assign(value); }
    inline ListVehiclesRequest& WithModelManifestArn(const Aws::String& value) { SetModelManifestArn(value); return *this;}
    inline ListVehiclesRequest& WithModelManifestArn(Aws::String&& value) { SetModelManifestArn(std::move(value)); return *this;}
    inline ListVehiclesRequest& WithModelManifestArn(const char* value) { SetModelManifestArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified names of the attributes. You can use this optional
     * parameter to list the vehicles containing all the attributes in the request. For
     * example, <code>attributeNames</code> could be "<code>Vehicle.Body.Engine.Type,
     * Vehicle.Color</code>" and the corresponding <code>attributeValues</code> could
     * be "<code>1.3 L R2, Blue</code>" . In this case, the API will filter vehicles
     * with an attribute name <code>Vehicle.Body.Engine.Type</code> that contains a
     * value of <code>1.3 L R2</code> AND an attribute name <code>Vehicle.Color</code>
     * that contains a value of "<code>Blue</code>". A request must contain unique
     * values for the <code>attributeNames</code> filter and the matching number of
     * <code>attributeValues</code> filters to return the subset of vehicles that match
     * the attributes filter condition.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributeNames() const{ return m_attributeNames; }
    inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }
    inline void SetAttributeNames(const Aws::Vector<Aws::String>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }
    inline void SetAttributeNames(Aws::Vector<Aws::String>&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = std::move(value); }
    inline ListVehiclesRequest& WithAttributeNames(const Aws::Vector<Aws::String>& value) { SetAttributeNames(value); return *this;}
    inline ListVehiclesRequest& WithAttributeNames(Aws::Vector<Aws::String>&& value) { SetAttributeNames(std::move(value)); return *this;}
    inline ListVehiclesRequest& AddAttributeNames(const Aws::String& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }
    inline ListVehiclesRequest& AddAttributeNames(Aws::String&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(std::move(value)); return *this; }
    inline ListVehiclesRequest& AddAttributeNames(const char* value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Static information about a vehicle attribute value in string format. You can
     * use this optional parameter in conjunction with <code>attributeNames</code> to
     * list the vehicles containing all the <code>attributeValues</code> corresponding
     * to the <code>attributeNames</code> filter. For example,
     * <code>attributeValues</code> could be "<code>1.3 L R2, Blue</code>" and the
     * corresponding <code>attributeNames</code> filter could be
     * "<code>Vehicle.Body.Engine.Type, Vehicle.Color</code>". In this case, the API
     * will filter vehicles with attribute name <code>Vehicle.Body.Engine.Type</code>
     * that contains a value of <code>1.3 L R2</code> AND an attribute name
     * <code>Vehicle.Color</code> that contains a value of "<code>Blue</code>". A
     * request must contain unique values for the <code>attributeNames</code> filter
     * and the matching number of <code>attributeValues</code> filter to return the
     * subset of vehicles that match the attributes filter condition.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributeValues() const{ return m_attributeValues; }
    inline bool AttributeValuesHasBeenSet() const { return m_attributeValuesHasBeenSet; }
    inline void SetAttributeValues(const Aws::Vector<Aws::String>& value) { m_attributeValuesHasBeenSet = true; m_attributeValues = value; }
    inline void SetAttributeValues(Aws::Vector<Aws::String>&& value) { m_attributeValuesHasBeenSet = true; m_attributeValues = std::move(value); }
    inline ListVehiclesRequest& WithAttributeValues(const Aws::Vector<Aws::String>& value) { SetAttributeValues(value); return *this;}
    inline ListVehiclesRequest& WithAttributeValues(Aws::Vector<Aws::String>&& value) { SetAttributeValues(std::move(value)); return *this;}
    inline ListVehiclesRequest& AddAttributeValues(const Aws::String& value) { m_attributeValuesHasBeenSet = true; m_attributeValues.push_back(value); return *this; }
    inline ListVehiclesRequest& AddAttributeValues(Aws::String&& value) { m_attributeValuesHasBeenSet = true; m_attributeValues.push_back(std::move(value)); return *this; }
    inline ListVehiclesRequest& AddAttributeValues(const char* value) { m_attributeValuesHasBeenSet = true; m_attributeValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token for the next set of results.</p> <p>If the results of a
     * search are large, only a portion of the results are returned, and a
     * <code>nextToken</code> pagination token is returned in the response. To retrieve
     * the next set of results, reissue the search request and include the returned
     * token. When all results have been returned, the response does not contain a
     * pagination token value. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListVehiclesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListVehiclesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListVehiclesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return, between 1 and 100, inclusive.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListVehiclesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_modelManifestArn;
    bool m_modelManifestArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributeNames;
    bool m_attributeNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributeValues;
    bool m_attributeValuesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
