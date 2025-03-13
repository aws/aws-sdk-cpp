/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/CustomDetection.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about custom data identifiers that produced a sensitive
   * data finding, and the number of occurrences of the data that they detected for
   * the finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CustomDataIdentifiers">AWS
   * API Reference</a></p>
   */
  class CustomDataIdentifiers
  {
  public:
    AWS_MACIE2_API CustomDataIdentifiers() = default;
    AWS_MACIE2_API CustomDataIdentifiers(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API CustomDataIdentifiers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The custom data identifiers that detected the data, and the number of
     * occurrences of the data that each identifier detected.</p>
     */
    inline const Aws::Vector<CustomDetection>& GetDetections() const { return m_detections; }
    inline bool DetectionsHasBeenSet() const { return m_detectionsHasBeenSet; }
    template<typename DetectionsT = Aws::Vector<CustomDetection>>
    void SetDetections(DetectionsT&& value) { m_detectionsHasBeenSet = true; m_detections = std::forward<DetectionsT>(value); }
    template<typename DetectionsT = Aws::Vector<CustomDetection>>
    CustomDataIdentifiers& WithDetections(DetectionsT&& value) { SetDetections(std::forward<DetectionsT>(value)); return *this;}
    template<typename DetectionsT = CustomDetection>
    CustomDataIdentifiers& AddDetections(DetectionsT&& value) { m_detectionsHasBeenSet = true; m_detections.emplace_back(std::forward<DetectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of occurrences of the data that was detected by the custom
     * data identifiers and produced the finding.</p>
     */
    inline long long GetTotalCount() const { return m_totalCount; }
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }
    inline void SetTotalCount(long long value) { m_totalCountHasBeenSet = true; m_totalCount = value; }
    inline CustomDataIdentifiers& WithTotalCount(long long value) { SetTotalCount(value); return *this;}
    ///@}
  private:

    Aws::Vector<CustomDetection> m_detections;
    bool m_detectionsHasBeenSet = false;

    long long m_totalCount{0};
    bool m_totalCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
