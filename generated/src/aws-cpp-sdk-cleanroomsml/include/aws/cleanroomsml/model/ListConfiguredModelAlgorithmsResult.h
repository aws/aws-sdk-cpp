/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/ConfiguredModelAlgorithmSummary.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class ListConfiguredModelAlgorithmsResult
  {
  public:
    AWS_CLEANROOMSML_API ListConfiguredModelAlgorithmsResult();
    AWS_CLEANROOMSML_API ListConfiguredModelAlgorithmsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListConfiguredModelAlgorithmsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListConfiguredModelAlgorithmsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListConfiguredModelAlgorithmsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListConfiguredModelAlgorithmsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of configured model algorithms.</p>
     */
    inline const Aws::Vector<ConfiguredModelAlgorithmSummary>& GetConfiguredModelAlgorithms() const{ return m_configuredModelAlgorithms; }
    inline void SetConfiguredModelAlgorithms(const Aws::Vector<ConfiguredModelAlgorithmSummary>& value) { m_configuredModelAlgorithms = value; }
    inline void SetConfiguredModelAlgorithms(Aws::Vector<ConfiguredModelAlgorithmSummary>&& value) { m_configuredModelAlgorithms = std::move(value); }
    inline ListConfiguredModelAlgorithmsResult& WithConfiguredModelAlgorithms(const Aws::Vector<ConfiguredModelAlgorithmSummary>& value) { SetConfiguredModelAlgorithms(value); return *this;}
    inline ListConfiguredModelAlgorithmsResult& WithConfiguredModelAlgorithms(Aws::Vector<ConfiguredModelAlgorithmSummary>&& value) { SetConfiguredModelAlgorithms(std::move(value)); return *this;}
    inline ListConfiguredModelAlgorithmsResult& AddConfiguredModelAlgorithms(const ConfiguredModelAlgorithmSummary& value) { m_configuredModelAlgorithms.push_back(value); return *this; }
    inline ListConfiguredModelAlgorithmsResult& AddConfiguredModelAlgorithms(ConfiguredModelAlgorithmSummary&& value) { m_configuredModelAlgorithms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListConfiguredModelAlgorithmsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListConfiguredModelAlgorithmsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListConfiguredModelAlgorithmsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ConfiguredModelAlgorithmSummary> m_configuredModelAlgorithms;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
