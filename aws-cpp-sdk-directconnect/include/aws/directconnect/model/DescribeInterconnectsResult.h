/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/Interconnect.h>
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
namespace DirectConnect
{
namespace Model
{
  class DescribeInterconnectsResult
  {
  public:
    AWS_DIRECTCONNECT_API DescribeInterconnectsResult();
    AWS_DIRECTCONNECT_API DescribeInterconnectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeInterconnectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The interconnects.</p>
     */
    inline const Aws::Vector<Interconnect>& GetInterconnects() const{ return m_interconnects; }

    /**
     * <p>The interconnects.</p>
     */
    inline void SetInterconnects(const Aws::Vector<Interconnect>& value) { m_interconnects = value; }

    /**
     * <p>The interconnects.</p>
     */
    inline void SetInterconnects(Aws::Vector<Interconnect>&& value) { m_interconnects = std::move(value); }

    /**
     * <p>The interconnects.</p>
     */
    inline DescribeInterconnectsResult& WithInterconnects(const Aws::Vector<Interconnect>& value) { SetInterconnects(value); return *this;}

    /**
     * <p>The interconnects.</p>
     */
    inline DescribeInterconnectsResult& WithInterconnects(Aws::Vector<Interconnect>&& value) { SetInterconnects(std::move(value)); return *this;}

    /**
     * <p>The interconnects.</p>
     */
    inline DescribeInterconnectsResult& AddInterconnects(const Interconnect& value) { m_interconnects.push_back(value); return *this; }

    /**
     * <p>The interconnects.</p>
     */
    inline DescribeInterconnectsResult& AddInterconnects(Interconnect&& value) { m_interconnects.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Interconnect> m_interconnects;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
