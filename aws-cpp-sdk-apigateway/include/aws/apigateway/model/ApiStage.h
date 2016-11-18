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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>API stage name of the associated API stage in a usage plan.</p>
   */
  class AWS_APIGATEWAY_API ApiStage
  {
  public:
    ApiStage();
    ApiStage(const Aws::Utils::Json::JsonValue& jsonValue);
    ApiStage& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>API Id of the associated API stage in a usage plan.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>API Id of the associated API stage in a usage plan.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>API Id of the associated API stage in a usage plan.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>API Id of the associated API stage in a usage plan.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>API Id of the associated API stage in a usage plan.</p>
     */
    inline ApiStage& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>API Id of the associated API stage in a usage plan.</p>
     */
    inline ApiStage& WithApiId(Aws::String&& value) { SetApiId(value); return *this;}

    /**
     * <p>API Id of the associated API stage in a usage plan.</p>
     */
    inline ApiStage& WithApiId(const char* value) { SetApiId(value); return *this;}

    /**
     * <p>API stage name of the associated API stage in a usage plan.</p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }

    /**
     * <p>API stage name of the associated API stage in a usage plan.</p>
     */
    inline void SetStage(const Aws::String& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p>API stage name of the associated API stage in a usage plan.</p>
     */
    inline void SetStage(Aws::String&& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p>API stage name of the associated API stage in a usage plan.</p>
     */
    inline void SetStage(const char* value) { m_stageHasBeenSet = true; m_stage.assign(value); }

    /**
     * <p>API stage name of the associated API stage in a usage plan.</p>
     */
    inline ApiStage& WithStage(const Aws::String& value) { SetStage(value); return *this;}

    /**
     * <p>API stage name of the associated API stage in a usage plan.</p>
     */
    inline ApiStage& WithStage(Aws::String&& value) { SetStage(value); return *this;}

    /**
     * <p>API stage name of the associated API stage in a usage plan.</p>
     */
    inline ApiStage& WithStage(const char* value) { SetStage(value); return *this;}

  private:
    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;
    Aws::String m_stage;
    bool m_stageHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
