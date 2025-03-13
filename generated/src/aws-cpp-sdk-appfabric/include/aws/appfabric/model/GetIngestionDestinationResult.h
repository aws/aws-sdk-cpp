/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/model/IngestionDestination.h>
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
namespace AppFabric
{
namespace Model
{
  class GetIngestionDestinationResult
  {
  public:
    AWS_APPFABRIC_API GetIngestionDestinationResult() = default;
    AWS_APPFABRIC_API GetIngestionDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFABRIC_API GetIngestionDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains information about an ingestion destination.</p>
     */
    inline const IngestionDestination& GetIngestionDestination() const { return m_ingestionDestination; }
    template<typename IngestionDestinationT = IngestionDestination>
    void SetIngestionDestination(IngestionDestinationT&& value) { m_ingestionDestinationHasBeenSet = true; m_ingestionDestination = std::forward<IngestionDestinationT>(value); }
    template<typename IngestionDestinationT = IngestionDestination>
    GetIngestionDestinationResult& WithIngestionDestination(IngestionDestinationT&& value) { SetIngestionDestination(std::forward<IngestionDestinationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIngestionDestinationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IngestionDestination m_ingestionDestination;
    bool m_ingestionDestinationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
