/**
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


    /**
     * <p>The name you gave to the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }

    /**
     * <p>The name you gave to the security profile.</p>
     */
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileName = value; }

    /**
     * <p>The name you gave to the security profile.</p>
     */
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileName = std::move(value); }

    /**
     * <p>The name you gave to the security profile.</p>
     */
    inline void SetSecurityProfileName(const char* value) { m_securityProfileName.assign(value); }

    /**
     * <p>The name you gave to the security profile.</p>
     */
    inline CreateSecurityProfileResult& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}

    /**
     * <p>The name you gave to the security profile.</p>
     */
    inline CreateSecurityProfileResult& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}

    /**
     * <p>The name you gave to the security profile.</p>
     */
    inline CreateSecurityProfileResult& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}


    /**
     * <p>The ARN of the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileArn() const{ return m_securityProfileArn; }

    /**
     * <p>The ARN of the security profile.</p>
     */
    inline void SetSecurityProfileArn(const Aws::String& value) { m_securityProfileArn = value; }

    /**
     * <p>The ARN of the security profile.</p>
     */
    inline void SetSecurityProfileArn(Aws::String&& value) { m_securityProfileArn = std::move(value); }

    /**
     * <p>The ARN of the security profile.</p>
     */
    inline void SetSecurityProfileArn(const char* value) { m_securityProfileArn.assign(value); }

    /**
     * <p>The ARN of the security profile.</p>
     */
    inline CreateSecurityProfileResult& WithSecurityProfileArn(const Aws::String& value) { SetSecurityProfileArn(value); return *this;}

    /**
     * <p>The ARN of the security profile.</p>
     */
    inline CreateSecurityProfileResult& WithSecurityProfileArn(Aws::String&& value) { SetSecurityProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the security profile.</p>
     */
    inline CreateSecurityProfileResult& WithSecurityProfileArn(const char* value) { SetSecurityProfileArn(value); return *this;}

  private:

    Aws::String m_securityProfileName;

    Aws::String m_securityProfileArn;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
