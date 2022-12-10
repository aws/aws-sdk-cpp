/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/SensitiveDataItemCategory.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/DefaultDetection.h>
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
   * <p>Provides information about the category, types, and occurrences of sensitive
   * data that produced a sensitive data finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SensitiveDataItem">AWS
   * API Reference</a></p>
   */
  class SensitiveDataItem
  {
  public:
    AWS_MACIE2_API SensitiveDataItem();
    AWS_MACIE2_API SensitiveDataItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SensitiveDataItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The category of sensitive data that was detected. For example: CREDENTIALS,
     * for credentials data such as private keys or Amazon Web Services secret access
     * keys; FINANCIAL_INFORMATION, for financial data such as credit card numbers; or,
     * PERSONAL_INFORMATION, for personal health information, such as health insurance
     * identification numbers, or personally identifiable information, such as passport
     * numbers.</p>
     */
    inline const SensitiveDataItemCategory& GetCategory() const{ return m_category; }

    /**
     * <p>The category of sensitive data that was detected. For example: CREDENTIALS,
     * for credentials data such as private keys or Amazon Web Services secret access
     * keys; FINANCIAL_INFORMATION, for financial data such as credit card numbers; or,
     * PERSONAL_INFORMATION, for personal health information, such as health insurance
     * identification numbers, or personally identifiable information, such as passport
     * numbers.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category of sensitive data that was detected. For example: CREDENTIALS,
     * for credentials data such as private keys or Amazon Web Services secret access
     * keys; FINANCIAL_INFORMATION, for financial data such as credit card numbers; or,
     * PERSONAL_INFORMATION, for personal health information, such as health insurance
     * identification numbers, or personally identifiable information, such as passport
     * numbers.</p>
     */
    inline void SetCategory(const SensitiveDataItemCategory& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category of sensitive data that was detected. For example: CREDENTIALS,
     * for credentials data such as private keys or Amazon Web Services secret access
     * keys; FINANCIAL_INFORMATION, for financial data such as credit card numbers; or,
     * PERSONAL_INFORMATION, for personal health information, such as health insurance
     * identification numbers, or personally identifiable information, such as passport
     * numbers.</p>
     */
    inline void SetCategory(SensitiveDataItemCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category of sensitive data that was detected. For example: CREDENTIALS,
     * for credentials data such as private keys or Amazon Web Services secret access
     * keys; FINANCIAL_INFORMATION, for financial data such as credit card numbers; or,
     * PERSONAL_INFORMATION, for personal health information, such as health insurance
     * identification numbers, or personally identifiable information, such as passport
     * numbers.</p>
     */
    inline SensitiveDataItem& WithCategory(const SensitiveDataItemCategory& value) { SetCategory(value); return *this;}

    /**
     * <p>The category of sensitive data that was detected. For example: CREDENTIALS,
     * for credentials data such as private keys or Amazon Web Services secret access
     * keys; FINANCIAL_INFORMATION, for financial data such as credit card numbers; or,
     * PERSONAL_INFORMATION, for personal health information, such as health insurance
     * identification numbers, or personally identifiable information, such as passport
     * numbers.</p>
     */
    inline SensitiveDataItem& WithCategory(SensitiveDataItemCategory&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p>An array of objects, one for each type of sensitive data that was detected.
     * Each object reports the number of occurrences of a specific type of sensitive
     * data that was detected, and the location of up to 15 of those occurrences.</p>
     */
    inline const Aws::Vector<DefaultDetection>& GetDetections() const{ return m_detections; }

    /**
     * <p>An array of objects, one for each type of sensitive data that was detected.
     * Each object reports the number of occurrences of a specific type of sensitive
     * data that was detected, and the location of up to 15 of those occurrences.</p>
     */
    inline bool DetectionsHasBeenSet() const { return m_detectionsHasBeenSet; }

    /**
     * <p>An array of objects, one for each type of sensitive data that was detected.
     * Each object reports the number of occurrences of a specific type of sensitive
     * data that was detected, and the location of up to 15 of those occurrences.</p>
     */
    inline void SetDetections(const Aws::Vector<DefaultDetection>& value) { m_detectionsHasBeenSet = true; m_detections = value; }

    /**
     * <p>An array of objects, one for each type of sensitive data that was detected.
     * Each object reports the number of occurrences of a specific type of sensitive
     * data that was detected, and the location of up to 15 of those occurrences.</p>
     */
    inline void SetDetections(Aws::Vector<DefaultDetection>&& value) { m_detectionsHasBeenSet = true; m_detections = std::move(value); }

    /**
     * <p>An array of objects, one for each type of sensitive data that was detected.
     * Each object reports the number of occurrences of a specific type of sensitive
     * data that was detected, and the location of up to 15 of those occurrences.</p>
     */
    inline SensitiveDataItem& WithDetections(const Aws::Vector<DefaultDetection>& value) { SetDetections(value); return *this;}

    /**
     * <p>An array of objects, one for each type of sensitive data that was detected.
     * Each object reports the number of occurrences of a specific type of sensitive
     * data that was detected, and the location of up to 15 of those occurrences.</p>
     */
    inline SensitiveDataItem& WithDetections(Aws::Vector<DefaultDetection>&& value) { SetDetections(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each type of sensitive data that was detected.
     * Each object reports the number of occurrences of a specific type of sensitive
     * data that was detected, and the location of up to 15 of those occurrences.</p>
     */
    inline SensitiveDataItem& AddDetections(const DefaultDetection& value) { m_detectionsHasBeenSet = true; m_detections.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each type of sensitive data that was detected.
     * Each object reports the number of occurrences of a specific type of sensitive
     * data that was detected, and the location of up to 15 of those occurrences.</p>
     */
    inline SensitiveDataItem& AddDetections(DefaultDetection&& value) { m_detectionsHasBeenSet = true; m_detections.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of occurrences of the sensitive data that was detected.</p>
     */
    inline long long GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of occurrences of the sensitive data that was detected.</p>
     */
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }

    /**
     * <p>The total number of occurrences of the sensitive data that was detected.</p>
     */
    inline void SetTotalCount(long long value) { m_totalCountHasBeenSet = true; m_totalCount = value; }

    /**
     * <p>The total number of occurrences of the sensitive data that was detected.</p>
     */
    inline SensitiveDataItem& WithTotalCount(long long value) { SetTotalCount(value); return *this;}

  private:

    SensitiveDataItemCategory m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Vector<DefaultDetection> m_detections;
    bool m_detectionsHasBeenSet = false;

    long long m_totalCount;
    bool m_totalCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
