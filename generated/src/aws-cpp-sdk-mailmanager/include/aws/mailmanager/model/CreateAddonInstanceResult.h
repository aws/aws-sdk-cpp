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
  class CreateAddonInstanceResult
  {
  public:
    AWS_MAILMANAGER_API CreateAddonInstanceResult() = default;
    AWS_MAILMANAGER_API CreateAddonInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API CreateAddonInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of the Add On instance created by this API.</p>
     */
    inline const Aws::String& GetAddonInstanceId() const { return m_addonInstanceId; }
    template<typename AddonInstanceIdT = Aws::String>
    void SetAddonInstanceId(AddonInstanceIdT&& value) { m_addonInstanceIdHasBeenSet = true; m_addonInstanceId = std::forward<AddonInstanceIdT>(value); }
    template<typename AddonInstanceIdT = Aws::String>
    CreateAddonInstanceResult& WithAddonInstanceId(AddonInstanceIdT&& value) { SetAddonInstanceId(std::forward<AddonInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAddonInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_addonInstanceId;
    bool m_addonInstanceIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
