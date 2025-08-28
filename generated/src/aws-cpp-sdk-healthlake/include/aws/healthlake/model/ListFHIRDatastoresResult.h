/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/model/DatastoreProperties.h>
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
  class ListFHIRDatastoresResult
  {
  public:
    AWS_HEALTHLAKE_API ListFHIRDatastoresResult() = default;
    AWS_HEALTHLAKE_API ListFHIRDatastoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTHLAKE_API ListFHIRDatastoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties associated with all listed data stores.</p>
     */
    inline const Aws::Vector<DatastoreProperties>& GetDatastorePropertiesList() const { return m_datastorePropertiesList; }
    template<typename DatastorePropertiesListT = Aws::Vector<DatastoreProperties>>
    void SetDatastorePropertiesList(DatastorePropertiesListT&& value) { m_datastorePropertiesListHasBeenSet = true; m_datastorePropertiesList = std::forward<DatastorePropertiesListT>(value); }
    template<typename DatastorePropertiesListT = Aws::Vector<DatastoreProperties>>
    ListFHIRDatastoresResult& WithDatastorePropertiesList(DatastorePropertiesListT&& value) { SetDatastorePropertiesList(std::forward<DatastorePropertiesListT>(value)); return *this;}
    template<typename DatastorePropertiesListT = DatastoreProperties>
    ListFHIRDatastoresResult& AddDatastorePropertiesList(DatastorePropertiesListT&& value) { m_datastorePropertiesListHasBeenSet = true; m_datastorePropertiesList.emplace_back(std::forward<DatastorePropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFHIRDatastoresResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFHIRDatastoresResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DatastoreProperties> m_datastorePropertiesList;
    bool m_datastorePropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
