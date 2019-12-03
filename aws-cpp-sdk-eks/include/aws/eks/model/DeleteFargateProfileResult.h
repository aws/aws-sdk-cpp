/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EKS_API DeleteFargateProfileResult
  {
  public:
    DeleteFargateProfileResult();
    DeleteFargateProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteFargateProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The deleted Fargate profile.</p>
     */
    inline const FargateProfile& GetFargateProfile() const{ return m_fargateProfile; }

    /**
     * <p>The deleted Fargate profile.</p>
     */
    inline void SetFargateProfile(const FargateProfile& value) { m_fargateProfile = value; }

    /**
     * <p>The deleted Fargate profile.</p>
     */
    inline void SetFargateProfile(FargateProfile&& value) { m_fargateProfile = std::move(value); }

    /**
     * <p>The deleted Fargate profile.</p>
     */
    inline DeleteFargateProfileResult& WithFargateProfile(const FargateProfile& value) { SetFargateProfile(value); return *this;}

    /**
     * <p>The deleted Fargate profile.</p>
     */
    inline DeleteFargateProfileResult& WithFargateProfile(FargateProfile&& value) { SetFargateProfile(std::move(value)); return *this;}

  private:

    FargateProfile m_fargateProfile;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
