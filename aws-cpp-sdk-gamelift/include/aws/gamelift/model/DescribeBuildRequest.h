﻿/*
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
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p>
   */
  class AWS_GAMELIFT_API DescribeBuildRequest : public GameLiftRequest
  {
  public:
    DescribeBuildRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Unique identifier of the build that you want to retrieve properties for.</p>
     */
    inline const Aws::String& GetBuildId() const{ return m_buildId; }

    /**
     * <p>Unique identifier of the build that you want to retrieve properties for.</p>
     */
    inline void SetBuildId(const Aws::String& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>Unique identifier of the build that you want to retrieve properties for.</p>
     */
    inline void SetBuildId(Aws::String&& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>Unique identifier of the build that you want to retrieve properties for.</p>
     */
    inline void SetBuildId(const char* value) { m_buildIdHasBeenSet = true; m_buildId.assign(value); }

    /**
     * <p>Unique identifier of the build that you want to retrieve properties for.</p>
     */
    inline DescribeBuildRequest& WithBuildId(const Aws::String& value) { SetBuildId(value); return *this;}

    /**
     * <p>Unique identifier of the build that you want to retrieve properties for.</p>
     */
    inline DescribeBuildRequest& WithBuildId(Aws::String&& value) { SetBuildId(value); return *this;}

    /**
     * <p>Unique identifier of the build that you want to retrieve properties for.</p>
     */
    inline DescribeBuildRequest& WithBuildId(const char* value) { SetBuildId(value); return *this;}

  private:
    Aws::String m_buildId;
    bool m_buildIdHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
