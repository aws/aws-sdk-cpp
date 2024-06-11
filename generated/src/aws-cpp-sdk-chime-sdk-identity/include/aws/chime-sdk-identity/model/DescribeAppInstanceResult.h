﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/AppInstance.h>
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
  class DescribeAppInstanceResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceResult();
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN, metadata, created and last-updated timestamps, and the name of the
     * <code>AppInstance</code>. All timestamps use epoch milliseconds.</p>
     */
    inline const AppInstance& GetAppInstance() const{ return m_appInstance; }
    inline void SetAppInstance(const AppInstance& value) { m_appInstance = value; }
    inline void SetAppInstance(AppInstance&& value) { m_appInstance = std::move(value); }
    inline DescribeAppInstanceResult& WithAppInstance(const AppInstance& value) { SetAppInstance(value); return *this;}
    inline DescribeAppInstanceResult& WithAppInstance(AppInstance&& value) { SetAppInstance(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAppInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAppInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAppInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AppInstance m_appInstance;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
