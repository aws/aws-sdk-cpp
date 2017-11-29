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
#include <aws/mq/model/EngineType.h>
#include <aws/mq/model/ConfigurationRevision.h>
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
   * Returns information about all configurations.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/Configuration">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API Configuration
  {
  public:
    Configuration();
    Configuration(const Aws::Utils::Json::JsonValue& jsonValue);
    Configuration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Required. The ARN of the configuration.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * Required. The ARN of the configuration.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * Required. The ARN of the configuration.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * Required. The ARN of the configuration.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * Required. The ARN of the configuration.
     */
    inline Configuration& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * Required. The ARN of the configuration.
     */
    inline Configuration& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * Required. The ARN of the configuration.
     */
    inline Configuration& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * Required. The description of the configuration.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * Required. The description of the configuration.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * Required. The description of the configuration.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * Required. The description of the configuration.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * Required. The description of the configuration.
     */
    inline Configuration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * Required. The description of the configuration.
     */
    inline Configuration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * Required. The description of the configuration.
     */
    inline Configuration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline void SetEngineType(const EngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline void SetEngineType(EngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline Configuration& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline Configuration& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}


    /**
     * Required. The version of the broker engine.
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * Required. The version of the broker engine.
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * Required. The version of the broker engine.
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * Required. The version of the broker engine.
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * Required. The version of the broker engine.
     */
    inline Configuration& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * Required. The version of the broker engine.
     */
    inline Configuration& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * Required. The version of the broker engine.
     */
    inline Configuration& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline Configuration& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline Configuration& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline Configuration& WithId(const char* value) { SetId(value); return *this;}


    /**
     * Required. The latest revision of the configuration.
     */
    inline const ConfigurationRevision& GetLatestRevision() const{ return m_latestRevision; }

    /**
     * Required. The latest revision of the configuration.
     */
    inline void SetLatestRevision(const ConfigurationRevision& value) { m_latestRevisionHasBeenSet = true; m_latestRevision = value; }

    /**
     * Required. The latest revision of the configuration.
     */
    inline void SetLatestRevision(ConfigurationRevision&& value) { m_latestRevisionHasBeenSet = true; m_latestRevision = std::move(value); }

    /**
     * Required. The latest revision of the configuration.
     */
    inline Configuration& WithLatestRevision(const ConfigurationRevision& value) { SetLatestRevision(value); return *this;}

    /**
     * Required. The latest revision of the configuration.
     */
    inline Configuration& WithLatestRevision(ConfigurationRevision&& value) { SetLatestRevision(std::move(value)); return *this;}


    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline Configuration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline Configuration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline Configuration& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    EngineType m_engineType;
    bool m_engineTypeHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    ConfigurationRevision m_latestRevision;
    bool m_latestRevisionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
