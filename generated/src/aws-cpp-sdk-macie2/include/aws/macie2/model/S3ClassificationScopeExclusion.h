/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies the names of the S3 buckets that are excluded from automated
   * sensitive data discovery.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/S3ClassificationScopeExclusion">AWS
   * API Reference</a></p>
   */
  class S3ClassificationScopeExclusion
  {
  public:
    AWS_MACIE2_API S3ClassificationScopeExclusion();
    AWS_MACIE2_API S3ClassificationScopeExclusion(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API S3ClassificationScopeExclusion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of strings, one for each S3 bucket that is excluded. Each string is
     * the full name of an excluded bucket.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBucketNames() const{ return m_bucketNames; }

    /**
     * <p>An array of strings, one for each S3 bucket that is excluded. Each string is
     * the full name of an excluded bucket.</p>
     */
    inline bool BucketNamesHasBeenSet() const { return m_bucketNamesHasBeenSet; }

    /**
     * <p>An array of strings, one for each S3 bucket that is excluded. Each string is
     * the full name of an excluded bucket.</p>
     */
    inline void SetBucketNames(const Aws::Vector<Aws::String>& value) { m_bucketNamesHasBeenSet = true; m_bucketNames = value; }

    /**
     * <p>An array of strings, one for each S3 bucket that is excluded. Each string is
     * the full name of an excluded bucket.</p>
     */
    inline void SetBucketNames(Aws::Vector<Aws::String>&& value) { m_bucketNamesHasBeenSet = true; m_bucketNames = std::move(value); }

    /**
     * <p>An array of strings, one for each S3 bucket that is excluded. Each string is
     * the full name of an excluded bucket.</p>
     */
    inline S3ClassificationScopeExclusion& WithBucketNames(const Aws::Vector<Aws::String>& value) { SetBucketNames(value); return *this;}

    /**
     * <p>An array of strings, one for each S3 bucket that is excluded. Each string is
     * the full name of an excluded bucket.</p>
     */
    inline S3ClassificationScopeExclusion& WithBucketNames(Aws::Vector<Aws::String>&& value) { SetBucketNames(std::move(value)); return *this;}

    /**
     * <p>An array of strings, one for each S3 bucket that is excluded. Each string is
     * the full name of an excluded bucket.</p>
     */
    inline S3ClassificationScopeExclusion& AddBucketNames(const Aws::String& value) { m_bucketNamesHasBeenSet = true; m_bucketNames.push_back(value); return *this; }

    /**
     * <p>An array of strings, one for each S3 bucket that is excluded. Each string is
     * the full name of an excluded bucket.</p>
     */
    inline S3ClassificationScopeExclusion& AddBucketNames(Aws::String&& value) { m_bucketNamesHasBeenSet = true; m_bucketNames.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings, one for each S3 bucket that is excluded. Each string is
     * the full name of an excluded bucket.</p>
     */
    inline S3ClassificationScopeExclusion& AddBucketNames(const char* value) { m_bucketNamesHasBeenSet = true; m_bucketNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_bucketNames;
    bool m_bucketNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
