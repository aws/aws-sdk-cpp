/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/iot1click-projects/model/PlacementDescription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT1ClickProjects
{
namespace Model
{
  class DescribePlacementResult
  {
  public:
    AWS_IOT1CLICKPROJECTS_API DescribePlacementResult();
    AWS_IOT1CLICKPROJECTS_API DescribePlacementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT1CLICKPROJECTS_API DescribePlacementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object describing the placement.</p>
     */
    inline const PlacementDescription& GetPlacement() const{ return m_placement; }

    /**
     * <p>An object describing the placement.</p>
     */
    inline void SetPlacement(const PlacementDescription& value) { m_placement = value; }

    /**
     * <p>An object describing the placement.</p>
     */
    inline void SetPlacement(PlacementDescription&& value) { m_placement = std::move(value); }

    /**
     * <p>An object describing the placement.</p>
     */
    inline DescribePlacementResult& WithPlacement(const PlacementDescription& value) { SetPlacement(value); return *this;}

    /**
     * <p>An object describing the placement.</p>
     */
    inline DescribePlacementResult& WithPlacement(PlacementDescription&& value) { SetPlacement(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribePlacementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribePlacementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribePlacementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PlacementDescription m_placement;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
