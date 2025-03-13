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
  class CreateAppBlockBuilderStreamingURLRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API CreateAppBlockBuilderStreamingURLRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAppBlockBuilderStreamingURL"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the app block builder.</p>
     */
    inline const Aws::String& GetAppBlockBuilderName() const { return m_appBlockBuilderName; }
    inline bool AppBlockBuilderNameHasBeenSet() const { return m_appBlockBuilderNameHasBeenSet; }
    template<typename AppBlockBuilderNameT = Aws::String>
    void SetAppBlockBuilderName(AppBlockBuilderNameT&& value) { m_appBlockBuilderNameHasBeenSet = true; m_appBlockBuilderName = std::forward<AppBlockBuilderNameT>(value); }
    template<typename AppBlockBuilderNameT = Aws::String>
    CreateAppBlockBuilderStreamingURLRequest& WithAppBlockBuilderName(AppBlockBuilderNameT&& value) { SetAppBlockBuilderName(std::forward<AppBlockBuilderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the streaming URL will be valid, in seconds. Specify a value
     * between 1 and 604800 seconds. The default is 3600 seconds.</p>
     */
    inline long long GetValidity() const { return m_validity; }
    inline bool ValidityHasBeenSet() const { return m_validityHasBeenSet; }
    inline void SetValidity(long long value) { m_validityHasBeenSet = true; m_validity = value; }
    inline CreateAppBlockBuilderStreamingURLRequest& WithValidity(long long value) { SetValidity(value); return *this;}
    ///@}
  private:

    Aws::String m_appBlockBuilderName;
    bool m_appBlockBuilderNameHasBeenSet = false;

    long long m_validity{0};
    bool m_validityHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
