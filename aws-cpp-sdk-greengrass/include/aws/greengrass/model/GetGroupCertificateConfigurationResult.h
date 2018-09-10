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
  class AWS_GREENGRASS_API GetGroupCertificateConfigurationResult
  {
  public:
    GetGroupCertificateConfigurationResult();
    GetGroupCertificateConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetGroupCertificateConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The amount of time remaining before the certificate authority expires, in
     * milliseconds.
     */
    inline const Aws::String& GetCertificateAuthorityExpiryInMilliseconds() const{ return m_certificateAuthorityExpiryInMilliseconds; }

    /**
     * The amount of time remaining before the certificate authority expires, in
     * milliseconds.
     */
    inline void SetCertificateAuthorityExpiryInMilliseconds(const Aws::String& value) { m_certificateAuthorityExpiryInMilliseconds = value; }

    /**
     * The amount of time remaining before the certificate authority expires, in
     * milliseconds.
     */
    inline void SetCertificateAuthorityExpiryInMilliseconds(Aws::String&& value) { m_certificateAuthorityExpiryInMilliseconds = std::move(value); }

    /**
     * The amount of time remaining before the certificate authority expires, in
     * milliseconds.
     */
    inline void SetCertificateAuthorityExpiryInMilliseconds(const char* value) { m_certificateAuthorityExpiryInMilliseconds.assign(value); }

    /**
     * The amount of time remaining before the certificate authority expires, in
     * milliseconds.
     */
    inline GetGroupCertificateConfigurationResult& WithCertificateAuthorityExpiryInMilliseconds(const Aws::String& value) { SetCertificateAuthorityExpiryInMilliseconds(value); return *this;}

    /**
     * The amount of time remaining before the certificate authority expires, in
     * milliseconds.
     */
    inline GetGroupCertificateConfigurationResult& WithCertificateAuthorityExpiryInMilliseconds(Aws::String&& value) { SetCertificateAuthorityExpiryInMilliseconds(std::move(value)); return *this;}

    /**
     * The amount of time remaining before the certificate authority expires, in
     * milliseconds.
     */
    inline GetGroupCertificateConfigurationResult& WithCertificateAuthorityExpiryInMilliseconds(const char* value) { SetCertificateAuthorityExpiryInMilliseconds(value); return *this;}


    /**
     * The amount of time remaining before the certificate expires, in milliseconds.
     */
    inline const Aws::String& GetCertificateExpiryInMilliseconds() const{ return m_certificateExpiryInMilliseconds; }

    /**
     * The amount of time remaining before the certificate expires, in milliseconds.
     */
    inline void SetCertificateExpiryInMilliseconds(const Aws::String& value) { m_certificateExpiryInMilliseconds = value; }

    /**
     * The amount of time remaining before the certificate expires, in milliseconds.
     */
    inline void SetCertificateExpiryInMilliseconds(Aws::String&& value) { m_certificateExpiryInMilliseconds = std::move(value); }

    /**
     * The amount of time remaining before the certificate expires, in milliseconds.
     */
    inline void SetCertificateExpiryInMilliseconds(const char* value) { m_certificateExpiryInMilliseconds.assign(value); }

    /**
     * The amount of time remaining before the certificate expires, in milliseconds.
     */
    inline GetGroupCertificateConfigurationResult& WithCertificateExpiryInMilliseconds(const Aws::String& value) { SetCertificateExpiryInMilliseconds(value); return *this;}

    /**
     * The amount of time remaining before the certificate expires, in milliseconds.
     */
    inline GetGroupCertificateConfigurationResult& WithCertificateExpiryInMilliseconds(Aws::String&& value) { SetCertificateExpiryInMilliseconds(std::move(value)); return *this;}

    /**
     * The amount of time remaining before the certificate expires, in milliseconds.
     */
    inline GetGroupCertificateConfigurationResult& WithCertificateExpiryInMilliseconds(const char* value) { SetCertificateExpiryInMilliseconds(value); return *this;}


    /**
     * The ID of the group certificate configuration.
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * The ID of the group certificate configuration.
     */
    inline void SetGroupId(const Aws::String& value) { m_groupId = value; }

    /**
     * The ID of the group certificate configuration.
     */
    inline void SetGroupId(Aws::String&& value) { m_groupId = std::move(value); }

    /**
     * The ID of the group certificate configuration.
     */
    inline void SetGroupId(const char* value) { m_groupId.assign(value); }

    /**
     * The ID of the group certificate configuration.
     */
    inline GetGroupCertificateConfigurationResult& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * The ID of the group certificate configuration.
     */
    inline GetGroupCertificateConfigurationResult& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * The ID of the group certificate configuration.
     */
    inline GetGroupCertificateConfigurationResult& WithGroupId(const char* value) { SetGroupId(value); return *this;}

  private:

    Aws::String m_certificateAuthorityExpiryInMilliseconds;

    Aws::String m_certificateExpiryInMilliseconds;

    Aws::String m_groupId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
