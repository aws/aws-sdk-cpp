/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/DatasetEnrichmentEntry.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Contains the enrichment status information for a dataset across data
 * types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DatasetEnrichment">AWS
 * API Reference</a></p>
 */
class DatasetEnrichment {
 public:
  AWS_IOTSITEWISE_API DatasetEnrichment() = default;
  AWS_IOTSITEWISE_API DatasetEnrichment(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API DatasetEnrichment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The enrichment status for video data in the dataset.</p>
   */
  inline const DatasetEnrichmentEntry& GetVideo() const { return m_video; }
  inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }
  template <typename VideoT = DatasetEnrichmentEntry>
  void SetVideo(VideoT&& value) {
    m_videoHasBeenSet = true;
    m_video = std::forward<VideoT>(value);
  }
  template <typename VideoT = DatasetEnrichmentEntry>
  DatasetEnrichment& WithVideo(VideoT&& value) {
    SetVideo(std::forward<VideoT>(value));
    return *this;
  }
  ///@}
 private:
  DatasetEnrichmentEntry m_video;
  bool m_videoHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
