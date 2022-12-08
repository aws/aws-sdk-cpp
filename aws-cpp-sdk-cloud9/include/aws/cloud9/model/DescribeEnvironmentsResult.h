/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloud9/model/Environment.h>
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
namespace Cloud9
{
namespace Model
{
  class DescribeEnvironmentsResult
  {
  public:
    AWS_CLOUD9_API DescribeEnvironmentsResult();
    AWS_CLOUD9_API DescribeEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUD9_API DescribeEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the environments that are returned.</p>
     */
    inline const Aws::Vector<Environment>& GetEnvironments() const{ return m_environments; }

    /**
     * <p>Information about the environments that are returned.</p>
     */
    inline void SetEnvironments(const Aws::Vector<Environment>& value) { m_environments = value; }

    /**
     * <p>Information about the environments that are returned.</p>
     */
    inline void SetEnvironments(Aws::Vector<Environment>&& value) { m_environments = std::move(value); }

    /**
     * <p>Information about the environments that are returned.</p>
     */
    inline DescribeEnvironmentsResult& WithEnvironments(const Aws::Vector<Environment>& value) { SetEnvironments(value); return *this;}

    /**
     * <p>Information about the environments that are returned.</p>
     */
    inline DescribeEnvironmentsResult& WithEnvironments(Aws::Vector<Environment>&& value) { SetEnvironments(std::move(value)); return *this;}

    /**
     * <p>Information about the environments that are returned.</p>
     */
    inline DescribeEnvironmentsResult& AddEnvironments(const Environment& value) { m_environments.push_back(value); return *this; }

    /**
     * <p>Information about the environments that are returned.</p>
     */
    inline DescribeEnvironmentsResult& AddEnvironments(Environment&& value) { m_environments.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Environment> m_environments;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
