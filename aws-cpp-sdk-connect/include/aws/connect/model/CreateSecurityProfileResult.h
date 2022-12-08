/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class CreateSecurityProfileResult
  {
  public:
    AWS_CONNECT_API CreateSecurityProfileResult();
    AWS_CONNECT_API CreateSecurityProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateSecurityProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for the security profle.</p>
     */
    inline const Aws::String& GetSecurityProfileId() const{ return m_securityProfileId; }

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline void SetSecurityProfileId(const Aws::String& value) { m_securityProfileId = value; }

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline void SetSecurityProfileId(Aws::String&& value) { m_securityProfileId = std::move(value); }

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline void SetSecurityProfileId(const char* value) { m_securityProfileId.assign(value); }

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline CreateSecurityProfileResult& WithSecurityProfileId(const Aws::String& value) { SetSecurityProfileId(value); return *this;}

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline CreateSecurityProfileResult& WithSecurityProfileId(Aws::String&& value) { SetSecurityProfileId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline CreateSecurityProfileResult& WithSecurityProfileId(const char* value) { SetSecurityProfileId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileArn() const{ return m_securityProfileArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the security profile.</p>
     */
    inline void SetSecurityProfileArn(const Aws::String& value) { m_securityProfileArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the security profile.</p>
     */
    inline void SetSecurityProfileArn(Aws::String&& value) { m_securityProfileArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the security profile.</p>
     */
    inline void SetSecurityProfileArn(const char* value) { m_securityProfileArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the security profile.</p>
     */
    inline CreateSecurityProfileResult& WithSecurityProfileArn(const Aws::String& value) { SetSecurityProfileArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the security profile.</p>
     */
    inline CreateSecurityProfileResult& WithSecurityProfileArn(Aws::String&& value) { SetSecurityProfileArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the security profile.</p>
     */
    inline CreateSecurityProfileResult& WithSecurityProfileArn(const char* value) { SetSecurityProfileArn(value); return *this;}

  private:

    Aws::String m_securityProfileId;

    Aws::String m_securityProfileArn;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
