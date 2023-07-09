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
  class DisassociateAppBlockBuilderAppBlockRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API DisassociateAppBlockBuilderAppBlockRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateAppBlockBuilderAppBlock"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the app block.</p>
     */
    inline const Aws::String& GetAppBlockArn() const{ return m_appBlockArn; }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline bool AppBlockArnHasBeenSet() const { return m_appBlockArnHasBeenSet; }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline void SetAppBlockArn(const Aws::String& value) { m_appBlockArnHasBeenSet = true; m_appBlockArn = value; }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline void SetAppBlockArn(Aws::String&& value) { m_appBlockArnHasBeenSet = true; m_appBlockArn = std::move(value); }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline void SetAppBlockArn(const char* value) { m_appBlockArnHasBeenSet = true; m_appBlockArn.assign(value); }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline DisassociateAppBlockBuilderAppBlockRequest& WithAppBlockArn(const Aws::String& value) { SetAppBlockArn(value); return *this;}

    /**
     * <p>The ARN of the app block.</p>
     */
    inline DisassociateAppBlockBuilderAppBlockRequest& WithAppBlockArn(Aws::String&& value) { SetAppBlockArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the app block.</p>
     */
    inline DisassociateAppBlockBuilderAppBlockRequest& WithAppBlockArn(const char* value) { SetAppBlockArn(value); return *this;}


    /**
     * <p>The name of the app block builder.</p>
     */
    inline const Aws::String& GetAppBlockBuilderName() const{ return m_appBlockBuilderName; }

    /**
     * <p>The name of the app block builder.</p>
     */
    inline bool AppBlockBuilderNameHasBeenSet() const { return m_appBlockBuilderNameHasBeenSet; }

    /**
     * <p>The name of the app block builder.</p>
     */
    inline void SetAppBlockBuilderName(const Aws::String& value) { m_appBlockBuilderNameHasBeenSet = true; m_appBlockBuilderName = value; }

    /**
     * <p>The name of the app block builder.</p>
     */
    inline void SetAppBlockBuilderName(Aws::String&& value) { m_appBlockBuilderNameHasBeenSet = true; m_appBlockBuilderName = std::move(value); }

    /**
     * <p>The name of the app block builder.</p>
     */
    inline void SetAppBlockBuilderName(const char* value) { m_appBlockBuilderNameHasBeenSet = true; m_appBlockBuilderName.assign(value); }

    /**
     * <p>The name of the app block builder.</p>
     */
    inline DisassociateAppBlockBuilderAppBlockRequest& WithAppBlockBuilderName(const Aws::String& value) { SetAppBlockBuilderName(value); return *this;}

    /**
     * <p>The name of the app block builder.</p>
     */
    inline DisassociateAppBlockBuilderAppBlockRequest& WithAppBlockBuilderName(Aws::String&& value) { SetAppBlockBuilderName(std::move(value)); return *this;}

    /**
     * <p>The name of the app block builder.</p>
     */
    inline DisassociateAppBlockBuilderAppBlockRequest& WithAppBlockBuilderName(const char* value) { SetAppBlockBuilderName(value); return *this;}

  private:

    Aws::String m_appBlockArn;
    bool m_appBlockArnHasBeenSet = false;

    Aws::String m_appBlockBuilderName;
    bool m_appBlockBuilderNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
