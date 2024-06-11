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
  class DeleteFHIRDatastoreResult
  {
  public:
    AWS_HEALTHLAKE_API DeleteFHIRDatastoreResult();
    AWS_HEALTHLAKE_API DeleteFHIRDatastoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTHLAKE_API DeleteFHIRDatastoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The AWS-generated ID for the data store to be deleted.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreId = value; }
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreId = std::move(value); }
    inline void SetDatastoreId(const char* value) { m_datastoreId.assign(value); }
    inline DeleteFHIRDatastoreResult& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}
    inline DeleteFHIRDatastoreResult& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}
    inline DeleteFHIRDatastoreResult& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that gives AWS HealthLake access
     * permission.</p>
     */
    inline const Aws::String& GetDatastoreArn() const{ return m_datastoreArn; }
    inline void SetDatastoreArn(const Aws::String& value) { m_datastoreArn = value; }
    inline void SetDatastoreArn(Aws::String&& value) { m_datastoreArn = std::move(value); }
    inline void SetDatastoreArn(const char* value) { m_datastoreArn.assign(value); }
    inline DeleteFHIRDatastoreResult& WithDatastoreArn(const Aws::String& value) { SetDatastoreArn(value); return *this;}
    inline DeleteFHIRDatastoreResult& WithDatastoreArn(Aws::String&& value) { SetDatastoreArn(std::move(value)); return *this;}
    inline DeleteFHIRDatastoreResult& WithDatastoreArn(const char* value) { SetDatastoreArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the data store that the user has requested to be deleted. </p>
     */
    inline const DatastoreStatus& GetDatastoreStatus() const{ return m_datastoreStatus; }
    inline void SetDatastoreStatus(const DatastoreStatus& value) { m_datastoreStatus = value; }
    inline void SetDatastoreStatus(DatastoreStatus&& value) { m_datastoreStatus = std::move(value); }
    inline DeleteFHIRDatastoreResult& WithDatastoreStatus(const DatastoreStatus& value) { SetDatastoreStatus(value); return *this;}
    inline DeleteFHIRDatastoreResult& WithDatastoreStatus(DatastoreStatus&& value) { SetDatastoreStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS endpoint for the data store the user has requested to be deleted.</p>
     */
    inline const Aws::String& GetDatastoreEndpoint() const{ return m_datastoreEndpoint; }
    inline void SetDatastoreEndpoint(const Aws::String& value) { m_datastoreEndpoint = value; }
    inline void SetDatastoreEndpoint(Aws::String&& value) { m_datastoreEndpoint = std::move(value); }
    inline void SetDatastoreEndpoint(const char* value) { m_datastoreEndpoint.assign(value); }
    inline DeleteFHIRDatastoreResult& WithDatastoreEndpoint(const Aws::String& value) { SetDatastoreEndpoint(value); return *this;}
    inline DeleteFHIRDatastoreResult& WithDatastoreEndpoint(Aws::String&& value) { SetDatastoreEndpoint(std::move(value)); return *this;}
    inline DeleteFHIRDatastoreResult& WithDatastoreEndpoint(const char* value) { SetDatastoreEndpoint(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteFHIRDatastoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteFHIRDatastoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteFHIRDatastoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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
