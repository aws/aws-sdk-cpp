﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/PercentPair.h>
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
namespace IoT
{
namespace Model
{
  class GetPercentilesResult
  {
  public:
    AWS_IOT_API GetPercentilesResult();
    AWS_IOT_API GetPercentilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetPercentilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The percentile values of the aggregated fields.</p>
     */
    inline const Aws::Vector<PercentPair>& GetPercentiles() const{ return m_percentiles; }
    inline void SetPercentiles(const Aws::Vector<PercentPair>& value) { m_percentiles = value; }
    inline void SetPercentiles(Aws::Vector<PercentPair>&& value) { m_percentiles = std::move(value); }
    inline GetPercentilesResult& WithPercentiles(const Aws::Vector<PercentPair>& value) { SetPercentiles(value); return *this;}
    inline GetPercentilesResult& WithPercentiles(Aws::Vector<PercentPair>&& value) { SetPercentiles(std::move(value)); return *this;}
    inline GetPercentilesResult& AddPercentiles(const PercentPair& value) { m_percentiles.push_back(value); return *this; }
    inline GetPercentilesResult& AddPercentiles(PercentPair&& value) { m_percentiles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPercentilesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPercentilesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPercentilesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PercentPair> m_percentiles;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
