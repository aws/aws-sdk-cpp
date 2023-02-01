/**
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


    /**
     * <p>A list that summarizes each core device.</p>
     */
    inline const Aws::Vector<CoreDevice>& GetCoreDevices() const{ return m_coreDevices; }

    /**
     * <p>A list that summarizes each core device.</p>
     */
    inline void SetCoreDevices(const Aws::Vector<CoreDevice>& value) { m_coreDevices = value; }

    /**
     * <p>A list that summarizes each core device.</p>
     */
    inline void SetCoreDevices(Aws::Vector<CoreDevice>&& value) { m_coreDevices = std::move(value); }

    /**
     * <p>A list that summarizes each core device.</p>
     */
    inline ListCoreDevicesResult& WithCoreDevices(const Aws::Vector<CoreDevice>& value) { SetCoreDevices(value); return *this;}

    /**
     * <p>A list that summarizes each core device.</p>
     */
    inline ListCoreDevicesResult& WithCoreDevices(Aws::Vector<CoreDevice>&& value) { SetCoreDevices(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes each core device.</p>
     */
    inline ListCoreDevicesResult& AddCoreDevices(const CoreDevice& value) { m_coreDevices.push_back(value); return *this; }

    /**
     * <p>A list that summarizes each core device.</p>
     */
    inline ListCoreDevicesResult& AddCoreDevices(CoreDevice&& value) { m_coreDevices.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListCoreDevicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListCoreDevicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListCoreDevicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CoreDevice> m_coreDevices;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
