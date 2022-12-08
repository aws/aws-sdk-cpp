/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/SensitivityAggregations.h>
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
   * <p>Provides aggregated statistical data for sensitive data discovery metrics
   * that apply to S3 buckets, grouped by bucket sensitivity score
   * (sensitivityScore). If automated sensitive data discovery is currently disabled
   * for your account, the value for each metric is 0.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketStatisticsBySensitivity">AWS
   * API Reference</a></p>
   */
  class BucketStatisticsBySensitivity
  {
  public:
    AWS_MACIE2_API BucketStatisticsBySensitivity();
    AWS_MACIE2_API BucketStatisticsBySensitivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BucketStatisticsBySensitivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of -1.</p>
     */
    inline const SensitivityAggregations& GetClassificationError() const{ return m_classificationError; }

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of -1.</p>
     */
    inline bool ClassificationErrorHasBeenSet() const { return m_classificationErrorHasBeenSet; }

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of -1.</p>
     */
    inline void SetClassificationError(const SensitivityAggregations& value) { m_classificationErrorHasBeenSet = true; m_classificationError = value; }

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of -1.</p>
     */
    inline void SetClassificationError(SensitivityAggregations&& value) { m_classificationErrorHasBeenSet = true; m_classificationError = std::move(value); }

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of -1.</p>
     */
    inline BucketStatisticsBySensitivity& WithClassificationError(const SensitivityAggregations& value) { SetClassificationError(value); return *this;}

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of -1.</p>
     */
    inline BucketStatisticsBySensitivity& WithClassificationError(SensitivityAggregations&& value) { SetClassificationError(std::move(value)); return *this;}


    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 50.</p>
     */
    inline const SensitivityAggregations& GetNotClassified() const{ return m_notClassified; }

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 50.</p>
     */
    inline bool NotClassifiedHasBeenSet() const { return m_notClassifiedHasBeenSet; }

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 50.</p>
     */
    inline void SetNotClassified(const SensitivityAggregations& value) { m_notClassifiedHasBeenSet = true; m_notClassified = value; }

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 50.</p>
     */
    inline void SetNotClassified(SensitivityAggregations&& value) { m_notClassifiedHasBeenSet = true; m_notClassified = std::move(value); }

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 50.</p>
     */
    inline BucketStatisticsBySensitivity& WithNotClassified(const SensitivityAggregations& value) { SetNotClassified(value); return *this;}

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 50.</p>
     */
    inline BucketStatisticsBySensitivity& WithNotClassified(SensitivityAggregations&& value) { SetNotClassified(std::move(value)); return *this;}


    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 0-49.</p>
     */
    inline const SensitivityAggregations& GetNotSensitive() const{ return m_notSensitive; }

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 0-49.</p>
     */
    inline bool NotSensitiveHasBeenSet() const { return m_notSensitiveHasBeenSet; }

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 0-49.</p>
     */
    inline void SetNotSensitive(const SensitivityAggregations& value) { m_notSensitiveHasBeenSet = true; m_notSensitive = value; }

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 0-49.</p>
     */
    inline void SetNotSensitive(SensitivityAggregations&& value) { m_notSensitiveHasBeenSet = true; m_notSensitive = std::move(value); }

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 0-49.</p>
     */
    inline BucketStatisticsBySensitivity& WithNotSensitive(const SensitivityAggregations& value) { SetNotSensitive(value); return *this;}

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 0-49.</p>
     */
    inline BucketStatisticsBySensitivity& WithNotSensitive(SensitivityAggregations&& value) { SetNotSensitive(std::move(value)); return *this;}


    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 51-100.</p>
     */
    inline const SensitivityAggregations& GetSensitive() const{ return m_sensitive; }

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 51-100.</p>
     */
    inline bool SensitiveHasBeenSet() const { return m_sensitiveHasBeenSet; }

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 51-100.</p>
     */
    inline void SetSensitive(const SensitivityAggregations& value) { m_sensitiveHasBeenSet = true; m_sensitive = value; }

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 51-100.</p>
     */
    inline void SetSensitive(SensitivityAggregations&& value) { m_sensitiveHasBeenSet = true; m_sensitive = std::move(value); }

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 51-100.</p>
     */
    inline BucketStatisticsBySensitivity& WithSensitive(const SensitivityAggregations& value) { SetSensitive(value); return *this;}

    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 51-100.</p>
     */
    inline BucketStatisticsBySensitivity& WithSensitive(SensitivityAggregations&& value) { SetSensitive(std::move(value)); return *this;}

  private:

    SensitivityAggregations m_classificationError;
    bool m_classificationErrorHasBeenSet = false;

    SensitivityAggregations m_notClassified;
    bool m_notClassifiedHasBeenSet = false;

    SensitivityAggregations m_notSensitive;
    bool m_notSensitiveHasBeenSet = false;

    SensitivityAggregations m_sensitive;
    bool m_sensitiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
