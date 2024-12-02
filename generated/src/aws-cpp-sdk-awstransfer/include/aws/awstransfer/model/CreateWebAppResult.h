/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{
  class CreateWebAppResult
  {
  public:
    AWS_TRANSFER_API CreateWebAppResult();
    AWS_TRANSFER_API CreateWebAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API CreateWebAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a unique identifier for the web app.</p>
     */
    inline const Aws::String& GetWebAppId() const{ return m_webAppId; }
    inline void SetWebAppId(const Aws::String& value) { m_webAppId = value; }
    inline void SetWebAppId(Aws::String&& value) { m_webAppId = std::move(value); }
    inline void SetWebAppId(const char* value) { m_webAppId.assign(value); }
    inline CreateWebAppResult& WithWebAppId(const Aws::String& value) { SetWebAppId(value); return *this;}
    inline CreateWebAppResult& WithWebAppId(Aws::String&& value) { SetWebAppId(std::move(value)); return *this;}
    inline CreateWebAppResult& WithWebAppId(const char* value) { SetWebAppId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateWebAppResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateWebAppResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateWebAppResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_webAppId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
