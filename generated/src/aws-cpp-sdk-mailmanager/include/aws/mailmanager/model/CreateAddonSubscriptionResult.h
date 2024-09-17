/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
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
namespace MailManager
{
namespace Model
{
  class CreateAddonSubscriptionResult
  {
  public:
    AWS_MAILMANAGER_API CreateAddonSubscriptionResult();
    AWS_MAILMANAGER_API CreateAddonSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API CreateAddonSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of the Add On subscription created by this API.</p>
     */
    inline const Aws::String& GetAddonSubscriptionId() const{ return m_addonSubscriptionId; }
    inline void SetAddonSubscriptionId(const Aws::String& value) { m_addonSubscriptionId = value; }
    inline void SetAddonSubscriptionId(Aws::String&& value) { m_addonSubscriptionId = std::move(value); }
    inline void SetAddonSubscriptionId(const char* value) { m_addonSubscriptionId.assign(value); }
    inline CreateAddonSubscriptionResult& WithAddonSubscriptionId(const Aws::String& value) { SetAddonSubscriptionId(value); return *this;}
    inline CreateAddonSubscriptionResult& WithAddonSubscriptionId(Aws::String&& value) { SetAddonSubscriptionId(std::move(value)); return *this;}
    inline CreateAddonSubscriptionResult& WithAddonSubscriptionId(const char* value) { SetAddonSubscriptionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAddonSubscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAddonSubscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAddonSubscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_addonSubscriptionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
