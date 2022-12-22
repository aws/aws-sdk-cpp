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
  class PutAccountSettingDefaultResult
  {
  public:
    AWS_ECS_API PutAccountSettingDefaultResult();
    AWS_ECS_API PutAccountSettingDefaultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API PutAccountSettingDefaultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current setting for a resource.</p>
     */
    inline const Setting& GetSetting() const{ return m_setting; }

    /**
     * <p>The current setting for a resource.</p>
     */
    inline void SetSetting(const Setting& value) { m_setting = value; }

    /**
     * <p>The current setting for a resource.</p>
     */
    inline void SetSetting(Setting&& value) { m_setting = std::move(value); }

    /**
     * <p>The current setting for a resource.</p>
     */
    inline PutAccountSettingDefaultResult& WithSetting(const Setting& value) { SetSetting(value); return *this;}

    /**
     * <p>The current setting for a resource.</p>
     */
    inline PutAccountSettingDefaultResult& WithSetting(Setting&& value) { SetSetting(std::move(value)); return *this;}

  private:

    Setting m_setting;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
