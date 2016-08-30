/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codepipeline/model/ArtifactRevision.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about an artifact revision.</p>
   */
  class AWS_CODEPIPELINE_API ArtifactRevisionInformation
  {
  public:
    ArtifactRevisionInformation();
    ArtifactRevisionInformation(const Aws::Utils::Json::JsonValue& jsonValue);
    ArtifactRevisionInformation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of an artifact. This name might be system-generated, such as
     * "MyApp", or might be defined by the user when an action is created.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of an artifact. This name might be system-generated, such as
     * "MyApp", or might be defined by the user when an action is created.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of an artifact. This name might be system-generated, such as
     * "MyApp", or might be defined by the user when an action is created.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of an artifact. This name might be system-generated, such as
     * "MyApp", or might be defined by the user when an action is created.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of an artifact. This name might be system-generated, such as
     * "MyApp", or might be defined by the user when an action is created.</p>
     */
    inline ArtifactRevisionInformation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of an artifact. This name might be system-generated, such as
     * "MyApp", or might be defined by the user when an action is created.</p>
     */
    inline ArtifactRevisionInformation& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of an artifact. This name might be system-generated, such as
     * "MyApp", or might be defined by the user when an action is created.</p>
     */
    inline ArtifactRevisionInformation& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Represents details about the ArtifactRevision object.</p>
     */
    inline const ArtifactRevision& GetRevision() const{ return m_revision; }

    /**
     * <p>Represents details about the ArtifactRevision object.</p>
     */
    inline void SetRevision(const ArtifactRevision& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>Represents details about the ArtifactRevision object.</p>
     */
    inline void SetRevision(ArtifactRevision&& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>Represents details about the ArtifactRevision object.</p>
     */
    inline ArtifactRevisionInformation& WithRevision(const ArtifactRevision& value) { SetRevision(value); return *this;}

    /**
     * <p>Represents details about the ArtifactRevision object.</p>
     */
    inline ArtifactRevisionInformation& WithRevision(ArtifactRevision&& value) { SetRevision(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    ArtifactRevision m_revision;
    bool m_revisionHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
