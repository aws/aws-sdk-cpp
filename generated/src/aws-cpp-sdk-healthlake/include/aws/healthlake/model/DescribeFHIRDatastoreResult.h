/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
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
  class DescribeFHIRDatastoreResult
  {
  public:
    AWS_HEALTHLAKE_API DescribeFHIRDatastoreResult();
    AWS_HEALTHLAKE_API DescribeFHIRDatastoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTHLAKE_API DescribeFHIRDatastoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>All properties associated with a Data Store, including the Data Store ID,
     * Data Store ARN, Data Store name, Data Store status, created at, Data Store type
     * version, and Data Store endpoint.</p>
     */
    inline const DatastoreProperties& GetDatastoreProperties() const{ return m_datastoreProperties; }

    /**
     * <p>All properties associated with a Data Store, including the Data Store ID,
     * Data Store ARN, Data Store name, Data Store status, created at, Data Store type
     * version, and Data Store endpoint.</p>
     */
    inline void SetDatastoreProperties(const DatastoreProperties& value) { m_datastoreProperties = value; }

    /**
     * <p>All properties associated with a Data Store, including the Data Store ID,
     * Data Store ARN, Data Store name, Data Store status, created at, Data Store type
     * version, and Data Store endpoint.</p>
     */
    inline void SetDatastoreProperties(DatastoreProperties&& value) { m_datastoreProperties = std::move(value); }

    /**
     * <p>All properties associated with a Data Store, including the Data Store ID,
     * Data Store ARN, Data Store name, Data Store status, created at, Data Store type
     * version, and Data Store endpoint.</p>
     */
    inline DescribeFHIRDatastoreResult& WithDatastoreProperties(const DatastoreProperties& value) { SetDatastoreProperties(value); return *this;}

    /**
     * <p>All properties associated with a Data Store, including the Data Store ID,
     * Data Store ARN, Data Store name, Data Store status, created at, Data Store type
     * version, and Data Store endpoint.</p>
     */
    inline DescribeFHIRDatastoreResult& WithDatastoreProperties(DatastoreProperties&& value) { SetDatastoreProperties(std::move(value)); return *this;}

  private:

    DatastoreProperties m_datastoreProperties;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
