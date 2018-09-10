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
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf/model/LoggingConfiguration.h>
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
namespace WAF
{
namespace Model
{
  class AWS_WAF_API ListLoggingConfigurationsResult
  {
  public:
    ListLoggingConfigurationsResult();
    ListLoggingConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListLoggingConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <a>LoggingConfiguration</a> objects.</p>
     */
    inline const Aws::Vector<LoggingConfiguration>& GetLoggingConfigurations() const{ return m_loggingConfigurations; }

    /**
     * <p>An array of <a>LoggingConfiguration</a> objects.</p>
     */
    inline void SetLoggingConfigurations(const Aws::Vector<LoggingConfiguration>& value) { m_loggingConfigurations = value; }

    /**
     * <p>An array of <a>LoggingConfiguration</a> objects.</p>
     */
    inline void SetLoggingConfigurations(Aws::Vector<LoggingConfiguration>&& value) { m_loggingConfigurations = std::move(value); }

    /**
     * <p>An array of <a>LoggingConfiguration</a> objects.</p>
     */
    inline ListLoggingConfigurationsResult& WithLoggingConfigurations(const Aws::Vector<LoggingConfiguration>& value) { SetLoggingConfigurations(value); return *this;}

    /**
     * <p>An array of <a>LoggingConfiguration</a> objects.</p>
     */
    inline ListLoggingConfigurationsResult& WithLoggingConfigurations(Aws::Vector<LoggingConfiguration>&& value) { SetLoggingConfigurations(std::move(value)); return *this;}

    /**
     * <p>An array of <a>LoggingConfiguration</a> objects.</p>
     */
    inline ListLoggingConfigurationsResult& AddLoggingConfigurations(const LoggingConfiguration& value) { m_loggingConfigurations.push_back(value); return *this; }

    /**
     * <p>An array of <a>LoggingConfiguration</a> objects.</p>
     */
    inline ListLoggingConfigurationsResult& AddLoggingConfigurations(LoggingConfiguration&& value) { m_loggingConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>If you have more <code>LoggingConfigurations</code> than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>LoggingConfigurations</code>,
     * submit another <code>ListLoggingConfigurations</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If you have more <code>LoggingConfigurations</code> than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>LoggingConfigurations</code>,
     * submit another <code>ListLoggingConfigurations</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If you have more <code>LoggingConfigurations</code> than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>LoggingConfigurations</code>,
     * submit another <code>ListLoggingConfigurations</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If you have more <code>LoggingConfigurations</code> than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>LoggingConfigurations</code>,
     * submit another <code>ListLoggingConfigurations</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If you have more <code>LoggingConfigurations</code> than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>LoggingConfigurations</code>,
     * submit another <code>ListLoggingConfigurations</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListLoggingConfigurationsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If you have more <code>LoggingConfigurations</code> than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>LoggingConfigurations</code>,
     * submit another <code>ListLoggingConfigurations</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListLoggingConfigurationsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If you have more <code>LoggingConfigurations</code> than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>LoggingConfigurations</code>,
     * submit another <code>ListLoggingConfigurations</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListLoggingConfigurationsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    Aws::Vector<LoggingConfiguration> m_loggingConfigurations;

    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
