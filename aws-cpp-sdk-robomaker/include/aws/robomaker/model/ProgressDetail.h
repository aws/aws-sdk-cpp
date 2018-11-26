/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about the progress of a deployment job.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ProgressDetail">AWS
   * API Reference</a></p>
   */
  class AWS_ROBOMAKER_API ProgressDetail
  {
  public:
    ProgressDetail();
    ProgressDetail(Aws::Utils::Json::JsonView jsonValue);
    ProgressDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current progress status.</p>
     */
    inline const Aws::String& GetCurrentProgress() const{ return m_currentProgress; }

    /**
     * <p>The current progress status.</p>
     */
    inline void SetCurrentProgress(const Aws::String& value) { m_currentProgressHasBeenSet = true; m_currentProgress = value; }

    /**
     * <p>The current progress status.</p>
     */
    inline void SetCurrentProgress(Aws::String&& value) { m_currentProgressHasBeenSet = true; m_currentProgress = std::move(value); }

    /**
     * <p>The current progress status.</p>
     */
    inline void SetCurrentProgress(const char* value) { m_currentProgressHasBeenSet = true; m_currentProgress.assign(value); }

    /**
     * <p>The current progress status.</p>
     */
    inline ProgressDetail& WithCurrentProgress(const Aws::String& value) { SetCurrentProgress(value); return *this;}

    /**
     * <p>The current progress status.</p>
     */
    inline ProgressDetail& WithCurrentProgress(Aws::String&& value) { SetCurrentProgress(std::move(value)); return *this;}

    /**
     * <p>The current progress status.</p>
     */
    inline ProgressDetail& WithCurrentProgress(const char* value) { SetCurrentProgress(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline const Aws::String& GetTargetResource() const{ return m_targetResource; }

    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline void SetTargetResource(const Aws::String& value) { m_targetResourceHasBeenSet = true; m_targetResource = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline void SetTargetResource(Aws::String&& value) { m_targetResourceHasBeenSet = true; m_targetResource = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline void SetTargetResource(const char* value) { m_targetResourceHasBeenSet = true; m_targetResource.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline ProgressDetail& WithTargetResource(const Aws::String& value) { SetTargetResource(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline ProgressDetail& WithTargetResource(Aws::String&& value) { SetTargetResource(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline ProgressDetail& WithTargetResource(const char* value) { SetTargetResource(value); return *this;}

  private:

    Aws::String m_currentProgress;
    bool m_currentProgressHasBeenSet;

    Aws::String m_targetResource;
    bool m_targetResourceHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
