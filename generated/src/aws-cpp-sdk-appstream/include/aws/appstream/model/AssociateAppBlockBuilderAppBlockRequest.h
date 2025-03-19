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
  class AssociateAppBlockBuilderAppBlockRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API AssociateAppBlockBuilderAppBlockRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateAppBlockBuilderAppBlock"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the app block.</p>
     */
    inline const Aws::String& GetAppBlockArn() const { return m_appBlockArn; }
    inline bool AppBlockArnHasBeenSet() const { return m_appBlockArnHasBeenSet; }
    template<typename AppBlockArnT = Aws::String>
    void SetAppBlockArn(AppBlockArnT&& value) { m_appBlockArnHasBeenSet = true; m_appBlockArn = std::forward<AppBlockArnT>(value); }
    template<typename AppBlockArnT = Aws::String>
    AssociateAppBlockBuilderAppBlockRequest& WithAppBlockArn(AppBlockArnT&& value) { SetAppBlockArn(std::forward<AppBlockArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the app block builder.</p>
     */
    inline const Aws::String& GetAppBlockBuilderName() const { return m_appBlockBuilderName; }
    inline bool AppBlockBuilderNameHasBeenSet() const { return m_appBlockBuilderNameHasBeenSet; }
    template<typename AppBlockBuilderNameT = Aws::String>
    void SetAppBlockBuilderName(AppBlockBuilderNameT&& value) { m_appBlockBuilderNameHasBeenSet = true; m_appBlockBuilderName = std::forward<AppBlockBuilderNameT>(value); }
    template<typename AppBlockBuilderNameT = Aws::String>
    AssociateAppBlockBuilderAppBlockRequest& WithAppBlockBuilderName(AppBlockBuilderNameT&& value) { SetAppBlockBuilderName(std::forward<AppBlockBuilderNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appBlockArn;
    bool m_appBlockArnHasBeenSet = false;

    Aws::String m_appBlockBuilderName;
    bool m_appBlockBuilderNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
