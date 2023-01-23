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
   * <p>Specifies a dependency JAR or a JAR of user-defined functions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CustomArtifactConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class CustomArtifactConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API CustomArtifactConfigurationDescription();
    AWS_KINESISANALYTICSV2_API CustomArtifactConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CustomArtifactConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline CustomArtifactConfigurationDescription& WithArtifactType(const ArtifactType& value) { SetArtifactType(value); return *this;}

    /**
     * <p> <code>UDF</code> stands for user-defined functions. This type of artifact
     * must be in an S3 bucket. A <code>DEPENDENCY_JAR</code> can be in either Maven or
     * an S3 bucket.</p>
     */
    inline CustomArtifactConfigurationDescription& WithArtifactType(ArtifactType&& value) { SetArtifactType(std::move(value)); return *this;}


    
    inline const S3ContentLocation& GetS3ContentLocationDescription() const{ return m_s3ContentLocationDescription; }

    
    inline bool S3ContentLocationDescriptionHasBeenSet() const { return m_s3ContentLocationDescriptionHasBeenSet; }

    
    inline void SetS3ContentLocationDescription(const S3ContentLocation& value) { m_s3ContentLocationDescriptionHasBeenSet = true; m_s3ContentLocationDescription = value; }

    
    inline void SetS3ContentLocationDescription(S3ContentLocation&& value) { m_s3ContentLocationDescriptionHasBeenSet = true; m_s3ContentLocationDescription = std::move(value); }

    
    inline CustomArtifactConfigurationDescription& WithS3ContentLocationDescription(const S3ContentLocation& value) { SetS3ContentLocationDescription(value); return *this;}

    
    inline CustomArtifactConfigurationDescription& WithS3ContentLocationDescription(S3ContentLocation&& value) { SetS3ContentLocationDescription(std::move(value)); return *this;}


    /**
     * <p>The parameters that are required to specify a Maven dependency.</p>
     */
    inline const MavenReference& GetMavenReferenceDescription() const{ return m_mavenReferenceDescription; }

    /**
     * <p>The parameters that are required to specify a Maven dependency.</p>
     */
    inline bool MavenReferenceDescriptionHasBeenSet() const { return m_mavenReferenceDescriptionHasBeenSet; }

    /**
     * <p>The parameters that are required to specify a Maven dependency.</p>
     */
    inline void SetMavenReferenceDescription(const MavenReference& value) { m_mavenReferenceDescriptionHasBeenSet = true; m_mavenReferenceDescription = value; }

    /**
     * <p>The parameters that are required to specify a Maven dependency.</p>
     */
    inline void SetMavenReferenceDescription(MavenReference&& value) { m_mavenReferenceDescriptionHasBeenSet = true; m_mavenReferenceDescription = std::move(value); }

    /**
     * <p>The parameters that are required to specify a Maven dependency.</p>
     */
    inline CustomArtifactConfigurationDescription& WithMavenReferenceDescription(const MavenReference& value) { SetMavenReferenceDescription(value); return *this;}

    /**
     * <p>The parameters that are required to specify a Maven dependency.</p>
     */
    inline CustomArtifactConfigurationDescription& WithMavenReferenceDescription(MavenReference&& value) { SetMavenReferenceDescription(std::move(value)); return *this;}

  private:

    ArtifactType m_artifactType;
    bool m_artifactTypeHasBeenSet = false;

    S3ContentLocation m_s3ContentLocationDescription;
    bool m_s3ContentLocationDescriptionHasBeenSet = false;

    MavenReference m_mavenReferenceDescription;
    bool m_mavenReferenceDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
