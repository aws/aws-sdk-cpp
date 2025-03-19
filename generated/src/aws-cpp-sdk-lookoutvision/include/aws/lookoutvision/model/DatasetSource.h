/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/DatasetGroundTruthManifest.h>
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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>Information about the location of a manifest file that Amazon Lookout for
   * Vision uses to to create a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DatasetSource">AWS
   * API Reference</a></p>
   */
  class DatasetSource
  {
  public:
    AWS_LOOKOUTFORVISION_API DatasetSource() = default;
    AWS_LOOKOUTFORVISION_API DatasetSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API DatasetSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Location information for the manifest file.</p>
     */
    inline const DatasetGroundTruthManifest& GetGroundTruthManifest() const { return m_groundTruthManifest; }
    inline bool GroundTruthManifestHasBeenSet() const { return m_groundTruthManifestHasBeenSet; }
    template<typename GroundTruthManifestT = DatasetGroundTruthManifest>
    void SetGroundTruthManifest(GroundTruthManifestT&& value) { m_groundTruthManifestHasBeenSet = true; m_groundTruthManifest = std::forward<GroundTruthManifestT>(value); }
    template<typename GroundTruthManifestT = DatasetGroundTruthManifest>
    DatasetSource& WithGroundTruthManifest(GroundTruthManifestT&& value) { SetGroundTruthManifest(std::forward<GroundTruthManifestT>(value)); return *this;}
    ///@}
  private:

    DatasetGroundTruthManifest m_groundTruthManifest;
    bool m_groundTruthManifestHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
