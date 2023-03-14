/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/SecurityHubConfiguration.h>
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
namespace Macie2
{
namespace Model
{
  class GetFindingsPublicationConfigurationResult
  {
  public:
    AWS_MACIE2_API GetFindingsPublicationConfigurationResult();
    AWS_MACIE2_API GetFindingsPublicationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetFindingsPublicationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The configuration settings that determine which findings are published to
     * Security Hub.</p>
     */
    inline const SecurityHubConfiguration& GetSecurityHubConfiguration() const{ return m_securityHubConfiguration; }

    /**
     * <p>The configuration settings that determine which findings are published to
     * Security Hub.</p>
     */
    inline void SetSecurityHubConfiguration(const SecurityHubConfiguration& value) { m_securityHubConfiguration = value; }

    /**
     * <p>The configuration settings that determine which findings are published to
     * Security Hub.</p>
     */
    inline void SetSecurityHubConfiguration(SecurityHubConfiguration&& value) { m_securityHubConfiguration = std::move(value); }

    /**
     * <p>The configuration settings that determine which findings are published to
     * Security Hub.</p>
     */
    inline GetFindingsPublicationConfigurationResult& WithSecurityHubConfiguration(const SecurityHubConfiguration& value) { SetSecurityHubConfiguration(value); return *this;}

    /**
     * <p>The configuration settings that determine which findings are published to
     * Security Hub.</p>
     */
    inline GetFindingsPublicationConfigurationResult& WithSecurityHubConfiguration(SecurityHubConfiguration&& value) { SetSecurityHubConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetFindingsPublicationConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetFindingsPublicationConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetFindingsPublicationConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SecurityHubConfiguration m_securityHubConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
