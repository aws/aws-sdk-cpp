/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   */
  class UpdateUploadRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API UpdateUploadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUpload"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the uploaded test spec.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline UpdateUploadRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateUploadRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateUploadRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload's test spec file name. The name must not contain any forward
     * slashes (/). The test spec file name must end with the <code>.yaml</code> or
     * <code>.yml</code> file extension.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateUploadRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateUploadRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateUploadRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload's content type (for example, <code>application/x-yaml</code>).</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline UpdateUploadRequest& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline UpdateUploadRequest& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline UpdateUploadRequest& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to true if the YAML file has changed and must be updated. Otherwise, set
     * to false.</p>
     */
    inline bool GetEditContent() const{ return m_editContent; }
    inline bool EditContentHasBeenSet() const { return m_editContentHasBeenSet; }
    inline void SetEditContent(bool value) { m_editContentHasBeenSet = true; m_editContent = value; }
    inline UpdateUploadRequest& WithEditContent(bool value) { SetEditContent(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    bool m_editContent;
    bool m_editContentHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
