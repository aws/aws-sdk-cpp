﻿/*
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
#include <aws/ecr/ECR_EXPORTS.h>

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
namespace ECR
{
namespace Model
{

  /**
   * <p>The summary of the lifecycle policy preview request.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/LifecyclePolicyPreviewSummary">AWS
   * API Reference</a></p>
   */
  class AWS_ECR_API LifecyclePolicyPreviewSummary
  {
  public:
    LifecyclePolicyPreviewSummary();
    LifecyclePolicyPreviewSummary(Aws::Utils::Json::JsonView jsonValue);
    LifecyclePolicyPreviewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of expiring images.</p>
     */
    inline int GetExpiringImageTotalCount() const{ return m_expiringImageTotalCount; }

    /**
     * <p>The number of expiring images.</p>
     */
    inline void SetExpiringImageTotalCount(int value) { m_expiringImageTotalCountHasBeenSet = true; m_expiringImageTotalCount = value; }

    /**
     * <p>The number of expiring images.</p>
     */
    inline LifecyclePolicyPreviewSummary& WithExpiringImageTotalCount(int value) { SetExpiringImageTotalCount(value); return *this;}

  private:

    int m_expiringImageTotalCount;
    bool m_expiringImageTotalCountHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
