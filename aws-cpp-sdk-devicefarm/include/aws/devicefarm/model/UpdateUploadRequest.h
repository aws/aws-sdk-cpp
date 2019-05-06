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
  class AWS_DEVICEFARM_API UpdateUploadRequest : public DeviceFarmRequest
  {
  public:
    UpdateUploadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUpload"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the uploaded test spec.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the uploaded test spec.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the uploaded test spec.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the uploaded test spec.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the uploaded test spec.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the uploaded test spec.</p>
     */
    inline UpdateUploadRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the uploaded test spec.</p>
     */
    inline UpdateUploadRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the uploaded test spec.</p>
     */
    inline UpdateUploadRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The upload's test spec file name. The name should not contain the '/'
     * character. The test spec file name must end with the <code>.yaml</code> or
     * <code>.yml</code> file extension.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The upload's test spec file name. The name should not contain the '/'
     * character. The test spec file name must end with the <code>.yaml</code> or
     * <code>.yml</code> file extension.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The upload's test spec file name. The name should not contain the '/'
     * character. The test spec file name must end with the <code>.yaml</code> or
     * <code>.yml</code> file extension.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The upload's test spec file name. The name should not contain the '/'
     * character. The test spec file name must end with the <code>.yaml</code> or
     * <code>.yml</code> file extension.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The upload's test spec file name. The name should not contain the '/'
     * character. The test spec file name must end with the <code>.yaml</code> or
     * <code>.yml</code> file extension.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The upload's test spec file name. The name should not contain the '/'
     * character. The test spec file name must end with the <code>.yaml</code> or
     * <code>.yml</code> file extension.</p>
     */
    inline UpdateUploadRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The upload's test spec file name. The name should not contain the '/'
     * character. The test spec file name must end with the <code>.yaml</code> or
     * <code>.yml</code> file extension.</p>
     */
    inline UpdateUploadRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The upload's test spec file name. The name should not contain the '/'
     * character. The test spec file name must end with the <code>.yaml</code> or
     * <code>.yml</code> file extension.</p>
     */
    inline UpdateUploadRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The upload's content type (for example, "application/x-yaml").</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The upload's content type (for example, "application/x-yaml").</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The upload's content type (for example, "application/x-yaml").</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The upload's content type (for example, "application/x-yaml").</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The upload's content type (for example, "application/x-yaml").</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The upload's content type (for example, "application/x-yaml").</p>
     */
    inline UpdateUploadRequest& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The upload's content type (for example, "application/x-yaml").</p>
     */
    inline UpdateUploadRequest& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The upload's content type (for example, "application/x-yaml").</p>
     */
    inline UpdateUploadRequest& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>Set to true if the YAML file has changed and needs to be updated; otherwise,
     * set to false.</p>
     */
    inline bool GetEditContent() const{ return m_editContent; }

    /**
     * <p>Set to true if the YAML file has changed and needs to be updated; otherwise,
     * set to false.</p>
     */
    inline bool EditContentHasBeenSet() const { return m_editContentHasBeenSet; }

    /**
     * <p>Set to true if the YAML file has changed and needs to be updated; otherwise,
     * set to false.</p>
     */
    inline void SetEditContent(bool value) { m_editContentHasBeenSet = true; m_editContent = value; }

    /**
     * <p>Set to true if the YAML file has changed and needs to be updated; otherwise,
     * set to false.</p>
     */
    inline UpdateUploadRequest& WithEditContent(bool value) { SetEditContent(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet;

    bool m_editContent;
    bool m_editContentHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
