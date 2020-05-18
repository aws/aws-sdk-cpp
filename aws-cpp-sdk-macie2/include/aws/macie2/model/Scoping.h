/*
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
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/JobScopingBlock.h>
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
   * <p>An object that specifies conditions for including or excluding objects from
   * the job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/Scoping">AWS API
   * Reference</a></p>
   */
  class AWS_MACIE2_API Scoping
  {
  public:
    Scoping();
    Scoping(Aws::Utils::Json::JsonView jsonValue);
    Scoping& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reserved for future use.</p>
     */
    inline const JobScopingBlock& GetExcludes() const{ return m_excludes; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetExcludes(const JobScopingBlock& value) { m_excludesHasBeenSet = true; m_excludes = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetExcludes(JobScopingBlock&& value) { m_excludesHasBeenSet = true; m_excludes = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline Scoping& WithExcludes(const JobScopingBlock& value) { SetExcludes(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline Scoping& WithExcludes(JobScopingBlock&& value) { SetExcludes(std::move(value)); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const JobScopingBlock& GetIncludes() const{ return m_includes; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIncludes(const JobScopingBlock& value) { m_includesHasBeenSet = true; m_includes = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIncludes(JobScopingBlock&& value) { m_includesHasBeenSet = true; m_includes = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline Scoping& WithIncludes(const JobScopingBlock& value) { SetIncludes(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline Scoping& WithIncludes(JobScopingBlock&& value) { SetIncludes(std::move(value)); return *this;}

  private:

    JobScopingBlock m_excludes;
    bool m_excludesHasBeenSet;

    JobScopingBlock m_includes;
    bool m_includesHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
