/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ArtifactLocation
  {
  public:
    AWS_CODEPIPELINE_API ArtifactLocation();
    AWS_CODEPIPELINE_API ArtifactLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ArtifactLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The S3 bucket that contains the artifact.</p>
     */
    inline const S3ArtifactLocation& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>The S3 bucket that contains the artifact.</p>
     */
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }

    /**
     * <p>The S3 bucket that contains the artifact.</p>
     */
    inline void SetS3Location(const S3ArtifactLocation& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    /**
     * <p>The S3 bucket that contains the artifact.</p>
     */
    inline void SetS3Location(S3ArtifactLocation&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }

    /**
     * <p>The S3 bucket that contains the artifact.</p>
     */
    inline ArtifactLocation& WithS3Location(const S3ArtifactLocation& value) { SetS3Location(value); return *this;}

    /**
     * <p>The S3 bucket that contains the artifact.</p>
     */
    inline ArtifactLocation& WithS3Location(S3ArtifactLocation&& value) { SetS3Location(std::move(value)); return *this;}

  private:

    ArtifactLocationType m_type;
    bool m_typeHasBeenSet = false;

    S3ArtifactLocation m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
