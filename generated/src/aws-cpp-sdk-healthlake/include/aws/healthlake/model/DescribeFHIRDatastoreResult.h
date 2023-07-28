/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/DatastoreProperties.h>
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
     * <p>All properties associated with a data store, including the data store ID,
     * data store ARN, data store name, data store status, when the data store was
     * created, data store type version, and the data store's endpoint.</p>
     */
    inline const DatastoreProperties& GetDatastoreProperties() const{ return m_datastoreProperties; }

    /**
     * <p>All properties associated with a data store, including the data store ID,
     * data store ARN, data store name, data store status, when the data store was
     * created, data store type version, and the data store's endpoint.</p>
     */
    inline void SetDatastoreProperties(const DatastoreProperties& value) { m_datastoreProperties = value; }

    /**
     * <p>All properties associated with a data store, including the data store ID,
     * data store ARN, data store name, data store status, when the data store was
     * created, data store type version, and the data store's endpoint.</p>
     */
    inline void SetDatastoreProperties(DatastoreProperties&& value) { m_datastoreProperties = std::move(value); }

    /**
     * <p>All properties associated with a data store, including the data store ID,
     * data store ARN, data store name, data store status, when the data store was
     * created, data store type version, and the data store's endpoint.</p>
     */
    inline DescribeFHIRDatastoreResult& WithDatastoreProperties(const DatastoreProperties& value) { SetDatastoreProperties(value); return *this;}

    /**
     * <p>All properties associated with a data store, including the data store ID,
     * data store ARN, data store name, data store status, when the data store was
     * created, data store type version, and the data store's endpoint.</p>
     */
    inline DescribeFHIRDatastoreResult& WithDatastoreProperties(DatastoreProperties&& value) { SetDatastoreProperties(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeFHIRDatastoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeFHIRDatastoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeFHIRDatastoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DatastoreProperties m_datastoreProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
