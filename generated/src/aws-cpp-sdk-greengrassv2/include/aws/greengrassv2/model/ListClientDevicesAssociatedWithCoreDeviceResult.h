﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/AssociatedClientDevice.h>
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
  class ListClientDevicesAssociatedWithCoreDeviceResult
  {
  public:
    AWS_GREENGRASSV2_API ListClientDevicesAssociatedWithCoreDeviceResult();
    AWS_GREENGRASSV2_API ListClientDevicesAssociatedWithCoreDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API ListClientDevicesAssociatedWithCoreDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that describes the client devices that are associated with the core
     * device.</p>
     */
    inline const Aws::Vector<AssociatedClientDevice>& GetAssociatedClientDevices() const{ return m_associatedClientDevices; }
    inline void SetAssociatedClientDevices(const Aws::Vector<AssociatedClientDevice>& value) { m_associatedClientDevices = value; }
    inline void SetAssociatedClientDevices(Aws::Vector<AssociatedClientDevice>&& value) { m_associatedClientDevices = std::move(value); }
    inline ListClientDevicesAssociatedWithCoreDeviceResult& WithAssociatedClientDevices(const Aws::Vector<AssociatedClientDevice>& value) { SetAssociatedClientDevices(value); return *this;}
    inline ListClientDevicesAssociatedWithCoreDeviceResult& WithAssociatedClientDevices(Aws::Vector<AssociatedClientDevice>&& value) { SetAssociatedClientDevices(std::move(value)); return *this;}
    inline ListClientDevicesAssociatedWithCoreDeviceResult& AddAssociatedClientDevices(const AssociatedClientDevice& value) { m_associatedClientDevices.push_back(value); return *this; }
    inline ListClientDevicesAssociatedWithCoreDeviceResult& AddAssociatedClientDevices(AssociatedClientDevice&& value) { m_associatedClientDevices.push_back(std::move(value)); return *this; }
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
    inline ListClientDevicesAssociatedWithCoreDeviceResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListClientDevicesAssociatedWithCoreDeviceResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListClientDevicesAssociatedWithCoreDeviceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListClientDevicesAssociatedWithCoreDeviceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListClientDevicesAssociatedWithCoreDeviceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListClientDevicesAssociatedWithCoreDeviceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssociatedClientDevice> m_associatedClientDevices;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
