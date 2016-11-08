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
#include <aws/core/utils/DateTime.h>

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
   * <p>Represents an operating-system neutral workspace for running and managing
   * tests.</p>
   */
  class AWS_DEVICEFARM_API Project
  {
  public:
    Project();
    Project(const Aws::Utils::Json::JsonValue& jsonValue);
    Project& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The project's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The project's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The project's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The project's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The project's ARN.</p>
     */
    inline Project& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The project's ARN.</p>
     */
    inline Project& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The project's ARN.</p>
     */
    inline Project& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The project's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The project's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The project's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The project's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The project's name.</p>
     */
    inline Project& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The project's name.</p>
     */
    inline Project& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The project's name.</p>
     */
    inline Project& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>When the project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>When the project was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>When the project was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>When the project was created.</p>
     */
    inline Project& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>When the project was created.</p>
     */
    inline Project& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(value); return *this;}

  private:
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
