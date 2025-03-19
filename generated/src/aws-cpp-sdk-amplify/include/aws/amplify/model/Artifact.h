/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p>Describes an artifact. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/Artifact">AWS
   * API Reference</a></p>
   */
  class Artifact
  {
  public:
    AWS_AMPLIFY_API Artifact() = default;
    AWS_AMPLIFY_API Artifact(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Artifact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file name for the artifact. </p>
     */
    inline const Aws::String& GetArtifactFileName() const { return m_artifactFileName; }
    inline bool ArtifactFileNameHasBeenSet() const { return m_artifactFileNameHasBeenSet; }
    template<typename ArtifactFileNameT = Aws::String>
    void SetArtifactFileName(ArtifactFileNameT&& value) { m_artifactFileNameHasBeenSet = true; m_artifactFileName = std::forward<ArtifactFileNameT>(value); }
    template<typename ArtifactFileNameT = Aws::String>
    Artifact& WithArtifactFileName(ArtifactFileNameT&& value) { SetArtifactFileName(std::forward<ArtifactFileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for the artifact. </p>
     */
    inline const Aws::String& GetArtifactId() const { return m_artifactId; }
    inline bool ArtifactIdHasBeenSet() const { return m_artifactIdHasBeenSet; }
    template<typename ArtifactIdT = Aws::String>
    void SetArtifactId(ArtifactIdT&& value) { m_artifactIdHasBeenSet = true; m_artifactId = std::forward<ArtifactIdT>(value); }
    template<typename ArtifactIdT = Aws::String>
    Artifact& WithArtifactId(ArtifactIdT&& value) { SetArtifactId(std::forward<ArtifactIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_artifactFileName;
    bool m_artifactFileNameHasBeenSet = false;

    Aws::String m_artifactId;
    bool m_artifactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
