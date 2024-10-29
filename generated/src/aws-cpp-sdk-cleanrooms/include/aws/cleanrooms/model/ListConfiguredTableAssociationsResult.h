/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/ConfiguredTableAssociationSummary.h>
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
namespace CleanRooms
{
namespace Model
{
  class ListConfiguredTableAssociationsResult
  {
  public:
    AWS_CLEANROOMS_API ListConfiguredTableAssociationsResult();
    AWS_CLEANROOMS_API ListConfiguredTableAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListConfiguredTableAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The retrieved list of configured table associations.</p>
     */
    inline const Aws::Vector<ConfiguredTableAssociationSummary>& GetConfiguredTableAssociationSummaries() const{ return m_configuredTableAssociationSummaries; }
    inline void SetConfiguredTableAssociationSummaries(const Aws::Vector<ConfiguredTableAssociationSummary>& value) { m_configuredTableAssociationSummaries = value; }
    inline void SetConfiguredTableAssociationSummaries(Aws::Vector<ConfiguredTableAssociationSummary>&& value) { m_configuredTableAssociationSummaries = std::move(value); }
    inline ListConfiguredTableAssociationsResult& WithConfiguredTableAssociationSummaries(const Aws::Vector<ConfiguredTableAssociationSummary>& value) { SetConfiguredTableAssociationSummaries(value); return *this;}
    inline ListConfiguredTableAssociationsResult& WithConfiguredTableAssociationSummaries(Aws::Vector<ConfiguredTableAssociationSummary>&& value) { SetConfiguredTableAssociationSummaries(std::move(value)); return *this;}
    inline ListConfiguredTableAssociationsResult& AddConfiguredTableAssociationSummaries(const ConfiguredTableAssociationSummary& value) { m_configuredTableAssociationSummaries.push_back(value); return *this; }
    inline ListConfiguredTableAssociationsResult& AddConfiguredTableAssociationSummaries(ConfiguredTableAssociationSummary&& value) { m_configuredTableAssociationSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListConfiguredTableAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListConfiguredTableAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListConfiguredTableAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListConfiguredTableAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListConfiguredTableAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListConfiguredTableAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConfiguredTableAssociationSummary> m_configuredTableAssociationSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
