/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class DescribeConfigurationsResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeConfigurationsResult();
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A key in the response map. The value is an array of data.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetConfigurations() const{ return m_configurations; }

    /**
     * <p>A key in the response map. The value is an array of data.</p>
     */
    inline void SetConfigurations(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_configurations = value; }

    /**
     * <p>A key in the response map. The value is an array of data.</p>
     */
    inline void SetConfigurations(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_configurations = std::move(value); }

    /**
     * <p>A key in the response map. The value is an array of data.</p>
     */
    inline DescribeConfigurationsResult& WithConfigurations(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetConfigurations(value); return *this;}

    /**
     * <p>A key in the response map. The value is an array of data.</p>
     */
    inline DescribeConfigurationsResult& WithConfigurations(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetConfigurations(std::move(value)); return *this;}

    /**
     * <p>A key in the response map. The value is an array of data.</p>
     */
    inline DescribeConfigurationsResult& AddConfigurations(const Aws::Map<Aws::String, Aws::String>& value) { m_configurations.push_back(value); return *this; }

    /**
     * <p>A key in the response map. The value is an array of data.</p>
     */
    inline DescribeConfigurationsResult& AddConfigurations(Aws::Map<Aws::String, Aws::String>&& value) { m_configurations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_configurations;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
