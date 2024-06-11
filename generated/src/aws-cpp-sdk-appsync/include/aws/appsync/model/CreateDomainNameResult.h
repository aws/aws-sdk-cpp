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
  class CreateDomainNameResult
  {
  public:
    AWS_APPSYNC_API CreateDomainNameResult();
    AWS_APPSYNC_API CreateDomainNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API CreateDomainNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration for the <code>DomainName</code>.</p>
     */
    inline const DomainNameConfig& GetDomainNameConfig() const{ return m_domainNameConfig; }
    inline void SetDomainNameConfig(const DomainNameConfig& value) { m_domainNameConfig = value; }
    inline void SetDomainNameConfig(DomainNameConfig&& value) { m_domainNameConfig = std::move(value); }
    inline CreateDomainNameResult& WithDomainNameConfig(const DomainNameConfig& value) { SetDomainNameConfig(value); return *this;}
    inline CreateDomainNameResult& WithDomainNameConfig(DomainNameConfig&& value) { SetDomainNameConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDomainNameResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDomainNameResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDomainNameResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DomainNameConfig m_domainNameConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
