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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace MQ
{
namespace Model
{
  class AWS_MQ_API DescribeConfigurationRevisionResult
  {
  public:
    DescribeConfigurationRevisionResult();
    DescribeConfigurationRevisionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeConfigurationRevisionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetConfigurationId(const Aws::String& value) { m_configurationId = value; }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetConfigurationId(Aws::String&& value) { m_configurationId = std::move(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetConfigurationId(const char* value) { m_configurationId.assign(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline DescribeConfigurationRevisionResult& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline DescribeConfigurationRevisionResult& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline DescribeConfigurationRevisionResult& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}


    /**
     * Required. The date and time of the configuration.
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * Required. The date and time of the configuration.
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_created = value; }

    /**
     * Required. The date and time of the configuration.
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_created = std::move(value); }

    /**
     * Required. The date and time of the configuration.
     */
    inline DescribeConfigurationRevisionResult& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * Required. The date and time of the configuration.
     */
    inline DescribeConfigurationRevisionResult& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * Required. The base64-encoded XML configuration.
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * Required. The base64-encoded XML configuration.
     */
    inline void SetData(const Aws::String& value) { m_data = value; }

    /**
     * Required. The base64-encoded XML configuration.
     */
    inline void SetData(Aws::String&& value) { m_data = std::move(value); }

    /**
     * Required. The base64-encoded XML configuration.
     */
    inline void SetData(const char* value) { m_data.assign(value); }

    /**
     * Required. The base64-encoded XML configuration.
     */
    inline DescribeConfigurationRevisionResult& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * Required. The base64-encoded XML configuration.
     */
    inline DescribeConfigurationRevisionResult& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * Required. The base64-encoded XML configuration.
     */
    inline DescribeConfigurationRevisionResult& WithData(const char* value) { SetData(value); return *this;}


    /**
     * The description of the configuration.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * The description of the configuration.
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * The description of the configuration.
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * The description of the configuration.
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * The description of the configuration.
     */
    inline DescribeConfigurationRevisionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * The description of the configuration.
     */
    inline DescribeConfigurationRevisionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * The description of the configuration.
     */
    inline DescribeConfigurationRevisionResult& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_configurationId;

    Aws::Utils::DateTime m_created;

    Aws::String m_data;

    Aws::String m_description;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
