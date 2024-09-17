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
  class GetAccountSettingResult
  {
  public:
    AWS_ECR_API GetAccountSettingResult();
    AWS_ECR_API GetAccountSettingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API GetAccountSettingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Retrieves the basic scan type version name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetAccountSettingResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetAccountSettingResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetAccountSettingResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves the value that specifies what basic scan type is being used:
     * <code>AWS_NATIVE</code> or <code>CLAIR</code>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline void SetValue(const Aws::String& value) { m_value = value; }
    inline void SetValue(Aws::String&& value) { m_value = std::move(value); }
    inline void SetValue(const char* value) { m_value.assign(value); }
    inline GetAccountSettingResult& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline GetAccountSettingResult& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline GetAccountSettingResult& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAccountSettingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAccountSettingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAccountSettingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_value;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
