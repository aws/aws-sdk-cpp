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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace MQ
{
namespace Model
{

  /**
   * Returns information about the specified configuration revision.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ConfigurationRevision">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API ConfigurationRevision
  {
  public:
    ConfigurationRevision();
    ConfigurationRevision(Aws::Utils::Json::JsonView jsonValue);
    ConfigurationRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Required. The date and time of the configuration revision.
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * Required. The date and time of the configuration revision.
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * Required. The date and time of the configuration revision.
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * Required. The date and time of the configuration revision.
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * Required. The date and time of the configuration revision.
     */
    inline ConfigurationRevision& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * Required. The date and time of the configuration revision.
     */
    inline ConfigurationRevision& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * The description of the configuration revision.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * The description of the configuration revision.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * The description of the configuration revision.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * The description of the configuration revision.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * The description of the configuration revision.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * The description of the configuration revision.
     */
    inline ConfigurationRevision& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * The description of the configuration revision.
     */
    inline ConfigurationRevision& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * The description of the configuration revision.
     */
    inline ConfigurationRevision& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * Required. The revision number of the configuration.
     */
    inline int GetRevision() const{ return m_revision; }

    /**
     * Required. The revision number of the configuration.
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * Required. The revision number of the configuration.
     */
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * Required. The revision number of the configuration.
     */
    inline ConfigurationRevision& WithRevision(int value) { SetRevision(value); return *this;}

  private:

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    int m_revision;
    bool m_revisionHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
