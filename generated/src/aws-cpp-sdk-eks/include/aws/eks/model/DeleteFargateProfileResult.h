/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/FargateProfile.h>
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
namespace EKS
{
namespace Model
{
  class DeleteFargateProfileResult
  {
  public:
    AWS_EKS_API DeleteFargateProfileResult() = default;
    AWS_EKS_API DeleteFargateProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API DeleteFargateProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The deleted Fargate profile.</p>
     */
    inline const FargateProfile& GetFargateProfile() const { return m_fargateProfile; }
    template<typename FargateProfileT = FargateProfile>
    void SetFargateProfile(FargateProfileT&& value) { m_fargateProfileHasBeenSet = true; m_fargateProfile = std::forward<FargateProfileT>(value); }
    template<typename FargateProfileT = FargateProfile>
    DeleteFargateProfileResult& WithFargateProfile(FargateProfileT&& value) { SetFargateProfile(std::forward<FargateProfileT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteFargateProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FargateProfile m_fargateProfile;
    bool m_fargateProfileHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
