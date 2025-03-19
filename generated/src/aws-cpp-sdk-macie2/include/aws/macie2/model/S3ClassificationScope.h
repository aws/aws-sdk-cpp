/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/S3ClassificationScopeExclusion.h>
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
   * <p>Specifies the S3 buckets that are excluded from automated sensitive data
   * discovery for an Amazon Macie account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/S3ClassificationScope">AWS
   * API Reference</a></p>
   */
  class S3ClassificationScope
  {
  public:
    AWS_MACIE2_API S3ClassificationScope() = default;
    AWS_MACIE2_API S3ClassificationScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API S3ClassificationScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 buckets that are excluded.</p>
     */
    inline const S3ClassificationScopeExclusion& GetExcludes() const { return m_excludes; }
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }
    template<typename ExcludesT = S3ClassificationScopeExclusion>
    void SetExcludes(ExcludesT&& value) { m_excludesHasBeenSet = true; m_excludes = std::forward<ExcludesT>(value); }
    template<typename ExcludesT = S3ClassificationScopeExclusion>
    S3ClassificationScope& WithExcludes(ExcludesT&& value) { SetExcludes(std::forward<ExcludesT>(value)); return *this;}
    ///@}
  private:

    S3ClassificationScopeExclusion m_excludes;
    bool m_excludesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
