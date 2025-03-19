/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/account/model/RegionOptStatus.h>
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
namespace Account
{
namespace Model
{
  class GetRegionOptStatusResult
  {
  public:
    AWS_ACCOUNT_API GetRegionOptStatusResult() = default;
    AWS_ACCOUNT_API GetRegionOptStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCOUNT_API GetRegionOptStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Region code that was passed in.</p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    GetRegionOptStatusResult& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One of the potential statuses a Region can undergo (Enabled, Enabling,
     * Disabled, Disabling, Enabled_By_Default).</p>
     */
    inline RegionOptStatus GetRegionOptStatus() const { return m_regionOptStatus; }
    inline void SetRegionOptStatus(RegionOptStatus value) { m_regionOptStatusHasBeenSet = true; m_regionOptStatus = value; }
    inline GetRegionOptStatusResult& WithRegionOptStatus(RegionOptStatus value) { SetRegionOptStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRegionOptStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    RegionOptStatus m_regionOptStatus{RegionOptStatus::NOT_SET};
    bool m_regionOptStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
