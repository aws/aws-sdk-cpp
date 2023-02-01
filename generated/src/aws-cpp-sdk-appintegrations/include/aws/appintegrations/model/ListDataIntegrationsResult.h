/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/DataIntegrationSummary.h>
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
  class ListDataIntegrationsResult
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ListDataIntegrationsResult();
    AWS_APPINTEGRATIONSSERVICE_API ListDataIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API ListDataIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The DataIntegrations associated with this account.</p>
     */
    inline const Aws::Vector<DataIntegrationSummary>& GetDataIntegrations() const{ return m_dataIntegrations; }

    /**
     * <p>The DataIntegrations associated with this account.</p>
     */
    inline void SetDataIntegrations(const Aws::Vector<DataIntegrationSummary>& value) { m_dataIntegrations = value; }

    /**
     * <p>The DataIntegrations associated with this account.</p>
     */
    inline void SetDataIntegrations(Aws::Vector<DataIntegrationSummary>&& value) { m_dataIntegrations = std::move(value); }

    /**
     * <p>The DataIntegrations associated with this account.</p>
     */
    inline ListDataIntegrationsResult& WithDataIntegrations(const Aws::Vector<DataIntegrationSummary>& value) { SetDataIntegrations(value); return *this;}

    /**
     * <p>The DataIntegrations associated with this account.</p>
     */
    inline ListDataIntegrationsResult& WithDataIntegrations(Aws::Vector<DataIntegrationSummary>&& value) { SetDataIntegrations(std::move(value)); return *this;}

    /**
     * <p>The DataIntegrations associated with this account.</p>
     */
    inline ListDataIntegrationsResult& AddDataIntegrations(const DataIntegrationSummary& value) { m_dataIntegrations.push_back(value); return *this; }

    /**
     * <p>The DataIntegrations associated with this account.</p>
     */
    inline ListDataIntegrationsResult& AddDataIntegrations(DataIntegrationSummary&& value) { m_dataIntegrations.push_back(std::move(value)); return *this; }


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
    inline ListDataIntegrationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListDataIntegrationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListDataIntegrationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DataIntegrationSummary> m_dataIntegrations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
