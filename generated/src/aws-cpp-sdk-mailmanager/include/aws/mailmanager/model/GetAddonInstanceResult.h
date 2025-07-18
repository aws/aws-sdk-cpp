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
    AWS_MAILMANAGER_API GetAddonInstanceResult() = default;
    AWS_MAILMANAGER_API GetAddonInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetAddonInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The subscription ID associated to the instance.</p>
     */
    inline const Aws::String& GetAddonSubscriptionId() const { return m_addonSubscriptionId; }
    template<typename AddonSubscriptionIdT = Aws::String>
    void SetAddonSubscriptionId(AddonSubscriptionIdT&& value) { m_addonSubscriptionIdHasBeenSet = true; m_addonSubscriptionId = std::forward<AddonSubscriptionIdT>(value); }
    template<typename AddonSubscriptionIdT = Aws::String>
    GetAddonInstanceResult& WithAddonSubscriptionId(AddonSubscriptionIdT&& value) { SetAddonSubscriptionId(std::forward<AddonSubscriptionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Add On provider associated to the subscription of the
     * instance.</p>
     */
    inline const Aws::String& GetAddonName() const { return m_addonName; }
    template<typename AddonNameT = Aws::String>
    void SetAddonName(AddonNameT&& value) { m_addonNameHasBeenSet = true; m_addonName = std::forward<AddonNameT>(value); }
    template<typename AddonNameT = Aws::String>
    GetAddonInstanceResult& WithAddonName(AddonNameT&& value) { SetAddonName(std::forward<AddonNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Add On instance.</p>
     */
    inline const Aws::String& GetAddonInstanceArn() const { return m_addonInstanceArn; }
    template<typename AddonInstanceArnT = Aws::String>
    void SetAddonInstanceArn(AddonInstanceArnT&& value) { m_addonInstanceArnHasBeenSet = true; m_addonInstanceArn = std::forward<AddonInstanceArnT>(value); }
    template<typename AddonInstanceArnT = Aws::String>
    GetAddonInstanceResult& WithAddonInstanceArn(AddonInstanceArnT&& value) { SetAddonInstanceArn(std::forward<AddonInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Add On instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    GetAddonInstanceResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAddonInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_addonSubscriptionId;
    bool m_addonSubscriptionIdHasBeenSet = false;

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet = false;

    Aws::String m_addonInstanceArn;
    bool m_addonInstanceArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
