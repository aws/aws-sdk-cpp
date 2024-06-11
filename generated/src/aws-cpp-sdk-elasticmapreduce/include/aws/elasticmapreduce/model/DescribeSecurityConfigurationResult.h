/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace EMR
{
namespace Model
{
  class DescribeSecurityConfigurationResult
  {
  public:
    AWS_EMR_API DescribeSecurityConfigurationResult();
    AWS_EMR_API DescribeSecurityConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API DescribeSecurityConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the security configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeSecurityConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeSecurityConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeSecurityConfigurationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security configuration details in JSON format.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfiguration = value; }
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfiguration = std::move(value); }
    inline void SetSecurityConfiguration(const char* value) { m_securityConfiguration.assign(value); }
    inline DescribeSecurityConfigurationResult& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}
    inline DescribeSecurityConfigurationResult& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}
    inline DescribeSecurityConfigurationResult& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the security configuration was created</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline DescribeSecurityConfigurationResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline DescribeSecurityConfigurationResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeSecurityConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeSecurityConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeSecurityConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_securityConfiguration;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
