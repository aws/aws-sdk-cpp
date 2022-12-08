/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The query result body of the GetServiceSetting API operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetServiceSettingResult">AWS
   * API Reference</a></p>
   */
  class GetServiceSettingResult
  {
  public:
    AWS_SSM_API GetServiceSettingResult();
    AWS_SSM_API GetServiceSettingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetServiceSettingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The query result of the current service setting.</p>
     */
    inline const ServiceSetting& GetServiceSetting() const{ return m_serviceSetting; }

    /**
     * <p>The query result of the current service setting.</p>
     */
    inline void SetServiceSetting(const ServiceSetting& value) { m_serviceSetting = value; }

    /**
     * <p>The query result of the current service setting.</p>
     */
    inline void SetServiceSetting(ServiceSetting&& value) { m_serviceSetting = std::move(value); }

    /**
     * <p>The query result of the current service setting.</p>
     */
    inline GetServiceSettingResult& WithServiceSetting(const ServiceSetting& value) { SetServiceSetting(value); return *this;}

    /**
     * <p>The query result of the current service setting.</p>
     */
    inline GetServiceSettingResult& WithServiceSetting(ServiceSetting&& value) { SetServiceSetting(std::move(value)); return *this;}

  private:

    ServiceSetting m_serviceSetting;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
