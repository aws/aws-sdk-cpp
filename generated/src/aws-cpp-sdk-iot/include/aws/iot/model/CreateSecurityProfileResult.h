﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class CreateSecurityProfileResult
  {
  public:
    AWS_IOT_API CreateSecurityProfileResult();
    AWS_IOT_API CreateSecurityProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateSecurityProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name you gave to the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileName = value; }
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileName = std::move(value); }
    inline void SetSecurityProfileName(const char* value) { m_securityProfileName.assign(value); }
    inline CreateSecurityProfileResult& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}
    inline CreateSecurityProfileResult& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}
    inline CreateSecurityProfileResult& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileArn() const{ return m_securityProfileArn; }
    inline void SetSecurityProfileArn(const Aws::String& value) { m_securityProfileArn = value; }
    inline void SetSecurityProfileArn(Aws::String&& value) { m_securityProfileArn = std::move(value); }
    inline void SetSecurityProfileArn(const char* value) { m_securityProfileArn.assign(value); }
    inline CreateSecurityProfileResult& WithSecurityProfileArn(const Aws::String& value) { SetSecurityProfileArn(value); return *this;}
    inline CreateSecurityProfileResult& WithSecurityProfileArn(Aws::String&& value) { SetSecurityProfileArn(std::move(value)); return *this;}
    inline CreateSecurityProfileResult& WithSecurityProfileArn(const char* value) { SetSecurityProfileArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSecurityProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSecurityProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSecurityProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_securityProfileName;

    Aws::String m_securityProfileArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
