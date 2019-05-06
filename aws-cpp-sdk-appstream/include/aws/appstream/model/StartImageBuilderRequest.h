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
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API StartImageBuilderRequest : public AppStreamRequest
  {
  public:
    StartImageBuilderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartImageBuilder"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the image builder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the image builder.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the image builder.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the image builder.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the image builder.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the image builder.</p>
     */
    inline StartImageBuilderRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the image builder.</p>
     */
    inline StartImageBuilderRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the image builder.</p>
     */
    inline StartImageBuilderRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the AppStream 2.0 agent to use for this image builder. To use
     * the latest version of the AppStream 2.0 agent, specify [LATEST]. </p>
     */
    inline const Aws::String& GetAppstreamAgentVersion() const{ return m_appstreamAgentVersion; }

    /**
     * <p>The version of the AppStream 2.0 agent to use for this image builder. To use
     * the latest version of the AppStream 2.0 agent, specify [LATEST]. </p>
     */
    inline bool AppstreamAgentVersionHasBeenSet() const { return m_appstreamAgentVersionHasBeenSet; }

    /**
     * <p>The version of the AppStream 2.0 agent to use for this image builder. To use
     * the latest version of the AppStream 2.0 agent, specify [LATEST]. </p>
     */
    inline void SetAppstreamAgentVersion(const Aws::String& value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion = value; }

    /**
     * <p>The version of the AppStream 2.0 agent to use for this image builder. To use
     * the latest version of the AppStream 2.0 agent, specify [LATEST]. </p>
     */
    inline void SetAppstreamAgentVersion(Aws::String&& value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion = std::move(value); }

    /**
     * <p>The version of the AppStream 2.0 agent to use for this image builder. To use
     * the latest version of the AppStream 2.0 agent, specify [LATEST]. </p>
     */
    inline void SetAppstreamAgentVersion(const char* value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion.assign(value); }

    /**
     * <p>The version of the AppStream 2.0 agent to use for this image builder. To use
     * the latest version of the AppStream 2.0 agent, specify [LATEST]. </p>
     */
    inline StartImageBuilderRequest& WithAppstreamAgentVersion(const Aws::String& value) { SetAppstreamAgentVersion(value); return *this;}

    /**
     * <p>The version of the AppStream 2.0 agent to use for this image builder. To use
     * the latest version of the AppStream 2.0 agent, specify [LATEST]. </p>
     */
    inline StartImageBuilderRequest& WithAppstreamAgentVersion(Aws::String&& value) { SetAppstreamAgentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the AppStream 2.0 agent to use for this image builder. To use
     * the latest version of the AppStream 2.0 agent, specify [LATEST]. </p>
     */
    inline StartImageBuilderRequest& WithAppstreamAgentVersion(const char* value) { SetAppstreamAgentVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_appstreamAgentVersion;
    bool m_appstreamAgentVersionHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
