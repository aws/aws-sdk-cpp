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
    AWS_HEALTHLAKE_API DescribeFHIRDatastoreResult() = default;
    AWS_HEALTHLAKE_API DescribeFHIRDatastoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTHLAKE_API DescribeFHIRDatastoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data store properties.</p>
     */
    inline const DatastoreProperties& GetDatastoreProperties() const { return m_datastoreProperties; }
    template<typename DatastorePropertiesT = DatastoreProperties>
    void SetDatastoreProperties(DatastorePropertiesT&& value) { m_datastorePropertiesHasBeenSet = true; m_datastoreProperties = std::forward<DatastorePropertiesT>(value); }
    template<typename DatastorePropertiesT = DatastoreProperties>
    DescribeFHIRDatastoreResult& WithDatastoreProperties(DatastorePropertiesT&& value) { SetDatastoreProperties(std::forward<DatastorePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFHIRDatastoreResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DatastoreProperties m_datastoreProperties;
    bool m_datastorePropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
