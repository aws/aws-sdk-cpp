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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>

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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Returns information about the details of an artifact.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ArtifactDetails">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API ArtifactDetails
  {
  public:
    ArtifactDetails();
    ArtifactDetails(Aws::Utils::Json::JsonView jsonValue);
    ArtifactDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum number of artifacts allowed for the action type.</p>
     */
    inline int GetMinimumCount() const{ return m_minimumCount; }

    /**
     * <p>The minimum number of artifacts allowed for the action type.</p>
     */
    inline bool MinimumCountHasBeenSet() const { return m_minimumCountHasBeenSet; }

    /**
     * <p>The minimum number of artifacts allowed for the action type.</p>
     */
    inline void SetMinimumCount(int value) { m_minimumCountHasBeenSet = true; m_minimumCount = value; }

    /**
     * <p>The minimum number of artifacts allowed for the action type.</p>
     */
    inline ArtifactDetails& WithMinimumCount(int value) { SetMinimumCount(value); return *this;}


    /**
     * <p>The maximum number of artifacts allowed for the action type.</p>
     */
    inline int GetMaximumCount() const{ return m_maximumCount; }

    /**
     * <p>The maximum number of artifacts allowed for the action type.</p>
     */
    inline bool MaximumCountHasBeenSet() const { return m_maximumCountHasBeenSet; }

    /**
     * <p>The maximum number of artifacts allowed for the action type.</p>
     */
    inline void SetMaximumCount(int value) { m_maximumCountHasBeenSet = true; m_maximumCount = value; }

    /**
     * <p>The maximum number of artifacts allowed for the action type.</p>
     */
    inline ArtifactDetails& WithMaximumCount(int value) { SetMaximumCount(value); return *this;}

  private:

    int m_minimumCount;
    bool m_minimumCountHasBeenSet;

    int m_maximumCount;
    bool m_maximumCountHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
