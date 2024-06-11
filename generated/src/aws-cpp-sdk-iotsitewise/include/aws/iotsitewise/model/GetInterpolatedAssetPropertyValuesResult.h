﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/InterpolatedAssetPropertyValue.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class GetInterpolatedAssetPropertyValuesResult
  {
  public:
    AWS_IOTSITEWISE_API GetInterpolatedAssetPropertyValuesResult();
    AWS_IOTSITEWISE_API GetInterpolatedAssetPropertyValuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API GetInterpolatedAssetPropertyValuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested interpolated values.</p>
     */
    inline const Aws::Vector<InterpolatedAssetPropertyValue>& GetInterpolatedAssetPropertyValues() const{ return m_interpolatedAssetPropertyValues; }
    inline void SetInterpolatedAssetPropertyValues(const Aws::Vector<InterpolatedAssetPropertyValue>& value) { m_interpolatedAssetPropertyValues = value; }
    inline void SetInterpolatedAssetPropertyValues(Aws::Vector<InterpolatedAssetPropertyValue>&& value) { m_interpolatedAssetPropertyValues = std::move(value); }
    inline GetInterpolatedAssetPropertyValuesResult& WithInterpolatedAssetPropertyValues(const Aws::Vector<InterpolatedAssetPropertyValue>& value) { SetInterpolatedAssetPropertyValues(value); return *this;}
    inline GetInterpolatedAssetPropertyValuesResult& WithInterpolatedAssetPropertyValues(Aws::Vector<InterpolatedAssetPropertyValue>&& value) { SetInterpolatedAssetPropertyValues(std::move(value)); return *this;}
    inline GetInterpolatedAssetPropertyValuesResult& AddInterpolatedAssetPropertyValues(const InterpolatedAssetPropertyValue& value) { m_interpolatedAssetPropertyValues.push_back(value); return *this; }
    inline GetInterpolatedAssetPropertyValuesResult& AddInterpolatedAssetPropertyValues(InterpolatedAssetPropertyValue&& value) { m_interpolatedAssetPropertyValues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetInterpolatedAssetPropertyValuesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetInterpolatedAssetPropertyValuesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetInterpolatedAssetPropertyValuesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetInterpolatedAssetPropertyValuesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetInterpolatedAssetPropertyValuesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetInterpolatedAssetPropertyValuesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InterpolatedAssetPropertyValue> m_interpolatedAssetPropertyValues;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
