/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/codedeploy_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace codedeploy
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_CODEDEPLOY_API DeploymentOverview
  {
  public:
    DeploymentOverview();
    DeploymentOverview(const Aws::Utils::Json::JsonValue& jsonValue);
    DeploymentOverview& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline long long GetPending() const{ return m_pending; }
    
    inline void SetPending(long long value) { m_pendingHasBeenSet = true; m_pending = value; }

    
    inline DeploymentOverview&  WithPending(long long value) { SetPending(value); return *this;}

    
    inline long long GetInProgress() const{ return m_inProgress; }
    
    inline void SetInProgress(long long value) { m_inProgressHasBeenSet = true; m_inProgress = value; }

    
    inline DeploymentOverview&  WithInProgress(long long value) { SetInProgress(value); return *this;}

    
    inline long long GetSucceeded() const{ return m_succeeded; }
    
    inline void SetSucceeded(long long value) { m_succeededHasBeenSet = true; m_succeeded = value; }

    
    inline DeploymentOverview&  WithSucceeded(long long value) { SetSucceeded(value); return *this;}

    
    inline long long GetFailed() const{ return m_failed; }
    
    inline void SetFailed(long long value) { m_failedHasBeenSet = true; m_failed = value; }

    
    inline DeploymentOverview&  WithFailed(long long value) { SetFailed(value); return *this;}

    
    inline long long GetSkipped() const{ return m_skipped; }
    
    inline void SetSkipped(long long value) { m_skippedHasBeenSet = true; m_skipped = value; }

    
    inline DeploymentOverview&  WithSkipped(long long value) { SetSkipped(value); return *this;}

  private:
    long long m_pending;
    bool m_pendingHasBeenSet;
    long long m_inProgress;
    bool m_inProgressHasBeenSet;
    long long m_succeeded;
    bool m_succeededHasBeenSet;
    long long m_failed;
    bool m_failedHasBeenSet;
    long long m_skipped;
    bool m_skippedHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
