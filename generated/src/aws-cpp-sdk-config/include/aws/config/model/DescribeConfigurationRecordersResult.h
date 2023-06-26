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
    AWS_CONFIGSERVICE_API DescribeConfigurationRecordersResult();
    AWS_CONFIGSERVICE_API DescribeConfigurationRecordersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeConfigurationRecordersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetConfigurationRecorders(Aws::Vector<ConfigurationRecorder>&& value) { m_configurationRecorders = std::move(value); }

    /**
     * <p>A list that contains the descriptions of the specified configuration
     * recorders.</p>
     */
    inline DescribeConfigurationRecordersResult& WithConfigurationRecorders(const Aws::Vector<ConfigurationRecorder>& value) { SetConfigurationRecorders(value); return *this;}

    /**
     * <p>A list that contains the descriptions of the specified configuration
     * recorders.</p>
     */
    inline DescribeConfigurationRecordersResult& WithConfigurationRecorders(Aws::Vector<ConfigurationRecorder>&& value) { SetConfigurationRecorders(std::move(value)); return *this;}

    /**
     * <p>A list that contains the descriptions of the specified configuration
     * recorders.</p>
     */
    inline DescribeConfigurationRecordersResult& AddConfigurationRecorders(const ConfigurationRecorder& value) { m_configurationRecorders.push_back(value); return *this; }

    /**
     * <p>A list that contains the descriptions of the specified configuration
     * recorders.</p>
     */
    inline DescribeConfigurationRecordersResult& AddConfigurationRecorders(ConfigurationRecorder&& value) { m_configurationRecorders.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeConfigurationRecordersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeConfigurationRecordersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeConfigurationRecordersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ConfigurationRecorder> m_configurationRecorders;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
