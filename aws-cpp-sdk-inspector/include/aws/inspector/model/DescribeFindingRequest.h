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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API DescribeFindingRequest : public InspectorRequest
  {
  public:
    DescribeFindingRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ARN specifying the finding that you want to describe.</p>
     */
    inline const Aws::String& GetFindingArn() const{ return m_findingArn; }

    /**
     * <p>The ARN specifying the finding that you want to describe.</p>
     */
    inline void SetFindingArn(const Aws::String& value) { m_findingArnHasBeenSet = true; m_findingArn = value; }

    /**
     * <p>The ARN specifying the finding that you want to describe.</p>
     */
    inline void SetFindingArn(Aws::String&& value) { m_findingArnHasBeenSet = true; m_findingArn = value; }

    /**
     * <p>The ARN specifying the finding that you want to describe.</p>
     */
    inline void SetFindingArn(const char* value) { m_findingArnHasBeenSet = true; m_findingArn.assign(value); }

    /**
     * <p>The ARN specifying the finding that you want to describe.</p>
     */
    inline DescribeFindingRequest& WithFindingArn(const Aws::String& value) { SetFindingArn(value); return *this;}

    /**
     * <p>The ARN specifying the finding that you want to describe.</p>
     */
    inline DescribeFindingRequest& WithFindingArn(Aws::String&& value) { SetFindingArn(value); return *this;}

    /**
     * <p>The ARN specifying the finding that you want to describe.</p>
     */
    inline DescribeFindingRequest& WithFindingArn(const char* value) { SetFindingArn(value); return *this;}

  private:
    Aws::String m_findingArn;
    bool m_findingArnHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
