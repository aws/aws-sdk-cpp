/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MobileDeviceAccessRuleEffect.h>
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
namespace WorkMail
{
namespace Model
{
  class GetMobileDeviceAccessOverrideResult
  {
  public:
    AWS_WORKMAIL_API GetMobileDeviceAccessOverrideResult();
    AWS_WORKMAIL_API GetMobileDeviceAccessOverrideResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API GetMobileDeviceAccessOverrideResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The WorkMail user to which the access override applies.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The WorkMail user to which the access override applies.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userId = value; }

    /**
     * <p>The WorkMail user to which the access override applies.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }

    /**
     * <p>The WorkMail user to which the access override applies.</p>
     */
    inline void SetUserId(const char* value) { m_userId.assign(value); }

    /**
     * <p>The WorkMail user to which the access override applies.</p>
     */
    inline GetMobileDeviceAccessOverrideResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The WorkMail user to which the access override applies.</p>
     */
    inline GetMobileDeviceAccessOverrideResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The WorkMail user to which the access override applies.</p>
     */
    inline GetMobileDeviceAccessOverrideResult& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The device to which the access override applies.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The device to which the access override applies.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceId = value; }

    /**
     * <p>The device to which the access override applies.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceId = std::move(value); }

    /**
     * <p>The device to which the access override applies.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceId.assign(value); }

    /**
     * <p>The device to which the access override applies.</p>
     */
    inline GetMobileDeviceAccessOverrideResult& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The device to which the access override applies.</p>
     */
    inline GetMobileDeviceAccessOverrideResult& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The device to which the access override applies.</p>
     */
    inline GetMobileDeviceAccessOverrideResult& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline const MobileDeviceAccessRuleEffect& GetEffect() const{ return m_effect; }

    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline void SetEffect(const MobileDeviceAccessRuleEffect& value) { m_effect = value; }

    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline void SetEffect(MobileDeviceAccessRuleEffect&& value) { m_effect = std::move(value); }

    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline GetMobileDeviceAccessOverrideResult& WithEffect(const MobileDeviceAccessRuleEffect& value) { SetEffect(value); return *this;}

    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline GetMobileDeviceAccessOverrideResult& WithEffect(MobileDeviceAccessRuleEffect&& value) { SetEffect(std::move(value)); return *this;}


    /**
     * <p>A description of the override.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the override.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the override.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the override.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the override.</p>
     */
    inline GetMobileDeviceAccessOverrideResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the override.</p>
     */
    inline GetMobileDeviceAccessOverrideResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the override.</p>
     */
    inline GetMobileDeviceAccessOverrideResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date the override was first created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date the override was first created.</p>
     */
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreated = value; }

    /**
     * <p>The date the override was first created.</p>
     */
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreated = std::move(value); }

    /**
     * <p>The date the override was first created.</p>
     */
    inline GetMobileDeviceAccessOverrideResult& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date the override was first created.</p>
     */
    inline GetMobileDeviceAccessOverrideResult& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}


    /**
     * <p>The date the description was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetDateModified() const{ return m_dateModified; }

    /**
     * <p>The date the description was last modified.</p>
     */
    inline void SetDateModified(const Aws::Utils::DateTime& value) { m_dateModified = value; }

    /**
     * <p>The date the description was last modified.</p>
     */
    inline void SetDateModified(Aws::Utils::DateTime&& value) { m_dateModified = std::move(value); }

    /**
     * <p>The date the description was last modified.</p>
     */
    inline GetMobileDeviceAccessOverrideResult& WithDateModified(const Aws::Utils::DateTime& value) { SetDateModified(value); return *this;}

    /**
     * <p>The date the description was last modified.</p>
     */
    inline GetMobileDeviceAccessOverrideResult& WithDateModified(Aws::Utils::DateTime&& value) { SetDateModified(std::move(value)); return *this;}

  private:

    Aws::String m_userId;

    Aws::String m_deviceId;

    MobileDeviceAccessRuleEffect m_effect;

    Aws::String m_description;

    Aws::Utils::DateTime m_dateCreated;

    Aws::Utils::DateTime m_dateModified;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
