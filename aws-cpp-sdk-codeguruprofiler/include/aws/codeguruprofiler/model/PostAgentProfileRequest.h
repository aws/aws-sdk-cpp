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
   * <p>Request for PostAgentProfile operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/PostAgentProfileRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUPROFILER_API PostAgentProfileRequest : public StreamingCodeGuruProfilerRequest
  {
  public:
    PostAgentProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PostAgentProfile"; }

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Client generated token to deduplicate the agent profile during
     * aggregation.</p>
     */
    inline const Aws::String& GetProfileToken() const{ return m_profileToken; }

    /**
     * <p>Client generated token to deduplicate the agent profile during
     * aggregation.</p>
     */
    inline bool ProfileTokenHasBeenSet() const { return m_profileTokenHasBeenSet; }

    /**
     * <p>Client generated token to deduplicate the agent profile during
     * aggregation.</p>
     */
    inline void SetProfileToken(const Aws::String& value) { m_profileTokenHasBeenSet = true; m_profileToken = value; }

    /**
     * <p>Client generated token to deduplicate the agent profile during
     * aggregation.</p>
     */
    inline void SetProfileToken(Aws::String&& value) { m_profileTokenHasBeenSet = true; m_profileToken = std::move(value); }

    /**
     * <p>Client generated token to deduplicate the agent profile during
     * aggregation.</p>
     */
    inline void SetProfileToken(const char* value) { m_profileTokenHasBeenSet = true; m_profileToken.assign(value); }

    /**
     * <p>Client generated token to deduplicate the agent profile during
     * aggregation.</p>
     */
    inline PostAgentProfileRequest& WithProfileToken(const Aws::String& value) { SetProfileToken(value); return *this;}

    /**
     * <p>Client generated token to deduplicate the agent profile during
     * aggregation.</p>
     */
    inline PostAgentProfileRequest& WithProfileToken(Aws::String&& value) { SetProfileToken(std::move(value)); return *this;}

    /**
     * <p>Client generated token to deduplicate the agent profile during
     * aggregation.</p>
     */
    inline PostAgentProfileRequest& WithProfileToken(const char* value) { SetProfileToken(value); return *this;}


    
    inline const Aws::String& GetProfilingGroupName() const{ return m_profilingGroupName; }

    
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }

    
    inline void SetProfilingGroupName(const Aws::String& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = value; }

    
    inline void SetProfilingGroupName(Aws::String&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::move(value); }

    
    inline void SetProfilingGroupName(const char* value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName.assign(value); }

    
    inline PostAgentProfileRequest& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}

    
    inline PostAgentProfileRequest& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}

    
    inline PostAgentProfileRequest& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}

  private:


    Aws::String m_profileToken;
    bool m_profileTokenHasBeenSet;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
