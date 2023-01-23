/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/ImportResourceSpecification.h>
#include <aws/lexv2-models/model/MergeStrategy.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class StartImportRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API StartImportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartImport"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the import. It is included in the response from the
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateUploadUrl.html">CreateUploadUrl</a>
     * operation.</p>
     */
    inline const Aws::String& GetImportId() const{ return m_importId; }

    /**
     * <p>The unique identifier for the import. It is included in the response from the
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateUploadUrl.html">CreateUploadUrl</a>
     * operation.</p>
     */
    inline bool ImportIdHasBeenSet() const { return m_importIdHasBeenSet; }

    /**
     * <p>The unique identifier for the import. It is included in the response from the
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateUploadUrl.html">CreateUploadUrl</a>
     * operation.</p>
     */
    inline void SetImportId(const Aws::String& value) { m_importIdHasBeenSet = true; m_importId = value; }

    /**
     * <p>The unique identifier for the import. It is included in the response from the
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateUploadUrl.html">CreateUploadUrl</a>
     * operation.</p>
     */
    inline void SetImportId(Aws::String&& value) { m_importIdHasBeenSet = true; m_importId = std::move(value); }

    /**
     * <p>The unique identifier for the import. It is included in the response from the
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateUploadUrl.html">CreateUploadUrl</a>
     * operation.</p>
     */
    inline void SetImportId(const char* value) { m_importIdHasBeenSet = true; m_importId.assign(value); }

    /**
     * <p>The unique identifier for the import. It is included in the response from the
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateUploadUrl.html">CreateUploadUrl</a>
     * operation.</p>
     */
    inline StartImportRequest& WithImportId(const Aws::String& value) { SetImportId(value); return *this;}

    /**
     * <p>The unique identifier for the import. It is included in the response from the
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateUploadUrl.html">CreateUploadUrl</a>
     * operation.</p>
     */
    inline StartImportRequest& WithImportId(Aws::String&& value) { SetImportId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the import. It is included in the response from the
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateUploadUrl.html">CreateUploadUrl</a>
     * operation.</p>
     */
    inline StartImportRequest& WithImportId(const char* value) { SetImportId(value); return *this;}


    /**
     * <p>Parameters for creating the bot, bot locale or custom vocabulary.</p>
     */
    inline const ImportResourceSpecification& GetResourceSpecification() const{ return m_resourceSpecification; }

    /**
     * <p>Parameters for creating the bot, bot locale or custom vocabulary.</p>
     */
    inline bool ResourceSpecificationHasBeenSet() const { return m_resourceSpecificationHasBeenSet; }

    /**
     * <p>Parameters for creating the bot, bot locale or custom vocabulary.</p>
     */
    inline void SetResourceSpecification(const ImportResourceSpecification& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = value; }

    /**
     * <p>Parameters for creating the bot, bot locale or custom vocabulary.</p>
     */
    inline void SetResourceSpecification(ImportResourceSpecification&& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = std::move(value); }

    /**
     * <p>Parameters for creating the bot, bot locale or custom vocabulary.</p>
     */
    inline StartImportRequest& WithResourceSpecification(const ImportResourceSpecification& value) { SetResourceSpecification(value); return *this;}

    /**
     * <p>Parameters for creating the bot, bot locale or custom vocabulary.</p>
     */
    inline StartImportRequest& WithResourceSpecification(ImportResourceSpecification&& value) { SetResourceSpecification(std::move(value)); return *this;}


    /**
     * <p>The strategy to use when there is a name conflict between the imported
     * resource and an existing resource. When the merge strategy is
     * <code>FailOnConflict</code> existing resources are not overwritten and the
     * import fails.</p>
     */
    inline const MergeStrategy& GetMergeStrategy() const{ return m_mergeStrategy; }

    /**
     * <p>The strategy to use when there is a name conflict between the imported
     * resource and an existing resource. When the merge strategy is
     * <code>FailOnConflict</code> existing resources are not overwritten and the
     * import fails.</p>
     */
    inline bool MergeStrategyHasBeenSet() const { return m_mergeStrategyHasBeenSet; }

    /**
     * <p>The strategy to use when there is a name conflict between the imported
     * resource and an existing resource. When the merge strategy is
     * <code>FailOnConflict</code> existing resources are not overwritten and the
     * import fails.</p>
     */
    inline void SetMergeStrategy(const MergeStrategy& value) { m_mergeStrategyHasBeenSet = true; m_mergeStrategy = value; }

    /**
     * <p>The strategy to use when there is a name conflict between the imported
     * resource and an existing resource. When the merge strategy is
     * <code>FailOnConflict</code> existing resources are not overwritten and the
     * import fails.</p>
     */
    inline void SetMergeStrategy(MergeStrategy&& value) { m_mergeStrategyHasBeenSet = true; m_mergeStrategy = std::move(value); }

    /**
     * <p>The strategy to use when there is a name conflict between the imported
     * resource and an existing resource. When the merge strategy is
     * <code>FailOnConflict</code> existing resources are not overwritten and the
     * import fails.</p>
     */
    inline StartImportRequest& WithMergeStrategy(const MergeStrategy& value) { SetMergeStrategy(value); return *this;}

    /**
     * <p>The strategy to use when there is a name conflict between the imported
     * resource and an existing resource. When the merge strategy is
     * <code>FailOnConflict</code> existing resources are not overwritten and the
     * import fails.</p>
     */
    inline StartImportRequest& WithMergeStrategy(MergeStrategy&& value) { SetMergeStrategy(std::move(value)); return *this;}


    /**
     * <p>The password used to encrypt the zip archive that contains the resource
     * definition. You should always encrypt the zip archive to protect it during
     * transit between your site and Amazon Lex.</p>
     */
    inline const Aws::String& GetFilePassword() const{ return m_filePassword; }

    /**
     * <p>The password used to encrypt the zip archive that contains the resource
     * definition. You should always encrypt the zip archive to protect it during
     * transit between your site and Amazon Lex.</p>
     */
    inline bool FilePasswordHasBeenSet() const { return m_filePasswordHasBeenSet; }

    /**
     * <p>The password used to encrypt the zip archive that contains the resource
     * definition. You should always encrypt the zip archive to protect it during
     * transit between your site and Amazon Lex.</p>
     */
    inline void SetFilePassword(const Aws::String& value) { m_filePasswordHasBeenSet = true; m_filePassword = value; }

    /**
     * <p>The password used to encrypt the zip archive that contains the resource
     * definition. You should always encrypt the zip archive to protect it during
     * transit between your site and Amazon Lex.</p>
     */
    inline void SetFilePassword(Aws::String&& value) { m_filePasswordHasBeenSet = true; m_filePassword = std::move(value); }

    /**
     * <p>The password used to encrypt the zip archive that contains the resource
     * definition. You should always encrypt the zip archive to protect it during
     * transit between your site and Amazon Lex.</p>
     */
    inline void SetFilePassword(const char* value) { m_filePasswordHasBeenSet = true; m_filePassword.assign(value); }

    /**
     * <p>The password used to encrypt the zip archive that contains the resource
     * definition. You should always encrypt the zip archive to protect it during
     * transit between your site and Amazon Lex.</p>
     */
    inline StartImportRequest& WithFilePassword(const Aws::String& value) { SetFilePassword(value); return *this;}

    /**
     * <p>The password used to encrypt the zip archive that contains the resource
     * definition. You should always encrypt the zip archive to protect it during
     * transit between your site and Amazon Lex.</p>
     */
    inline StartImportRequest& WithFilePassword(Aws::String&& value) { SetFilePassword(std::move(value)); return *this;}

    /**
     * <p>The password used to encrypt the zip archive that contains the resource
     * definition. You should always encrypt the zip archive to protect it during
     * transit between your site and Amazon Lex.</p>
     */
    inline StartImportRequest& WithFilePassword(const char* value) { SetFilePassword(value); return *this;}

  private:

    Aws::String m_importId;
    bool m_importIdHasBeenSet = false;

    ImportResourceSpecification m_resourceSpecification;
    bool m_resourceSpecificationHasBeenSet = false;

    MergeStrategy m_mergeStrategy;
    bool m_mergeStrategyHasBeenSet = false;

    Aws::String m_filePassword;
    bool m_filePasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
