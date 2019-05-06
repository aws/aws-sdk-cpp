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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>A response to a <code>PollForThirdPartyJobs </code>request returned by AWS
   * CodePipeline when there is a job to be worked upon by a partner
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ThirdPartyJob">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API ThirdPartyJob
  {
  public:
    ThirdPartyJob();
    ThirdPartyJob(Aws::Utils::Json::JsonView jsonValue);
    ThirdPartyJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>clientToken</code> portion of the <code>clientId</code> and
     * <code>clientToken</code> pair used to verify that the calling entity is allowed
     * access to the job and its details.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The <code>clientToken</code> portion of the <code>clientId</code> and
     * <code>clientToken</code> pair used to verify that the calling entity is allowed
     * access to the job and its details.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The <code>clientToken</code> portion of the <code>clientId</code> and
     * <code>clientToken</code> pair used to verify that the calling entity is allowed
     * access to the job and its details.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The <code>clientToken</code> portion of the <code>clientId</code> and
     * <code>clientToken</code> pair used to verify that the calling entity is allowed
     * access to the job and its details.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The <code>clientToken</code> portion of the <code>clientId</code> and
     * <code>clientToken</code> pair used to verify that the calling entity is allowed
     * access to the job and its details.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The <code>clientToken</code> portion of the <code>clientId</code> and
     * <code>clientToken</code> pair used to verify that the calling entity is allowed
     * access to the job and its details.</p>
     */
    inline ThirdPartyJob& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The <code>clientToken</code> portion of the <code>clientId</code> and
     * <code>clientToken</code> pair used to verify that the calling entity is allowed
     * access to the job and its details.</p>
     */
    inline ThirdPartyJob& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The <code>clientToken</code> portion of the <code>clientId</code> and
     * <code>clientToken</code> pair used to verify that the calling entity is allowed
     * access to the job and its details.</p>
     */
    inline ThirdPartyJob& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The identifier used to identify the job in AWS CodePipeline.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier used to identify the job in AWS CodePipeline.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The identifier used to identify the job in AWS CodePipeline.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The identifier used to identify the job in AWS CodePipeline.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The identifier used to identify the job in AWS CodePipeline.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The identifier used to identify the job in AWS CodePipeline.</p>
     */
    inline ThirdPartyJob& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier used to identify the job in AWS CodePipeline.</p>
     */
    inline ThirdPartyJob& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier used to identify the job in AWS CodePipeline.</p>
     */
    inline ThirdPartyJob& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
