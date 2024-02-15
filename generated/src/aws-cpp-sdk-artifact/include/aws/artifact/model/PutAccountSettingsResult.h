/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/model/AccountSettings.h>
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
namespace Artifact
{
namespace Model
{
  class PutAccountSettingsResult
  {
  public:
    AWS_ARTIFACT_API PutAccountSettingsResult();
    AWS_ARTIFACT_API PutAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARTIFACT_API PutAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const AccountSettings& GetAccountSettings() const{ return m_accountSettings; }

    
    inline void SetAccountSettings(const AccountSettings& value) { m_accountSettings = value; }

    
    inline void SetAccountSettings(AccountSettings&& value) { m_accountSettings = std::move(value); }

    
    inline PutAccountSettingsResult& WithAccountSettings(const AccountSettings& value) { SetAccountSettings(value); return *this;}

    
    inline PutAccountSettingsResult& WithAccountSettings(AccountSettings&& value) { SetAccountSettings(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutAccountSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutAccountSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutAccountSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AccountSettings m_accountSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
