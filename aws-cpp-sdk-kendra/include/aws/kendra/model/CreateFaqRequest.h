/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/S3Path.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/FaqFileFormat.h>
#include <aws/kendra/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class CreateFaqRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API CreateFaqRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFaq"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index for the FAQ.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index for the FAQ.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index for the FAQ.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index for the FAQ.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index for the FAQ.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index for the FAQ.</p>
     */
    inline CreateFaqRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index for the FAQ.</p>
     */
    inline CreateFaqRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index for the FAQ.</p>
     */
    inline CreateFaqRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>A name for the FAQ.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the FAQ.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the FAQ.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the FAQ.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the FAQ.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the FAQ.</p>
     */
    inline CreateFaqRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the FAQ.</p>
     */
    inline CreateFaqRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the FAQ.</p>
     */
    inline CreateFaqRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description for the FAQ.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the FAQ.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the FAQ.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the FAQ.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the FAQ.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the FAQ.</p>
     */
    inline CreateFaqRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the FAQ.</p>
     */
    inline CreateFaqRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the FAQ.</p>
     */
    inline CreateFaqRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The path to the FAQ file in S3.</p>
     */
    inline const S3Path& GetS3Path() const{ return m_s3Path; }

    /**
     * <p>The path to the FAQ file in S3.</p>
     */
    inline bool S3PathHasBeenSet() const { return m_s3PathHasBeenSet; }

    /**
     * <p>The path to the FAQ file in S3.</p>
     */
    inline void SetS3Path(const S3Path& value) { m_s3PathHasBeenSet = true; m_s3Path = value; }

    /**
     * <p>The path to the FAQ file in S3.</p>
     */
    inline void SetS3Path(S3Path&& value) { m_s3PathHasBeenSet = true; m_s3Path = std::move(value); }

    /**
     * <p>The path to the FAQ file in S3.</p>
     */
    inline CreateFaqRequest& WithS3Path(const S3Path& value) { SetS3Path(value); return *this;}

    /**
     * <p>The path to the FAQ file in S3.</p>
     */
    inline CreateFaqRequest& WithS3Path(S3Path&& value) { SetS3Path(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the S3
     * bucket that contains the FAQs. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the S3
     * bucket that contains the FAQs. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the S3
     * bucket that contains the FAQs. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the S3
     * bucket that contains the FAQs. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the S3
     * bucket that contains the FAQs. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the S3
     * bucket that contains the FAQs. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline CreateFaqRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the S3
     * bucket that contains the FAQs. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline CreateFaqRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the S3
     * bucket that contains the FAQs. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline CreateFaqRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A list of key-value pairs that identify the FAQ. You can use the tags to
     * identify and organize your resources and to control access to resources.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that identify the FAQ. You can use the tags to
     * identify and organize your resources and to control access to resources.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs that identify the FAQ. You can use the tags to
     * identify and organize your resources and to control access to resources.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs that identify the FAQ. You can use the tags to
     * identify and organize your resources and to control access to resources.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that identify the FAQ. You can use the tags to
     * identify and organize your resources and to control access to resources.</p>
     */
    inline CreateFaqRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that identify the FAQ. You can use the tags to
     * identify and organize your resources and to control access to resources.</p>
     */
    inline CreateFaqRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that identify the FAQ. You can use the tags to
     * identify and organize your resources and to control access to resources.</p>
     */
    inline CreateFaqRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs that identify the FAQ. You can use the tags to
     * identify and organize your resources and to control access to resources.</p>
     */
    inline CreateFaqRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The format of the FAQ input file. You can choose between a basic CSV format,
     * a CSV format that includes customs attributes in a header, and a JSON format
     * that includes custom attributes.</p> <p>The format must match the format of the
     * file stored in the S3 bucket identified in the <code>S3Path</code>
     * parameter.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-creating-faq.html">Adding
     * questions and answers</a>.</p>
     */
    inline const FaqFileFormat& GetFileFormat() const{ return m_fileFormat; }

    /**
     * <p>The format of the FAQ input file. You can choose between a basic CSV format,
     * a CSV format that includes customs attributes in a header, and a JSON format
     * that includes custom attributes.</p> <p>The format must match the format of the
     * file stored in the S3 bucket identified in the <code>S3Path</code>
     * parameter.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-creating-faq.html">Adding
     * questions and answers</a>.</p>
     */
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }

    /**
     * <p>The format of the FAQ input file. You can choose between a basic CSV format,
     * a CSV format that includes customs attributes in a header, and a JSON format
     * that includes custom attributes.</p> <p>The format must match the format of the
     * file stored in the S3 bucket identified in the <code>S3Path</code>
     * parameter.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-creating-faq.html">Adding
     * questions and answers</a>.</p>
     */
    inline void SetFileFormat(const FaqFileFormat& value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }

    /**
     * <p>The format of the FAQ input file. You can choose between a basic CSV format,
     * a CSV format that includes customs attributes in a header, and a JSON format
     * that includes custom attributes.</p> <p>The format must match the format of the
     * file stored in the S3 bucket identified in the <code>S3Path</code>
     * parameter.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-creating-faq.html">Adding
     * questions and answers</a>.</p>
     */
    inline void SetFileFormat(FaqFileFormat&& value) { m_fileFormatHasBeenSet = true; m_fileFormat = std::move(value); }

    /**
     * <p>The format of the FAQ input file. You can choose between a basic CSV format,
     * a CSV format that includes customs attributes in a header, and a JSON format
     * that includes custom attributes.</p> <p>The format must match the format of the
     * file stored in the S3 bucket identified in the <code>S3Path</code>
     * parameter.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-creating-faq.html">Adding
     * questions and answers</a>.</p>
     */
    inline CreateFaqRequest& WithFileFormat(const FaqFileFormat& value) { SetFileFormat(value); return *this;}

    /**
     * <p>The format of the FAQ input file. You can choose between a basic CSV format,
     * a CSV format that includes customs attributes in a header, and a JSON format
     * that includes custom attributes.</p> <p>The format must match the format of the
     * file stored in the S3 bucket identified in the <code>S3Path</code>
     * parameter.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-creating-faq.html">Adding
     * questions and answers</a>.</p>
     */
    inline CreateFaqRequest& WithFileFormat(FaqFileFormat&& value) { SetFileFormat(std::move(value)); return *this;}


    /**
     * <p>A token that you provide to identify the request to create a FAQ. Multiple
     * calls to the <code>CreateFaqRequest</code> API with the same client token will
     * create only one FAQ. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that you provide to identify the request to create a FAQ. Multiple
     * calls to the <code>CreateFaqRequest</code> API with the same client token will
     * create only one FAQ. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that you provide to identify the request to create a FAQ. Multiple
     * calls to the <code>CreateFaqRequest</code> API with the same client token will
     * create only one FAQ. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that you provide to identify the request to create a FAQ. Multiple
     * calls to the <code>CreateFaqRequest</code> API with the same client token will
     * create only one FAQ. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that you provide to identify the request to create a FAQ. Multiple
     * calls to the <code>CreateFaqRequest</code> API with the same client token will
     * create only one FAQ. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that you provide to identify the request to create a FAQ. Multiple
     * calls to the <code>CreateFaqRequest</code> API with the same client token will
     * create only one FAQ. </p>
     */
    inline CreateFaqRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that you provide to identify the request to create a FAQ. Multiple
     * calls to the <code>CreateFaqRequest</code> API with the same client token will
     * create only one FAQ. </p>
     */
    inline CreateFaqRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that you provide to identify the request to create a FAQ. Multiple
     * calls to the <code>CreateFaqRequest</code> API with the same client token will
     * create only one FAQ. </p>
     */
    inline CreateFaqRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The code for a language. This allows you to support a language for the FAQ
     * document. English is supported by default. For more information on supported
     * languages, including their codes, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-languages.html">Adding
     * documents in languages other than English</a>.</p>
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The code for a language. This allows you to support a language for the FAQ
     * document. English is supported by default. For more information on supported
     * languages, including their codes, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-languages.html">Adding
     * documents in languages other than English</a>.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The code for a language. This allows you to support a language for the FAQ
     * document. English is supported by default. For more information on supported
     * languages, including their codes, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-languages.html">Adding
     * documents in languages other than English</a>.</p>
     */
    inline void SetLanguageCode(const Aws::String& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The code for a language. This allows you to support a language for the FAQ
     * document. English is supported by default. For more information on supported
     * languages, including their codes, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-languages.html">Adding
     * documents in languages other than English</a>.</p>
     */
    inline void SetLanguageCode(Aws::String&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The code for a language. This allows you to support a language for the FAQ
     * document. English is supported by default. For more information on supported
     * languages, including their codes, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-languages.html">Adding
     * documents in languages other than English</a>.</p>
     */
    inline void SetLanguageCode(const char* value) { m_languageCodeHasBeenSet = true; m_languageCode.assign(value); }

    /**
     * <p>The code for a language. This allows you to support a language for the FAQ
     * document. English is supported by default. For more information on supported
     * languages, including their codes, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-languages.html">Adding
     * documents in languages other than English</a>.</p>
     */
    inline CreateFaqRequest& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The code for a language. This allows you to support a language for the FAQ
     * document. English is supported by default. For more information on supported
     * languages, including their codes, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-languages.html">Adding
     * documents in languages other than English</a>.</p>
     */
    inline CreateFaqRequest& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The code for a language. This allows you to support a language for the FAQ
     * document. English is supported by default. For more information on supported
     * languages, including their codes, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-languages.html">Adding
     * documents in languages other than English</a>.</p>
     */
    inline CreateFaqRequest& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    S3Path m_s3Path;
    bool m_s3PathHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    FaqFileFormat m_fileFormat;
    bool m_fileFormatHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
