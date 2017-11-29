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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
    ConfigurationRevision(const Aws::Utils::Json::JsonValue& jsonValue);
    ConfigurationRevision& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The description of the configuration revision.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

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
     * Required. The revision of the configuration.
     */
    inline int GetRevision() const{ return m_revision; }

    /**
     * Required. The revision of the configuration.
     */
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * Required. The revision of the configuration.
     */
    inline ConfigurationRevision& WithRevision(int value) { SetRevision(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    int m_revision;
    bool m_revisionHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
