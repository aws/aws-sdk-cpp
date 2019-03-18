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
#include <aws/codecommit/CodeCommit_EXPORTS.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Returns information about a merge or potential merge between a source
   * reference and a destination reference in a pull request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API MergeMetadata
  {
  public:
    MergeMetadata();
    MergeMetadata(Aws::Utils::Json::JsonView jsonValue);
    MergeMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A Boolean value indicating whether the merge has been made.</p>
     */
    inline bool GetIsMerged() const{ return m_isMerged; }

    /**
     * <p>A Boolean value indicating whether the merge has been made.</p>
     */
    inline bool IsMergedHasBeenSet() const { return m_isMergedHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether the merge has been made.</p>
     */
    inline void SetIsMerged(bool value) { m_isMergedHasBeenSet = true; m_isMerged = value; }

    /**
     * <p>A Boolean value indicating whether the merge has been made.</p>
     */
    inline MergeMetadata& WithIsMerged(bool value) { SetIsMerged(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who merged the branches.</p>
     */
    inline const Aws::String& GetMergedBy() const{ return m_mergedBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who merged the branches.</p>
     */
    inline bool MergedByHasBeenSet() const { return m_mergedByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who merged the branches.</p>
     */
    inline void SetMergedBy(const Aws::String& value) { m_mergedByHasBeenSet = true; m_mergedBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who merged the branches.</p>
     */
    inline void SetMergedBy(Aws::String&& value) { m_mergedByHasBeenSet = true; m_mergedBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who merged the branches.</p>
     */
    inline void SetMergedBy(const char* value) { m_mergedByHasBeenSet = true; m_mergedBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who merged the branches.</p>
     */
    inline MergeMetadata& WithMergedBy(const Aws::String& value) { SetMergedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who merged the branches.</p>
     */
    inline MergeMetadata& WithMergedBy(Aws::String&& value) { SetMergedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who merged the branches.</p>
     */
    inline MergeMetadata& WithMergedBy(const char* value) { SetMergedBy(value); return *this;}

  private:

    bool m_isMerged;
    bool m_isMergedHasBeenSet;

    Aws::String m_mergedBy;
    bool m_mergedByHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
