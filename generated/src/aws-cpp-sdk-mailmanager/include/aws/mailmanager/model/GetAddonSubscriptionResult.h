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
    AWS_MAILMANAGER_API GetAddonSubscriptionResult() = default;
    AWS_MAILMANAGER_API GetAddonSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetAddonSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the Add On for the subscription.</p>
     */
    inline const Aws::String& GetAddonName() const { return m_addonName; }
    template<typename AddonNameT = Aws::String>
    void SetAddonName(AddonNameT&& value) { m_addonNameHasBeenSet = true; m_addonName = std::forward<AddonNameT>(value); }
    template<typename AddonNameT = Aws::String>
    GetAddonSubscriptionResult& WithAddonName(AddonNameT&& value) { SetAddonName(std::forward<AddonNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the subscription.</p>
     */
    inline const Aws::String& GetAddonSubscriptionArn() const { return m_addonSubscriptionArn; }
    template<typename AddonSubscriptionArnT = Aws::String>
    void SetAddonSubscriptionArn(AddonSubscriptionArnT&& value) { m_addonSubscriptionArnHasBeenSet = true; m_addonSubscriptionArn = std::forward<AddonSubscriptionArnT>(value); }
    template<typename AddonSubscriptionArnT = Aws::String>
    GetAddonSubscriptionResult& WithAddonSubscriptionArn(AddonSubscriptionArnT&& value) { SetAddonSubscriptionArn(std::forward<AddonSubscriptionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Add On subscription was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    GetAddonSubscriptionResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAddonSubscriptionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet = false;

    Aws::String m_addonSubscriptionArn;
    bool m_addonSubscriptionArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
