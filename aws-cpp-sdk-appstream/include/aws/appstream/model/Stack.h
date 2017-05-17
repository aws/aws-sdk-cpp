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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{

  /**
   * <p>Details about a stack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/Stack">AWS API
   * Reference</a></p>
   */
  class AWS_APPSTREAM_API Stack
  {
  public:
    Stack();
    Stack(const Aws::Utils::Json::JsonValue& jsonValue);
    Stack& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ARN of the stack.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the stack.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the stack.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the stack.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the stack.</p>
     */
    inline Stack& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the stack.</p>
     */
    inline Stack& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the stack.</p>
     */
    inline Stack& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The unique identifier of the stack.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique identifier of the stack.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique identifier of the stack.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique identifier of the stack.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique identifier of the stack.</p>
     */
    inline Stack& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique identifier of the stack.</p>
     */
    inline Stack& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the stack.</p>
     */
    inline Stack& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>A meaningful description for the stack.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A meaningful description for the stack.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A meaningful description for the stack.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A meaningful description for the stack.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A meaningful description for the stack.</p>
     */
    inline Stack& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A meaningful description for the stack.</p>
     */
    inline Stack& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A meaningful description for the stack.</p>
     */
    inline Stack& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>A display name for the stack.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>A display name for the stack.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>A display name for the stack.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>A display name for the stack.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>A display name for the stack.</p>
     */
    inline Stack& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>A display name for the stack.</p>
     */
    inline Stack& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>A display name for the stack.</p>
     */
    inline Stack& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

    /**
     * <p>The timestamp when the stack was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The timestamp when the stack was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The timestamp when the stack was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The timestamp when the stack was created.</p>
     */
    inline Stack& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The timestamp when the stack was created.</p>
     */
    inline Stack& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}

  private:
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;
    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
