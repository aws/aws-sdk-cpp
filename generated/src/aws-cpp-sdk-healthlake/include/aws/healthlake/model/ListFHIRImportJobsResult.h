/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/model/ImportJobProperties.h>
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
  class ListFHIRImportJobsResult
  {
  public:
    AWS_HEALTHLAKE_API ListFHIRImportJobsResult() = default;
    AWS_HEALTHLAKE_API ListFHIRImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTHLAKE_API ListFHIRImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties for listed import jobs.</p>
     */
    inline const Aws::Vector<ImportJobProperties>& GetImportJobPropertiesList() const { return m_importJobPropertiesList; }
    template<typename ImportJobPropertiesListT = Aws::Vector<ImportJobProperties>>
    void SetImportJobPropertiesList(ImportJobPropertiesListT&& value) { m_importJobPropertiesListHasBeenSet = true; m_importJobPropertiesList = std::forward<ImportJobPropertiesListT>(value); }
    template<typename ImportJobPropertiesListT = Aws::Vector<ImportJobProperties>>
    ListFHIRImportJobsResult& WithImportJobPropertiesList(ImportJobPropertiesListT&& value) { SetImportJobPropertiesList(std::forward<ImportJobPropertiesListT>(value)); return *this;}
    template<typename ImportJobPropertiesListT = ImportJobProperties>
    ListFHIRImportJobsResult& AddImportJobPropertiesList(ImportJobPropertiesListT&& value) { m_importJobPropertiesListHasBeenSet = true; m_importJobPropertiesList.emplace_back(std::forward<ImportJobPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used to identify the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFHIRImportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFHIRImportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ImportJobProperties> m_importJobPropertiesList;
    bool m_importJobPropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
