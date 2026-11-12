/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains the number and percentage of archived and unarchived
 * findings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ArchiveDistribution">AWS
 * API Reference</a></p>
 */
class ArchiveDistribution {
 public:
  AWS_GUARDDUTY_API ArchiveDistribution() = default;
  AWS_GUARDDUTY_API ArchiveDistribution(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API ArchiveDistribution& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of archived findings.</p>
   */
  inline long long GetArchivedCount() const { return m_archivedCount; }
  inline bool ArchivedCountHasBeenSet() const { return m_archivedCountHasBeenSet; }
  inline void SetArchivedCount(long long value) {
    m_archivedCountHasBeenSet = true;
    m_archivedCount = value;
  }
  inline ArchiveDistribution& WithArchivedCount(long long value) {
    SetArchivedCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of unarchived findings.</p>
   */
  inline long long GetUnarchivedCount() const { return m_unarchivedCount; }
  inline bool UnarchivedCountHasBeenSet() const { return m_unarchivedCountHasBeenSet; }
  inline void SetUnarchivedCount(long long value) {
    m_unarchivedCountHasBeenSet = true;
    m_unarchivedCount = value;
  }
  inline ArchiveDistribution& WithUnarchivedCount(long long value) {
    SetUnarchivedCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of findings that are archived, from 0 to 100.</p>
   */
  inline double GetArchivedPercentage() const { return m_archivedPercentage; }
  inline bool ArchivedPercentageHasBeenSet() const { return m_archivedPercentageHasBeenSet; }
  inline void SetArchivedPercentage(double value) {
    m_archivedPercentageHasBeenSet = true;
    m_archivedPercentage = value;
  }
  inline ArchiveDistribution& WithArchivedPercentage(double value) {
    SetArchivedPercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of findings that are unarchived, from 0 to 100.</p>
   */
  inline double GetUnarchivedPercentage() const { return m_unarchivedPercentage; }
  inline bool UnarchivedPercentageHasBeenSet() const { return m_unarchivedPercentageHasBeenSet; }
  inline void SetUnarchivedPercentage(double value) {
    m_unarchivedPercentageHasBeenSet = true;
    m_unarchivedPercentage = value;
  }
  inline ArchiveDistribution& WithUnarchivedPercentage(double value) {
    SetUnarchivedPercentage(value);
    return *this;
  }
  ///@}
 private:
  long long m_archivedCount{0};

  long long m_unarchivedCount{0};

  double m_archivedPercentage{0.0};

  double m_unarchivedPercentage{0.0};
  bool m_archivedCountHasBeenSet = false;
  bool m_unarchivedCountHasBeenSet = false;
  bool m_archivedPercentageHasBeenSet = false;
  bool m_unarchivedPercentageHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
