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
