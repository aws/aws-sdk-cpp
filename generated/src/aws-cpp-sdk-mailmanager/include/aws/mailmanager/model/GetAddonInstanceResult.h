/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class GetAddonInstanceResult
  {
  public:
    AWS_MAILMANAGER_API GetAddonInstanceResult();
    AWS_MAILMANAGER_API GetAddonInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetAddonInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Add On instance.</p>
     */
    inline const Aws::String& GetAddonInstanceArn() const{ return m_addonInstanceArn; }
    inline void SetAddonInstanceArn(const Aws::String& value) { m_addonInstanceArn = value; }
    inline void SetAddonInstanceArn(Aws::String&& value) { m_addonInstanceArn = std::move(value); }
    inline void SetAddonInstanceArn(const char* value) { m_addonInstanceArn.assign(value); }
    inline GetAddonInstanceResult& WithAddonInstanceArn(const Aws::String& value) { SetAddonInstanceArn(value); return *this;}
    inline GetAddonInstanceResult& WithAddonInstanceArn(Aws::String&& value) { SetAddonInstanceArn(std::move(value)); return *this;}
    inline GetAddonInstanceResult& WithAddonInstanceArn(const char* value) { SetAddonInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Add On provider associated to the subscription of the
     * instance.</p>
     */
    inline const Aws::String& GetAddonName() const{ return m_addonName; }
    inline void SetAddonName(const Aws::String& value) { m_addonName = value; }
    inline void SetAddonName(Aws::String&& value) { m_addonName = std::move(value); }
    inline void SetAddonName(const char* value) { m_addonName.assign(value); }
    inline GetAddonInstanceResult& WithAddonName(const Aws::String& value) { SetAddonName(value); return *this;}
    inline GetAddonInstanceResult& WithAddonName(Aws::String&& value) { SetAddonName(std::move(value)); return *this;}
    inline GetAddonInstanceResult& WithAddonName(const char* value) { SetAddonName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscription ID associated to the instance.</p>
     */
    inline const Aws::String& GetAddonSubscriptionId() const{ return m_addonSubscriptionId; }
    inline void SetAddonSubscriptionId(const Aws::String& value) { m_addonSubscriptionId = value; }
    inline void SetAddonSubscriptionId(Aws::String&& value) { m_addonSubscriptionId = std::move(value); }
    inline void SetAddonSubscriptionId(const char* value) { m_addonSubscriptionId.assign(value); }
    inline GetAddonInstanceResult& WithAddonSubscriptionId(const Aws::String& value) { SetAddonSubscriptionId(value); return *this;}
    inline GetAddonInstanceResult& WithAddonSubscriptionId(Aws::String&& value) { SetAddonSubscriptionId(std::move(value)); return *this;}
    inline GetAddonInstanceResult& WithAddonSubscriptionId(const char* value) { SetAddonSubscriptionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Add On instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline GetAddonInstanceResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline GetAddonInstanceResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAddonInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAddonInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAddonInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_addonInstanceArn;

    Aws::String m_addonName;

    Aws::String m_addonSubscriptionId;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
