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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/Lag.h>
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
namespace DirectConnect
{
namespace Model
{
  class AWS_DIRECTCONNECT_API DescribeLagsResult
  {
  public:
    DescribeLagsResult();
    DescribeLagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The LAGs.</p>
     */
    inline const Aws::Vector<Lag>& GetLags() const{ return m_lags; }

    /**
     * <p>The LAGs.</p>
     */
    inline void SetLags(const Aws::Vector<Lag>& value) { m_lags = value; }

    /**
     * <p>The LAGs.</p>
     */
    inline void SetLags(Aws::Vector<Lag>&& value) { m_lags = std::move(value); }

    /**
     * <p>The LAGs.</p>
     */
    inline DescribeLagsResult& WithLags(const Aws::Vector<Lag>& value) { SetLags(value); return *this;}

    /**
     * <p>The LAGs.</p>
     */
    inline DescribeLagsResult& WithLags(Aws::Vector<Lag>&& value) { SetLags(std::move(value)); return *this;}

    /**
     * <p>The LAGs.</p>
     */
    inline DescribeLagsResult& AddLags(const Lag& value) { m_lags.push_back(value); return *this; }

    /**
     * <p>The LAGs.</p>
     */
    inline DescribeLagsResult& AddLags(Lag&& value) { m_lags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Lag> m_lags;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
