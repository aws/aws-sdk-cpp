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
  class AWS_INSPECTOR_API DeleteRunRequest : public InspectorRequest
  {
  public:
    DeleteRunRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ARN specifying the assessment run that you want to delete.</p>
     */
    inline const Aws::String& GetRunArn() const{ return m_runArn; }

    /**
     * <p>The ARN specifying the assessment run that you want to delete.</p>
     */
    inline void SetRunArn(const Aws::String& value) { m_runArnHasBeenSet = true; m_runArn = value; }

    /**
     * <p>The ARN specifying the assessment run that you want to delete.</p>
     */
    inline void SetRunArn(Aws::String&& value) { m_runArnHasBeenSet = true; m_runArn = value; }

    /**
     * <p>The ARN specifying the assessment run that you want to delete.</p>
     */
    inline void SetRunArn(const char* value) { m_runArnHasBeenSet = true; m_runArn.assign(value); }

    /**
     * <p>The ARN specifying the assessment run that you want to delete.</p>
     */
    inline DeleteRunRequest& WithRunArn(const Aws::String& value) { SetRunArn(value); return *this;}

    /**
     * <p>The ARN specifying the assessment run that you want to delete.</p>
     */
    inline DeleteRunRequest& WithRunArn(Aws::String&& value) { SetRunArn(value); return *this;}

    /**
     * <p>The ARN specifying the assessment run that you want to delete.</p>
     */
    inline DeleteRunRequest& WithRunArn(const char* value) { SetRunArn(value); return *this;}

  private:
    Aws::String m_runArn;
    bool m_runArnHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
