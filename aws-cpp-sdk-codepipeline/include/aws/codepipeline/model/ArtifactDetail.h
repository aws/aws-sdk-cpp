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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/S3Location.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Artifact details for the action execution, such as the artifact
   * location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ArtifactDetail">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API ArtifactDetail
  {
  public:
    ArtifactDetail();
    ArtifactDetail(Aws::Utils::Json::JsonView jsonValue);
    ArtifactDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The artifact object name for the action execution.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The artifact object name for the action execution.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The artifact object name for the action execution.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The artifact object name for the action execution.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The artifact object name for the action execution.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The artifact object name for the action execution.</p>
     */
    inline ArtifactDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The artifact object name for the action execution.</p>
     */
    inline ArtifactDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The artifact object name for the action execution.</p>
     */
    inline ArtifactDetail& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon S3 artifact location for the action execution.</p>
     */
    inline const S3Location& GetS3location() const{ return m_s3location; }

    /**
     * <p>The Amazon S3 artifact location for the action execution.</p>
     */
    inline bool S3locationHasBeenSet() const { return m_s3locationHasBeenSet; }

    /**
     * <p>The Amazon S3 artifact location for the action execution.</p>
     */
    inline void SetS3location(const S3Location& value) { m_s3locationHasBeenSet = true; m_s3location = value; }

    /**
     * <p>The Amazon S3 artifact location for the action execution.</p>
     */
    inline void SetS3location(S3Location&& value) { m_s3locationHasBeenSet = true; m_s3location = std::move(value); }

    /**
     * <p>The Amazon S3 artifact location for the action execution.</p>
     */
    inline ArtifactDetail& WithS3location(const S3Location& value) { SetS3location(value); return *this;}

    /**
     * <p>The Amazon S3 artifact location for the action execution.</p>
     */
    inline ArtifactDetail& WithS3location(S3Location&& value) { SetS3location(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    S3Location m_s3location;
    bool m_s3locationHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
