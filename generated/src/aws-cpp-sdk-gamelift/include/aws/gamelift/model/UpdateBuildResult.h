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
  class UpdateBuildResult
  {
  public:
    AWS_GAMELIFT_API UpdateBuildResult();
    AWS_GAMELIFT_API UpdateBuildResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API UpdateBuildResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The updated build resource.</p>
     */
    inline const Build& GetBuild() const{ return m_build; }
    inline void SetBuild(const Build& value) { m_build = value; }
    inline void SetBuild(Build&& value) { m_build = std::move(value); }
    inline UpdateBuildResult& WithBuild(const Build& value) { SetBuild(value); return *this;}
    inline UpdateBuildResult& WithBuild(Build&& value) { SetBuild(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateBuildResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateBuildResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateBuildResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Build m_build;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
