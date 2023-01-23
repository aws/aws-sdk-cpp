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
    AWS_MACIE2_API CustomDataIdentifiers();
    AWS_MACIE2_API CustomDataIdentifiers(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API CustomDataIdentifiers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The custom data identifiers that detected the data, and the number of
     * occurrences of the data that each identifier detected.</p>
     */
    inline const Aws::Vector<CustomDetection>& GetDetections() const{ return m_detections; }

    /**
     * <p>The custom data identifiers that detected the data, and the number of
     * occurrences of the data that each identifier detected.</p>
     */
    inline bool DetectionsHasBeenSet() const { return m_detectionsHasBeenSet; }

    /**
     * <p>The custom data identifiers that detected the data, and the number of
     * occurrences of the data that each identifier detected.</p>
     */
    inline void SetDetections(const Aws::Vector<CustomDetection>& value) { m_detectionsHasBeenSet = true; m_detections = value; }

    /**
     * <p>The custom data identifiers that detected the data, and the number of
     * occurrences of the data that each identifier detected.</p>
     */
    inline void SetDetections(Aws::Vector<CustomDetection>&& value) { m_detectionsHasBeenSet = true; m_detections = std::move(value); }

    /**
     * <p>The custom data identifiers that detected the data, and the number of
     * occurrences of the data that each identifier detected.</p>
     */
    inline CustomDataIdentifiers& WithDetections(const Aws::Vector<CustomDetection>& value) { SetDetections(value); return *this;}

    /**
     * <p>The custom data identifiers that detected the data, and the number of
     * occurrences of the data that each identifier detected.</p>
     */
    inline CustomDataIdentifiers& WithDetections(Aws::Vector<CustomDetection>&& value) { SetDetections(std::move(value)); return *this;}

    /**
     * <p>The custom data identifiers that detected the data, and the number of
     * occurrences of the data that each identifier detected.</p>
     */
    inline CustomDataIdentifiers& AddDetections(const CustomDetection& value) { m_detectionsHasBeenSet = true; m_detections.push_back(value); return *this; }

    /**
     * <p>The custom data identifiers that detected the data, and the number of
     * occurrences of the data that each identifier detected.</p>
     */
    inline CustomDataIdentifiers& AddDetections(CustomDetection&& value) { m_detectionsHasBeenSet = true; m_detections.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of occurrences of the data that was detected by the custom
     * data identifiers and produced the finding.</p>
     */
    inline long long GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of occurrences of the data that was detected by the custom
     * data identifiers and produced the finding.</p>
     */
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }

    /**
     * <p>The total number of occurrences of the data that was detected by the custom
     * data identifiers and produced the finding.</p>
     */
    inline void SetTotalCount(long long value) { m_totalCountHasBeenSet = true; m_totalCount = value; }

    /**
     * <p>The total number of occurrences of the data that was detected by the custom
     * data identifiers and produced the finding.</p>
     */
    inline CustomDataIdentifiers& WithTotalCount(long long value) { SetTotalCount(value); return *this;}

  private:

    Aws::Vector<CustomDetection> m_detections;
    bool m_detectionsHasBeenSet = false;

    long long m_totalCount;
    bool m_totalCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
