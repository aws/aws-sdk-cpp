/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/DestinationSummary.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{
  class ListDestinationsResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ListDestinationsResult();
    AWS_IOTMANAGEDINTEGRATIONS_API ListDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API ListDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of destinations.</p>
     */
    inline const Aws::Vector<DestinationSummary>& GetDestinationList() const{ return m_destinationList; }
    inline void SetDestinationList(const Aws::Vector<DestinationSummary>& value) { m_destinationList = value; }
    inline void SetDestinationList(Aws::Vector<DestinationSummary>&& value) { m_destinationList = std::move(value); }
    inline ListDestinationsResult& WithDestinationList(const Aws::Vector<DestinationSummary>& value) { SetDestinationList(value); return *this;}
    inline ListDestinationsResult& WithDestinationList(Aws::Vector<DestinationSummary>&& value) { SetDestinationList(std::move(value)); return *this;}
    inline ListDestinationsResult& AddDestinationList(const DestinationSummary& value) { m_destinationList.push_back(value); return *this; }
    inline ListDestinationsResult& AddDestinationList(DestinationSummary&& value) { m_destinationList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDestinationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDestinationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDestinationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDestinationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDestinationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDestinationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DestinationSummary> m_destinationList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
