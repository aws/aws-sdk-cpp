/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeLagsResult
  {
  public:
    AWS_DIRECTCONNECT_API DescribeLagsResult();
    AWS_DIRECTCONNECT_API DescribeLagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeLagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
