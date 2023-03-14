/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/Setting.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteAccountSettingResult
  {
  public:
    AWS_ECS_API DeleteAccountSettingResult();
    AWS_ECS_API DeleteAccountSettingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DeleteAccountSettingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The account setting for the specified principal ARN.</p>
     */
    inline const Setting& GetSetting() const{ return m_setting; }

    /**
     * <p>The account setting for the specified principal ARN.</p>
     */
    inline void SetSetting(const Setting& value) { m_setting = value; }

    /**
     * <p>The account setting for the specified principal ARN.</p>
     */
    inline void SetSetting(Setting&& value) { m_setting = std::move(value); }

    /**
     * <p>The account setting for the specified principal ARN.</p>
     */
    inline DeleteAccountSettingResult& WithSetting(const Setting& value) { SetSetting(value); return *this;}

    /**
     * <p>The account setting for the specified principal ARN.</p>
     */
    inline DeleteAccountSettingResult& WithSetting(Setting&& value) { SetSetting(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteAccountSettingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteAccountSettingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteAccountSettingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Setting m_setting;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
