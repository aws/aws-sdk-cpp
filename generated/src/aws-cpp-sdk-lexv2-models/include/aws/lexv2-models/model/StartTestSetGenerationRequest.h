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
    AWS_LEXMODELSV2_API StartTestSetGenerationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTestSetGeneration"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The test set name for the test set generation request.</p>
     */
    inline const Aws::String& GetTestSetName() const { return m_testSetName; }
    inline bool TestSetNameHasBeenSet() const { return m_testSetNameHasBeenSet; }
    template<typename TestSetNameT = Aws::String>
    void SetTestSetName(TestSetNameT&& value) { m_testSetNameHasBeenSet = true; m_testSetName = std::forward<TestSetNameT>(value); }
    template<typename TestSetNameT = Aws::String>
    StartTestSetGenerationRequest& WithTestSetName(TestSetNameT&& value) { SetTestSetName(std::forward<TestSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test set description for the test set generation request.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StartTestSetGenerationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 storage location for the test set generation.</p>
     */
    inline const TestSetStorageLocation& GetStorageLocation() const { return m_storageLocation; }
    inline bool StorageLocationHasBeenSet() const { return m_storageLocationHasBeenSet; }
    template<typename StorageLocationT = TestSetStorageLocation>
    void SetStorageLocation(StorageLocationT&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::forward<StorageLocationT>(value); }
    template<typename StorageLocationT = TestSetStorageLocation>
    StartTestSetGenerationRequest& WithStorageLocation(StorageLocationT&& value) { SetStorageLocation(std::forward<StorageLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source for the test set generation.</p>
     */
    inline const TestSetGenerationDataSource& GetGenerationDataSource() const { return m_generationDataSource; }
    inline bool GenerationDataSourceHasBeenSet() const { return m_generationDataSourceHasBeenSet; }
    template<typename GenerationDataSourceT = TestSetGenerationDataSource>
    void SetGenerationDataSource(GenerationDataSourceT&& value) { m_generationDataSourceHasBeenSet = true; m_generationDataSource = std::forward<GenerationDataSourceT>(value); }
    template<typename GenerationDataSourceT = TestSetGenerationDataSource>
    StartTestSetGenerationRequest& WithGenerationDataSource(GenerationDataSourceT&& value) { SetGenerationDataSource(std::forward<GenerationDataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The roleARN used for any operation in the test set to access resources in the
     * Amazon Web Services account.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    StartTestSetGenerationRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to add to the test set. You can only add tags when you
     * import/generate a new test set. You can't use the <code>UpdateTestSet</code>
     * operation to update tags. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTestSetTags() const { return m_testSetTags; }
    inline bool TestSetTagsHasBeenSet() const { return m_testSetTagsHasBeenSet; }
    template<typename TestSetTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTestSetTags(TestSetTagsT&& value) { m_testSetTagsHasBeenSet = true; m_testSetTags = std::forward<TestSetTagsT>(value); }
    template<typename TestSetTagsT = Aws::Map<Aws::String, Aws::String>>
    StartTestSetGenerationRequest& WithTestSetTags(TestSetTagsT&& value) { SetTestSetTags(std::forward<TestSetTagsT>(value)); return *this;}
    template<typename TestSetTagsKeyT = Aws::String, typename TestSetTagsValueT = Aws::String>
    StartTestSetGenerationRequest& AddTestSetTags(TestSetTagsKeyT&& key, TestSetTagsValueT&& value) {
      m_testSetTagsHasBeenSet = true; m_testSetTags.emplace(std::forward<TestSetTagsKeyT>(key), std::forward<TestSetTagsValueT>(value)); return *this;
    }
    ///@}
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
