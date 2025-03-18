/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TestSetStorageLocation.h>
#include <aws/lexv2-models/model/TestSetImportInputLocation.h>
#include <aws/lexv2-models/model/TestSetModality.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains information about the test set that is imported.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestSetImportResourceSpecification">AWS
   * API Reference</a></p>
   */
  class TestSetImportResourceSpecification
  {
  public:
    AWS_LEXMODELSV2_API TestSetImportResourceSpecification() = default;
    AWS_LEXMODELSV2_API TestSetImportResourceSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetImportResourceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the test set.</p>
     */
    inline const Aws::String& GetTestSetName() const { return m_testSetName; }
    inline bool TestSetNameHasBeenSet() const { return m_testSetNameHasBeenSet; }
    template<typename TestSetNameT = Aws::String>
    void SetTestSetName(TestSetNameT&& value) { m_testSetNameHasBeenSet = true; m_testSetName = std::forward<TestSetNameT>(value); }
    template<typename TestSetNameT = Aws::String>
    TestSetImportResourceSpecification& WithTestSetName(TestSetNameT&& value) { SetTestSetName(std::forward<TestSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the test set.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TestSetImportResourceSpecification& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the test set.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    TestSetImportResourceSpecification& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the location that Amazon Lex uses to store the
     * test-set.</p>
     */
    inline const TestSetStorageLocation& GetStorageLocation() const { return m_storageLocation; }
    inline bool StorageLocationHasBeenSet() const { return m_storageLocationHasBeenSet; }
    template<typename StorageLocationT = TestSetStorageLocation>
    void SetStorageLocation(StorageLocationT&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::forward<StorageLocationT>(value); }
    template<typename StorageLocationT = TestSetStorageLocation>
    TestSetImportResourceSpecification& WithStorageLocation(StorageLocationT&& value) { SetStorageLocation(std::forward<StorageLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the input location from where test-set should be
     * imported.</p>
     */
    inline const TestSetImportInputLocation& GetImportInputLocation() const { return m_importInputLocation; }
    inline bool ImportInputLocationHasBeenSet() const { return m_importInputLocationHasBeenSet; }
    template<typename ImportInputLocationT = TestSetImportInputLocation>
    void SetImportInputLocation(ImportInputLocationT&& value) { m_importInputLocationHasBeenSet = true; m_importInputLocation = std::forward<ImportInputLocationT>(value); }
    template<typename ImportInputLocationT = TestSetImportInputLocation>
    TestSetImportResourceSpecification& WithImportInputLocation(ImportInputLocationT&& value) { SetImportInputLocation(std::forward<ImportInputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the test-set being imported contains written or spoken
     * data.</p>
     */
    inline TestSetModality GetModality() const { return m_modality; }
    inline bool ModalityHasBeenSet() const { return m_modalityHasBeenSet; }
    inline void SetModality(TestSetModality value) { m_modalityHasBeenSet = true; m_modality = value; }
    inline TestSetImportResourceSpecification& WithModality(TestSetModality value) { SetModality(value); return *this;}
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
    TestSetImportResourceSpecification& WithTestSetTags(TestSetTagsT&& value) { SetTestSetTags(std::forward<TestSetTagsT>(value)); return *this;}
    template<typename TestSetTagsKeyT = Aws::String, typename TestSetTagsValueT = Aws::String>
    TestSetImportResourceSpecification& AddTestSetTags(TestSetTagsKeyT&& key, TestSetTagsValueT&& value) {
      m_testSetTagsHasBeenSet = true; m_testSetTags.emplace(std::forward<TestSetTagsKeyT>(key), std::forward<TestSetTagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_testSetName;
    bool m_testSetNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    TestSetStorageLocation m_storageLocation;
    bool m_storageLocationHasBeenSet = false;

    TestSetImportInputLocation m_importInputLocation;
    bool m_importInputLocationHasBeenSet = false;

    TestSetModality m_modality{TestSetModality::NOT_SET};
    bool m_modalityHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_testSetTags;
    bool m_testSetTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
