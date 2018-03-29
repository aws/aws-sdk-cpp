/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GREENGRASS_API GetGroupCertificateAuthorityResult
  {
  public:
    GetGroupCertificateAuthorityResult();
    GetGroupCertificateAuthorityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetGroupCertificateAuthorityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the certificate authority for the group.
     */
    inline const Aws::String& GetGroupCertificateAuthorityArn() const{ return m_groupCertificateAuthorityArn; }

    /**
     * The ARN of the certificate authority for the group.
     */
    inline void SetGroupCertificateAuthorityArn(const Aws::String& value) { m_groupCertificateAuthorityArn = value; }

    /**
     * The ARN of the certificate authority for the group.
     */
    inline void SetGroupCertificateAuthorityArn(Aws::String&& value) { m_groupCertificateAuthorityArn = std::move(value); }

    /**
     * The ARN of the certificate authority for the group.
     */
    inline void SetGroupCertificateAuthorityArn(const char* value) { m_groupCertificateAuthorityArn.assign(value); }

    /**
     * The ARN of the certificate authority for the group.
     */
    inline GetGroupCertificateAuthorityResult& WithGroupCertificateAuthorityArn(const Aws::String& value) { SetGroupCertificateAuthorityArn(value); return *this;}

    /**
     * The ARN of the certificate authority for the group.
     */
    inline GetGroupCertificateAuthorityResult& WithGroupCertificateAuthorityArn(Aws::String&& value) { SetGroupCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * The ARN of the certificate authority for the group.
     */
    inline GetGroupCertificateAuthorityResult& WithGroupCertificateAuthorityArn(const char* value) { SetGroupCertificateAuthorityArn(value); return *this;}


    /**
     * The ID of the certificate authority for the group.
     */
    inline const Aws::String& GetGroupCertificateAuthorityId() const{ return m_groupCertificateAuthorityId; }

    /**
     * The ID of the certificate authority for the group.
     */
    inline void SetGroupCertificateAuthorityId(const Aws::String& value) { m_groupCertificateAuthorityId = value; }

    /**
     * The ID of the certificate authority for the group.
     */
    inline void SetGroupCertificateAuthorityId(Aws::String&& value) { m_groupCertificateAuthorityId = std::move(value); }

    /**
     * The ID of the certificate authority for the group.
     */
    inline void SetGroupCertificateAuthorityId(const char* value) { m_groupCertificateAuthorityId.assign(value); }

    /**
     * The ID of the certificate authority for the group.
     */
    inline GetGroupCertificateAuthorityResult& WithGroupCertificateAuthorityId(const Aws::String& value) { SetGroupCertificateAuthorityId(value); return *this;}

    /**
     * The ID of the certificate authority for the group.
     */
    inline GetGroupCertificateAuthorityResult& WithGroupCertificateAuthorityId(Aws::String&& value) { SetGroupCertificateAuthorityId(std::move(value)); return *this;}

    /**
     * The ID of the certificate authority for the group.
     */
    inline GetGroupCertificateAuthorityResult& WithGroupCertificateAuthorityId(const char* value) { SetGroupCertificateAuthorityId(value); return *this;}


    /**
     * The PEM encoded certificate for the group.
     */
    inline const Aws::String& GetPemEncodedCertificate() const{ return m_pemEncodedCertificate; }

    /**
     * The PEM encoded certificate for the group.
     */
    inline void SetPemEncodedCertificate(const Aws::String& value) { m_pemEncodedCertificate = value; }

    /**
     * The PEM encoded certificate for the group.
     */
    inline void SetPemEncodedCertificate(Aws::String&& value) { m_pemEncodedCertificate = std::move(value); }

    /**
     * The PEM encoded certificate for the group.
     */
    inline void SetPemEncodedCertificate(const char* value) { m_pemEncodedCertificate.assign(value); }

    /**
     * The PEM encoded certificate for the group.
     */
    inline GetGroupCertificateAuthorityResult& WithPemEncodedCertificate(const Aws::String& value) { SetPemEncodedCertificate(value); return *this;}

    /**
     * The PEM encoded certificate for the group.
     */
    inline GetGroupCertificateAuthorityResult& WithPemEncodedCertificate(Aws::String&& value) { SetPemEncodedCertificate(std::move(value)); return *this;}

    /**
     * The PEM encoded certificate for the group.
     */
    inline GetGroupCertificateAuthorityResult& WithPemEncodedCertificate(const char* value) { SetPemEncodedCertificate(value); return *this;}

  private:

    Aws::String m_groupCertificateAuthorityArn;

    Aws::String m_groupCertificateAuthorityId;

    Aws::String m_pemEncodedCertificate;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
