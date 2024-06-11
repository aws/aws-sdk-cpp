﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
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
  class CreateAppInstanceUserResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API CreateAppInstanceUserResult();
    AWS_CHIMESDKIDENTITY_API CreateAppInstanceUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API CreateAppInstanceUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user's ARN.</p>
     */
    inline const Aws::String& GetAppInstanceUserArn() const{ return m_appInstanceUserArn; }
    inline void SetAppInstanceUserArn(const Aws::String& value) { m_appInstanceUserArn = value; }
    inline void SetAppInstanceUserArn(Aws::String&& value) { m_appInstanceUserArn = std::move(value); }
    inline void SetAppInstanceUserArn(const char* value) { m_appInstanceUserArn.assign(value); }
    inline CreateAppInstanceUserResult& WithAppInstanceUserArn(const Aws::String& value) { SetAppInstanceUserArn(value); return *this;}
    inline CreateAppInstanceUserResult& WithAppInstanceUserArn(Aws::String&& value) { SetAppInstanceUserArn(std::move(value)); return *this;}
    inline CreateAppInstanceUserResult& WithAppInstanceUserArn(const char* value) { SetAppInstanceUserArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAppInstanceUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAppInstanceUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAppInstanceUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceUserArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
