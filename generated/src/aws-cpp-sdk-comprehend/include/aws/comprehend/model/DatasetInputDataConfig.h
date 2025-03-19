/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/DatasetDataFormat.h>
#include <aws/comprehend/model/DatasetDocumentClassifierInputDataConfig.h>
#include <aws/comprehend/model/DatasetEntityRecognizerInputDataConfig.h>
#include <aws/comprehend/model/DatasetAugmentedManifestsListItem.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Specifies the format and location of the input data for the
   * dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DatasetInputDataConfig">AWS
   * API Reference</a></p>
   */
  class DatasetInputDataConfig
  {
  public:
    AWS_COMPREHEND_API DatasetInputDataConfig() = default;
    AWS_COMPREHEND_API DatasetInputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DatasetInputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of augmented manifest files that provide training data for your custom
     * model. An augmented manifest file is a labeled dataset that is produced by
     * Amazon SageMaker Ground Truth. </p>
     */
    inline const Aws::Vector<DatasetAugmentedManifestsListItem>& GetAugmentedManifests() const { return m_augmentedManifests; }
    inline bool AugmentedManifestsHasBeenSet() const { return m_augmentedManifestsHasBeenSet; }
    template<typename AugmentedManifestsT = Aws::Vector<DatasetAugmentedManifestsListItem>>
    void SetAugmentedManifests(AugmentedManifestsT&& value) { m_augmentedManifestsHasBeenSet = true; m_augmentedManifests = std::forward<AugmentedManifestsT>(value); }
    template<typename AugmentedManifestsT = Aws::Vector<DatasetAugmentedManifestsListItem>>
    DatasetInputDataConfig& WithAugmentedManifests(AugmentedManifestsT&& value) { SetAugmentedManifests(std::forward<AugmentedManifestsT>(value)); return *this;}
    template<typename AugmentedManifestsT = DatasetAugmentedManifestsListItem>
    DatasetInputDataConfig& AddAugmentedManifests(AugmentedManifestsT&& value) { m_augmentedManifestsHasBeenSet = true; m_augmentedManifests.emplace_back(std::forward<AugmentedManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <code>COMPREHEND_CSV</code>: The data format is a two-column CSV file, where
     * the first column contains labels and the second column contains documents.</p>
     * <p> <code>AUGMENTED_MANIFEST</code>: The data format </p>
     */
    inline DatasetDataFormat GetDataFormat() const { return m_dataFormat; }
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }
    inline void SetDataFormat(DatasetDataFormat value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }
    inline DatasetInputDataConfig& WithDataFormat(DatasetDataFormat value) { SetDataFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input properties for training a document classifier model. </p> <p>For
     * more information on how the input file is formatted, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/prep-classifier-data.html">Preparing
     * training data</a> in the Comprehend Developer Guide. </p>
     */
    inline const DatasetDocumentClassifierInputDataConfig& GetDocumentClassifierInputDataConfig() const { return m_documentClassifierInputDataConfig; }
    inline bool DocumentClassifierInputDataConfigHasBeenSet() const { return m_documentClassifierInputDataConfigHasBeenSet; }
    template<typename DocumentClassifierInputDataConfigT = DatasetDocumentClassifierInputDataConfig>
    void SetDocumentClassifierInputDataConfig(DocumentClassifierInputDataConfigT&& value) { m_documentClassifierInputDataConfigHasBeenSet = true; m_documentClassifierInputDataConfig = std::forward<DocumentClassifierInputDataConfigT>(value); }
    template<typename DocumentClassifierInputDataConfigT = DatasetDocumentClassifierInputDataConfig>
    DatasetInputDataConfig& WithDocumentClassifierInputDataConfig(DocumentClassifierInputDataConfigT&& value) { SetDocumentClassifierInputDataConfig(std::forward<DocumentClassifierInputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input properties for training an entity recognizer model.</p>
     */
    inline const DatasetEntityRecognizerInputDataConfig& GetEntityRecognizerInputDataConfig() const { return m_entityRecognizerInputDataConfig; }
    inline bool EntityRecognizerInputDataConfigHasBeenSet() const { return m_entityRecognizerInputDataConfigHasBeenSet; }
    template<typename EntityRecognizerInputDataConfigT = DatasetEntityRecognizerInputDataConfig>
    void SetEntityRecognizerInputDataConfig(EntityRecognizerInputDataConfigT&& value) { m_entityRecognizerInputDataConfigHasBeenSet = true; m_entityRecognizerInputDataConfig = std::forward<EntityRecognizerInputDataConfigT>(value); }
    template<typename EntityRecognizerInputDataConfigT = DatasetEntityRecognizerInputDataConfig>
    DatasetInputDataConfig& WithEntityRecognizerInputDataConfig(EntityRecognizerInputDataConfigT&& value) { SetEntityRecognizerInputDataConfig(std::forward<EntityRecognizerInputDataConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DatasetAugmentedManifestsListItem> m_augmentedManifests;
    bool m_augmentedManifestsHasBeenSet = false;

    DatasetDataFormat m_dataFormat{DatasetDataFormat::NOT_SET};
    bool m_dataFormatHasBeenSet = false;

    DatasetDocumentClassifierInputDataConfig m_documentClassifierInputDataConfig;
    bool m_documentClassifierInputDataConfigHasBeenSet = false;

    DatasetEntityRecognizerInputDataConfig m_entityRecognizerInputDataConfig;
    bool m_entityRecognizerInputDataConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
