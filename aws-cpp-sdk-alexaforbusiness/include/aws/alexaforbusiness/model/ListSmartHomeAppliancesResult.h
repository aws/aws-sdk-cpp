/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/SmartHomeAppliance.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class ListSmartHomeAppliancesResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API ListSmartHomeAppliancesResult();
    AWS_ALEXAFORBUSINESS_API ListSmartHomeAppliancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API ListSmartHomeAppliancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The smart home appliances.</p>
     */
    inline const Aws::Vector<SmartHomeAppliance>& GetSmartHomeAppliances() const{ return m_smartHomeAppliances; }

    /**
     * <p>The smart home appliances.</p>
     */
    inline void SetSmartHomeAppliances(const Aws::Vector<SmartHomeAppliance>& value) { m_smartHomeAppliances = value; }

    /**
     * <p>The smart home appliances.</p>
     */
    inline void SetSmartHomeAppliances(Aws::Vector<SmartHomeAppliance>&& value) { m_smartHomeAppliances = std::move(value); }

    /**
     * <p>The smart home appliances.</p>
     */
    inline ListSmartHomeAppliancesResult& WithSmartHomeAppliances(const Aws::Vector<SmartHomeAppliance>& value) { SetSmartHomeAppliances(value); return *this;}

    /**
     * <p>The smart home appliances.</p>
     */
    inline ListSmartHomeAppliancesResult& WithSmartHomeAppliances(Aws::Vector<SmartHomeAppliance>&& value) { SetSmartHomeAppliances(std::move(value)); return *this;}

    /**
     * <p>The smart home appliances.</p>
     */
    inline ListSmartHomeAppliancesResult& AddSmartHomeAppliances(const SmartHomeAppliance& value) { m_smartHomeAppliances.push_back(value); return *this; }

    /**
     * <p>The smart home appliances.</p>
     */
    inline ListSmartHomeAppliancesResult& AddSmartHomeAppliances(SmartHomeAppliance&& value) { m_smartHomeAppliances.push_back(std::move(value)); return *this; }


    /**
     * <p>The tokens used for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline ListSmartHomeAppliancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline ListSmartHomeAppliancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline ListSmartHomeAppliancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SmartHomeAppliance> m_smartHomeAppliances;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
