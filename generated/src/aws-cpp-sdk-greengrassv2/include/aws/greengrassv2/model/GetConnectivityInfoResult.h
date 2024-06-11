﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/ConnectivityInfo.h>
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
namespace GreengrassV2
{
namespace Model
{
  class GetConnectivityInfoResult
  {
  public:
    AWS_GREENGRASSV2_API GetConnectivityInfoResult();
    AWS_GREENGRASSV2_API GetConnectivityInfoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API GetConnectivityInfoResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The connectivity information for the core device.</p>
     */
    inline const Aws::Vector<ConnectivityInfo>& GetConnectivityInfo() const{ return m_connectivityInfo; }
    inline void SetConnectivityInfo(const Aws::Vector<ConnectivityInfo>& value) { m_connectivityInfo = value; }
    inline void SetConnectivityInfo(Aws::Vector<ConnectivityInfo>&& value) { m_connectivityInfo = std::move(value); }
    inline GetConnectivityInfoResult& WithConnectivityInfo(const Aws::Vector<ConnectivityInfo>& value) { SetConnectivityInfo(value); return *this;}
    inline GetConnectivityInfoResult& WithConnectivityInfo(Aws::Vector<ConnectivityInfo>&& value) { SetConnectivityInfo(std::move(value)); return *this;}
    inline GetConnectivityInfoResult& AddConnectivityInfo(const ConnectivityInfo& value) { m_connectivityInfo.push_back(value); return *this; }
    inline GetConnectivityInfoResult& AddConnectivityInfo(ConnectivityInfo&& value) { m_connectivityInfo.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A message about the connectivity information request.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline GetConnectivityInfoResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline GetConnectivityInfoResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline GetConnectivityInfoResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetConnectivityInfoResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetConnectivityInfoResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetConnectivityInfoResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectivityInfo> m_connectivityInfo;

    Aws::String m_message;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
