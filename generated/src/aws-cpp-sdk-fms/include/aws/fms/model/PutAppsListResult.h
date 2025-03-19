/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/AppsListData.h>
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
namespace FMS
{
namespace Model
{
  class PutAppsListResult
  {
  public:
    AWS_FMS_API PutAppsListResult() = default;
    AWS_FMS_API PutAppsListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API PutAppsListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the Firewall Manager applications list.</p>
     */
    inline const AppsListData& GetAppsList() const { return m_appsList; }
    template<typename AppsListT = AppsListData>
    void SetAppsList(AppsListT&& value) { m_appsListHasBeenSet = true; m_appsList = std::forward<AppsListT>(value); }
    template<typename AppsListT = AppsListData>
    PutAppsListResult& WithAppsList(AppsListT&& value) { SetAppsList(std::forward<AppsListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the applications list.</p>
     */
    inline const Aws::String& GetAppsListArn() const { return m_appsListArn; }
    template<typename AppsListArnT = Aws::String>
    void SetAppsListArn(AppsListArnT&& value) { m_appsListArnHasBeenSet = true; m_appsListArn = std::forward<AppsListArnT>(value); }
    template<typename AppsListArnT = Aws::String>
    PutAppsListResult& WithAppsListArn(AppsListArnT&& value) { SetAppsListArn(std::forward<AppsListArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutAppsListResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AppsListData m_appsList;
    bool m_appsListHasBeenSet = false;

    Aws::String m_appsListArn;
    bool m_appsListArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
