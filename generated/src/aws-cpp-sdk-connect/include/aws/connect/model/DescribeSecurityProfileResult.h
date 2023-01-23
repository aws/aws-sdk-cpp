/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/SecurityProfile.h>
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
  class DescribeSecurityProfileResult
  {
  public:
    AWS_CONNECT_API DescribeSecurityProfileResult();
    AWS_CONNECT_API DescribeSecurityProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeSecurityProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The security profile.</p>
     */
    inline const SecurityProfile& GetSecurityProfile() const{ return m_securityProfile; }

    /**
     * <p>The security profile.</p>
     */
    inline void SetSecurityProfile(const SecurityProfile& value) { m_securityProfile = value; }

    /**
     * <p>The security profile.</p>
     */
    inline void SetSecurityProfile(SecurityProfile&& value) { m_securityProfile = std::move(value); }

    /**
     * <p>The security profile.</p>
     */
    inline DescribeSecurityProfileResult& WithSecurityProfile(const SecurityProfile& value) { SetSecurityProfile(value); return *this;}

    /**
     * <p>The security profile.</p>
     */
    inline DescribeSecurityProfileResult& WithSecurityProfile(SecurityProfile&& value) { SetSecurityProfile(std::move(value)); return *this;}

  private:

    SecurityProfile m_securityProfile;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
