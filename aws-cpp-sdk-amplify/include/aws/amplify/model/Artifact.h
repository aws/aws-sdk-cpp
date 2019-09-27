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
   * <p> Structure for artifact. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/Artifact">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API Artifact
  {
  public:
    Artifact();
    Artifact(Aws::Utils::Json::JsonView jsonValue);
    Artifact& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> File name for the artifact. </p>
     */
    inline const Aws::String& GetArtifactFileName() const{ return m_artifactFileName; }

    /**
     * <p> File name for the artifact. </p>
     */
    inline bool ArtifactFileNameHasBeenSet() const { return m_artifactFileNameHasBeenSet; }

    /**
     * <p> File name for the artifact. </p>
     */
    inline void SetArtifactFileName(const Aws::String& value) { m_artifactFileNameHasBeenSet = true; m_artifactFileName = value; }

    /**
     * <p> File name for the artifact. </p>
     */
    inline void SetArtifactFileName(Aws::String&& value) { m_artifactFileNameHasBeenSet = true; m_artifactFileName = std::move(value); }

    /**
     * <p> File name for the artifact. </p>
     */
    inline void SetArtifactFileName(const char* value) { m_artifactFileNameHasBeenSet = true; m_artifactFileName.assign(value); }

    /**
     * <p> File name for the artifact. </p>
     */
    inline Artifact& WithArtifactFileName(const Aws::String& value) { SetArtifactFileName(value); return *this;}

    /**
     * <p> File name for the artifact. </p>
     */
    inline Artifact& WithArtifactFileName(Aws::String&& value) { SetArtifactFileName(std::move(value)); return *this;}

    /**
     * <p> File name for the artifact. </p>
     */
    inline Artifact& WithArtifactFileName(const char* value) { SetArtifactFileName(value); return *this;}


    /**
     * <p> Unique Id for a artifact. </p>
     */
    inline const Aws::String& GetArtifactId() const{ return m_artifactId; }

    /**
     * <p> Unique Id for a artifact. </p>
     */
    inline bool ArtifactIdHasBeenSet() const { return m_artifactIdHasBeenSet; }

    /**
     * <p> Unique Id for a artifact. </p>
     */
    inline void SetArtifactId(const Aws::String& value) { m_artifactIdHasBeenSet = true; m_artifactId = value; }

    /**
     * <p> Unique Id for a artifact. </p>
     */
    inline void SetArtifactId(Aws::String&& value) { m_artifactIdHasBeenSet = true; m_artifactId = std::move(value); }

    /**
     * <p> Unique Id for a artifact. </p>
     */
    inline void SetArtifactId(const char* value) { m_artifactIdHasBeenSet = true; m_artifactId.assign(value); }

    /**
     * <p> Unique Id for a artifact. </p>
     */
    inline Artifact& WithArtifactId(const Aws::String& value) { SetArtifactId(value); return *this;}

    /**
     * <p> Unique Id for a artifact. </p>
     */
    inline Artifact& WithArtifactId(Aws::String&& value) { SetArtifactId(std::move(value)); return *this;}

    /**
     * <p> Unique Id for a artifact. </p>
     */
    inline Artifact& WithArtifactId(const char* value) { SetArtifactId(value); return *this;}

  private:

    Aws::String m_artifactFileName;
    bool m_artifactFileNameHasBeenSet;

    Aws::String m_artifactId;
    bool m_artifactIdHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
