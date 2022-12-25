/**
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


    /**
     * <p>The connectivity information for the core device.</p>
     */
    inline const Aws::Vector<ConnectivityInfo>& GetConnectivityInfo() const{ return m_connectivityInfo; }

    /**
     * <p>The connectivity information for the core device.</p>
     */
    inline void SetConnectivityInfo(const Aws::Vector<ConnectivityInfo>& value) { m_connectivityInfo = value; }

    /**
     * <p>The connectivity information for the core device.</p>
     */
    inline void SetConnectivityInfo(Aws::Vector<ConnectivityInfo>&& value) { m_connectivityInfo = std::move(value); }

    /**
     * <p>The connectivity information for the core device.</p>
     */
    inline GetConnectivityInfoResult& WithConnectivityInfo(const Aws::Vector<ConnectivityInfo>& value) { SetConnectivityInfo(value); return *this;}

    /**
     * <p>The connectivity information for the core device.</p>
     */
    inline GetConnectivityInfoResult& WithConnectivityInfo(Aws::Vector<ConnectivityInfo>&& value) { SetConnectivityInfo(std::move(value)); return *this;}

    /**
     * <p>The connectivity information for the core device.</p>
     */
    inline GetConnectivityInfoResult& AddConnectivityInfo(const ConnectivityInfo& value) { m_connectivityInfo.push_back(value); return *this; }

    /**
     * <p>The connectivity information for the core device.</p>
     */
    inline GetConnectivityInfoResult& AddConnectivityInfo(ConnectivityInfo&& value) { m_connectivityInfo.push_back(std::move(value)); return *this; }


    /**
     * <p>A message about the connectivity information request.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message about the connectivity information request.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>A message about the connectivity information request.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>A message about the connectivity information request.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>A message about the connectivity information request.</p>
     */
    inline GetConnectivityInfoResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message about the connectivity information request.</p>
     */
    inline GetConnectivityInfoResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message about the connectivity information request.</p>
     */
    inline GetConnectivityInfoResult& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::Vector<ConnectivityInfo> m_connectivityInfo;

    Aws::String m_message;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
