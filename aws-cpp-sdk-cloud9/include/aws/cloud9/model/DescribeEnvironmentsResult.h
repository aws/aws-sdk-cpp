/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CLOUD9_API DescribeEnvironmentsResult
  {
  public:
    DescribeEnvironmentsResult();
    DescribeEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
