/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/Interconnect.h>

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
namespace DirectConnect
{
namespace Model
{
  /**
   * <p>A structure containing a list of interconnects.</p>
   */
  class AWS_DIRECTCONNECT_API DescribeInterconnectsResult
  {
  public:
    DescribeInterconnectsResult();
    DescribeInterconnectsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeInterconnectsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list of interconnects.</p>
     */
    inline const Aws::Vector<Interconnect>& GetInterconnects() const{ return m_interconnects; }

    /**
     * <p>A list of interconnects.</p>
     */
    inline void SetInterconnects(const Aws::Vector<Interconnect>& value) { m_interconnects = value; }

    /**
     * <p>A list of interconnects.</p>
     */
    inline void SetInterconnects(Aws::Vector<Interconnect>&& value) { m_interconnects = value; }

    /**
     * <p>A list of interconnects.</p>
     */
    inline DescribeInterconnectsResult& WithInterconnects(const Aws::Vector<Interconnect>& value) { SetInterconnects(value); return *this;}

    /**
     * <p>A list of interconnects.</p>
     */
    inline DescribeInterconnectsResult& WithInterconnects(Aws::Vector<Interconnect>&& value) { SetInterconnects(value); return *this;}

    /**
     * <p>A list of interconnects.</p>
     */
    inline DescribeInterconnectsResult& AddInterconnects(const Interconnect& value) { m_interconnects.push_back(value); return *this; }

    /**
     * <p>A list of interconnects.</p>
     */
    inline DescribeInterconnectsResult& AddInterconnects(Interconnect&& value) { m_interconnects.push_back(value); return *this; }

  private:
    Aws::Vector<Interconnect> m_interconnects;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
