/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/Asset.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Contains the Amazon S3 bucket location of the validation data for a model
   * training job. </p> <p>The validation data includes error information for
   * individual JSON Lines in the dataset. For more information, see <i>Debugging a
   * Failed Model Training</i> in the Amazon Rekognition Custom Labels Developer
   * Guide. </p> <p>You get the <code>ValidationData</code> object for the training
   * dataset (<a>TrainingDataResult</a>) and the test dataset
   * (<a>TestingDataResult</a>) by calling <a>DescribeProjectVersions</a>. </p>
   * <p>The assets array contains a single <a>Asset</a> object. The
   * <a>GroundTruthManifest</a> field of the Asset object contains the S3 bucket
   * location of the validation data. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ValidationData">AWS
   * API Reference</a></p>
   */
  class ValidationData
  {
  public:
    AWS_REKOGNITION_API ValidationData();
    AWS_REKOGNITION_API ValidationData(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ValidationData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The assets that comprise the validation data. </p>
     */
    inline const Aws::Vector<Asset>& GetAssets() const{ return m_assets; }

    /**
     * <p>The assets that comprise the validation data. </p>
     */
    inline bool AssetsHasBeenSet() const { return m_assetsHasBeenSet; }

    /**
     * <p>The assets that comprise the validation data. </p>
     */
    inline void SetAssets(const Aws::Vector<Asset>& value) { m_assetsHasBeenSet = true; m_assets = value; }

    /**
     * <p>The assets that comprise the validation data. </p>
     */
    inline void SetAssets(Aws::Vector<Asset>&& value) { m_assetsHasBeenSet = true; m_assets = std::move(value); }

    /**
     * <p>The assets that comprise the validation data. </p>
     */
    inline ValidationData& WithAssets(const Aws::Vector<Asset>& value) { SetAssets(value); return *this;}

    /**
     * <p>The assets that comprise the validation data. </p>
     */
    inline ValidationData& WithAssets(Aws::Vector<Asset>&& value) { SetAssets(std::move(value)); return *this;}

    /**
     * <p>The assets that comprise the validation data. </p>
     */
    inline ValidationData& AddAssets(const Asset& value) { m_assetsHasBeenSet = true; m_assets.push_back(value); return *this; }

    /**
     * <p>The assets that comprise the validation data. </p>
     */
    inline ValidationData& AddAssets(Asset&& value) { m_assetsHasBeenSet = true; m_assets.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Asset> m_assets;
    bool m_assetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
