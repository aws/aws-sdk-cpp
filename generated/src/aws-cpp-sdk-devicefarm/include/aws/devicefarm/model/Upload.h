/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/devicefarm/model/UploadType.h>
#include <aws/devicefarm/model/UploadStatus.h>
#include <aws/devicefarm/model/UploadCategory.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>An app or a set of one or more tests to upload or that have been
   * uploaded.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/Upload">AWS
   * API Reference</a></p>
   */
  class Upload
  {
  public:
    AWS_DEVICEFARM_API Upload();
    AWS_DEVICEFARM_API Upload(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Upload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The upload's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Upload& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Upload& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Upload& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload's file name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Upload& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Upload& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Upload& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the upload was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline Upload& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline Upload& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>ANDROID_APP</p> </li> <li> <p>IOS_APP</p> </li> <li> <p>WEB_APP</p> </li>
     * <li> <p>EXTERNAL_DATA</p> </li> <li> <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE</p> </li>
     * <li> <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE</p> </li> <li>
     * <p>APPIUM_PYTHON_TEST_PACKAGE</p> </li> <li> <p>APPIUM_NODE_TEST_PACKAGE</p>
     * </li> <li> <p>APPIUM_RUBY_TEST_PACKAGE</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON_TEST_PACKAGE</p> </li> <li>
     * <p>APPIUM_WEB_NODE_TEST_PACKAGE</p> </li> <li>
     * <p>APPIUM_WEB_RUBY_TEST_PACKAGE</p> </li> <li>
     * <p>INSTRUMENTATION_TEST_PACKAGE</p> </li> <li> <p>XCTEST_TEST_PACKAGE</p> </li>
     * <li> <p>XCTEST_UI_TEST_PACKAGE</p> </li> <li> <p>APPIUM_JAVA_JUNIT_TEST_SPEC</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG_TEST_SPEC</p> </li> <li>
     * <p>APPIUM_PYTHON_TEST_SPEC</p> </li> <li> <p>APPIUM_NODE_TEST_SPEC</p> </li>
     * <li> <p>APPIUM_RUBY_TEST_SPEC</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT_TEST_SPEC</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_SPEC</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON_TEST_SPEC</p> </li> <li> <p>APPIUM_WEB_NODE_TEST_SPEC</p>
     * </li> <li> <p>APPIUM_WEB_RUBY_TEST_SPEC</p> </li> <li>
     * <p>INSTRUMENTATION_TEST_SPEC</p> </li> <li> <p>XCTEST_UI_TEST_SPEC</p> </li>
     * </ul>
     */
    inline const UploadType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const UploadType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(UploadType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Upload& WithType(const UploadType& value) { SetType(value); return *this;}
    inline Upload& WithType(UploadType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload's status.</p> <p>Must be one of the following values:</p> <ul>
     * <li> <p>FAILED</p> </li> <li> <p>INITIALIZED</p> </li> <li> <p>PROCESSING</p>
     * </li> <li> <p>SUCCEEDED</p> </li> </ul>
     */
    inline const UploadStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const UploadStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(UploadStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Upload& WithStatus(const UploadStatus& value) { SetStatus(value); return *this;}
    inline Upload& WithStatus(UploadStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The presigned Amazon S3 URL that was used to store a file using a PUT
     * request.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline Upload& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline Upload& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline Upload& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload's metadata. For example, for Android, this contains information
     * that is parsed from the manifest and is displayed in the AWS Device Farm console
     * after the associated app is uploaded.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }
    inline Upload& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}
    inline Upload& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}
    inline Upload& WithMetadata(const char* value) { SetMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload's content type (for example,
     * <code>application/octet-stream</code>).</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline Upload& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline Upload& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline Upload& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about the upload's result.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline Upload& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline Upload& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline Upload& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload's category. Allowed values include:</p> <ul> <li> <p>CURATED: An
     * upload managed by AWS Device Farm.</p> </li> <li> <p>PRIVATE: An upload managed
     * by the AWS Device Farm customer.</p> </li> </ul>
     */
    inline const UploadCategory& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const UploadCategory& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(UploadCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline Upload& WithCategory(const UploadCategory& value) { SetCategory(value); return *this;}
    inline Upload& WithCategory(UploadCategory&& value) { SetCategory(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    UploadType m_type;
    bool m_typeHasBeenSet = false;

    UploadStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    UploadCategory m_category;
    bool m_categoryHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
