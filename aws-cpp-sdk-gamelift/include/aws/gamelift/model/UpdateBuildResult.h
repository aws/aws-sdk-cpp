/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/Build.h>
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
  /**
   * <p>Represents the returned data in response to a request
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateBuildOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API UpdateBuildResult
  {
  public:
    UpdateBuildResult();
    UpdateBuildResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateBuildResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated build resource.</p>
     */
    inline const Build& GetBuild() const{ return m_build; }

    /**
     * <p>The updated build resource.</p>
     */
    inline void SetBuild(const Build& value) { m_build = value; }

    /**
     * <p>The updated build resource.</p>
     */
    inline void SetBuild(Build&& value) { m_build = std::move(value); }

    /**
     * <p>The updated build resource.</p>
     */
    inline UpdateBuildResult& WithBuild(const Build& value) { SetBuild(value); return *this;}

    /**
     * <p>The updated build resource.</p>
     */
    inline UpdateBuildResult& WithBuild(Build&& value) { SetBuild(std::move(value)); return *this;}

  private:

    Build m_build;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
