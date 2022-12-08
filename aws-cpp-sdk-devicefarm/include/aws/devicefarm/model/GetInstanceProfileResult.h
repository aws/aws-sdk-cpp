/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetInstanceProfileResult
  {
  public:
    AWS_DEVICEFARM_API GetInstanceProfileResult();
    AWS_DEVICEFARM_API GetInstanceProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetInstanceProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains information about an instance profile.</p>
     */
    inline const InstanceProfile& GetInstanceProfile() const{ return m_instanceProfile; }

    /**
     * <p>An object that contains information about an instance profile.</p>
     */
    inline void SetInstanceProfile(const InstanceProfile& value) { m_instanceProfile = value; }

    /**
     * <p>An object that contains information about an instance profile.</p>
     */
    inline void SetInstanceProfile(InstanceProfile&& value) { m_instanceProfile = std::move(value); }

    /**
     * <p>An object that contains information about an instance profile.</p>
     */
    inline GetInstanceProfileResult& WithInstanceProfile(const InstanceProfile& value) { SetInstanceProfile(value); return *this;}

    /**
     * <p>An object that contains information about an instance profile.</p>
     */
    inline GetInstanceProfileResult& WithInstanceProfile(InstanceProfile&& value) { SetInstanceProfile(std::move(value)); return *this;}

  private:

    InstanceProfile m_instanceProfile;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
