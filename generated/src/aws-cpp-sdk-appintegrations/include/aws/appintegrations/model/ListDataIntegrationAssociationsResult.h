/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/DataIntegrationAssociationSummary.h>
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
  class ListDataIntegrationAssociationsResult
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ListDataIntegrationAssociationsResult();
    AWS_APPINTEGRATIONSSERVICE_API ListDataIntegrationAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API ListDataIntegrationAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) and unique ID of the DataIntegration
     * association.</p>
     */
    inline const Aws::Vector<DataIntegrationAssociationSummary>& GetDataIntegrationAssociations() const{ return m_dataIntegrationAssociations; }

    /**
     * <p>The Amazon Resource Name (ARN) and unique ID of the DataIntegration
     * association.</p>
     */
    inline void SetDataIntegrationAssociations(const Aws::Vector<DataIntegrationAssociationSummary>& value) { m_dataIntegrationAssociations = value; }

    /**
     * <p>The Amazon Resource Name (ARN) and unique ID of the DataIntegration
     * association.</p>
     */
    inline void SetDataIntegrationAssociations(Aws::Vector<DataIntegrationAssociationSummary>&& value) { m_dataIntegrationAssociations = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) and unique ID of the DataIntegration
     * association.</p>
     */
    inline ListDataIntegrationAssociationsResult& WithDataIntegrationAssociations(const Aws::Vector<DataIntegrationAssociationSummary>& value) { SetDataIntegrationAssociations(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) and unique ID of the DataIntegration
     * association.</p>
     */
    inline ListDataIntegrationAssociationsResult& WithDataIntegrationAssociations(Aws::Vector<DataIntegrationAssociationSummary>&& value) { SetDataIntegrationAssociations(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) and unique ID of the DataIntegration
     * association.</p>
     */
    inline ListDataIntegrationAssociationsResult& AddDataIntegrationAssociations(const DataIntegrationAssociationSummary& value) { m_dataIntegrationAssociations.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) and unique ID of the DataIntegration
     * association.</p>
     */
    inline ListDataIntegrationAssociationsResult& AddDataIntegrationAssociations(DataIntegrationAssociationSummary&& value) { m_dataIntegrationAssociations.push_back(std::move(value)); return *this; }


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
    inline ListDataIntegrationAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListDataIntegrationAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListDataIntegrationAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DataIntegrationAssociationSummary> m_dataIntegrationAssociations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
