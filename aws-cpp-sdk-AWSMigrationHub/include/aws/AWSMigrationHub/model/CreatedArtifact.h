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
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
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
namespace MigrationHub
{
namespace Model
{

  /**
   * <p>An ARN of the AWS cloud resource target receiving the migration (e.g., AMI,
   * EC2 instance, RDS instance, etc.).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/CreatedArtifact">AWS
   * API Reference</a></p>
   */
  class AWS_MIGRATIONHUB_API CreatedArtifact
  {
  public:
    CreatedArtifact();
    CreatedArtifact(Aws::Utils::Json::JsonView jsonValue);
    CreatedArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An ARN that uniquely identifies the result of a migration task.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>An ARN that uniquely identifies the result of a migration task.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>An ARN that uniquely identifies the result of a migration task.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>An ARN that uniquely identifies the result of a migration task.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies the result of a migration task.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>An ARN that uniquely identifies the result of a migration task.</p>
     */
    inline CreatedArtifact& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies the result of a migration task.</p>
     */
    inline CreatedArtifact& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies the result of a migration task.</p>
     */
    inline CreatedArtifact& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description that can be free-form text to record additional detail about
     * the artifact for clarity or for later reference.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description that can be free-form text to record additional detail about
     * the artifact for clarity or for later reference.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description that can be free-form text to record additional detail about
     * the artifact for clarity or for later reference.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description that can be free-form text to record additional detail about
     * the artifact for clarity or for later reference.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description that can be free-form text to record additional detail about
     * the artifact for clarity or for later reference.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description that can be free-form text to record additional detail about
     * the artifact for clarity or for later reference.</p>
     */
    inline CreatedArtifact& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description that can be free-form text to record additional detail about
     * the artifact for clarity or for later reference.</p>
     */
    inline CreatedArtifact& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description that can be free-form text to record additional detail about
     * the artifact for clarity or for later reference.</p>
     */
    inline CreatedArtifact& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
