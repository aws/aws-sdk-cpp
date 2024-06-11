﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>The structure representing the postAgentProfileRequest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/PostAgentProfileRequest">AWS
   * API Reference</a></p>
   */
  class PostAgentProfileRequest : public StreamingCodeGuruProfilerRequest
  {
  public:
    AWS_CODEGURUPROFILER_API PostAgentProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PostAgentProfile"; }

    AWS_CODEGURUPROFILER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> Amazon CodeGuru Profiler uses this universally unique identifier (UUID) to
     * prevent the accidental submission of duplicate profiling data if there are
     * failures and retries. </p>
     */
    inline const Aws::String& GetProfileToken() const{ return m_profileToken; }
    inline bool ProfileTokenHasBeenSet() const { return m_profileTokenHasBeenSet; }
    inline void SetProfileToken(const Aws::String& value) { m_profileTokenHasBeenSet = true; m_profileToken = value; }
    inline void SetProfileToken(Aws::String&& value) { m_profileTokenHasBeenSet = true; m_profileToken = std::move(value); }
    inline void SetProfileToken(const char* value) { m_profileTokenHasBeenSet = true; m_profileToken.assign(value); }
    inline PostAgentProfileRequest& WithProfileToken(const Aws::String& value) { SetProfileToken(value); return *this;}
    inline PostAgentProfileRequest& WithProfileToken(Aws::String&& value) { SetProfileToken(std::move(value)); return *this;}
    inline PostAgentProfileRequest& WithProfileToken(const char* value) { SetProfileToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the profiling group with the aggregated profile that receives
     * the submitted profiling data. </p>
     */
    inline const Aws::String& GetProfilingGroupName() const{ return m_profilingGroupName; }
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }
    inline void SetProfilingGroupName(const Aws::String& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = value; }
    inline void SetProfilingGroupName(Aws::String&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::move(value); }
    inline void SetProfilingGroupName(const char* value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName.assign(value); }
    inline PostAgentProfileRequest& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}
    inline PostAgentProfileRequest& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}
    inline PostAgentProfileRequest& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}
    ///@}
  private:


    Aws::String m_profileToken;
    bool m_profileTokenHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
