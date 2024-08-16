/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
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
namespace ECR
{
namespace Model
{
  class PutAccountSettingResult
  {
  public:
    AWS_ECR_API PutAccountSettingResult();
    AWS_ECR_API PutAccountSettingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API PutAccountSettingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Retrieves the the basic scan type version name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline PutAccountSettingResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PutAccountSettingResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PutAccountSettingResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves the basic scan type value, either <code>AWS_NATIVE</code> or
     * <code>-</code>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline void SetValue(const Aws::String& value) { m_value = value; }
    inline void SetValue(Aws::String&& value) { m_value = std::move(value); }
    inline void SetValue(const char* value) { m_value.assign(value); }
    inline PutAccountSettingResult& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline PutAccountSettingResult& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline PutAccountSettingResult& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutAccountSettingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutAccountSettingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutAccountSettingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_value;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
