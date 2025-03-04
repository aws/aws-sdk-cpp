/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/ManagedThingSummary.h>
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
  class ListManagedThingsResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ListManagedThingsResult();
    AWS_IOTMANAGEDINTEGRATIONS_API ListManagedThingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API ListManagedThingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of managed things.</p>
     */
    inline const Aws::Vector<ManagedThingSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<ManagedThingSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<ManagedThingSummary>&& value) { m_items = std::move(value); }
    inline ListManagedThingsResult& WithItems(const Aws::Vector<ManagedThingSummary>& value) { SetItems(value); return *this;}
    inline ListManagedThingsResult& WithItems(Aws::Vector<ManagedThingSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListManagedThingsResult& AddItems(const ManagedThingSummary& value) { m_items.push_back(value); return *this; }
    inline ListManagedThingsResult& AddItems(ManagedThingSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListManagedThingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListManagedThingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListManagedThingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListManagedThingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListManagedThingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListManagedThingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ManagedThingSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
