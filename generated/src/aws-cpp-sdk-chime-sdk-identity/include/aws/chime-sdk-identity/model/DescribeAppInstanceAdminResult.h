﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/AppInstanceAdmin.h>
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
  class DescribeAppInstanceAdminResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceAdminResult();
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceAdminResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceAdminResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN and name of the <code>AppInstanceUser</code>, the ARN of the
     * <code>AppInstance</code>, and the created and last-updated timestamps. All
     * timestamps use epoch milliseconds.</p>
     */
    inline const AppInstanceAdmin& GetAppInstanceAdmin() const{ return m_appInstanceAdmin; }
    inline void SetAppInstanceAdmin(const AppInstanceAdmin& value) { m_appInstanceAdmin = value; }
    inline void SetAppInstanceAdmin(AppInstanceAdmin&& value) { m_appInstanceAdmin = std::move(value); }
    inline DescribeAppInstanceAdminResult& WithAppInstanceAdmin(const AppInstanceAdmin& value) { SetAppInstanceAdmin(value); return *this;}
    inline DescribeAppInstanceAdminResult& WithAppInstanceAdmin(AppInstanceAdmin&& value) { SetAppInstanceAdmin(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAppInstanceAdminResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAppInstanceAdminResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAppInstanceAdminResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AppInstanceAdmin m_appInstanceAdmin;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
