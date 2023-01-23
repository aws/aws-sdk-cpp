/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
namespace Greengrass
{
namespace Model
{
  class CreateGroupCertificateAuthorityResult
  {
  public:
    AWS_GREENGRASS_API CreateGroupCertificateAuthorityResult();
    AWS_GREENGRASS_API CreateGroupCertificateAuthorityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API CreateGroupCertificateAuthorityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the group certificate authority.
     */
    inline const Aws::String& GetGroupCertificateAuthorityArn() const{ return m_groupCertificateAuthorityArn; }

    /**
     * The ARN of the group certificate authority.
     */
    inline void SetGroupCertificateAuthorityArn(const Aws::String& value) { m_groupCertificateAuthorityArn = value; }

    /**
     * The ARN of the group certificate authority.
     */
    inline void SetGroupCertificateAuthorityArn(Aws::String&& value) { m_groupCertificateAuthorityArn = std::move(value); }

    /**
     * The ARN of the group certificate authority.
     */
    inline void SetGroupCertificateAuthorityArn(const char* value) { m_groupCertificateAuthorityArn.assign(value); }

    /**
     * The ARN of the group certificate authority.
     */
    inline CreateGroupCertificateAuthorityResult& WithGroupCertificateAuthorityArn(const Aws::String& value) { SetGroupCertificateAuthorityArn(value); return *this;}

    /**
     * The ARN of the group certificate authority.
     */
    inline CreateGroupCertificateAuthorityResult& WithGroupCertificateAuthorityArn(Aws::String&& value) { SetGroupCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * The ARN of the group certificate authority.
     */
    inline CreateGroupCertificateAuthorityResult& WithGroupCertificateAuthorityArn(const char* value) { SetGroupCertificateAuthorityArn(value); return *this;}

  private:

    Aws::String m_groupCertificateAuthorityArn;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
