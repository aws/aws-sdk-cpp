﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/AmplifyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Amplify
{
namespace Model
{

  /**
   * <p>The request structure for the get job request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetJobRequest">AWS
   * API Reference</a></p>
   */
  class GetJobRequest : public AmplifyRequest
  {
  public:
    AWS_AMPLIFY_API GetJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetJob"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID for an Amplify app. </p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline GetJobRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline GetJobRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline GetJobRequest& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the branch to use for the job. </p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }
    inline GetJobRequest& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}
    inline GetJobRequest& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}
    inline GetJobRequest& WithBranchName(const char* value) { SetBranchName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for the job. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline GetJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline GetJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline GetJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
