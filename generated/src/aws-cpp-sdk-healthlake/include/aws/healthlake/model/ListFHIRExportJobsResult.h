/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/model/ExportJobProperties.h>
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
namespace HealthLake
{
namespace Model
{
  class ListFHIRExportJobsResult
  {
  public:
    AWS_HEALTHLAKE_API ListFHIRExportJobsResult() = default;
    AWS_HEALTHLAKE_API ListFHIRExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTHLAKE_API ListFHIRExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties of listed FHIR export jobs.</p>
     */
    inline const Aws::Vector<ExportJobProperties>& GetExportJobPropertiesList() const { return m_exportJobPropertiesList; }
    template<typename ExportJobPropertiesListT = Aws::Vector<ExportJobProperties>>
    void SetExportJobPropertiesList(ExportJobPropertiesListT&& value) { m_exportJobPropertiesListHasBeenSet = true; m_exportJobPropertiesList = std::forward<ExportJobPropertiesListT>(value); }
    template<typename ExportJobPropertiesListT = Aws::Vector<ExportJobProperties>>
    ListFHIRExportJobsResult& WithExportJobPropertiesList(ExportJobPropertiesListT&& value) { SetExportJobPropertiesList(std::forward<ExportJobPropertiesListT>(value)); return *this;}
    template<typename ExportJobPropertiesListT = ExportJobProperties>
    ListFHIRExportJobsResult& AddExportJobPropertiesList(ExportJobPropertiesListT&& value) { m_exportJobPropertiesListHasBeenSet = true; m_exportJobPropertiesList.emplace_back(std::forward<ExportJobPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used to identify the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFHIRExportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFHIRExportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExportJobProperties> m_exportJobPropertiesList;
    bool m_exportJobPropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
