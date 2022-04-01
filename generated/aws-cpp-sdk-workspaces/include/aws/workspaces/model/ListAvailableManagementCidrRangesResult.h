/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WorkSpaces
{
namespace Model
{
  class AWS_WORKSPACES_API ListAvailableManagementCidrRangesResult
  {
  public:
    ListAvailableManagementCidrRangesResult();
    ListAvailableManagementCidrRangesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAvailableManagementCidrRangesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of available IP address ranges, specified as IPv4 CIDR blocks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetManagementCidrRanges() const{ return m_managementCidrRanges; }

    /**
     * <p>The list of available IP address ranges, specified as IPv4 CIDR blocks.</p>
     */
    inline void SetManagementCidrRanges(const Aws::Vector<Aws::String>& value) { m_managementCidrRanges = value; }

    /**
     * <p>The list of available IP address ranges, specified as IPv4 CIDR blocks.</p>
     */
    inline void SetManagementCidrRanges(Aws::Vector<Aws::String>&& value) { m_managementCidrRanges = std::move(value); }

    /**
     * <p>The list of available IP address ranges, specified as IPv4 CIDR blocks.</p>
     */
    inline ListAvailableManagementCidrRangesResult& WithManagementCidrRanges(const Aws::Vector<Aws::String>& value) { SetManagementCidrRanges(value); return *this;}

    /**
     * <p>The list of available IP address ranges, specified as IPv4 CIDR blocks.</p>
     */
    inline ListAvailableManagementCidrRangesResult& WithManagementCidrRanges(Aws::Vector<Aws::String>&& value) { SetManagementCidrRanges(std::move(value)); return *this;}

    /**
     * <p>The list of available IP address ranges, specified as IPv4 CIDR blocks.</p>
     */
    inline ListAvailableManagementCidrRangesResult& AddManagementCidrRanges(const Aws::String& value) { m_managementCidrRanges.push_back(value); return *this; }

    /**
     * <p>The list of available IP address ranges, specified as IPv4 CIDR blocks.</p>
     */
    inline ListAvailableManagementCidrRangesResult& AddManagementCidrRanges(Aws::String&& value) { m_managementCidrRanges.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of available IP address ranges, specified as IPv4 CIDR blocks.</p>
     */
    inline ListAvailableManagementCidrRangesResult& AddManagementCidrRanges(const char* value) { m_managementCidrRanges.push_back(value); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline ListAvailableManagementCidrRangesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline ListAvailableManagementCidrRangesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline ListAvailableManagementCidrRangesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_managementCidrRanges;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
