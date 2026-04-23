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
#include <aws/codepipeline/model/ArtifactLocationType.h>
#include <aws/codepipeline/model/S3ArtifactLocation.h>
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
   * <p>Represents information about the location of an artifact.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ArtifactLocation">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API ArtifactLocation
  {
  public:
    ArtifactLocation();
    ArtifactLocation(Aws::Utils::Json::JsonView jsonValue);
    ArtifactLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of artifact in the location.</p>
     */
    inline const ArtifactLocationType& GetType() const{ return m_type; }

    /**
     * <p>The type of artifact in the location.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of artifact in the location.</p>
     */
    inline void SetType(const ArtifactLocationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of artifact in the location.</p>
     */
    inline void SetType(ArtifactLocationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of artifact in the location.</p>
     */
    inline ArtifactLocation& WithType(const ArtifactLocationType& value) { SetType(value); return *this;}

    /**
     * <p>The type of artifact in the location.</p>
     */
    inline ArtifactLocation& WithType(ArtifactLocationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 bucket that contains the artifact.</p>
     */
    inline const S3ArtifactLocation& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>The Amazon S3 bucket that contains the artifact.</p>
     */
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket that contains the artifact.</p>
     */
    inline void SetS3Location(const S3ArtifactLocation& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    /**
     * <p>The Amazon S3 bucket that contains the artifact.</p>
     */
    inline void SetS3Location(S3ArtifactLocation&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }

    /**
     * <p>The Amazon S3 bucket that contains the artifact.</p>
     */
    inline ArtifactLocation& WithS3Location(const S3ArtifactLocation& value) { SetS3Location(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that contains the artifact.</p>
     */
    inline ArtifactLocation& WithS3Location(S3ArtifactLocation&& value) { SetS3Location(std::move(value)); return *this;}

  private:

    ArtifactLocationType m_type;
    bool m_typeHasBeenSet;

    S3ArtifactLocation m_s3Location;
    bool m_s3LocationHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
