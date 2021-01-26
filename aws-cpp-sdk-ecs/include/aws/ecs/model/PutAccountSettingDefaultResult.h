/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/Setting.h>
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
namespace ECS
{
namespace Model
{
  class AWS_ECS_API PutAccountSettingDefaultResult
  {
  public:
    PutAccountSettingDefaultResult();
    PutAccountSettingDefaultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutAccountSettingDefaultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Setting& GetSetting() const{ return m_setting; }

    
    inline void SetSetting(const Setting& value) { m_setting = value; }

    
    inline void SetSetting(Setting&& value) { m_setting = std::move(value); }

    
    inline PutAccountSettingDefaultResult& WithSetting(const Setting& value) { SetSetting(value); return *this;}

    
    inline PutAccountSettingDefaultResult& WithSetting(Setting&& value) { SetSetting(std::move(value)); return *this;}

  private:

    Setting m_setting;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
