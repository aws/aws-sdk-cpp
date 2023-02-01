/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/ContainerServicePower.h>
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
namespace Lightsail
{
namespace Model
{
  class GetContainerServicePowersResult
  {
  public:
    AWS_LIGHTSAIL_API GetContainerServicePowersResult();
    AWS_LIGHTSAIL_API GetContainerServicePowersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetContainerServicePowersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that describe the powers that can be specified for a
     * container service.</p>
     */
    inline const Aws::Vector<ContainerServicePower>& GetPowers() const{ return m_powers; }

    /**
     * <p>An array of objects that describe the powers that can be specified for a
     * container service.</p>
     */
    inline void SetPowers(const Aws::Vector<ContainerServicePower>& value) { m_powers = value; }

    /**
     * <p>An array of objects that describe the powers that can be specified for a
     * container service.</p>
     */
    inline void SetPowers(Aws::Vector<ContainerServicePower>&& value) { m_powers = std::move(value); }

    /**
     * <p>An array of objects that describe the powers that can be specified for a
     * container service.</p>
     */
    inline GetContainerServicePowersResult& WithPowers(const Aws::Vector<ContainerServicePower>& value) { SetPowers(value); return *this;}

    /**
     * <p>An array of objects that describe the powers that can be specified for a
     * container service.</p>
     */
    inline GetContainerServicePowersResult& WithPowers(Aws::Vector<ContainerServicePower>&& value) { SetPowers(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the powers that can be specified for a
     * container service.</p>
     */
    inline GetContainerServicePowersResult& AddPowers(const ContainerServicePower& value) { m_powers.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the powers that can be specified for a
     * container service.</p>
     */
    inline GetContainerServicePowersResult& AddPowers(ContainerServicePower&& value) { m_powers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ContainerServicePower> m_powers;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
