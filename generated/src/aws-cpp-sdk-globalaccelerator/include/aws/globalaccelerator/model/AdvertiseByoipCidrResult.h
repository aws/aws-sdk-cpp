/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/ByoipCidr.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class AdvertiseByoipCidrResult
  {
  public:
    AWS_GLOBALACCELERATOR_API AdvertiseByoipCidrResult();
    AWS_GLOBALACCELERATOR_API AdvertiseByoipCidrResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API AdvertiseByoipCidrResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the address range.</p>
     */
    inline const ByoipCidr& GetByoipCidr() const{ return m_byoipCidr; }

    /**
     * <p>Information about the address range.</p>
     */
    inline void SetByoipCidr(const ByoipCidr& value) { m_byoipCidr = value; }

    /**
     * <p>Information about the address range.</p>
     */
    inline void SetByoipCidr(ByoipCidr&& value) { m_byoipCidr = std::move(value); }

    /**
     * <p>Information about the address range.</p>
     */
    inline AdvertiseByoipCidrResult& WithByoipCidr(const ByoipCidr& value) { SetByoipCidr(value); return *this;}

    /**
     * <p>Information about the address range.</p>
     */
    inline AdvertiseByoipCidrResult& WithByoipCidr(ByoipCidr&& value) { SetByoipCidr(std::move(value)); return *this;}

  private:

    ByoipCidr m_byoipCidr;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
