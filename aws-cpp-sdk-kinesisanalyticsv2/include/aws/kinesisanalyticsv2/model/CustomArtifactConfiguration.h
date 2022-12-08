/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ArtifactType.h>
#include <aws/kinesisanalyticsv2/model/S3ContentLocation.h>
#include <aws/kinesisanalyticsv2/model/MavenReference.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Specifies dependency JARs, as well as JAR files that contain user-defined
   * functions (UDF).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CustomArtifactConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomArtifactConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API CustomArtifactConfiguration();
    AWS_KINESISANALYTICSV2_API CustomArtifactConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CustomArtifactConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <code>UDF</code> stands for user-defined functions. This type of artifact
     * must be in an S3 bucket. A <code>DEPENDENCY_JAR</code> can be in either Maven or
     * an S3 bucket.</p>
     */
    inline const ArtifactType& GetArtifactType() const{ return m_artifactType; }

    /**
     * <p> <code>UDF</code> stands for user-defined functions. This type of artifact
     * must be in an S3 bucket. A <code>DEPENDENCY_JAR</code> can be in either Maven or
     * an S3 bucket.</p>
     */
    inline bool ArtifactTypeHasBeenSet() const { return m_artifactTypeHasBeenSet; }

    /**
     * <p> <code>UDF</code> stands for user-defined functions. This type of artifact
     * must be in an S3 bucket. A <code>DEPENDENCY_JAR</code> can be in either Maven or
     * an S3 bucket.</p>
     */
    inline void SetArtifactType(const ArtifactType& value) { m_artifactTypeHasBeenSet = true; m_artifactType = value; }

    /**
     * <p> <code>UDF</code> stands for user-defined functions. This type of artifact
     * must be in an S3 bucket. A <code>DEPENDENCY_JAR</code> can be in either Maven or
     * an S3 bucket.</p>
     */
    inline void SetArtifactType(ArtifactType&& value) { m_artifactTypeHasBeenSet = true; m_artifactType = std::move(value); }

    /**
     * <p> <code>UDF</code> stands for user-defined functions. This type of artifact
     * must be in an S3 bucket. A <code>DEPENDENCY_JAR</code> can be in either Maven or
     * an S3 bucket.</p>
     */
    inline CustomArtifactConfiguration& WithArtifactType(const ArtifactType& value) { SetArtifactType(value); return *this;}

    /**
     * <p> <code>UDF</code> stands for user-defined functions. This type of artifact
     * must be in an S3 bucket. A <code>DEPENDENCY_JAR</code> can be in either Maven or
     * an S3 bucket.</p>
     */
    inline CustomArtifactConfiguration& WithArtifactType(ArtifactType&& value) { SetArtifactType(std::move(value)); return *this;}


    
    inline const S3ContentLocation& GetS3ContentLocation() const{ return m_s3ContentLocation; }

    
    inline bool S3ContentLocationHasBeenSet() const { return m_s3ContentLocationHasBeenSet; }

    
    inline void SetS3ContentLocation(const S3ContentLocation& value) { m_s3ContentLocationHasBeenSet = true; m_s3ContentLocation = value; }

    
    inline void SetS3ContentLocation(S3ContentLocation&& value) { m_s3ContentLocationHasBeenSet = true; m_s3ContentLocation = std::move(value); }

    
    inline CustomArtifactConfiguration& WithS3ContentLocation(const S3ContentLocation& value) { SetS3ContentLocation(value); return *this;}

    
    inline CustomArtifactConfiguration& WithS3ContentLocation(S3ContentLocation&& value) { SetS3ContentLocation(std::move(value)); return *this;}


    /**
     * <p>The parameters required to fully specify a Maven reference.</p>
     */
    inline const MavenReference& GetMavenReference() const{ return m_mavenReference; }

    /**
     * <p>The parameters required to fully specify a Maven reference.</p>
     */
    inline bool MavenReferenceHasBeenSet() const { return m_mavenReferenceHasBeenSet; }

    /**
     * <p>The parameters required to fully specify a Maven reference.</p>
     */
    inline void SetMavenReference(const MavenReference& value) { m_mavenReferenceHasBeenSet = true; m_mavenReference = value; }

    /**
     * <p>The parameters required to fully specify a Maven reference.</p>
     */
    inline void SetMavenReference(MavenReference&& value) { m_mavenReferenceHasBeenSet = true; m_mavenReference = std::move(value); }

    /**
     * <p>The parameters required to fully specify a Maven reference.</p>
     */
    inline CustomArtifactConfiguration& WithMavenReference(const MavenReference& value) { SetMavenReference(value); return *this;}

    /**
     * <p>The parameters required to fully specify a Maven reference.</p>
     */
    inline CustomArtifactConfiguration& WithMavenReference(MavenReference&& value) { SetMavenReference(std::move(value)); return *this;}

  private:

    ArtifactType m_artifactType;
    bool m_artifactTypeHasBeenSet = false;

    S3ContentLocation m_s3ContentLocation;
    bool m_s3ContentLocationHasBeenSet = false;

    MavenReference m_mavenReference;
    bool m_mavenReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
