/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies an Amazon Web Services account that owns S3 buckets for a
   * classification job to analyze, and one or more specific buckets to analyze for
   * that account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/S3BucketDefinitionForJob">AWS
   * API Reference</a></p>
   */
  class S3BucketDefinitionForJob
  {
  public:
    AWS_MACIE2_API S3BucketDefinitionForJob() = default;
    AWS_MACIE2_API S3BucketDefinitionForJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API S3BucketDefinitionForJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * buckets.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    S3BucketDefinitionForJob& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBuckets() const { return m_buckets; }
    inline bool BucketsHasBeenSet() const { return m_bucketsHasBeenSet; }
    template<typename BucketsT = Aws::Vector<Aws::String>>
    void SetBuckets(BucketsT&& value) { m_bucketsHasBeenSet = true; m_buckets = std::forward<BucketsT>(value); }
    template<typename BucketsT = Aws::Vector<Aws::String>>
    S3BucketDefinitionForJob& WithBuckets(BucketsT&& value) { SetBuckets(std::forward<BucketsT>(value)); return *this;}
    template<typename BucketsT = Aws::String>
    S3BucketDefinitionForJob& AddBuckets(BucketsT&& value) { m_bucketsHasBeenSet = true; m_buckets.emplace_back(std::forward<BucketsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_buckets;
    bool m_bucketsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
