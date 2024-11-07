/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/ConfiguredModelAlgorithmAssociationSummary.h>
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
  class ListConfiguredModelAlgorithmAssociationsResult
  {
  public:
    AWS_CLEANROOMSML_API ListConfiguredModelAlgorithmAssociationsResult();
    AWS_CLEANROOMSML_API ListConfiguredModelAlgorithmAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListConfiguredModelAlgorithmAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListConfiguredModelAlgorithmAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListConfiguredModelAlgorithmAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListConfiguredModelAlgorithmAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of configured model algorithm associations.</p>
     */
    inline const Aws::Vector<ConfiguredModelAlgorithmAssociationSummary>& GetConfiguredModelAlgorithmAssociations() const{ return m_configuredModelAlgorithmAssociations; }
    inline void SetConfiguredModelAlgorithmAssociations(const Aws::Vector<ConfiguredModelAlgorithmAssociationSummary>& value) { m_configuredModelAlgorithmAssociations = value; }
    inline void SetConfiguredModelAlgorithmAssociations(Aws::Vector<ConfiguredModelAlgorithmAssociationSummary>&& value) { m_configuredModelAlgorithmAssociations = std::move(value); }
    inline ListConfiguredModelAlgorithmAssociationsResult& WithConfiguredModelAlgorithmAssociations(const Aws::Vector<ConfiguredModelAlgorithmAssociationSummary>& value) { SetConfiguredModelAlgorithmAssociations(value); return *this;}
    inline ListConfiguredModelAlgorithmAssociationsResult& WithConfiguredModelAlgorithmAssociations(Aws::Vector<ConfiguredModelAlgorithmAssociationSummary>&& value) { SetConfiguredModelAlgorithmAssociations(std::move(value)); return *this;}
    inline ListConfiguredModelAlgorithmAssociationsResult& AddConfiguredModelAlgorithmAssociations(const ConfiguredModelAlgorithmAssociationSummary& value) { m_configuredModelAlgorithmAssociations.push_back(value); return *this; }
    inline ListConfiguredModelAlgorithmAssociationsResult& AddConfiguredModelAlgorithmAssociations(ConfiguredModelAlgorithmAssociationSummary&& value) { m_configuredModelAlgorithmAssociations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListConfiguredModelAlgorithmAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListConfiguredModelAlgorithmAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListConfiguredModelAlgorithmAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ConfiguredModelAlgorithmAssociationSummary> m_configuredModelAlgorithmAssociations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
