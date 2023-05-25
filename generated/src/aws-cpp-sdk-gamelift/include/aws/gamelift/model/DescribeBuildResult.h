/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/Build.h>
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
  class DescribeBuildResult
  {
  public:
    AWS_GAMELIFT_API DescribeBuildResult();
    AWS_GAMELIFT_API DescribeBuildResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeBuildResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Set of properties describing the requested build.</p>
     */
    inline const Build& GetBuild() const{ return m_build; }

    /**
     * <p>Set of properties describing the requested build.</p>
     */
    inline void SetBuild(const Build& value) { m_build = value; }

    /**
     * <p>Set of properties describing the requested build.</p>
     */
    inline void SetBuild(Build&& value) { m_build = std::move(value); }

    /**
     * <p>Set of properties describing the requested build.</p>
     */
    inline DescribeBuildResult& WithBuild(const Build& value) { SetBuild(value); return *this;}

    /**
     * <p>Set of properties describing the requested build.</p>
     */
    inline DescribeBuildResult& WithBuild(Build&& value) { SetBuild(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeBuildResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeBuildResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeBuildResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Build m_build;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
