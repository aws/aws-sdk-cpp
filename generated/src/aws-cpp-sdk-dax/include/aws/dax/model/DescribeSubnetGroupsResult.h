/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dax/model/SubnetGroup.h>
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
namespace DAX
{
namespace Model
{
  class DescribeSubnetGroupsResult
  {
  public:
    AWS_DAX_API DescribeSubnetGroupsResult();
    AWS_DAX_API DescribeSubnetGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DAX_API DescribeSubnetGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeSubnetGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeSubnetGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeSubnetGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of subnet groups. Each element in the array represents a single
     * subnet group.</p>
     */
    inline const Aws::Vector<SubnetGroup>& GetSubnetGroups() const{ return m_subnetGroups; }

    /**
     * <p>An array of subnet groups. Each element in the array represents a single
     * subnet group.</p>
     */
    inline void SetSubnetGroups(const Aws::Vector<SubnetGroup>& value) { m_subnetGroups = value; }

    /**
     * <p>An array of subnet groups. Each element in the array represents a single
     * subnet group.</p>
     */
    inline void SetSubnetGroups(Aws::Vector<SubnetGroup>&& value) { m_subnetGroups = std::move(value); }

    /**
     * <p>An array of subnet groups. Each element in the array represents a single
     * subnet group.</p>
     */
    inline DescribeSubnetGroupsResult& WithSubnetGroups(const Aws::Vector<SubnetGroup>& value) { SetSubnetGroups(value); return *this;}

    /**
     * <p>An array of subnet groups. Each element in the array represents a single
     * subnet group.</p>
     */
    inline DescribeSubnetGroupsResult& WithSubnetGroups(Aws::Vector<SubnetGroup>&& value) { SetSubnetGroups(std::move(value)); return *this;}

    /**
     * <p>An array of subnet groups. Each element in the array represents a single
     * subnet group.</p>
     */
    inline DescribeSubnetGroupsResult& AddSubnetGroups(const SubnetGroup& value) { m_subnetGroups.push_back(value); return *this; }

    /**
     * <p>An array of subnet groups. Each element in the array represents a single
     * subnet group.</p>
     */
    inline DescribeSubnetGroupsResult& AddSubnetGroups(SubnetGroup&& value) { m_subnetGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<SubnetGroup> m_subnetGroups;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
