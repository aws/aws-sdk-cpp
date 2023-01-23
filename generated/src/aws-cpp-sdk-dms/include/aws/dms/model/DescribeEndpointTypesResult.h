/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/SupportedEndpointType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEndpointTypesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeEndpointTypesResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEndpointTypesResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEndpointTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEndpointTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeEndpointTypesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeEndpointTypesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeEndpointTypesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The types of endpoints that are supported.</p>
     */
    inline const Aws::Vector<SupportedEndpointType>& GetSupportedEndpointTypes() const{ return m_supportedEndpointTypes; }

    /**
     * <p>The types of endpoints that are supported.</p>
     */
    inline void SetSupportedEndpointTypes(const Aws::Vector<SupportedEndpointType>& value) { m_supportedEndpointTypes = value; }

    /**
     * <p>The types of endpoints that are supported.</p>
     */
    inline void SetSupportedEndpointTypes(Aws::Vector<SupportedEndpointType>&& value) { m_supportedEndpointTypes = std::move(value); }

    /**
     * <p>The types of endpoints that are supported.</p>
     */
    inline DescribeEndpointTypesResult& WithSupportedEndpointTypes(const Aws::Vector<SupportedEndpointType>& value) { SetSupportedEndpointTypes(value); return *this;}

    /**
     * <p>The types of endpoints that are supported.</p>
     */
    inline DescribeEndpointTypesResult& WithSupportedEndpointTypes(Aws::Vector<SupportedEndpointType>&& value) { SetSupportedEndpointTypes(std::move(value)); return *this;}

    /**
     * <p>The types of endpoints that are supported.</p>
     */
    inline DescribeEndpointTypesResult& AddSupportedEndpointTypes(const SupportedEndpointType& value) { m_supportedEndpointTypes.push_back(value); return *this; }

    /**
     * <p>The types of endpoints that are supported.</p>
     */
    inline DescribeEndpointTypesResult& AddSupportedEndpointTypes(SupportedEndpointType&& value) { m_supportedEndpointTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_marker;

    Aws::Vector<SupportedEndpointType> m_supportedEndpointTypes;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
