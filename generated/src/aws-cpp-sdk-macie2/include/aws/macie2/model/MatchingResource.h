/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/MatchingBucket.h>
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
   * <p>Provides statistical data and other information about an Amazon Web Services
   * resource that Amazon Macie monitors and analyzes for your account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/MatchingResource">AWS
   * API Reference</a></p>
   */
  class MatchingResource
  {
  public:
    AWS_MACIE2_API MatchingResource() = default;
    AWS_MACIE2_API MatchingResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API MatchingResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details of an S3 bucket that Amazon Macie monitors and analyzes for your
     * account.</p>
     */
    inline const MatchingBucket& GetMatchingBucket() const { return m_matchingBucket; }
    inline bool MatchingBucketHasBeenSet() const { return m_matchingBucketHasBeenSet; }
    template<typename MatchingBucketT = MatchingBucket>
    void SetMatchingBucket(MatchingBucketT&& value) { m_matchingBucketHasBeenSet = true; m_matchingBucket = std::forward<MatchingBucketT>(value); }
    template<typename MatchingBucketT = MatchingBucket>
    MatchingResource& WithMatchingBucket(MatchingBucketT&& value) { SetMatchingBucket(std::forward<MatchingBucketT>(value)); return *this;}
    ///@}
  private:

    MatchingBucket m_matchingBucket;
    bool m_matchingBucketHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
