/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/SecurityConfiguration.h>
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
namespace EMRContainers
{
namespace Model
{
  class ListSecurityConfigurationsResult
  {
  public:
    AWS_EMRCONTAINERS_API ListSecurityConfigurationsResult();
    AWS_EMRCONTAINERS_API ListSecurityConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API ListSecurityConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of returned security configurations.</p>
     */
    inline const Aws::Vector<SecurityConfiguration>& GetSecurityConfigurations() const{ return m_securityConfigurations; }

    /**
     * <p>The list of returned security configurations.</p>
     */
    inline void SetSecurityConfigurations(const Aws::Vector<SecurityConfiguration>& value) { m_securityConfigurations = value; }

    /**
     * <p>The list of returned security configurations.</p>
     */
    inline void SetSecurityConfigurations(Aws::Vector<SecurityConfiguration>&& value) { m_securityConfigurations = std::move(value); }

    /**
     * <p>The list of returned security configurations.</p>
     */
    inline ListSecurityConfigurationsResult& WithSecurityConfigurations(const Aws::Vector<SecurityConfiguration>& value) { SetSecurityConfigurations(value); return *this;}

    /**
     * <p>The list of returned security configurations.</p>
     */
    inline ListSecurityConfigurationsResult& WithSecurityConfigurations(Aws::Vector<SecurityConfiguration>&& value) { SetSecurityConfigurations(std::move(value)); return *this;}

    /**
     * <p>The list of returned security configurations.</p>
     */
    inline ListSecurityConfigurationsResult& AddSecurityConfigurations(const SecurityConfiguration& value) { m_securityConfigurations.push_back(value); return *this; }

    /**
     * <p>The list of returned security configurations.</p>
     */
    inline ListSecurityConfigurationsResult& AddSecurityConfigurations(SecurityConfiguration&& value) { m_securityConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of security configurations to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of security configurations to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of security configurations to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of security configurations to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of security configurations to return.</p>
     */
    inline ListSecurityConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of security configurations to return.</p>
     */
    inline ListSecurityConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of security configurations to return.</p>
     */
    inline ListSecurityConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSecurityConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSecurityConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSecurityConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<SecurityConfiguration> m_securityConfigurations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
