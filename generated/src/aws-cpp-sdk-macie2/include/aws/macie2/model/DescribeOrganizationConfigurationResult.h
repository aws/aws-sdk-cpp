/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{
  class DescribeOrganizationConfigurationResult
  {
  public:
    AWS_MACIE2_API DescribeOrganizationConfigurationResult() = default;
    AWS_MACIE2_API DescribeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API DescribeOrganizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies whether Amazon Macie is enabled automatically for accounts that are
     * added to the organization.</p>
     */
    inline bool GetAutoEnable() const { return m_autoEnable; }
    inline void SetAutoEnable(bool value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }
    inline DescribeOrganizationConfigurationResult& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the maximum number of Amazon Macie member accounts are part
     * of the organization.</p>
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

    bool m_autoEnable{false};
    bool m_autoEnableHasBeenSet = false;

    bool m_maxAccountLimitReached{false};
    bool m_maxAccountLimitReachedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
