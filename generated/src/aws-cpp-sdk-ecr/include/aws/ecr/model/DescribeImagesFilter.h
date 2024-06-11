/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/TagStatus.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>An object representing a filter on a <a>DescribeImages</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeImagesFilter">AWS
   * API Reference</a></p>
   */
  class DescribeImagesFilter
  {
  public:
    AWS_ECR_API DescribeImagesFilter();
    AWS_ECR_API DescribeImagesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API DescribeImagesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tag status with which to filter your <a>DescribeImages</a> results. You
     * can filter results based on whether they are <code>TAGGED</code> or
     * <code>UNTAGGED</code>.</p>
     */
    inline const TagStatus& GetTagStatus() const{ return m_tagStatus; }
    inline bool TagStatusHasBeenSet() const { return m_tagStatusHasBeenSet; }
    inline void SetTagStatus(const TagStatus& value) { m_tagStatusHasBeenSet = true; m_tagStatus = value; }
    inline void SetTagStatus(TagStatus&& value) { m_tagStatusHasBeenSet = true; m_tagStatus = std::move(value); }
    inline DescribeImagesFilter& WithTagStatus(const TagStatus& value) { SetTagStatus(value); return *this;}
    inline DescribeImagesFilter& WithTagStatus(TagStatus&& value) { SetTagStatus(std::move(value)); return *this;}
    ///@}
  private:

    TagStatus m_tagStatus;
    bool m_tagStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
