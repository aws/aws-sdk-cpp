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
  class DescribeOrganizationConfigurationResult
  {
  public:
    AWS_INSPECTOR2_API DescribeOrganizationConfigurationResult() = default;
    AWS_INSPECTOR2_API DescribeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API DescribeOrganizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The scan types are automatically enabled for new members of your
     * organization.</p>
     */
    inline const AutoEnable& GetAutoEnable() const { return m_autoEnable; }
    template<typename AutoEnableT = AutoEnable>
    void SetAutoEnable(AutoEnableT&& value) { m_autoEnableHasBeenSet = true; m_autoEnable = std::forward<AutoEnableT>(value); }
    template<typename AutoEnableT = AutoEnable>
    DescribeOrganizationConfigurationResult& WithAutoEnable(AutoEnableT&& value) { SetAutoEnable(std::forward<AutoEnableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents whether your organization has reached the maximum Amazon Web
     * Services account limit for Amazon Inspector.</p>
     */
    inline bool GetMaxAccountLimitReached() const { return m_maxAccountLimitReached; }
    inline void SetMaxAccountLimitReached(bool value) { m_maxAccountLimitReachedHasBeenSet = true; m_maxAccountLimitReached = value; }
    inline DescribeOrganizationConfigurationResult& WithMaxAccountLimitReached(bool value) { SetMaxAccountLimitReached(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOrganizationConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AutoEnable m_autoEnable;
    bool m_autoEnableHasBeenSet = false;

    bool m_maxAccountLimitReached{false};
    bool m_maxAccountLimitReachedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
