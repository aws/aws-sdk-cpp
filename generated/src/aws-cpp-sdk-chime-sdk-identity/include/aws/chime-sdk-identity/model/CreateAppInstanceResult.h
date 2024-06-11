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
  class CreateAppInstanceResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API CreateAppInstanceResult();
    AWS_CHIMESDKIDENTITY_API CreateAppInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API CreateAppInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArn = value; }
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArn = std::move(value); }
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArn.assign(value); }
    inline CreateAppInstanceResult& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}
    inline CreateAppInstanceResult& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}
    inline CreateAppInstanceResult& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAppInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAppInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAppInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
