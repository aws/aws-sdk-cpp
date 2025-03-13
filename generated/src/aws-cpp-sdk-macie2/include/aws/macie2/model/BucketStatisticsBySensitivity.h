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
   * for your account, the value for most of these metrics is 0.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketStatisticsBySensitivity">AWS
   * API Reference</a></p>
   */
  class BucketStatisticsBySensitivity
  {
  public:
    AWS_MACIE2_API BucketStatisticsBySensitivity() = default;
    AWS_MACIE2_API BucketStatisticsBySensitivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BucketStatisticsBySensitivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of -1.</p>
     */
    inline const SensitivityAggregations& GetClassificationError() const { return m_classificationError; }
    inline bool ClassificationErrorHasBeenSet() const { return m_classificationErrorHasBeenSet; }
    template<typename ClassificationErrorT = SensitivityAggregations>
    void SetClassificationError(ClassificationErrorT&& value) { m_classificationErrorHasBeenSet = true; m_classificationError = std::forward<ClassificationErrorT>(value); }
    template<typename ClassificationErrorT = SensitivityAggregations>
    BucketStatisticsBySensitivity& WithClassificationError(ClassificationErrorT&& value) { SetClassificationError(std::forward<ClassificationErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 50.</p>
     */
    inline const SensitivityAggregations& GetNotClassified() const { return m_notClassified; }
    inline bool NotClassifiedHasBeenSet() const { return m_notClassifiedHasBeenSet; }
    template<typename NotClassifiedT = SensitivityAggregations>
    void SetNotClassified(NotClassifiedT&& value) { m_notClassifiedHasBeenSet = true; m_notClassified = std::forward<NotClassifiedT>(value); }
    template<typename NotClassifiedT = SensitivityAggregations>
    BucketStatisticsBySensitivity& WithNotClassified(NotClassifiedT&& value) { SetNotClassified(std::forward<NotClassifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 1-49.</p>
     */
    inline const SensitivityAggregations& GetNotSensitive() const { return m_notSensitive; }
    inline bool NotSensitiveHasBeenSet() const { return m_notSensitiveHasBeenSet; }
    template<typename NotSensitiveT = SensitivityAggregations>
    void SetNotSensitive(NotSensitiveT&& value) { m_notSensitiveHasBeenSet = true; m_notSensitive = std::forward<NotSensitiveT>(value); }
    template<typename NotSensitiveT = SensitivityAggregations>
    BucketStatisticsBySensitivity& WithNotSensitive(NotSensitiveT&& value) { SetNotSensitive(std::forward<NotSensitiveT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregated statistical data for all buckets that have a sensitivity score
     * of 51-100.</p>
     */
    inline const SensitivityAggregations& GetSensitive() const { return m_sensitive; }
    inline bool SensitiveHasBeenSet() const { return m_sensitiveHasBeenSet; }
    template<typename SensitiveT = SensitivityAggregations>
    void SetSensitive(SensitiveT&& value) { m_sensitiveHasBeenSet = true; m_sensitive = std::forward<SensitiveT>(value); }
    template<typename SensitiveT = SensitivityAggregations>
    BucketStatisticsBySensitivity& WithSensitive(SensitiveT&& value) { SetSensitive(std::forward<SensitiveT>(value)); return *this;}
    ///@}
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
