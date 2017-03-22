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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API CreateStackRequest : public AppStreamRequest
  {
  public:
    CreateStackRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for this stack.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique identifier for this stack.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique identifier for this stack.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique identifier for this stack.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique identifier for this stack.</p>
     */
    inline CreateStackRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique identifier for this stack.</p>
     */
    inline CreateStackRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The unique identifier for this stack.</p>
     */
    inline CreateStackRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline CreateStackRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline CreateStackRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline CreateStackRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline CreateStackRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline CreateStackRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline CreateStackRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
