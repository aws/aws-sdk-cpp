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
   * <p>Represents the returned data in response to a request action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeBuildOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeBuildResult
  {
  public:
    DescribeBuildResult();
    DescribeBuildResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeBuildResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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

  private:
    Build m_build;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
