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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Information about a problem detail.</p>
   */
  class AWS_DEVICEFARM_API ProblemDetail
  {
  public:
    ProblemDetail();
    ProblemDetail(const Aws::Utils::Json::JsonValue& jsonValue);
    ProblemDetail& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The problem detail's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The problem detail's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The problem detail's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The problem detail's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The problem detail's ARN.</p>
     */
    inline ProblemDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The problem detail's ARN.</p>
     */
    inline ProblemDetail& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The problem detail's ARN.</p>
     */
    inline ProblemDetail& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The problem detail's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The problem detail's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The problem detail's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The problem detail's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The problem detail's name.</p>
     */
    inline ProblemDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The problem detail's name.</p>
     */
    inline ProblemDetail& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The problem detail's name.</p>
     */
    inline ProblemDetail& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
