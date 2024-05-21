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
  class GetAddonSubscriptionResult
  {
  public:
    AWS_MAILMANAGER_API GetAddonSubscriptionResult();
    AWS_MAILMANAGER_API GetAddonSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetAddonSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the Add On for the subscription.</p>
     */
    inline const Aws::String& GetAddonName() const{ return m_addonName; }

    /**
     * <p>The name of the Add On for the subscription.</p>
     */
    inline void SetAddonName(const Aws::String& value) { m_addonName = value; }

    /**
     * <p>The name of the Add On for the subscription.</p>
     */
    inline void SetAddonName(Aws::String&& value) { m_addonName = std::move(value); }

    /**
     * <p>The name of the Add On for the subscription.</p>
     */
    inline void SetAddonName(const char* value) { m_addonName.assign(value); }

    /**
     * <p>The name of the Add On for the subscription.</p>
     */
    inline GetAddonSubscriptionResult& WithAddonName(const Aws::String& value) { SetAddonName(value); return *this;}

    /**
     * <p>The name of the Add On for the subscription.</p>
     */
    inline GetAddonSubscriptionResult& WithAddonName(Aws::String&& value) { SetAddonName(std::move(value)); return *this;}

    /**
     * <p>The name of the Add On for the subscription.</p>
     */
    inline GetAddonSubscriptionResult& WithAddonName(const char* value) { SetAddonName(value); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) for the subscription.</p>
     */
    inline const Aws::String& GetAddonSubscriptionArn() const{ return m_addonSubscriptionArn; }

    /**
     * <p>Amazon Resource Name (ARN) for the subscription.</p>
     */
    inline void SetAddonSubscriptionArn(const Aws::String& value) { m_addonSubscriptionArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) for the subscription.</p>
     */
    inline void SetAddonSubscriptionArn(Aws::String&& value) { m_addonSubscriptionArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) for the subscription.</p>
     */
    inline void SetAddonSubscriptionArn(const char* value) { m_addonSubscriptionArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) for the subscription.</p>
     */
    inline GetAddonSubscriptionResult& WithAddonSubscriptionArn(const Aws::String& value) { SetAddonSubscriptionArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) for the subscription.</p>
     */
    inline GetAddonSubscriptionResult& WithAddonSubscriptionArn(Aws::String&& value) { SetAddonSubscriptionArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) for the subscription.</p>
     */
    inline GetAddonSubscriptionResult& WithAddonSubscriptionArn(const char* value) { SetAddonSubscriptionArn(value); return *this;}


    /**
     * <p>The timestamp of when the Add On subscription was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The timestamp of when the Add On subscription was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>The timestamp of when the Add On subscription was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>The timestamp of when the Add On subscription was created.</p>
     */
    inline GetAddonSubscriptionResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp of when the Add On subscription was created.</p>
     */
    inline GetAddonSubscriptionResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAddonSubscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAddonSubscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAddonSubscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_addonName;

    Aws::String m_addonSubscriptionArn;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
