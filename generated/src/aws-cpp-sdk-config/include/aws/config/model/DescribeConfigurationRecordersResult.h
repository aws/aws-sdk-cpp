/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConfigurationRecorder.h>
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
   * <p>The output for the <a>DescribeConfigurationRecorders</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationRecordersResponse">AWS
   * API Reference</a></p>
   */
  class DescribeConfigurationRecordersResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConfigurationRecordersResult() = default;
    AWS_CONFIGSERVICE_API DescribeConfigurationRecordersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeConfigurationRecordersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that contains the descriptions of the specified configuration
     * recorders.</p>
     */
    inline const Aws::Vector<ConfigurationRecorder>& GetConfigurationRecorders() const { return m_configurationRecorders; }
    template<typename ConfigurationRecordersT = Aws::Vector<ConfigurationRecorder>>
    void SetConfigurationRecorders(ConfigurationRecordersT&& value) { m_configurationRecordersHasBeenSet = true; m_configurationRecorders = std::forward<ConfigurationRecordersT>(value); }
    template<typename ConfigurationRecordersT = Aws::Vector<ConfigurationRecorder>>
    DescribeConfigurationRecordersResult& WithConfigurationRecorders(ConfigurationRecordersT&& value) { SetConfigurationRecorders(std::forward<ConfigurationRecordersT>(value)); return *this;}
    template<typename ConfigurationRecordersT = ConfigurationRecorder>
    DescribeConfigurationRecordersResult& AddConfigurationRecorders(ConfigurationRecordersT&& value) { m_configurationRecordersHasBeenSet = true; m_configurationRecorders.emplace_back(std::forward<ConfigurationRecordersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConfigurationRecordersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationRecorder> m_configurationRecorders;
    bool m_configurationRecordersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
