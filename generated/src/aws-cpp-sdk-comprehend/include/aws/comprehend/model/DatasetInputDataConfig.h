﻿/**
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
    AWS_COMPREHEND_API DatasetInputDataConfig();
    AWS_COMPREHEND_API DatasetInputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DatasetInputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of augmented manifest files that provide training data for your custom
     * model. An augmented manifest file is a labeled dataset that is produced by
     * Amazon SageMaker Ground Truth. </p>
     */
    inline const Aws::Vector<DatasetAugmentedManifestsListItem>& GetAugmentedManifests() const{ return m_augmentedManifests; }
    inline bool AugmentedManifestsHasBeenSet() const { return m_augmentedManifestsHasBeenSet; }
    inline void SetAugmentedManifests(const Aws::Vector<DatasetAugmentedManifestsListItem>& value) { m_augmentedManifestsHasBeenSet = true; m_augmentedManifests = value; }
    inline void SetAugmentedManifests(Aws::Vector<DatasetAugmentedManifestsListItem>&& value) { m_augmentedManifestsHasBeenSet = true; m_augmentedManifests = std::move(value); }
    inline DatasetInputDataConfig& WithAugmentedManifests(const Aws::Vector<DatasetAugmentedManifestsListItem>& value) { SetAugmentedManifests(value); return *this;}
    inline DatasetInputDataConfig& WithAugmentedManifests(Aws::Vector<DatasetAugmentedManifestsListItem>&& value) { SetAugmentedManifests(std::move(value)); return *this;}
    inline DatasetInputDataConfig& AddAugmentedManifests(const DatasetAugmentedManifestsListItem& value) { m_augmentedManifestsHasBeenSet = true; m_augmentedManifests.push_back(value); return *this; }
    inline DatasetInputDataConfig& AddAugmentedManifests(DatasetAugmentedManifestsListItem&& value) { m_augmentedManifestsHasBeenSet = true; m_augmentedManifests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <code>COMPREHEND_CSV</code>: The data format is a two-column CSV file, where
     * the first column contains labels and the second column contains documents.</p>
     * <p> <code>AUGMENTED_MANIFEST</code>: The data format </p>
     */
    inline const DatasetDataFormat& GetDataFormat() const{ return m_dataFormat; }
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }
    inline void SetDataFormat(const DatasetDataFormat& value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }
    inline void SetDataFormat(DatasetDataFormat&& value) { m_dataFormatHasBeenSet = true; m_dataFormat = std::move(value); }
    inline DatasetInputDataConfig& WithDataFormat(const DatasetDataFormat& value) { SetDataFormat(value); return *this;}
    inline DatasetInputDataConfig& WithDataFormat(DatasetDataFormat&& value) { SetDataFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input properties for training a document classifier model. </p> <p>For
     * more information on how the input file is formatted, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/prep-classifier-data.html">Preparing
     * training data</a> in the Comprehend Developer Guide. </p>
     */
    inline const DatasetDocumentClassifierInputDataConfig& GetDocumentClassifierInputDataConfig() const{ return m_documentClassifierInputDataConfig; }
    inline bool DocumentClassifierInputDataConfigHasBeenSet() const { return m_documentClassifierInputDataConfigHasBeenSet; }
    inline void SetDocumentClassifierInputDataConfig(const DatasetDocumentClassifierInputDataConfig& value) { m_documentClassifierInputDataConfigHasBeenSet = true; m_documentClassifierInputDataConfig = value; }
    inline void SetDocumentClassifierInputDataConfig(DatasetDocumentClassifierInputDataConfig&& value) { m_documentClassifierInputDataConfigHasBeenSet = true; m_documentClassifierInputDataConfig = std::move(value); }
    inline DatasetInputDataConfig& WithDocumentClassifierInputDataConfig(const DatasetDocumentClassifierInputDataConfig& value) { SetDocumentClassifierInputDataConfig(value); return *this;}
    inline DatasetInputDataConfig& WithDocumentClassifierInputDataConfig(DatasetDocumentClassifierInputDataConfig&& value) { SetDocumentClassifierInputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input properties for training an entity recognizer model.</p>
     */
    inline const DatasetEntityRecognizerInputDataConfig& GetEntityRecognizerInputDataConfig() const{ return m_entityRecognizerInputDataConfig; }
    inline bool EntityRecognizerInputDataConfigHasBeenSet() const { return m_entityRecognizerInputDataConfigHasBeenSet; }
    inline void SetEntityRecognizerInputDataConfig(const DatasetEntityRecognizerInputDataConfig& value) { m_entityRecognizerInputDataConfigHasBeenSet = true; m_entityRecognizerInputDataConfig = value; }
    inline void SetEntityRecognizerInputDataConfig(DatasetEntityRecognizerInputDataConfig&& value) { m_entityRecognizerInputDataConfigHasBeenSet = true; m_entityRecognizerInputDataConfig = std::move(value); }
    inline DatasetInputDataConfig& WithEntityRecognizerInputDataConfig(const DatasetEntityRecognizerInputDataConfig& value) { SetEntityRecognizerInputDataConfig(value); return *this;}
    inline DatasetInputDataConfig& WithEntityRecognizerInputDataConfig(DatasetEntityRecognizerInputDataConfig&& value) { SetEntityRecognizerInputDataConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DatasetAugmentedManifestsListItem> m_augmentedManifests;
    bool m_augmentedManifestsHasBeenSet = false;

    DatasetDataFormat m_dataFormat;
    bool m_dataFormatHasBeenSet = false;

    DatasetDocumentClassifierInputDataConfig m_documentClassifierInputDataConfig;
    bool m_documentClassifierInputDataConfigHasBeenSet = false;

    DatasetEntityRecognizerInputDataConfig m_entityRecognizerInputDataConfig;
    bool m_entityRecognizerInputDataConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
