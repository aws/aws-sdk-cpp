/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/Compute.h>
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
namespace GameLift
{
namespace Model
{
  class DescribeComputeResult
  {
  public:
    AWS_GAMELIFT_API DescribeComputeResult();
    AWS_GAMELIFT_API DescribeComputeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeComputeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The set of properties for the requested compute resource.</p>
     */
    inline const Compute& GetCompute() const{ return m_compute; }

    /**
     * <p>The set of properties for the requested compute resource.</p>
     */
    inline void SetCompute(const Compute& value) { m_compute = value; }

    /**
     * <p>The set of properties for the requested compute resource.</p>
     */
    inline void SetCompute(Compute&& value) { m_compute = std::move(value); }

    /**
     * <p>The set of properties for the requested compute resource.</p>
     */
    inline DescribeComputeResult& WithCompute(const Compute& value) { SetCompute(value); return *this;}

    /**
     * <p>The set of properties for the requested compute resource.</p>
     */
    inline DescribeComputeResult& WithCompute(Compute&& value) { SetCompute(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeComputeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeComputeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeComputeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Compute m_compute;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
