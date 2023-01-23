/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/ServiceProfile.h>
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
  class ListServiceProfilesResult
  {
  public:
    AWS_IOTWIRELESS_API ListServiceProfilesResult();
    AWS_IOTWIRELESS_API ListServiceProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListServiceProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListServiceProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListServiceProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListServiceProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of service profiles.</p>
     */
    inline const Aws::Vector<ServiceProfile>& GetServiceProfileList() const{ return m_serviceProfileList; }

    /**
     * <p>The list of service profiles.</p>
     */
    inline void SetServiceProfileList(const Aws::Vector<ServiceProfile>& value) { m_serviceProfileList = value; }

    /**
     * <p>The list of service profiles.</p>
     */
    inline void SetServiceProfileList(Aws::Vector<ServiceProfile>&& value) { m_serviceProfileList = std::move(value); }

    /**
     * <p>The list of service profiles.</p>
     */
    inline ListServiceProfilesResult& WithServiceProfileList(const Aws::Vector<ServiceProfile>& value) { SetServiceProfileList(value); return *this;}

    /**
     * <p>The list of service profiles.</p>
     */
    inline ListServiceProfilesResult& WithServiceProfileList(Aws::Vector<ServiceProfile>&& value) { SetServiceProfileList(std::move(value)); return *this;}

    /**
     * <p>The list of service profiles.</p>
     */
    inline ListServiceProfilesResult& AddServiceProfileList(const ServiceProfile& value) { m_serviceProfileList.push_back(value); return *this; }

    /**
     * <p>The list of service profiles.</p>
     */
    inline ListServiceProfilesResult& AddServiceProfileList(ServiceProfile&& value) { m_serviceProfileList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ServiceProfile> m_serviceProfileList;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
