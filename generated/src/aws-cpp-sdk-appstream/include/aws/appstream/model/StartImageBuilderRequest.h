/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class StartImageBuilderRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API StartImageBuilderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartImageBuilder"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the image builder.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartImageBuilderRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the AppStream 2.0 agent to use for this image builder. To use
     * the latest version of the AppStream 2.0 agent, specify [LATEST]. </p>
     */
    inline const Aws::String& GetAppstreamAgentVersion() const { return m_appstreamAgentVersion; }
    inline bool AppstreamAgentVersionHasBeenSet() const { return m_appstreamAgentVersionHasBeenSet; }
    template<typename AppstreamAgentVersionT = Aws::String>
    void SetAppstreamAgentVersion(AppstreamAgentVersionT&& value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion = std::forward<AppstreamAgentVersionT>(value); }
    template<typename AppstreamAgentVersionT = Aws::String>
    StartImageBuilderRequest& WithAppstreamAgentVersion(AppstreamAgentVersionT&& value) { SetAppstreamAgentVersion(std::forward<AppstreamAgentVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_appstreamAgentVersion;
    bool m_appstreamAgentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
