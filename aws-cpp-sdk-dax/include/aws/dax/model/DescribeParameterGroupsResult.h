/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dax/model/ParameterGroup.h>
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
  class DescribeParameterGroupsResult
  {
  public:
    AWS_DAX_API DescribeParameterGroupsResult();
    AWS_DAX_API DescribeParameterGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DAX_API DescribeParameterGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeParameterGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeParameterGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeParameterGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of parameter groups. Each element in the array represents one
     * parameter group.</p>
     */
    inline const Aws::Vector<ParameterGroup>& GetParameterGroups() const{ return m_parameterGroups; }

    /**
     * <p>An array of parameter groups. Each element in the array represents one
     * parameter group.</p>
     */
    inline void SetParameterGroups(const Aws::Vector<ParameterGroup>& value) { m_parameterGroups = value; }

    /**
     * <p>An array of parameter groups. Each element in the array represents one
     * parameter group.</p>
     */
    inline void SetParameterGroups(Aws::Vector<ParameterGroup>&& value) { m_parameterGroups = std::move(value); }

    /**
     * <p>An array of parameter groups. Each element in the array represents one
     * parameter group.</p>
     */
    inline DescribeParameterGroupsResult& WithParameterGroups(const Aws::Vector<ParameterGroup>& value) { SetParameterGroups(value); return *this;}

    /**
     * <p>An array of parameter groups. Each element in the array represents one
     * parameter group.</p>
     */
    inline DescribeParameterGroupsResult& WithParameterGroups(Aws::Vector<ParameterGroup>&& value) { SetParameterGroups(std::move(value)); return *this;}

    /**
     * <p>An array of parameter groups. Each element in the array represents one
     * parameter group.</p>
     */
    inline DescribeParameterGroupsResult& AddParameterGroups(const ParameterGroup& value) { m_parameterGroups.push_back(value); return *this; }

    /**
     * <p>An array of parameter groups. Each element in the array represents one
     * parameter group.</p>
     */
    inline DescribeParameterGroupsResult& AddParameterGroups(ParameterGroup&& value) { m_parameterGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ParameterGroup> m_parameterGroups;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
