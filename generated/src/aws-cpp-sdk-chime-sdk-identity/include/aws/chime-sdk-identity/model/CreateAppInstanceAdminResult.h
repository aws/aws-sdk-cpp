/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/Identity.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{
  class CreateAppInstanceAdminResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API CreateAppInstanceAdminResult();
    AWS_CHIMESDKIDENTITY_API CreateAppInstanceAdminResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API CreateAppInstanceAdminResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name and ARN of the admin for the <code>AppInstance</code>.</p>
     */
    inline const Identity& GetAppInstanceAdmin() const{ return m_appInstanceAdmin; }

    /**
     * <p>The name and ARN of the admin for the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceAdmin(const Identity& value) { m_appInstanceAdmin = value; }

    /**
     * <p>The name and ARN of the admin for the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceAdmin(Identity&& value) { m_appInstanceAdmin = std::move(value); }

    /**
     * <p>The name and ARN of the admin for the <code>AppInstance</code>.</p>
     */
    inline CreateAppInstanceAdminResult& WithAppInstanceAdmin(const Identity& value) { SetAppInstanceAdmin(value); return *this;}

    /**
     * <p>The name and ARN of the admin for the <code>AppInstance</code>.</p>
     */
    inline CreateAppInstanceAdminResult& WithAppInstanceAdmin(Identity&& value) { SetAppInstanceAdmin(std::move(value)); return *this;}


    /**
     * <p>The ARN of the of the admin for the <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }

    /**
     * <p>The ARN of the of the admin for the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArn = value; }

    /**
     * <p>The ARN of the of the admin for the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArn = std::move(value); }

    /**
     * <p>The ARN of the of the admin for the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArn.assign(value); }

    /**
     * <p>The ARN of the of the admin for the <code>AppInstance</code>.</p>
     */
    inline CreateAppInstanceAdminResult& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the of the admin for the <code>AppInstance</code>.</p>
     */
    inline CreateAppInstanceAdminResult& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the of the admin for the <code>AppInstance</code>.</p>
     */
    inline CreateAppInstanceAdminResult& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}

  private:

    Identity m_appInstanceAdmin;

    Aws::String m_appInstanceArn;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
