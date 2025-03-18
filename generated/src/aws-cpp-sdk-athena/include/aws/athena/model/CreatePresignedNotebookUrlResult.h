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
    AWS_ATHENA_API CreatePresignedNotebookUrlResult() = default;
    AWS_ATHENA_API CreatePresignedNotebookUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API CreatePresignedNotebookUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The URL of the notebook. The URL includes the authentication token and
     * notebook file name and points directly to the opened notebook.</p>
     */
    inline const Aws::String& GetNotebookUrl() const { return m_notebookUrl; }
    template<typename NotebookUrlT = Aws::String>
    void SetNotebookUrl(NotebookUrlT&& value) { m_notebookUrlHasBeenSet = true; m_notebookUrl = std::forward<NotebookUrlT>(value); }
    template<typename NotebookUrlT = Aws::String>
    CreatePresignedNotebookUrlResult& WithNotebookUrl(NotebookUrlT&& value) { SetNotebookUrl(std::forward<NotebookUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication token for the notebook.</p>
     */
    inline const Aws::String& GetAuthToken() const { return m_authToken; }
    template<typename AuthTokenT = Aws::String>
    void SetAuthToken(AuthTokenT&& value) { m_authTokenHasBeenSet = true; m_authToken = std::forward<AuthTokenT>(value); }
    template<typename AuthTokenT = Aws::String>
    CreatePresignedNotebookUrlResult& WithAuthToken(AuthTokenT&& value) { SetAuthToken(std::forward<AuthTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC epoch time when the authentication token expires.</p>
     */
    inline long long GetAuthTokenExpirationTime() const { return m_authTokenExpirationTime; }
    inline void SetAuthTokenExpirationTime(long long value) { m_authTokenExpirationTimeHasBeenSet = true; m_authTokenExpirationTime = value; }
    inline CreatePresignedNotebookUrlResult& WithAuthTokenExpirationTime(long long value) { SetAuthTokenExpirationTime(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePresignedNotebookUrlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_notebookUrl;
    bool m_notebookUrlHasBeenSet = false;

    Aws::String m_authToken;
    bool m_authTokenHasBeenSet = false;

    long long m_authTokenExpirationTime{0};
    bool m_authTokenExpirationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
