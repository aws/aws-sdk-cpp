/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_CONFIGSERVICE_API DescribeConfigurationRecorderStatusResult() = default;
    AWS_CONFIGSERVICE_API DescribeConfigurationRecorderStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeConfigurationRecorderStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that contains status of the specified recorders.</p>
     */
    inline const Aws::Vector<ConfigurationRecorderStatus>& GetConfigurationRecordersStatus() const { return m_configurationRecordersStatus; }
    template<typename ConfigurationRecordersStatusT = Aws::Vector<ConfigurationRecorderStatus>>
    void SetConfigurationRecordersStatus(ConfigurationRecordersStatusT&& value) { m_configurationRecordersStatusHasBeenSet = true; m_configurationRecordersStatus = std::forward<ConfigurationRecordersStatusT>(value); }
    template<typename ConfigurationRecordersStatusT = Aws::Vector<ConfigurationRecorderStatus>>
    DescribeConfigurationRecorderStatusResult& WithConfigurationRecordersStatus(ConfigurationRecordersStatusT&& value) { SetConfigurationRecordersStatus(std::forward<ConfigurationRecordersStatusT>(value)); return *this;}
    template<typename ConfigurationRecordersStatusT = ConfigurationRecorderStatus>
    DescribeConfigurationRecorderStatusResult& AddConfigurationRecordersStatus(ConfigurationRecordersStatusT&& value) { m_configurationRecordersStatusHasBeenSet = true; m_configurationRecordersStatus.emplace_back(std::forward<ConfigurationRecordersStatusT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConfigurationRecorderStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationRecorderStatus> m_configurationRecordersStatus;
    bool m_configurationRecordersStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
