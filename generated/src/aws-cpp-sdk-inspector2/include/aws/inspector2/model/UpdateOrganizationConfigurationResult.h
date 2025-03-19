/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AutoEnable.h>
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
namespace Inspector2
{
namespace Model
{
  class UpdateOrganizationConfigurationResult
  {
  public:
    AWS_INSPECTOR2_API UpdateOrganizationConfigurationResult() = default;
    AWS_INSPECTOR2_API UpdateOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API UpdateOrganizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The updated status of scan types automatically enabled for new members of
     * your Amazon Inspector organization.</p>
     */
    inline const AutoEnable& GetAutoEnable() const { return m_autoEnable; }
    template<typename AutoEnableT = AutoEnable>
    void SetAutoEnable(AutoEnableT&& value) { m_autoEnableHasBeenSet = true; m_autoEnable = std::forward<AutoEnableT>(value); }
    template<typename AutoEnableT = AutoEnable>
    UpdateOrganizationConfigurationResult& WithAutoEnable(AutoEnableT&& value) { SetAutoEnable(std::forward<AutoEnableT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateOrganizationConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AutoEnable m_autoEnable;
    bool m_autoEnableHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
