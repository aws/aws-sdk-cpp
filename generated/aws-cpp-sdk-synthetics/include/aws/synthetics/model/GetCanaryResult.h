/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/Canary.h>
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
namespace Synthetics
{
namespace Model
{
  class AWS_SYNTHETICS_API GetCanaryResult
  {
  public:
    GetCanaryResult();
    GetCanaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCanaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A strucure that contains the full information about the canary.</p>
     */
    inline const Canary& GetCanary() const{ return m_canary; }

    /**
     * <p>A strucure that contains the full information about the canary.</p>
     */
    inline void SetCanary(const Canary& value) { m_canary = value; }

    /**
     * <p>A strucure that contains the full information about the canary.</p>
     */
    inline void SetCanary(Canary&& value) { m_canary = std::move(value); }

    /**
     * <p>A strucure that contains the full information about the canary.</p>
     */
    inline GetCanaryResult& WithCanary(const Canary& value) { SetCanary(value); return *this;}

    /**
     * <p>A strucure that contains the full information about the canary.</p>
     */
    inline GetCanaryResult& WithCanary(Canary&& value) { SetCanary(std::move(value)); return *this;}

  private:

    Canary m_canary;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
