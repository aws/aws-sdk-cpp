﻿/*
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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/RetentionConfiguration.h>
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
  class AWS_CONFIGSERVICE_API PutRetentionConfigurationResult
  {
  public:
    PutRetentionConfigurationResult();
    PutRetentionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutRetentionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline const RetentionConfiguration& GetRetentionConfiguration() const{ return m_retentionConfiguration; }

    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline void SetRetentionConfiguration(const RetentionConfiguration& value) { m_retentionConfiguration = value; }

    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline void SetRetentionConfiguration(RetentionConfiguration&& value) { m_retentionConfiguration = std::move(value); }

    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline PutRetentionConfigurationResult& WithRetentionConfiguration(const RetentionConfiguration& value) { SetRetentionConfiguration(value); return *this;}

    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline PutRetentionConfigurationResult& WithRetentionConfiguration(RetentionConfiguration&& value) { SetRetentionConfiguration(std::move(value)); return *this;}

  private:

    RetentionConfiguration m_retentionConfiguration;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
