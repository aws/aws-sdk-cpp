/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TestSetStorageLocation.h>
#include <aws/lexv2-models/model/TestSetGenerationDataSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class StartTestSetGenerationRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API StartTestSetGenerationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTestSetGeneration"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The test set name for the test set generation request.</p>
     */
    inline const Aws::String& GetTestSetName() const{ return m_testSetName; }

    /**
     * <p>The test set name for the test set generation request.</p>
     */
    inline bool TestSetNameHasBeenSet() const { return m_testSetNameHasBeenSet; }

    /**
     * <p>The test set name for the test set generation request.</p>
     */
    inline void SetTestSetName(const Aws::String& value) { m_testSetNameHasBeenSet = true; m_testSetName = value; }

    /**
     * <p>The test set name for the test set generation request.</p>
     */
    inline void SetTestSetName(Aws::String&& value) { m_testSetNameHasBeenSet = true; m_testSetName = std::move(value); }

    /**
     * <p>The test set name for the test set generation request.</p>
     */
    inline void SetTestSetName(const char* value) { m_testSetNameHasBeenSet = true; m_testSetName.assign(value); }

    /**
     * <p>The test set name for the test set generation request.</p>
     */
    inline StartTestSetGenerationRequest& WithTestSetName(const Aws::String& value) { SetTestSetName(value); return *this;}

    /**
     * <p>The test set name for the test set generation request.</p>
     */
    inline StartTestSetGenerationRequest& WithTestSetName(Aws::String&& value) { SetTestSetName(std::move(value)); return *this;}

    /**
     * <p>The test set name for the test set generation request.</p>
     */
    inline StartTestSetGenerationRequest& WithTestSetName(const char* value) { SetTestSetName(value); return *this;}


    /**
     * <p>The test set description for the test set generation request.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The test set description for the test set generation request.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The test set description for the test set generation request.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The test set description for the test set generation request.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The test set description for the test set generation request.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The test set description for the test set generation request.</p>
     */
    inline StartTestSetGenerationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The test set description for the test set generation request.</p>
     */
    inline StartTestSetGenerationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The test set description for the test set generation request.</p>
     */
    inline StartTestSetGenerationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon S3 storage location for the test set generation.</p>
     */
    inline const TestSetStorageLocation& GetStorageLocation() const{ return m_storageLocation; }

    /**
     * <p>The Amazon S3 storage location for the test set generation.</p>
     */
    inline bool StorageLocationHasBeenSet() const { return m_storageLocationHasBeenSet; }

    /**
     * <p>The Amazon S3 storage location for the test set generation.</p>
     */
    inline void SetStorageLocation(const TestSetStorageLocation& value) { m_storageLocationHasBeenSet = true; m_storageLocation = value; }

    /**
     * <p>The Amazon S3 storage location for the test set generation.</p>
     */
    inline void SetStorageLocation(TestSetStorageLocation&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::move(value); }

    /**
     * <p>The Amazon S3 storage location for the test set generation.</p>
     */
    inline StartTestSetGenerationRequest& WithStorageLocation(const TestSetStorageLocation& value) { SetStorageLocation(value); return *this;}

    /**
     * <p>The Amazon S3 storage location for the test set generation.</p>
     */
    inline StartTestSetGenerationRequest& WithStorageLocation(TestSetStorageLocation&& value) { SetStorageLocation(std::move(value)); return *this;}


    /**
     * <p>The data source for the test set generation.</p>
     */
    inline const TestSetGenerationDataSource& GetGenerationDataSource() const{ return m_generationDataSource; }

    /**
     * <p>The data source for the test set generation.</p>
     */
    inline bool GenerationDataSourceHasBeenSet() const { return m_generationDataSourceHasBeenSet; }

    /**
     * <p>The data source for the test set generation.</p>
     */
    inline void SetGenerationDataSource(const TestSetGenerationDataSource& value) { m_generationDataSourceHasBeenSet = true; m_generationDataSource = value; }

    /**
     * <p>The data source for the test set generation.</p>
     */
    inline void SetGenerationDataSource(TestSetGenerationDataSource&& value) { m_generationDataSourceHasBeenSet = true; m_generationDataSource = std::move(value); }

    /**
     * <p>The data source for the test set generation.</p>
     */
    inline StartTestSetGenerationRequest& WithGenerationDataSource(const TestSetGenerationDataSource& value) { SetGenerationDataSource(value); return *this;}

    /**
     * <p>The data source for the test set generation.</p>
     */
    inline StartTestSetGenerationRequest& WithGenerationDataSource(TestSetGenerationDataSource&& value) { SetGenerationDataSource(std::move(value)); return *this;}


    /**
     * <p>The roleARN used for any operation in the test set to access resources in the
     * Amazon Web Services account.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The roleARN used for any operation in the test set to access resources in the
     * Amazon Web Services account.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The roleARN used for any operation in the test set to access resources in the
     * Amazon Web Services account.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The roleARN used for any operation in the test set to access resources in the
     * Amazon Web Services account.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The roleARN used for any operation in the test set to access resources in the
     * Amazon Web Services account.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The roleARN used for any operation in the test set to access resources in the
     * Amazon Web Services account.</p>
     */
    inline StartTestSetGenerationRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The roleARN used for any operation in the test set to access resources in the
     * Amazon Web Services account.</p>
     */
    inline StartTestSetGenerationRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The roleARN used for any operation in the test set to access resources in the
     * Amazon Web Services account.</p>
     */
    inline StartTestSetGenerationRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A list of tags to add to the test set. You can only add tags when you
     * import/generate a new test set. You can't use the <code>UpdateTestSet</code>
     * operation to update tags. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTestSetTags() const{ return m_testSetTags; }

    /**
     * <p>A list of tags to add to the test set. You can only add tags when you
     * import/generate a new test set. You can't use the <code>UpdateTestSet</code>
     * operation to update tags. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline bool TestSetTagsHasBeenSet() const { return m_testSetTagsHasBeenSet; }

    /**
     * <p>A list of tags to add to the test set. You can only add tags when you
     * import/generate a new test set. You can't use the <code>UpdateTestSet</code>
     * operation to update tags. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline void SetTestSetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_testSetTagsHasBeenSet = true; m_testSetTags = value; }

    /**
     * <p>A list of tags to add to the test set. You can only add tags when you
     * import/generate a new test set. You can't use the <code>UpdateTestSet</code>
     * operation to update tags. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline void SetTestSetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_testSetTagsHasBeenSet = true; m_testSetTags = std::move(value); }

    /**
     * <p>A list of tags to add to the test set. You can only add tags when you
     * import/generate a new test set. You can't use the <code>UpdateTestSet</code>
     * operation to update tags. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline StartTestSetGenerationRequest& WithTestSetTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTestSetTags(value); return *this;}

    /**
     * <p>A list of tags to add to the test set. You can only add tags when you
     * import/generate a new test set. You can't use the <code>UpdateTestSet</code>
     * operation to update tags. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline StartTestSetGenerationRequest& WithTestSetTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTestSetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to add to the test set. You can only add tags when you
     * import/generate a new test set. You can't use the <code>UpdateTestSet</code>
     * operation to update tags. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline StartTestSetGenerationRequest& AddTestSetTags(const Aws::String& key, const Aws::String& value) { m_testSetTagsHasBeenSet = true; m_testSetTags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags to add to the test set. You can only add tags when you
     * import/generate a new test set. You can't use the <code>UpdateTestSet</code>
     * operation to update tags. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline StartTestSetGenerationRequest& AddTestSetTags(Aws::String&& key, const Aws::String& value) { m_testSetTagsHasBeenSet = true; m_testSetTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags to add to the test set. You can only add tags when you
     * import/generate a new test set. You can't use the <code>UpdateTestSet</code>
     * operation to update tags. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline StartTestSetGenerationRequest& AddTestSetTags(const Aws::String& key, Aws::String&& value) { m_testSetTagsHasBeenSet = true; m_testSetTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags to add to the test set. You can only add tags when you
     * import/generate a new test set. You can't use the <code>UpdateTestSet</code>
     * operation to update tags. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline StartTestSetGenerationRequest& AddTestSetTags(Aws::String&& key, Aws::String&& value) { m_testSetTagsHasBeenSet = true; m_testSetTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags to add to the test set. You can only add tags when you
     * import/generate a new test set. You can't use the <code>UpdateTestSet</code>
     * operation to update tags. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline StartTestSetGenerationRequest& AddTestSetTags(const char* key, Aws::String&& value) { m_testSetTagsHasBeenSet = true; m_testSetTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags to add to the test set. You can only add tags when you
     * import/generate a new test set. You can't use the <code>UpdateTestSet</code>
     * operation to update tags. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline StartTestSetGenerationRequest& AddTestSetTags(Aws::String&& key, const char* value) { m_testSetTagsHasBeenSet = true; m_testSetTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags to add to the test set. You can only add tags when you
     * import/generate a new test set. You can't use the <code>UpdateTestSet</code>
     * operation to update tags. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline StartTestSetGenerationRequest& AddTestSetTags(const char* key, const char* value) { m_testSetTagsHasBeenSet = true; m_testSetTags.emplace(key, value); return *this; }

  private:

    Aws::String m_testSetName;
    bool m_testSetNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TestSetStorageLocation m_storageLocation;
    bool m_storageLocationHasBeenSet = false;

    TestSetGenerationDataSource m_generationDataSource;
    bool m_generationDataSourceHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_testSetTags;
    bool m_testSetTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
