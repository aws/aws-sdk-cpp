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
