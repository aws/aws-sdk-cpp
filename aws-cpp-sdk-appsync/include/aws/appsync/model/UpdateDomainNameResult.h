/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
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
  class UpdateDomainNameResult
  {
  public:
    AWS_APPSYNC_API UpdateDomainNameResult();
    AWS_APPSYNC_API UpdateDomainNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API UpdateDomainNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The configuration for the <code>DomainName</code>.</p>
     */
    inline const DomainNameConfig& GetDomainNameConfig() const{ return m_domainNameConfig; }

    /**
     * <p>The configuration for the <code>DomainName</code>.</p>
     */
    inline void SetDomainNameConfig(const DomainNameConfig& value) { m_domainNameConfig = value; }

    /**
     * <p>The configuration for the <code>DomainName</code>.</p>
     */
    inline void SetDomainNameConfig(DomainNameConfig&& value) { m_domainNameConfig = std::move(value); }

    /**
     * <p>The configuration for the <code>DomainName</code>.</p>
     */
    inline UpdateDomainNameResult& WithDomainNameConfig(const DomainNameConfig& value) { SetDomainNameConfig(value); return *this;}

    /**
     * <p>The configuration for the <code>DomainName</code>.</p>
     */
    inline UpdateDomainNameResult& WithDomainNameConfig(DomainNameConfig&& value) { SetDomainNameConfig(std::move(value)); return *this;}

  private:

    DomainNameConfig m_domainNameConfig;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
