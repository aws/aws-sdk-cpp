/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/Region.h>
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
namespace Lightsail
{
namespace Model
{
  class GetRegionsResult
  {
  public:
    AWS_LIGHTSAIL_API GetRegionsResult();
    AWS_LIGHTSAIL_API GetRegionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetRegionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of key-value pairs containing information about your get regions
     * request.</p>
     */
    inline const Aws::Vector<Region>& GetRegions() const{ return m_regions; }

    /**
     * <p>An array of key-value pairs containing information about your get regions
     * request.</p>
     */
    inline void SetRegions(const Aws::Vector<Region>& value) { m_regions = value; }

    /**
     * <p>An array of key-value pairs containing information about your get regions
     * request.</p>
     */
    inline void SetRegions(Aws::Vector<Region>&& value) { m_regions = std::move(value); }

    /**
     * <p>An array of key-value pairs containing information about your get regions
     * request.</p>
     */
    inline GetRegionsResult& WithRegions(const Aws::Vector<Region>& value) { SetRegions(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about your get regions
     * request.</p>
     */
    inline GetRegionsResult& WithRegions(Aws::Vector<Region>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs containing information about your get regions
     * request.</p>
     */
    inline GetRegionsResult& AddRegions(const Region& value) { m_regions.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs containing information about your get regions
     * request.</p>
     */
    inline GetRegionsResult& AddRegions(Region&& value) { m_regions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Region> m_regions;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
