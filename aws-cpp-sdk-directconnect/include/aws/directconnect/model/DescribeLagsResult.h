/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  /**
   * <p>A structure containing a list of LAGs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/Lags">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API DescribeLagsResult
  {
  public:
    DescribeLagsResult();
    DescribeLagsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLagsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list of LAGs.</p>
     */
    inline const Aws::Vector<Lag>& GetLags() const{ return m_lags; }

    /**
     * <p>A list of LAGs.</p>
     */
    inline void SetLags(const Aws::Vector<Lag>& value) { m_lags = value; }

    /**
     * <p>A list of LAGs.</p>
     */
    inline void SetLags(Aws::Vector<Lag>&& value) { m_lags = value; }

    /**
     * <p>A list of LAGs.</p>
     */
    inline DescribeLagsResult& WithLags(const Aws::Vector<Lag>& value) { SetLags(value); return *this;}

    /**
     * <p>A list of LAGs.</p>
     */
    inline DescribeLagsResult& WithLags(Aws::Vector<Lag>&& value) { SetLags(value); return *this;}

    /**
     * <p>A list of LAGs.</p>
     */
    inline DescribeLagsResult& AddLags(const Lag& value) { m_lags.push_back(value); return *this; }

    /**
     * <p>A list of LAGs.</p>
     */
    inline DescribeLagsResult& AddLags(Lag&& value) { m_lags.push_back(value); return *this; }

  private:
    Aws::Vector<Lag> m_lags;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
