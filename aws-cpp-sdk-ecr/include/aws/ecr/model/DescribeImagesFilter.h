﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ECR_API DescribeImagesFilter
  {
  public:
    DescribeImagesFilter();
    DescribeImagesFilter(Aws::Utils::Json::JsonView jsonValue);
    DescribeImagesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tag status with which to filter your <a>DescribeImages</a> results. You
     * can filter results based on whether they are <code>TAGGED</code> or
     * <code>UNTAGGED</code>.</p>
     */
    inline const TagStatus& GetTagStatus() const{ return m_tagStatus; }

    /**
     * <p>The tag status with which to filter your <a>DescribeImages</a> results. You
     * can filter results based on whether they are <code>TAGGED</code> or
     * <code>UNTAGGED</code>.</p>
     */
    inline void SetTagStatus(const TagStatus& value) { m_tagStatusHasBeenSet = true; m_tagStatus = value; }

    /**
     * <p>The tag status with which to filter your <a>DescribeImages</a> results. You
     * can filter results based on whether they are <code>TAGGED</code> or
     * <code>UNTAGGED</code>.</p>
     */
    inline void SetTagStatus(TagStatus&& value) { m_tagStatusHasBeenSet = true; m_tagStatus = std::move(value); }

    /**
     * <p>The tag status with which to filter your <a>DescribeImages</a> results. You
     * can filter results based on whether they are <code>TAGGED</code> or
     * <code>UNTAGGED</code>.</p>
     */
    inline DescribeImagesFilter& WithTagStatus(const TagStatus& value) { SetTagStatus(value); return *this;}

    /**
     * <p>The tag status with which to filter your <a>DescribeImages</a> results. You
     * can filter results based on whether they are <code>TAGGED</code> or
     * <code>UNTAGGED</code>.</p>
     */
    inline DescribeImagesFilter& WithTagStatus(TagStatus&& value) { SetTagStatus(std::move(value)); return *this;}

  private:

    TagStatus m_tagStatus;
    bool m_tagStatusHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
