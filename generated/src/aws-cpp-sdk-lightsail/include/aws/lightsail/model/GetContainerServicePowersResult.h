﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    ///@{
    /**
     * <p>An array of objects that describe the powers that can be specified for a
     * container service.</p>
     */
    inline const Aws::Vector<ContainerServicePower>& GetPowers() const{ return m_powers; }
    inline void SetPowers(const Aws::Vector<ContainerServicePower>& value) { m_powers = value; }
    inline void SetPowers(Aws::Vector<ContainerServicePower>&& value) { m_powers = std::move(value); }
    inline GetContainerServicePowersResult& WithPowers(const Aws::Vector<ContainerServicePower>& value) { SetPowers(value); return *this;}
    inline GetContainerServicePowersResult& WithPowers(Aws::Vector<ContainerServicePower>&& value) { SetPowers(std::move(value)); return *this;}
    inline GetContainerServicePowersResult& AddPowers(const ContainerServicePower& value) { m_powers.push_back(value); return *this; }
    inline GetContainerServicePowersResult& AddPowers(ContainerServicePower&& value) { m_powers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetContainerServicePowersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetContainerServicePowersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetContainerServicePowersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ContainerServicePower> m_powers;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
