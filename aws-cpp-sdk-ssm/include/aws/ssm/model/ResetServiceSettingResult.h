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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/ServiceSetting.h>
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
namespace SSM
{
namespace Model
{
  /**
   * <p>The result body of the ResetServiceSetting API action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResetServiceSettingResult">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API ResetServiceSettingResult
  {
  public:
    ResetServiceSettingResult();
    ResetServiceSettingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ResetServiceSettingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current, effective service setting after calling the ResetServiceSetting
     * API action.</p>
     */
    inline const ServiceSetting& GetServiceSetting() const{ return m_serviceSetting; }

    /**
     * <p>The current, effective service setting after calling the ResetServiceSetting
     * API action.</p>
     */
    inline void SetServiceSetting(const ServiceSetting& value) { m_serviceSetting = value; }

    /**
     * <p>The current, effective service setting after calling the ResetServiceSetting
     * API action.</p>
     */
    inline void SetServiceSetting(ServiceSetting&& value) { m_serviceSetting = std::move(value); }

    /**
     * <p>The current, effective service setting after calling the ResetServiceSetting
     * API action.</p>
     */
    inline ResetServiceSettingResult& WithServiceSetting(const ServiceSetting& value) { SetServiceSetting(value); return *this;}

    /**
     * <p>The current, effective service setting after calling the ResetServiceSetting
     * API action.</p>
     */
    inline ResetServiceSettingResult& WithServiceSetting(ServiceSetting&& value) { SetServiceSetting(std::move(value)); return *this;}

  private:

    ServiceSetting m_serviceSetting;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
