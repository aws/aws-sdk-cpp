﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/DomainNameConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetDomainNameResult
  {
  public:
    AWS_APPSYNC_API GetDomainNameResult();
    AWS_APPSYNC_API GetDomainNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API GetDomainNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetDomainNameResult& WithDomainNameConfig(const DomainNameConfig& value) { SetDomainNameConfig(value); return *this;}

    /**
     * <p>The configuration for the <code>DomainName</code>.</p>
     */
    inline GetDomainNameResult& WithDomainNameConfig(DomainNameConfig&& value) { SetDomainNameConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDomainNameResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDomainNameResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDomainNameResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DomainNameConfig m_domainNameConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
