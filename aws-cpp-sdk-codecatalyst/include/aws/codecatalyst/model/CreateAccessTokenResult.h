/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeCatalyst
{
namespace Model
{
  class CreateAccessTokenResult
  {
  public:
    AWS_CODECATALYST_API CreateAccessTokenResult();
    AWS_CODECATALYST_API CreateAccessTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API CreateAccessTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The secret value of the personal access token.</p>
     */
    inline const Aws::String& GetSecret() const{ return m_secret; }

    /**
     * <p>The secret value of the personal access token.</p>
     */
    inline void SetSecret(const Aws::String& value) { m_secret = value; }

    /**
     * <p>The secret value of the personal access token.</p>
     */
    inline void SetSecret(Aws::String&& value) { m_secret = std::move(value); }

    /**
     * <p>The secret value of the personal access token.</p>
     */
    inline void SetSecret(const char* value) { m_secret.assign(value); }

    /**
     * <p>The secret value of the personal access token.</p>
     */
    inline CreateAccessTokenResult& WithSecret(const Aws::String& value) { SetSecret(value); return *this;}

    /**
     * <p>The secret value of the personal access token.</p>
     */
    inline CreateAccessTokenResult& WithSecret(Aws::String&& value) { SetSecret(std::move(value)); return *this;}

    /**
     * <p>The secret value of the personal access token.</p>
     */
    inline CreateAccessTokenResult& WithSecret(const char* value) { SetSecret(value); return *this;}


    /**
     * <p>The friendly name of the personal access token.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the personal access token.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The friendly name of the personal access token.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The friendly name of the personal access token.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The friendly name of the personal access token.</p>
     */
    inline CreateAccessTokenResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the personal access token.</p>
     */
    inline CreateAccessTokenResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the personal access token.</p>
     */
    inline CreateAccessTokenResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The date and time the personal access token expires, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>. If not
     * specified, the default is one year from creation.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresTime() const{ return m_expiresTime; }

    /**
     * <p>The date and time the personal access token expires, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>. If not
     * specified, the default is one year from creation.</p>
     */
    inline void SetExpiresTime(const Aws::Utils::DateTime& value) { m_expiresTime = value; }

    /**
     * <p>The date and time the personal access token expires, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>. If not
     * specified, the default is one year from creation.</p>
     */
    inline void SetExpiresTime(Aws::Utils::DateTime&& value) { m_expiresTime = std::move(value); }

    /**
     * <p>The date and time the personal access token expires, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>. If not
     * specified, the default is one year from creation.</p>
     */
    inline CreateAccessTokenResult& WithExpiresTime(const Aws::Utils::DateTime& value) { SetExpiresTime(value); return *this;}

    /**
     * <p>The date and time the personal access token expires, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>. If not
     * specified, the default is one year from creation.</p>
     */
    inline CreateAccessTokenResult& WithExpiresTime(Aws::Utils::DateTime&& value) { SetExpiresTime(std::move(value)); return *this;}

  private:

    Aws::String m_secret;

    Aws::String m_name;

    Aws::Utils::DateTime m_expiresTime;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
