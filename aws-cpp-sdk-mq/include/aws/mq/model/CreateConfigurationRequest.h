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
#include <aws/mq/MQRequest.h>
#include <aws/mq/model/EngineType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MQ
{
namespace Model
{

  /**
   * Creates a new configuration for the specified configuration name. Amazon MQ uses
   * the default configuration (the engine type and version). Note: If the
   * configuration name already exists, Amazon MQ doesn't create a
   * configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API CreateConfigurationRequest : public MQRequest
  {
  public:
    CreateConfigurationRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfiguration"; }

    Aws::String SerializePayload() const override;


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
    inline CreateConfigurationRequest& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline CreateConfigurationRequest& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}


    /**
     * Required. The version of the broker engine. Note: Currently, Amazon MQ supports
     * only 5.15.0.
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * Required. The version of the broker engine. Note: Currently, Amazon MQ supports
     * only 5.15.0.
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * Required. The version of the broker engine. Note: Currently, Amazon MQ supports
     * only 5.15.0.
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * Required. The version of the broker engine. Note: Currently, Amazon MQ supports
     * only 5.15.0.
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * Required. The version of the broker engine. Note: Currently, Amazon MQ supports
     * only 5.15.0.
     */
    inline CreateConfigurationRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * Required. The version of the broker engine. Note: Currently, Amazon MQ supports
     * only 5.15.0.
     */
    inline CreateConfigurationRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * Required. The version of the broker engine. Note: Currently, Amazon MQ supports
     * only 5.15.0.
     */
    inline CreateConfigurationRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


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
    inline CreateConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline CreateConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline CreateConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    EngineType m_engineType;
    bool m_engineTypeHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
