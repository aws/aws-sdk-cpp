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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/OperatingSystem.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>The response to a <code>DescribeOperatingSystems</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeOperatingSystemsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DescribeOperatingSystemsResult
  {
  public:
    DescribeOperatingSystemsResult();
    DescribeOperatingSystemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeOperatingSystemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains information in response to a <code>DescribeOperatingSystems</code>
     * request.</p>
     */
    inline const Aws::Vector<OperatingSystem>& GetOperatingSystems() const{ return m_operatingSystems; }

    /**
     * <p>Contains information in response to a <code>DescribeOperatingSystems</code>
     * request.</p>
     */
    inline void SetOperatingSystems(const Aws::Vector<OperatingSystem>& value) { m_operatingSystems = value; }

    /**
     * <p>Contains information in response to a <code>DescribeOperatingSystems</code>
     * request.</p>
     */
    inline void SetOperatingSystems(Aws::Vector<OperatingSystem>&& value) { m_operatingSystems = std::move(value); }

    /**
     * <p>Contains information in response to a <code>DescribeOperatingSystems</code>
     * request.</p>
     */
    inline DescribeOperatingSystemsResult& WithOperatingSystems(const Aws::Vector<OperatingSystem>& value) { SetOperatingSystems(value); return *this;}

    /**
     * <p>Contains information in response to a <code>DescribeOperatingSystems</code>
     * request.</p>
     */
    inline DescribeOperatingSystemsResult& WithOperatingSystems(Aws::Vector<OperatingSystem>&& value) { SetOperatingSystems(std::move(value)); return *this;}

    /**
     * <p>Contains information in response to a <code>DescribeOperatingSystems</code>
     * request.</p>
     */
    inline DescribeOperatingSystemsResult& AddOperatingSystems(const OperatingSystem& value) { m_operatingSystems.push_back(value); return *this; }

    /**
     * <p>Contains information in response to a <code>DescribeOperatingSystems</code>
     * request.</p>
     */
    inline DescribeOperatingSystemsResult& AddOperatingSystems(OperatingSystem&& value) { m_operatingSystems.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<OperatingSystem> m_operatingSystems;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
