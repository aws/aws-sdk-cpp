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
    <p> </p>
  */
  class AWS_RDS_API DescribeOptionGroupOptionsRequest : public RDSRequest
  {
  public:
    DescribeOptionGroupOptionsRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> Options available for the given DB engine name to be described. </p>
    */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }

    /*
     <p> Options available for the given DB engine name to be described. </p>
    */
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /*
     <p> Options available for the given DB engine name to be described. </p>
    */
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /*
     <p> Options available for the given DB engine name to be described. </p>
    */
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }

    /*
     <p> Options available for the given DB engine name to be described. </p>
    */
    inline DescribeOptionGroupOptionsRequest& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}

    /*
     <p> Options available for the given DB engine name to be described. </p>
    */
    inline DescribeOptionGroupOptionsRequest& WithEngineName(Aws::String&& value) { SetEngineName(value); return *this;}

    /*
     <p> Options available for the given DB engine name to be described. </p>
    */
    inline DescribeOptionGroupOptionsRequest& WithEngineName(const char* value) { SetEngineName(value); return *this;}

    /*
     <p> If specified, filters the results to include only options for the specified major engine version. </p>
    */
    inline const Aws::String& GetMajorEngineVersion() const{ return m_majorEngineVersion; }

    /*
     <p> If specified, filters the results to include only options for the specified major engine version. </p>
    */
    inline void SetMajorEngineVersion(const Aws::String& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = value; }

    /*
     <p> If specified, filters the results to include only options for the specified major engine version. </p>
    */
    inline void SetMajorEngineVersion(Aws::String&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = value; }

    /*
     <p> If specified, filters the results to include only options for the specified major engine version. </p>
    */
    inline void SetMajorEngineVersion(const char* value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion.assign(value); }

    /*
     <p> If specified, filters the results to include only options for the specified major engine version. </p>
    */
    inline DescribeOptionGroupOptionsRequest& WithMajorEngineVersion(const Aws::String& value) { SetMajorEngineVersion(value); return *this;}

    /*
     <p> If specified, filters the results to include only options for the specified major engine version. </p>
    */
    inline DescribeOptionGroupOptionsRequest& WithMajorEngineVersion(Aws::String&& value) { SetMajorEngineVersion(value); return *this;}

    /*
     <p> If specified, filters the results to include only options for the specified major engine version. </p>
    */
    inline DescribeOptionGroupOptionsRequest& WithMajorEngineVersion(const char* value) { SetMajorEngineVersion(value); return *this;}

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
    inline DescribeOptionGroupOptionsRequest& WithMaxRecords(long value) { SetMaxRecords(value); return *this;}

    /*
     <p>An optional pagination token provided by a previous request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>.</p>
    */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /*
     <p>An optional pagination token provided by a previous request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>.</p>
    */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p>An optional pagination token provided by a previous request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>.</p>
    */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p>An optional pagination token provided by a previous request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>.</p>
    */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /*
     <p>An optional pagination token provided by a previous request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>.</p>
    */
    inline DescribeOptionGroupOptionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /*
     <p>An optional pagination token provided by a previous request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>.</p>
    */
    inline DescribeOptionGroupOptionsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /*
     <p>An optional pagination token provided by a previous request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>.</p>
    */
    inline DescribeOptionGroupOptionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::String m_engineName;
    bool m_engineNameHasBeenSet;
    Aws::String m_majorEngineVersion;
    bool m_majorEngineVersionHasBeenSet;
    long m_maxRecords;
    bool m_maxRecordsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
