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
    AWS_KINESISANALYTICSV2_API CustomArtifactConfiguration() = default;
    AWS_KINESISANALYTICSV2_API CustomArtifactConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CustomArtifactConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> <code>UDF</code> stands for user-defined functions. This type of artifact
     * must be in an S3 bucket. A <code>DEPENDENCY_JAR</code> can be in either Maven or
     * an S3 bucket.</p>
     */
    inline ArtifactType GetArtifactType() const { return m_artifactType; }
    inline bool ArtifactTypeHasBeenSet() const { return m_artifactTypeHasBeenSet; }
    inline void SetArtifactType(ArtifactType value) { m_artifactTypeHasBeenSet = true; m_artifactType = value; }
    inline CustomArtifactConfiguration& WithArtifactType(ArtifactType value) { SetArtifactType(value); return *this;}
    ///@}

    ///@{
    
    inline const S3ContentLocation& GetS3ContentLocation() const { return m_s3ContentLocation; }
    inline bool S3ContentLocationHasBeenSet() const { return m_s3ContentLocationHasBeenSet; }
    template<typename S3ContentLocationT = S3ContentLocation>
    void SetS3ContentLocation(S3ContentLocationT&& value) { m_s3ContentLocationHasBeenSet = true; m_s3ContentLocation = std::forward<S3ContentLocationT>(value); }
    template<typename S3ContentLocationT = S3ContentLocation>
    CustomArtifactConfiguration& WithS3ContentLocation(S3ContentLocationT&& value) { SetS3ContentLocation(std::forward<S3ContentLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters required to fully specify a Maven reference.</p>
     */
    inline const MavenReference& GetMavenReference() const { return m_mavenReference; }
    inline bool MavenReferenceHasBeenSet() const { return m_mavenReferenceHasBeenSet; }
    template<typename MavenReferenceT = MavenReference>
    void SetMavenReference(MavenReferenceT&& value) { m_mavenReferenceHasBeenSet = true; m_mavenReference = std::forward<MavenReferenceT>(value); }
    template<typename MavenReferenceT = MavenReference>
    CustomArtifactConfiguration& WithMavenReference(MavenReferenceT&& value) { SetMavenReference(std::forward<MavenReferenceT>(value)); return *this;}
    ///@}
  private:

    ArtifactType m_artifactType{ArtifactType::NOT_SET};
    bool m_artifactTypeHasBeenSet = false;

    S3ContentLocation m_s3ContentLocation;
    bool m_s3ContentLocationHasBeenSet = false;

    MavenReference m_mavenReference;
    bool m_mavenReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
