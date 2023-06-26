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
   * <p> Describes an artifact. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/Artifact">AWS
   * API Reference</a></p>
   */
  class Artifact
  {
  public:
    AWS_AMPLIFY_API Artifact();
    AWS_AMPLIFY_API Artifact(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Artifact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The file name for the artifact. </p>
     */
    inline const Aws::String& GetArtifactFileName() const{ return m_artifactFileName; }

    /**
     * <p> The file name for the artifact. </p>
     */
    inline bool ArtifactFileNameHasBeenSet() const { return m_artifactFileNameHasBeenSet; }

    /**
     * <p> The file name for the artifact. </p>
     */
    inline void SetArtifactFileName(const Aws::String& value) { m_artifactFileNameHasBeenSet = true; m_artifactFileName = value; }

    /**
     * <p> The file name for the artifact. </p>
     */
    inline void SetArtifactFileName(Aws::String&& value) { m_artifactFileNameHasBeenSet = true; m_artifactFileName = std::move(value); }

    /**
     * <p> The file name for the artifact. </p>
     */
    inline void SetArtifactFileName(const char* value) { m_artifactFileNameHasBeenSet = true; m_artifactFileName.assign(value); }

    /**
     * <p> The file name for the artifact. </p>
     */
    inline Artifact& WithArtifactFileName(const Aws::String& value) { SetArtifactFileName(value); return *this;}

    /**
     * <p> The file name for the artifact. </p>
     */
    inline Artifact& WithArtifactFileName(Aws::String&& value) { SetArtifactFileName(std::move(value)); return *this;}

    /**
     * <p> The file name for the artifact. </p>
     */
    inline Artifact& WithArtifactFileName(const char* value) { SetArtifactFileName(value); return *this;}


    /**
     * <p> The unique ID for the artifact. </p>
     */
    inline const Aws::String& GetArtifactId() const{ return m_artifactId; }

    /**
     * <p> The unique ID for the artifact. </p>
     */
    inline bool ArtifactIdHasBeenSet() const { return m_artifactIdHasBeenSet; }

    /**
     * <p> The unique ID for the artifact. </p>
     */
    inline void SetArtifactId(const Aws::String& value) { m_artifactIdHasBeenSet = true; m_artifactId = value; }

    /**
     * <p> The unique ID for the artifact. </p>
     */
    inline void SetArtifactId(Aws::String&& value) { m_artifactIdHasBeenSet = true; m_artifactId = std::move(value); }

    /**
     * <p> The unique ID for the artifact. </p>
     */
    inline void SetArtifactId(const char* value) { m_artifactIdHasBeenSet = true; m_artifactId.assign(value); }

    /**
     * <p> The unique ID for the artifact. </p>
     */
    inline Artifact& WithArtifactId(const Aws::String& value) { SetArtifactId(value); return *this;}

    /**
     * <p> The unique ID for the artifact. </p>
     */
    inline Artifact& WithArtifactId(Aws::String&& value) { SetArtifactId(std::move(value)); return *this;}

    /**
     * <p> The unique ID for the artifact. </p>
     */
    inline Artifact& WithArtifactId(const char* value) { SetArtifactId(value); return *this;}

  private:

    Aws::String m_artifactFileName;
    bool m_artifactFileNameHasBeenSet = false;

    Aws::String m_artifactId;
    bool m_artifactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
