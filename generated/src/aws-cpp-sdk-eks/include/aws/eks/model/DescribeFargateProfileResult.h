/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/FargateProfile.h>
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
  class DescribeFargateProfileResult
  {
  public:
    AWS_EKS_API DescribeFargateProfileResult();
    AWS_EKS_API DescribeFargateProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API DescribeFargateProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of your Fargate profile.</p>
     */
    inline const FargateProfile& GetFargateProfile() const{ return m_fargateProfile; }

    /**
     * <p>The full description of your Fargate profile.</p>
     */
    inline void SetFargateProfile(const FargateProfile& value) { m_fargateProfile = value; }

    /**
     * <p>The full description of your Fargate profile.</p>
     */
    inline void SetFargateProfile(FargateProfile&& value) { m_fargateProfile = std::move(value); }

    /**
     * <p>The full description of your Fargate profile.</p>
     */
    inline DescribeFargateProfileResult& WithFargateProfile(const FargateProfile& value) { SetFargateProfile(value); return *this;}

    /**
     * <p>The full description of your Fargate profile.</p>
     */
    inline DescribeFargateProfileResult& WithFargateProfile(FargateProfile&& value) { SetFargateProfile(std::move(value)); return *this;}

  private:

    FargateProfile m_fargateProfile;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
