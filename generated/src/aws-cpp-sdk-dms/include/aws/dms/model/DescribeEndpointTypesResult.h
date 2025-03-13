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
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEndpointTypesResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEndpointTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEndpointTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeEndpointTypesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of endpoints that are supported.</p>
     */
    inline const Aws::Vector<SupportedEndpointType>& GetSupportedEndpointTypes() const { return m_supportedEndpointTypes; }
    template<typename SupportedEndpointTypesT = Aws::Vector<SupportedEndpointType>>
    void SetSupportedEndpointTypes(SupportedEndpointTypesT&& value) { m_supportedEndpointTypesHasBeenSet = true; m_supportedEndpointTypes = std::forward<SupportedEndpointTypesT>(value); }
    template<typename SupportedEndpointTypesT = Aws::Vector<SupportedEndpointType>>
    DescribeEndpointTypesResult& WithSupportedEndpointTypes(SupportedEndpointTypesT&& value) { SetSupportedEndpointTypes(std::forward<SupportedEndpointTypesT>(value)); return *this;}
    template<typename SupportedEndpointTypesT = SupportedEndpointType>
    DescribeEndpointTypesResult& AddSupportedEndpointTypes(SupportedEndpointTypesT&& value) { m_supportedEndpointTypesHasBeenSet = true; m_supportedEndpointTypes.emplace_back(std::forward<SupportedEndpointTypesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEndpointTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<SupportedEndpointType> m_supportedEndpointTypes;
    bool m_supportedEndpointTypesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
