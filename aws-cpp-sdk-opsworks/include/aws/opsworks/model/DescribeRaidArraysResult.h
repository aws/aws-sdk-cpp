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
#include <aws/opsworks/model/RaidArray.h>
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
   * <p>Contains the response to a <code>DescribeRaidArrays</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeRaidArraysResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DescribeRaidArraysResult
  {
  public:
    DescribeRaidArraysResult();
    DescribeRaidArraysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRaidArraysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>RaidArrays</code> object that describes the specified RAID
     * arrays.</p>
     */
    inline const Aws::Vector<RaidArray>& GetRaidArrays() const{ return m_raidArrays; }

    /**
     * <p>A <code>RaidArrays</code> object that describes the specified RAID
     * arrays.</p>
     */
    inline void SetRaidArrays(const Aws::Vector<RaidArray>& value) { m_raidArrays = value; }

    /**
     * <p>A <code>RaidArrays</code> object that describes the specified RAID
     * arrays.</p>
     */
    inline void SetRaidArrays(Aws::Vector<RaidArray>&& value) { m_raidArrays = std::move(value); }

    /**
     * <p>A <code>RaidArrays</code> object that describes the specified RAID
     * arrays.</p>
     */
    inline DescribeRaidArraysResult& WithRaidArrays(const Aws::Vector<RaidArray>& value) { SetRaidArrays(value); return *this;}

    /**
     * <p>A <code>RaidArrays</code> object that describes the specified RAID
     * arrays.</p>
     */
    inline DescribeRaidArraysResult& WithRaidArrays(Aws::Vector<RaidArray>&& value) { SetRaidArrays(std::move(value)); return *this;}

    /**
     * <p>A <code>RaidArrays</code> object that describes the specified RAID
     * arrays.</p>
     */
    inline DescribeRaidArraysResult& AddRaidArrays(const RaidArray& value) { m_raidArrays.push_back(value); return *this; }

    /**
     * <p>A <code>RaidArrays</code> object that describes the specified RAID
     * arrays.</p>
     */
    inline DescribeRaidArraysResult& AddRaidArrays(RaidArray&& value) { m_raidArrays.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RaidArray> m_raidArrays;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
