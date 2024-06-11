﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/CoreDevice.h>
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
  class ListCoreDevicesResult
  {
  public:
    AWS_GREENGRASSV2_API ListCoreDevicesResult();
    AWS_GREENGRASSV2_API ListCoreDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API ListCoreDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that summarizes each core device.</p>
     */
    inline const Aws::Vector<CoreDevice>& GetCoreDevices() const{ return m_coreDevices; }
    inline void SetCoreDevices(const Aws::Vector<CoreDevice>& value) { m_coreDevices = value; }
    inline void SetCoreDevices(Aws::Vector<CoreDevice>&& value) { m_coreDevices = std::move(value); }
    inline ListCoreDevicesResult& WithCoreDevices(const Aws::Vector<CoreDevice>& value) { SetCoreDevices(value); return *this;}
    inline ListCoreDevicesResult& WithCoreDevices(Aws::Vector<CoreDevice>&& value) { SetCoreDevices(std::move(value)); return *this;}
    inline ListCoreDevicesResult& AddCoreDevices(const CoreDevice& value) { m_coreDevices.push_back(value); return *this; }
    inline ListCoreDevicesResult& AddCoreDevices(CoreDevice&& value) { m_coreDevices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCoreDevicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCoreDevicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCoreDevicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCoreDevicesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCoreDevicesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCoreDevicesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CoreDevice> m_coreDevices;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
