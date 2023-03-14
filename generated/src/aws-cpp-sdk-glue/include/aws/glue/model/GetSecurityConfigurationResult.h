/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/SecurityConfiguration.h>
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
namespace Glue
{
namespace Model
{
  class GetSecurityConfigurationResult
  {
  public:
    AWS_GLUE_API GetSecurityConfigurationResult();
    AWS_GLUE_API GetSecurityConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetSecurityConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested security configuration.</p>
     */
    inline const SecurityConfiguration& GetSecurityConfiguration() const{ return m_securityConfiguration; }

    /**
     * <p>The requested security configuration.</p>
     */
    inline void SetSecurityConfiguration(const SecurityConfiguration& value) { m_securityConfiguration = value; }

    /**
     * <p>The requested security configuration.</p>
     */
    inline void SetSecurityConfiguration(SecurityConfiguration&& value) { m_securityConfiguration = std::move(value); }

    /**
     * <p>The requested security configuration.</p>
     */
    inline GetSecurityConfigurationResult& WithSecurityConfiguration(const SecurityConfiguration& value) { SetSecurityConfiguration(value); return *this;}

    /**
     * <p>The requested security configuration.</p>
     */
    inline GetSecurityConfigurationResult& WithSecurityConfiguration(SecurityConfiguration&& value) { SetSecurityConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSecurityConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSecurityConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSecurityConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SecurityConfiguration m_securityConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
