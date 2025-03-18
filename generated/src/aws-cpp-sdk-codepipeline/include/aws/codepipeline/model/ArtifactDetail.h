/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ArtifactDetail
  {
  public:
    AWS_CODEPIPELINE_API ArtifactDetail() = default;
    AWS_CODEPIPELINE_API ArtifactDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ArtifactDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The artifact object name for the action execution.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ArtifactDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 artifact location for the action execution.</p>
     */
    inline const S3Location& GetS3location() const { return m_s3location; }
    inline bool S3locationHasBeenSet() const { return m_s3locationHasBeenSet; }
    template<typename S3locationT = S3Location>
    void SetS3location(S3locationT&& value) { m_s3locationHasBeenSet = true; m_s3location = std::forward<S3locationT>(value); }
    template<typename S3locationT = S3Location>
    ArtifactDetail& WithS3location(S3locationT&& value) { SetS3location(std::forward<S3locationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    S3Location m_s3location;
    bool m_s3locationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
