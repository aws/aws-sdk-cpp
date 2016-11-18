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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ConfigurationRecorder.h>

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
namespace ConfigService
{
namespace Model
{
  /**
   * <p>The output for the <a>DescribeConfigurationRecorders</a> action.</p>
   */
  class AWS_CONFIGSERVICE_API DescribeConfigurationRecordersResult
  {
  public:
    DescribeConfigurationRecordersResult();
    DescribeConfigurationRecordersResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeConfigurationRecordersResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list that contains the descriptions of the specified configuration
     * recorders.</p>
     */
    inline const Aws::Vector<ConfigurationRecorder>& GetConfigurationRecorders() const{ return m_configurationRecorders; }

    /**
     * <p>A list that contains the descriptions of the specified configuration
     * recorders.</p>
     */
    inline void SetConfigurationRecorders(const Aws::Vector<ConfigurationRecorder>& value) { m_configurationRecorders = value; }

    /**
     * <p>A list that contains the descriptions of the specified configuration
     * recorders.</p>
     */
    inline void SetConfigurationRecorders(Aws::Vector<ConfigurationRecorder>&& value) { m_configurationRecorders = value; }

    /**
     * <p>A list that contains the descriptions of the specified configuration
     * recorders.</p>
     */
    inline DescribeConfigurationRecordersResult& WithConfigurationRecorders(const Aws::Vector<ConfigurationRecorder>& value) { SetConfigurationRecorders(value); return *this;}

    /**
     * <p>A list that contains the descriptions of the specified configuration
     * recorders.</p>
     */
    inline DescribeConfigurationRecordersResult& WithConfigurationRecorders(Aws::Vector<ConfigurationRecorder>&& value) { SetConfigurationRecorders(value); return *this;}

    /**
     * <p>A list that contains the descriptions of the specified configuration
     * recorders.</p>
     */
    inline DescribeConfigurationRecordersResult& AddConfigurationRecorders(const ConfigurationRecorder& value) { m_configurationRecorders.push_back(value); return *this; }

    /**
     * <p>A list that contains the descriptions of the specified configuration
     * recorders.</p>
     */
    inline DescribeConfigurationRecordersResult& AddConfigurationRecorders(ConfigurationRecorder&& value) { m_configurationRecorders.push_back(value); return *this; }

  private:
    Aws::Vector<ConfigurationRecorder> m_configurationRecorders;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
