/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/EventIntegrationAssociation.h>
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
namespace AppIntegrationsService
{
namespace Model
{
  class ListEventIntegrationAssociationsResult
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ListEventIntegrationAssociationsResult();
    AWS_APPINTEGRATIONSSERVICE_API ListEventIntegrationAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API ListEventIntegrationAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The event integration associations.</p>
     */
    inline const Aws::Vector<EventIntegrationAssociation>& GetEventIntegrationAssociations() const{ return m_eventIntegrationAssociations; }

    /**
     * <p>The event integration associations.</p>
     */
    inline void SetEventIntegrationAssociations(const Aws::Vector<EventIntegrationAssociation>& value) { m_eventIntegrationAssociations = value; }

    /**
     * <p>The event integration associations.</p>
     */
    inline void SetEventIntegrationAssociations(Aws::Vector<EventIntegrationAssociation>&& value) { m_eventIntegrationAssociations = std::move(value); }

    /**
     * <p>The event integration associations.</p>
     */
    inline ListEventIntegrationAssociationsResult& WithEventIntegrationAssociations(const Aws::Vector<EventIntegrationAssociation>& value) { SetEventIntegrationAssociations(value); return *this;}

    /**
     * <p>The event integration associations.</p>
     */
    inline ListEventIntegrationAssociationsResult& WithEventIntegrationAssociations(Aws::Vector<EventIntegrationAssociation>&& value) { SetEventIntegrationAssociations(std::move(value)); return *this;}

    /**
     * <p>The event integration associations.</p>
     */
    inline ListEventIntegrationAssociationsResult& AddEventIntegrationAssociations(const EventIntegrationAssociation& value) { m_eventIntegrationAssociations.push_back(value); return *this; }

    /**
     * <p>The event integration associations.</p>
     */
    inline ListEventIntegrationAssociationsResult& AddEventIntegrationAssociations(EventIntegrationAssociation&& value) { m_eventIntegrationAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListEventIntegrationAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListEventIntegrationAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListEventIntegrationAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EventIntegrationAssociation> m_eventIntegrationAssociations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
