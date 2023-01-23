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
    AWS_HEALTHLAKE_API ListFHIRDatastoresResult();
    AWS_HEALTHLAKE_API ListFHIRDatastoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTHLAKE_API ListFHIRDatastoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>All properties associated with the listed Data Stores.</p>
     */
    inline const Aws::Vector<DatastoreProperties>& GetDatastorePropertiesList() const{ return m_datastorePropertiesList; }

    /**
     * <p>All properties associated with the listed Data Stores.</p>
     */
    inline void SetDatastorePropertiesList(const Aws::Vector<DatastoreProperties>& value) { m_datastorePropertiesList = value; }

    /**
     * <p>All properties associated with the listed Data Stores.</p>
     */
    inline void SetDatastorePropertiesList(Aws::Vector<DatastoreProperties>&& value) { m_datastorePropertiesList = std::move(value); }

    /**
     * <p>All properties associated with the listed Data Stores.</p>
     */
    inline ListFHIRDatastoresResult& WithDatastorePropertiesList(const Aws::Vector<DatastoreProperties>& value) { SetDatastorePropertiesList(value); return *this;}

    /**
     * <p>All properties associated with the listed Data Stores.</p>
     */
    inline ListFHIRDatastoresResult& WithDatastorePropertiesList(Aws::Vector<DatastoreProperties>&& value) { SetDatastorePropertiesList(std::move(value)); return *this;}

    /**
     * <p>All properties associated with the listed Data Stores.</p>
     */
    inline ListFHIRDatastoresResult& AddDatastorePropertiesList(const DatastoreProperties& value) { m_datastorePropertiesList.push_back(value); return *this; }

    /**
     * <p>All properties associated with the listed Data Stores.</p>
     */
    inline ListFHIRDatastoresResult& AddDatastorePropertiesList(DatastoreProperties&& value) { m_datastorePropertiesList.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token that can be used to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token that can be used to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token that can be used to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token that can be used to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token that can be used to retrieve the next page of results.</p>
     */
    inline ListFHIRDatastoresResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token that can be used to retrieve the next page of results.</p>
     */
    inline ListFHIRDatastoresResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token that can be used to retrieve the next page of results.</p>
     */
    inline ListFHIRDatastoresResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DatastoreProperties> m_datastorePropertiesList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
