/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-identity/model/ExpirationSettings.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{
  class PutAppInstanceUserExpirationSettingsResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API PutAppInstanceUserExpirationSettingsResult();
    AWS_CHIMESDKIDENTITY_API PutAppInstanceUserExpirationSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API PutAppInstanceUserExpirationSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::String& GetAppInstanceUserArn() const{ return m_appInstanceUserArn; }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline void SetAppInstanceUserArn(const Aws::String& value) { m_appInstanceUserArn = value; }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline void SetAppInstanceUserArn(Aws::String&& value) { m_appInstanceUserArn = std::move(value); }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline void SetAppInstanceUserArn(const char* value) { m_appInstanceUserArn.assign(value); }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline PutAppInstanceUserExpirationSettingsResult& WithAppInstanceUserArn(const Aws::String& value) { SetAppInstanceUserArn(value); return *this;}

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline PutAppInstanceUserExpirationSettingsResult& WithAppInstanceUserArn(Aws::String&& value) { SetAppInstanceUserArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline PutAppInstanceUserExpirationSettingsResult& WithAppInstanceUserArn(const char* value) { SetAppInstanceUserArn(value); return *this;}


    /**
     * <p>Settings that control the interval after which an
     * <code>AppInstanceUser</code> is automatically deleted.</p>
     */
    inline const ExpirationSettings& GetExpirationSettings() const{ return m_expirationSettings; }

    /**
     * <p>Settings that control the interval after which an
     * <code>AppInstanceUser</code> is automatically deleted.</p>
     */
    inline void SetExpirationSettings(const ExpirationSettings& value) { m_expirationSettings = value; }

    /**
     * <p>Settings that control the interval after which an
     * <code>AppInstanceUser</code> is automatically deleted.</p>
     */
    inline void SetExpirationSettings(ExpirationSettings&& value) { m_expirationSettings = std::move(value); }

    /**
     * <p>Settings that control the interval after which an
     * <code>AppInstanceUser</code> is automatically deleted.</p>
     */
    inline PutAppInstanceUserExpirationSettingsResult& WithExpirationSettings(const ExpirationSettings& value) { SetExpirationSettings(value); return *this;}

    /**
     * <p>Settings that control the interval after which an
     * <code>AppInstanceUser</code> is automatically deleted.</p>
     */
    inline PutAppInstanceUserExpirationSettingsResult& WithExpirationSettings(ExpirationSettings&& value) { SetExpirationSettings(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutAppInstanceUserExpirationSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutAppInstanceUserExpirationSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutAppInstanceUserExpirationSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_appInstanceUserArn;

    ExpirationSettings m_expirationSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
