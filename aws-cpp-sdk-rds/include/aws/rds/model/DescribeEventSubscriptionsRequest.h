/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /*
    <p></p>
  */
  class AWS_RDS_API DescribeEventSubscriptionsRequest : public RDSRequest
  {
  public:
    DescribeEventSubscriptionsRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The name of the RDS event notification subscription you want to describe.</p>
    */
    inline const Aws::String& GetSubscriptionName() const{ return m_subscriptionName; }

    /*
     <p>The name of the RDS event notification subscription you want to describe.</p>
    */
    inline void SetSubscriptionName(const Aws::String& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }

    /*
     <p>The name of the RDS event notification subscription you want to describe.</p>
    */
    inline void SetSubscriptionName(Aws::String&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }

    /*
     <p>The name of the RDS event notification subscription you want to describe.</p>
    */
    inline void SetSubscriptionName(const char* value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName.assign(value); }

    /*
     <p>The name of the RDS event notification subscription you want to describe.</p>
    */
    inline DescribeEventSubscriptionsRequest& WithSubscriptionName(const Aws::String& value) { SetSubscriptionName(value); return *this;}

    /*
     <p>The name of the RDS event notification subscription you want to describe.</p>
    */
    inline DescribeEventSubscriptionsRequest& WithSubscriptionName(Aws::String&& value) { SetSubscriptionName(value); return *this;}

    /*
     <p>The name of the RDS event notification subscription you want to describe.</p>
    */
    inline DescribeEventSubscriptionsRequest& WithSubscriptionName(const char* value) { SetSubscriptionName(value); return *this;}

    /*
     <p> The maximum number of records to include in the response. If more records exist than the specified <code>MaxRecords</code> value, a pagination token called a marker is included in the response so that the remaining results can be retrieved. </p> <p>Default: 100</p> <p>Constraints: minimum 20, maximum 100</p>
    */
    inline long GetMaxRecords() const{ return m_maxRecords; }

    /*
     <p> The maximum number of records to include in the response. If more records exist than the specified <code>MaxRecords</code> value, a pagination token called a marker is included in the response so that the remaining results can be retrieved. </p> <p>Default: 100</p> <p>Constraints: minimum 20, maximum 100</p>
    */
    inline void SetMaxRecords(long value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /*
     <p> The maximum number of records to include in the response. If more records exist than the specified <code>MaxRecords</code> value, a pagination token called a marker is included in the response so that the remaining results can be retrieved. </p> <p>Default: 100</p> <p>Constraints: minimum 20, maximum 100</p>
    */
    inline DescribeEventSubscriptionsRequest& WithMaxRecords(long value) { SetMaxRecords(value); return *this;}

    /*
     <p> An optional pagination token provided by a previous DescribeOrderableDBInstanceOptions request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code> . </p>
    */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /*
     <p> An optional pagination token provided by a previous DescribeOrderableDBInstanceOptions request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code> . </p>
    */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p> An optional pagination token provided by a previous DescribeOrderableDBInstanceOptions request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code> . </p>
    */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p> An optional pagination token provided by a previous DescribeOrderableDBInstanceOptions request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code> . </p>
    */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /*
     <p> An optional pagination token provided by a previous DescribeOrderableDBInstanceOptions request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code> . </p>
    */
    inline DescribeEventSubscriptionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /*
     <p> An optional pagination token provided by a previous DescribeOrderableDBInstanceOptions request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code> . </p>
    */
    inline DescribeEventSubscriptionsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /*
     <p> An optional pagination token provided by a previous DescribeOrderableDBInstanceOptions request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code> . </p>
    */
    inline DescribeEventSubscriptionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet;
    long m_maxRecords;
    bool m_maxRecordsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
