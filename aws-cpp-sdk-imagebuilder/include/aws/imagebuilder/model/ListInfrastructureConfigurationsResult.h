/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/InfrastructureConfigurationSummary.h>
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
namespace imagebuilder
{
namespace Model
{
  class ListInfrastructureConfigurationsResult
  {
  public:
    AWS_IMAGEBUILDER_API ListInfrastructureConfigurationsResult();
    AWS_IMAGEBUILDER_API ListInfrastructureConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListInfrastructureConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline ListInfrastructureConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline ListInfrastructureConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline ListInfrastructureConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The list of infrastructure configurations.</p>
     */
    inline const Aws::Vector<InfrastructureConfigurationSummary>& GetInfrastructureConfigurationSummaryList() const{ return m_infrastructureConfigurationSummaryList; }

    /**
     * <p>The list of infrastructure configurations.</p>
     */
    inline void SetInfrastructureConfigurationSummaryList(const Aws::Vector<InfrastructureConfigurationSummary>& value) { m_infrastructureConfigurationSummaryList = value; }

    /**
     * <p>The list of infrastructure configurations.</p>
     */
    inline void SetInfrastructureConfigurationSummaryList(Aws::Vector<InfrastructureConfigurationSummary>&& value) { m_infrastructureConfigurationSummaryList = std::move(value); }

    /**
     * <p>The list of infrastructure configurations.</p>
     */
    inline ListInfrastructureConfigurationsResult& WithInfrastructureConfigurationSummaryList(const Aws::Vector<InfrastructureConfigurationSummary>& value) { SetInfrastructureConfigurationSummaryList(value); return *this;}

    /**
     * <p>The list of infrastructure configurations.</p>
     */
    inline ListInfrastructureConfigurationsResult& WithInfrastructureConfigurationSummaryList(Aws::Vector<InfrastructureConfigurationSummary>&& value) { SetInfrastructureConfigurationSummaryList(std::move(value)); return *this;}

    /**
     * <p>The list of infrastructure configurations.</p>
     */
    inline ListInfrastructureConfigurationsResult& AddInfrastructureConfigurationSummaryList(const InfrastructureConfigurationSummary& value) { m_infrastructureConfigurationSummaryList.push_back(value); return *this; }

    /**
     * <p>The list of infrastructure configurations.</p>
     */
    inline ListInfrastructureConfigurationsResult& AddInfrastructureConfigurationSummaryList(InfrastructureConfigurationSummary&& value) { m_infrastructureConfigurationSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects.</p>
     */
    inline ListInfrastructureConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects.</p>
     */
    inline ListInfrastructureConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects.</p>
     */
    inline ListInfrastructureConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_requestId;

    Aws::Vector<InfrastructureConfigurationSummary> m_infrastructureConfigurationSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
