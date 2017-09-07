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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/QueryLoggingConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  class AWS_ROUTE53_API CreateQueryLoggingConfigResult
  {
  public:
    CreateQueryLoggingConfigResult();
    CreateQueryLoggingConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateQueryLoggingConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains the ID for a query logging configuration, the ID
     * of the hosted zone that you want to log queries for, and the ARN for the log
     * group that you want Amazon Route 53 to send query logs to.</p>
     */
    inline const QueryLoggingConfig& GetQueryLoggingConfig() const{ return m_queryLoggingConfig; }

    /**
     * <p>A complex type that contains the ID for a query logging configuration, the ID
     * of the hosted zone that you want to log queries for, and the ARN for the log
     * group that you want Amazon Route 53 to send query logs to.</p>
     */
    inline void SetQueryLoggingConfig(const QueryLoggingConfig& value) { m_queryLoggingConfig = value; }

    /**
     * <p>A complex type that contains the ID for a query logging configuration, the ID
     * of the hosted zone that you want to log queries for, and the ARN for the log
     * group that you want Amazon Route 53 to send query logs to.</p>
     */
    inline void SetQueryLoggingConfig(QueryLoggingConfig&& value) { m_queryLoggingConfig = std::move(value); }

    /**
     * <p>A complex type that contains the ID for a query logging configuration, the ID
     * of the hosted zone that you want to log queries for, and the ARN for the log
     * group that you want Amazon Route 53 to send query logs to.</p>
     */
    inline CreateQueryLoggingConfigResult& WithQueryLoggingConfig(const QueryLoggingConfig& value) { SetQueryLoggingConfig(value); return *this;}

    /**
     * <p>A complex type that contains the ID for a query logging configuration, the ID
     * of the hosted zone that you want to log queries for, and the ARN for the log
     * group that you want Amazon Route 53 to send query logs to.</p>
     */
    inline CreateQueryLoggingConfigResult& WithQueryLoggingConfig(QueryLoggingConfig&& value) { SetQueryLoggingConfig(std::move(value)); return *this;}


    /**
     * <p>The unique URL representing the new query logging configuration.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The unique URL representing the new query logging configuration.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The unique URL representing the new query logging configuration.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The unique URL representing the new query logging configuration.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The unique URL representing the new query logging configuration.</p>
     */
    inline CreateQueryLoggingConfigResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The unique URL representing the new query logging configuration.</p>
     */
    inline CreateQueryLoggingConfigResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The unique URL representing the new query logging configuration.</p>
     */
    inline CreateQueryLoggingConfigResult& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    QueryLoggingConfig m_queryLoggingConfig;

    Aws::String m_location;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
