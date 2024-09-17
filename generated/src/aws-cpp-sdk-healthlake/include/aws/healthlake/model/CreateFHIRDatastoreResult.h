/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/model/DatastoreStatus.h>
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
  class CreateFHIRDatastoreResult
  {
  public:
    AWS_HEALTHLAKE_API CreateFHIRDatastoreResult();
    AWS_HEALTHLAKE_API CreateFHIRDatastoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTHLAKE_API CreateFHIRDatastoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The AWS-generated data store id. This id is in the output from the initial
     * data store creation call.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreId = value; }
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreId = std::move(value); }
    inline void SetDatastoreId(const char* value) { m_datastoreId.assign(value); }
    inline CreateFHIRDatastoreResult& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}
    inline CreateFHIRDatastoreResult& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}
    inline CreateFHIRDatastoreResult& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data store ARN is generated during the creation of the data store and can
     * be found in the output from the initial data store creation call.</p>
     */
    inline const Aws::String& GetDatastoreArn() const{ return m_datastoreArn; }
    inline void SetDatastoreArn(const Aws::String& value) { m_datastoreArn = value; }
    inline void SetDatastoreArn(Aws::String&& value) { m_datastoreArn = std::move(value); }
    inline void SetDatastoreArn(const char* value) { m_datastoreArn.assign(value); }
    inline CreateFHIRDatastoreResult& WithDatastoreArn(const Aws::String& value) { SetDatastoreArn(value); return *this;}
    inline CreateFHIRDatastoreResult& WithDatastoreArn(Aws::String&& value) { SetDatastoreArn(std::move(value)); return *this;}
    inline CreateFHIRDatastoreResult& WithDatastoreArn(const char* value) { SetDatastoreArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the FHIR data store.</p>
     */
    inline const DatastoreStatus& GetDatastoreStatus() const{ return m_datastoreStatus; }
    inline void SetDatastoreStatus(const DatastoreStatus& value) { m_datastoreStatus = value; }
    inline void SetDatastoreStatus(DatastoreStatus&& value) { m_datastoreStatus = std::move(value); }
    inline CreateFHIRDatastoreResult& WithDatastoreStatus(const DatastoreStatus& value) { SetDatastoreStatus(value); return *this;}
    inline CreateFHIRDatastoreResult& WithDatastoreStatus(DatastoreStatus&& value) { SetDatastoreStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS endpoint for the created data store.</p>
     */
    inline const Aws::String& GetDatastoreEndpoint() const{ return m_datastoreEndpoint; }
    inline void SetDatastoreEndpoint(const Aws::String& value) { m_datastoreEndpoint = value; }
    inline void SetDatastoreEndpoint(Aws::String&& value) { m_datastoreEndpoint = std::move(value); }
    inline void SetDatastoreEndpoint(const char* value) { m_datastoreEndpoint.assign(value); }
    inline CreateFHIRDatastoreResult& WithDatastoreEndpoint(const Aws::String& value) { SetDatastoreEndpoint(value); return *this;}
    inline CreateFHIRDatastoreResult& WithDatastoreEndpoint(Aws::String&& value) { SetDatastoreEndpoint(std::move(value)); return *this;}
    inline CreateFHIRDatastoreResult& WithDatastoreEndpoint(const char* value) { SetDatastoreEndpoint(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateFHIRDatastoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateFHIRDatastoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateFHIRDatastoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;

    Aws::String m_datastoreArn;

    DatastoreStatus m_datastoreStatus;

    Aws::String m_datastoreEndpoint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
