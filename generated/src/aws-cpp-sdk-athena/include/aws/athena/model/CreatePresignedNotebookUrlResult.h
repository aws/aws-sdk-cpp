/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{
  class CreatePresignedNotebookUrlResult
  {
  public:
    AWS_ATHENA_API CreatePresignedNotebookUrlResult();
    AWS_ATHENA_API CreatePresignedNotebookUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API CreatePresignedNotebookUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The URL of the notebook. The URL includes the authentication token and
     * notebook file name and points directly to the opened notebook.</p>
     */
    inline const Aws::String& GetNotebookUrl() const{ return m_notebookUrl; }

    /**
     * <p>The URL of the notebook. The URL includes the authentication token and
     * notebook file name and points directly to the opened notebook.</p>
     */
    inline void SetNotebookUrl(const Aws::String& value) { m_notebookUrl = value; }

    /**
     * <p>The URL of the notebook. The URL includes the authentication token and
     * notebook file name and points directly to the opened notebook.</p>
     */
    inline void SetNotebookUrl(Aws::String&& value) { m_notebookUrl = std::move(value); }

    /**
     * <p>The URL of the notebook. The URL includes the authentication token and
     * notebook file name and points directly to the opened notebook.</p>
     */
    inline void SetNotebookUrl(const char* value) { m_notebookUrl.assign(value); }

    /**
     * <p>The URL of the notebook. The URL includes the authentication token and
     * notebook file name and points directly to the opened notebook.</p>
     */
    inline CreatePresignedNotebookUrlResult& WithNotebookUrl(const Aws::String& value) { SetNotebookUrl(value); return *this;}

    /**
     * <p>The URL of the notebook. The URL includes the authentication token and
     * notebook file name and points directly to the opened notebook.</p>
     */
    inline CreatePresignedNotebookUrlResult& WithNotebookUrl(Aws::String&& value) { SetNotebookUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the notebook. The URL includes the authentication token and
     * notebook file name and points directly to the opened notebook.</p>
     */
    inline CreatePresignedNotebookUrlResult& WithNotebookUrl(const char* value) { SetNotebookUrl(value); return *this;}


    /**
     * <p>The authentication token for the notebook.</p>
     */
    inline const Aws::String& GetAuthToken() const{ return m_authToken; }

    /**
     * <p>The authentication token for the notebook.</p>
     */
    inline void SetAuthToken(const Aws::String& value) { m_authToken = value; }

    /**
     * <p>The authentication token for the notebook.</p>
     */
    inline void SetAuthToken(Aws::String&& value) { m_authToken = std::move(value); }

    /**
     * <p>The authentication token for the notebook.</p>
     */
    inline void SetAuthToken(const char* value) { m_authToken.assign(value); }

    /**
     * <p>The authentication token for the notebook.</p>
     */
    inline CreatePresignedNotebookUrlResult& WithAuthToken(const Aws::String& value) { SetAuthToken(value); return *this;}

    /**
     * <p>The authentication token for the notebook.</p>
     */
    inline CreatePresignedNotebookUrlResult& WithAuthToken(Aws::String&& value) { SetAuthToken(std::move(value)); return *this;}

    /**
     * <p>The authentication token for the notebook.</p>
     */
    inline CreatePresignedNotebookUrlResult& WithAuthToken(const char* value) { SetAuthToken(value); return *this;}


    /**
     * <p>The UTC epoch time when the authentication token expires.</p>
     */
    inline long long GetAuthTokenExpirationTime() const{ return m_authTokenExpirationTime; }

    /**
     * <p>The UTC epoch time when the authentication token expires.</p>
     */
    inline void SetAuthTokenExpirationTime(long long value) { m_authTokenExpirationTime = value; }

    /**
     * <p>The UTC epoch time when the authentication token expires.</p>
     */
    inline CreatePresignedNotebookUrlResult& WithAuthTokenExpirationTime(long long value) { SetAuthTokenExpirationTime(value); return *this;}

  private:

    Aws::String m_notebookUrl;

    Aws::String m_authToken;

    long long m_authTokenExpirationTime;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
