/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/PositionConfigurationItem.h>
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
namespace IoTWireless
{
namespace Model
{
  class AWS_IOTWIRELESS_API ListPositionConfigurationsResult
  {
  public:
    ListPositionConfigurationsResult();
    ListPositionConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListPositionConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of position configurations.</p>
     */
    inline const Aws::Vector<PositionConfigurationItem>& GetPositionConfigurationList() const{ return m_positionConfigurationList; }

    /**
     * <p>A list of position configurations.</p>
     */
    inline void SetPositionConfigurationList(const Aws::Vector<PositionConfigurationItem>& value) { m_positionConfigurationList = value; }

    /**
     * <p>A list of position configurations.</p>
     */
    inline void SetPositionConfigurationList(Aws::Vector<PositionConfigurationItem>&& value) { m_positionConfigurationList = std::move(value); }

    /**
     * <p>A list of position configurations.</p>
     */
    inline ListPositionConfigurationsResult& WithPositionConfigurationList(const Aws::Vector<PositionConfigurationItem>& value) { SetPositionConfigurationList(value); return *this;}

    /**
     * <p>A list of position configurations.</p>
     */
    inline ListPositionConfigurationsResult& WithPositionConfigurationList(Aws::Vector<PositionConfigurationItem>&& value) { SetPositionConfigurationList(std::move(value)); return *this;}

    /**
     * <p>A list of position configurations.</p>
     */
    inline ListPositionConfigurationsResult& AddPositionConfigurationList(const PositionConfigurationItem& value) { m_positionConfigurationList.push_back(value); return *this; }

    /**
     * <p>A list of position configurations.</p>
     */
    inline ListPositionConfigurationsResult& AddPositionConfigurationList(PositionConfigurationItem&& value) { m_positionConfigurationList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListPositionConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListPositionConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListPositionConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PositionConfigurationItem> m_positionConfigurationList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
