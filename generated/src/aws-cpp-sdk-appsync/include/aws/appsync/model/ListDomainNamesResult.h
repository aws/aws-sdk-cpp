/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/DomainNameConfig.h>
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
namespace AppSync
{
namespace Model
{
  class ListDomainNamesResult
  {
  public:
    AWS_APPSYNC_API ListDomainNamesResult();
    AWS_APPSYNC_API ListDomainNamesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API ListDomainNamesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists configurations for multiple domain names.</p>
     */
    inline const Aws::Vector<DomainNameConfig>& GetDomainNameConfigs() const{ return m_domainNameConfigs; }

    /**
     * <p>Lists configurations for multiple domain names.</p>
     */
    inline void SetDomainNameConfigs(const Aws::Vector<DomainNameConfig>& value) { m_domainNameConfigs = value; }

    /**
     * <p>Lists configurations for multiple domain names.</p>
     */
    inline void SetDomainNameConfigs(Aws::Vector<DomainNameConfig>&& value) { m_domainNameConfigs = std::move(value); }

    /**
     * <p>Lists configurations for multiple domain names.</p>
     */
    inline ListDomainNamesResult& WithDomainNameConfigs(const Aws::Vector<DomainNameConfig>& value) { SetDomainNameConfigs(value); return *this;}

    /**
     * <p>Lists configurations for multiple domain names.</p>
     */
    inline ListDomainNamesResult& WithDomainNameConfigs(Aws::Vector<DomainNameConfig>&& value) { SetDomainNameConfigs(std::move(value)); return *this;}

    /**
     * <p>Lists configurations for multiple domain names.</p>
     */
    inline ListDomainNamesResult& AddDomainNameConfigs(const DomainNameConfig& value) { m_domainNameConfigs.push_back(value); return *this; }

    /**
     * <p>Lists configurations for multiple domain names.</p>
     */
    inline ListDomainNamesResult& AddDomainNameConfigs(DomainNameConfig&& value) { m_domainNameConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>The API token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The API token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The API token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The API token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The API token.</p>
     */
    inline ListDomainNamesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The API token.</p>
     */
    inline ListDomainNamesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The API token.</p>
     */
    inline ListDomainNamesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DomainNameConfig> m_domainNameConfigs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
