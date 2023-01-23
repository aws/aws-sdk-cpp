/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ConfigurationRecorderStatus.h>
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
namespace ConfigService
{
namespace Model
{
  /**
   * <p>The output for the <a>DescribeConfigurationRecorderStatus</a> action, in JSON
   * format.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationRecorderStatusResponse">AWS
   * API Reference</a></p>
   */
  class DescribeConfigurationRecorderStatusResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConfigurationRecorderStatusResult();
    AWS_CONFIGSERVICE_API DescribeConfigurationRecorderStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeConfigurationRecorderStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that contains status of the specified recorders.</p>
     */
    inline const Aws::Vector<ConfigurationRecorderStatus>& GetConfigurationRecordersStatus() const{ return m_configurationRecordersStatus; }

    /**
     * <p>A list that contains status of the specified recorders.</p>
     */
    inline void SetConfigurationRecordersStatus(const Aws::Vector<ConfigurationRecorderStatus>& value) { m_configurationRecordersStatus = value; }

    /**
     * <p>A list that contains status of the specified recorders.</p>
     */
    inline void SetConfigurationRecordersStatus(Aws::Vector<ConfigurationRecorderStatus>&& value) { m_configurationRecordersStatus = std::move(value); }

    /**
     * <p>A list that contains status of the specified recorders.</p>
     */
    inline DescribeConfigurationRecorderStatusResult& WithConfigurationRecordersStatus(const Aws::Vector<ConfigurationRecorderStatus>& value) { SetConfigurationRecordersStatus(value); return *this;}

    /**
     * <p>A list that contains status of the specified recorders.</p>
     */
    inline DescribeConfigurationRecorderStatusResult& WithConfigurationRecordersStatus(Aws::Vector<ConfigurationRecorderStatus>&& value) { SetConfigurationRecordersStatus(std::move(value)); return *this;}

    /**
     * <p>A list that contains status of the specified recorders.</p>
     */
    inline DescribeConfigurationRecorderStatusResult& AddConfigurationRecordersStatus(const ConfigurationRecorderStatus& value) { m_configurationRecordersStatus.push_back(value); return *this; }

    /**
     * <p>A list that contains status of the specified recorders.</p>
     */
    inline DescribeConfigurationRecorderStatusResult& AddConfigurationRecordersStatus(ConfigurationRecorderStatus&& value) { m_configurationRecordersStatus.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ConfigurationRecorderStatus> m_configurationRecordersStatus;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
