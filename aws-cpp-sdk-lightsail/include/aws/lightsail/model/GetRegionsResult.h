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
  class AWS_LIGHTSAIL_API GetRegionsResult
  {
  public:
    GetRegionsResult();
    GetRegionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRegionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
