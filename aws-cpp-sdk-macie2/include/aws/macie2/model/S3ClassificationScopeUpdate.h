/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/S3ClassificationScopeExclusionUpdate.h>
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
   * <p>Specifies changes to the list of S3 buckets that are excluded from automated
   * sensitive data discovery for an Amazon Macie account.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/S3ClassificationScopeUpdate">AWS
   * API Reference</a></p>
   */
  class S3ClassificationScopeUpdate
  {
  public:
    AWS_MACIE2_API S3ClassificationScopeUpdate();
    AWS_MACIE2_API S3ClassificationScopeUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API S3ClassificationScopeUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The names of the S3 buckets to add or remove from the list.</p>
     */
    inline const S3ClassificationScopeExclusionUpdate& GetExcludes() const{ return m_excludes; }

    /**
     * <p>The names of the S3 buckets to add or remove from the list.</p>
     */
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }

    /**
     * <p>The names of the S3 buckets to add or remove from the list.</p>
     */
    inline void SetExcludes(const S3ClassificationScopeExclusionUpdate& value) { m_excludesHasBeenSet = true; m_excludes = value; }

    /**
     * <p>The names of the S3 buckets to add or remove from the list.</p>
     */
    inline void SetExcludes(S3ClassificationScopeExclusionUpdate&& value) { m_excludesHasBeenSet = true; m_excludes = std::move(value); }

    /**
     * <p>The names of the S3 buckets to add or remove from the list.</p>
     */
    inline S3ClassificationScopeUpdate& WithExcludes(const S3ClassificationScopeExclusionUpdate& value) { SetExcludes(value); return *this;}

    /**
     * <p>The names of the S3 buckets to add or remove from the list.</p>
     */
    inline S3ClassificationScopeUpdate& WithExcludes(S3ClassificationScopeExclusionUpdate&& value) { SetExcludes(std::move(value)); return *this;}

  private:

    S3ClassificationScopeExclusionUpdate m_excludes;
    bool m_excludesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
