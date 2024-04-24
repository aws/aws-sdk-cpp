/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/SecurityConfiguration.h>
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
namespace EMRContainers
{
namespace Model
{
  class DescribeSecurityConfigurationResult
  {
  public:
    AWS_EMRCONTAINERS_API DescribeSecurityConfigurationResult();
    AWS_EMRCONTAINERS_API DescribeSecurityConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API DescribeSecurityConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details of the security configuration.</p>
     */
    inline const SecurityConfiguration& GetSecurityConfiguration() const{ return m_securityConfiguration; }

    /**
     * <p>Details of the security configuration.</p>
     */
    inline void SetSecurityConfiguration(const SecurityConfiguration& value) { m_securityConfiguration = value; }

    /**
     * <p>Details of the security configuration.</p>
     */
    inline void SetSecurityConfiguration(SecurityConfiguration&& value) { m_securityConfiguration = std::move(value); }

    /**
     * <p>Details of the security configuration.</p>
     */
    inline DescribeSecurityConfigurationResult& WithSecurityConfiguration(const SecurityConfiguration& value) { SetSecurityConfiguration(value); return *this;}

    /**
     * <p>Details of the security configuration.</p>
     */
    inline DescribeSecurityConfigurationResult& WithSecurityConfiguration(SecurityConfiguration&& value) { SetSecurityConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeSecurityConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeSecurityConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeSecurityConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SecurityConfiguration m_securityConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
