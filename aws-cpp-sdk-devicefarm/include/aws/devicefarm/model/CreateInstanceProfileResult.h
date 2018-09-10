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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/InstanceProfile.h>
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
namespace DeviceFarm
{
namespace Model
{
  class AWS_DEVICEFARM_API CreateInstanceProfileResult
  {
  public:
    CreateInstanceProfileResult();
    CreateInstanceProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateInstanceProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing information about your instance profile.</p>
     */
    inline const InstanceProfile& GetInstanceProfile() const{ return m_instanceProfile; }

    /**
     * <p>An object containing information about your instance profile.</p>
     */
    inline void SetInstanceProfile(const InstanceProfile& value) { m_instanceProfile = value; }

    /**
     * <p>An object containing information about your instance profile.</p>
     */
    inline void SetInstanceProfile(InstanceProfile&& value) { m_instanceProfile = std::move(value); }

    /**
     * <p>An object containing information about your instance profile.</p>
     */
    inline CreateInstanceProfileResult& WithInstanceProfile(const InstanceProfile& value) { SetInstanceProfile(value); return *this;}

    /**
     * <p>An object containing information about your instance profile.</p>
     */
    inline CreateInstanceProfileResult& WithInstanceProfile(InstanceProfile&& value) { SetInstanceProfile(std::move(value)); return *this;}

  private:

    InstanceProfile m_instanceProfile;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
