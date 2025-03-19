/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeApplicableIndividualAssessmentsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeApplicableIndividualAssessmentsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeApplicableIndividualAssessmentsResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeApplicableIndividualAssessmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeApplicableIndividualAssessmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of names for the individual assessments supported by the premigration
     * assessment run that you start based on the specified request parameters. For
     * more information on the available individual assessments, including
     * compatibility with different migration task configurations, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.AssessmentReport.html">Working
     * with premigration assessment runs</a> in the <i>Database Migration Service User
     * Guide.</i> </p>
     */
    inline const Aws::Vector<Aws::String>& GetIndividualAssessmentNames() const { return m_individualAssessmentNames; }
    template<typename IndividualAssessmentNamesT = Aws::Vector<Aws::String>>
    void SetIndividualAssessmentNames(IndividualAssessmentNamesT&& value) { m_individualAssessmentNamesHasBeenSet = true; m_individualAssessmentNames = std::forward<IndividualAssessmentNamesT>(value); }
    template<typename IndividualAssessmentNamesT = Aws::Vector<Aws::String>>
    DescribeApplicableIndividualAssessmentsResult& WithIndividualAssessmentNames(IndividualAssessmentNamesT&& value) { SetIndividualAssessmentNames(std::forward<IndividualAssessmentNamesT>(value)); return *this;}
    template<typename IndividualAssessmentNamesT = Aws::String>
    DescribeApplicableIndividualAssessmentsResult& AddIndividualAssessmentNames(IndividualAssessmentNamesT&& value) { m_individualAssessmentNamesHasBeenSet = true; m_individualAssessmentNames.emplace_back(std::forward<IndividualAssessmentNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token returned for you to pass to a subsequent request. If you
     * pass this token as the <code>Marker</code> value in a subsequent request, the
     * response includes only records beyond the marker, up to the value specified in
     * the request by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeApplicableIndividualAssessmentsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeApplicableIndividualAssessmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_individualAssessmentNames;
    bool m_individualAssessmentNamesHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
