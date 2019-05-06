/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/GetReservedNodeExchangeOfferingsInputMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API GetReservedNodeExchangeOfferingsRequest : public RedshiftRequest
  {
  public:
    GetReservedNodeExchangeOfferingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReservedNodeExchangeOfferings"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A string representing the node identifier for the DC1 Reserved Node to be
     * exchanged.</p>
     */
    inline const Aws::String& GetReservedNodeId() const{ return m_reservedNodeId; }

    /**
     * <p>A string representing the node identifier for the DC1 Reserved Node to be
     * exchanged.</p>
     */
    inline bool ReservedNodeIdHasBeenSet() const { return m_reservedNodeIdHasBeenSet; }

    /**
     * <p>A string representing the node identifier for the DC1 Reserved Node to be
     * exchanged.</p>
     */
    inline void SetReservedNodeId(const Aws::String& value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId = value; }

    /**
     * <p>A string representing the node identifier for the DC1 Reserved Node to be
     * exchanged.</p>
     */
    inline void SetReservedNodeId(Aws::String&& value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId = std::move(value); }

    /**
     * <p>A string representing the node identifier for the DC1 Reserved Node to be
     * exchanged.</p>
     */
    inline void SetReservedNodeId(const char* value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId.assign(value); }

    /**
     * <p>A string representing the node identifier for the DC1 Reserved Node to be
     * exchanged.</p>
     */
    inline GetReservedNodeExchangeOfferingsRequest& WithReservedNodeId(const Aws::String& value) { SetReservedNodeId(value); return *this;}

    /**
     * <p>A string representing the node identifier for the DC1 Reserved Node to be
     * exchanged.</p>
     */
    inline GetReservedNodeExchangeOfferingsRequest& WithReservedNodeId(Aws::String&& value) { SetReservedNodeId(std::move(value)); return *this;}

    /**
     * <p>A string representing the node identifier for the DC1 Reserved Node to be
     * exchanged.</p>
     */
    inline GetReservedNodeExchangeOfferingsRequest& WithReservedNodeId(const char* value) { SetReservedNodeId(value); return *this;}


    /**
     * <p>An integer setting the maximum number of ReservedNodeOfferings to
     * retrieve.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>An integer setting the maximum number of ReservedNodeOfferings to
     * retrieve.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>An integer setting the maximum number of ReservedNodeOfferings to
     * retrieve.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>An integer setting the maximum number of ReservedNodeOfferings to
     * retrieve.</p>
     */
    inline GetReservedNodeExchangeOfferingsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>A value that indicates the starting point for the next set of
     * ReservedNodeOfferings.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A value that indicates the starting point for the next set of
     * ReservedNodeOfferings.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>A value that indicates the starting point for the next set of
     * ReservedNodeOfferings.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>A value that indicates the starting point for the next set of
     * ReservedNodeOfferings.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>A value that indicates the starting point for the next set of
     * ReservedNodeOfferings.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>A value that indicates the starting point for the next set of
     * ReservedNodeOfferings.</p>
     */
    inline GetReservedNodeExchangeOfferingsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of
     * ReservedNodeOfferings.</p>
     */
    inline GetReservedNodeExchangeOfferingsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of
     * ReservedNodeOfferings.</p>
     */
    inline GetReservedNodeExchangeOfferingsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_reservedNodeId;
    bool m_reservedNodeIdHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
