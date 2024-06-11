﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A response to a <code>PollForThirdPartyJobs</code> request returned by
   * CodePipeline when there is a job to be worked on by a partner
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ThirdPartyJob">AWS
   * API Reference</a></p>
   */
  class ThirdPartyJob
  {
  public:
    AWS_CODEPIPELINE_API ThirdPartyJob();
    AWS_CODEPIPELINE_API ThirdPartyJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ThirdPartyJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>clientToken</code> portion of the <code>clientId</code> and
     * <code>clientToken</code> pair used to verify that the calling entity is allowed
     * access to the job and its details.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline ThirdPartyJob& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline ThirdPartyJob& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline ThirdPartyJob& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier used to identify the job in CodePipeline.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline ThirdPartyJob& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline ThirdPartyJob& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline ThirdPartyJob& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}
  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
