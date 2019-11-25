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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/VpcConfigurationDescription.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{
  class AWS_KINESISANALYTICSV2_API AddApplicationVpcConfigurationResult
  {
  public:
    AddApplicationVpcConfigurationResult();
    AddApplicationVpcConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AddApplicationVpcConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the application.</p>
     */
    inline const Aws::String& GetApplicationARN() const{ return m_applicationARN; }

    /**
     * <p>The ARN of the application.</p>
     */
    inline void SetApplicationARN(const Aws::String& value) { m_applicationARN = value; }

    /**
     * <p>The ARN of the application.</p>
     */
    inline void SetApplicationARN(Aws::String&& value) { m_applicationARN = std::move(value); }

    /**
     * <p>The ARN of the application.</p>
     */
    inline void SetApplicationARN(const char* value) { m_applicationARN.assign(value); }

    /**
     * <p>The ARN of the application.</p>
     */
    inline AddApplicationVpcConfigurationResult& WithApplicationARN(const Aws::String& value) { SetApplicationARN(value); return *this;}

    /**
     * <p>The ARN of the application.</p>
     */
    inline AddApplicationVpcConfigurationResult& WithApplicationARN(Aws::String&& value) { SetApplicationARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the application.</p>
     */
    inline AddApplicationVpcConfigurationResult& WithApplicationARN(const char* value) { SetApplicationARN(value); return *this;}


    /**
     * <p>Provides the current application version. Kinesis Data Analytics updates the
     * ApplicationVersionId each time you update the application. </p>
     */
    inline long long GetApplicationVersionId() const{ return m_applicationVersionId; }

    /**
     * <p>Provides the current application version. Kinesis Data Analytics updates the
     * ApplicationVersionId each time you update the application. </p>
     */
    inline void SetApplicationVersionId(long long value) { m_applicationVersionId = value; }

    /**
     * <p>Provides the current application version. Kinesis Data Analytics updates the
     * ApplicationVersionId each time you update the application. </p>
     */
    inline AddApplicationVpcConfigurationResult& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}


    /**
     * <p>The parameters of the new VPC configuration.</p>
     */
    inline const VpcConfigurationDescription& GetVpcConfigurationDescription() const{ return m_vpcConfigurationDescription; }

    /**
     * <p>The parameters of the new VPC configuration.</p>
     */
    inline void SetVpcConfigurationDescription(const VpcConfigurationDescription& value) { m_vpcConfigurationDescription = value; }

    /**
     * <p>The parameters of the new VPC configuration.</p>
     */
    inline void SetVpcConfigurationDescription(VpcConfigurationDescription&& value) { m_vpcConfigurationDescription = std::move(value); }

    /**
     * <p>The parameters of the new VPC configuration.</p>
     */
    inline AddApplicationVpcConfigurationResult& WithVpcConfigurationDescription(const VpcConfigurationDescription& value) { SetVpcConfigurationDescription(value); return *this;}

    /**
     * <p>The parameters of the new VPC configuration.</p>
     */
    inline AddApplicationVpcConfigurationResult& WithVpcConfigurationDescription(VpcConfigurationDescription&& value) { SetVpcConfigurationDescription(std::move(value)); return *this;}

  private:

    Aws::String m_applicationARN;

    long long m_applicationVersionId;

    VpcConfigurationDescription m_vpcConfigurationDescription;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
