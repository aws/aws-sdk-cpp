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
    AWS_HEALTHLAKE_API CreateFHIRDatastoreResult() = default;
    AWS_HEALTHLAKE_API CreateFHIRDatastoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTHLAKE_API CreateFHIRDatastoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const { return m_datastoreId; }
    template<typename DatastoreIdT = Aws::String>
    void SetDatastoreId(DatastoreIdT&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::forward<DatastoreIdT>(value); }
    template<typename DatastoreIdT = Aws::String>
    CreateFHIRDatastoreResult& WithDatastoreId(DatastoreIdT&& value) { SetDatastoreId(std::forward<DatastoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the data store.</p>
     */
    inline const Aws::String& GetDatastoreArn() const { return m_datastoreArn; }
    template<typename DatastoreArnT = Aws::String>
    void SetDatastoreArn(DatastoreArnT&& value) { m_datastoreArnHasBeenSet = true; m_datastoreArn = std::forward<DatastoreArnT>(value); }
    template<typename DatastoreArnT = Aws::String>
    CreateFHIRDatastoreResult& WithDatastoreArn(DatastoreArnT&& value) { SetDatastoreArn(std::forward<DatastoreArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data store status.</p>
     */
    inline DatastoreStatus GetDatastoreStatus() const { return m_datastoreStatus; }
    inline void SetDatastoreStatus(DatastoreStatus value) { m_datastoreStatusHasBeenSet = true; m_datastoreStatus = value; }
    inline CreateFHIRDatastoreResult& WithDatastoreStatus(DatastoreStatus value) { SetDatastoreStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS endpoint created for the data store.</p>
     */
    inline const Aws::String& GetDatastoreEndpoint() const { return m_datastoreEndpoint; }
    template<typename DatastoreEndpointT = Aws::String>
    void SetDatastoreEndpoint(DatastoreEndpointT&& value) { m_datastoreEndpointHasBeenSet = true; m_datastoreEndpoint = std::forward<DatastoreEndpointT>(value); }
    template<typename DatastoreEndpointT = Aws::String>
    CreateFHIRDatastoreResult& WithDatastoreEndpoint(DatastoreEndpointT&& value) { SetDatastoreEndpoint(std::forward<DatastoreEndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateFHIRDatastoreResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_datastoreArn;
    bool m_datastoreArnHasBeenSet = false;

    DatastoreStatus m_datastoreStatus{DatastoreStatus::NOT_SET};
    bool m_datastoreStatusHasBeenSet = false;

    Aws::String m_datastoreEndpoint;
    bool m_datastoreEndpointHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
