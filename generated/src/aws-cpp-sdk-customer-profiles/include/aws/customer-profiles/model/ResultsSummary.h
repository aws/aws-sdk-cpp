/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The summary of results for an upload job, including the number of updated,
   * created, and failed records. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ResultsSummary">AWS
   * API Reference</a></p>
   */
  class ResultsSummary
  {
  public:
    AWS_CUSTOMERPROFILES_API ResultsSummary() = default;
    AWS_CUSTOMERPROFILES_API ResultsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ResultsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of records that were updated during the upload job. </p>
     */
    inline long long GetUpdatedRecords() const { return m_updatedRecords; }
    inline bool UpdatedRecordsHasBeenSet() const { return m_updatedRecordsHasBeenSet; }
    inline void SetUpdatedRecords(long long value) { m_updatedRecordsHasBeenSet = true; m_updatedRecords = value; }
    inline ResultsSummary& WithUpdatedRecords(long long value) { SetUpdatedRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records that were newly created during the upload job. </p>
     */
    inline long long GetCreatedRecords() const { return m_createdRecords; }
    inline bool CreatedRecordsHasBeenSet() const { return m_createdRecordsHasBeenSet; }
    inline void SetCreatedRecords(long long value) { m_createdRecordsHasBeenSet = true; m_createdRecords = value; }
    inline ResultsSummary& WithCreatedRecords(long long value) { SetCreatedRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records that failed to be processed during the upload job. </p>
     */
    inline long long GetFailedRecords() const { return m_failedRecords; }
    inline bool FailedRecordsHasBeenSet() const { return m_failedRecordsHasBeenSet; }
    inline void SetFailedRecords(long long value) { m_failedRecordsHasBeenSet = true; m_failedRecords = value; }
    inline ResultsSummary& WithFailedRecords(long long value) { SetFailedRecords(value); return *this;}
    ///@}
  private:

    long long m_updatedRecords{0};
    bool m_updatedRecordsHasBeenSet = false;

    long long m_createdRecords{0};
    bool m_createdRecordsHasBeenSet = false;

    long long m_failedRecords{0};
    bool m_failedRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
