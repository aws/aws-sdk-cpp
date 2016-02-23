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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * Describes the association of an SSM document and an instance.
   */
  class AWS_SSM_API CreateAssociationBatchRequestEntry
  {
  public:
    CreateAssociationBatchRequestEntry();
    CreateAssociationBatchRequestEntry(const Aws::Utils::Json::JsonValue& jsonValue);
    CreateAssociationBatchRequestEntry& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * The name of the configuration document.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the configuration document.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the configuration document.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the configuration document.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the configuration document.
     */
    inline CreateAssociationBatchRequestEntry& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the configuration document.
     */
    inline CreateAssociationBatchRequestEntry& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * The name of the configuration document.
     */
    inline CreateAssociationBatchRequestEntry& WithName(const char* value) { SetName(value); return *this;}

    /**
     * The ID of the instance.
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * The ID of the instance.
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * The ID of the instance.
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * The ID of the instance.
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * The ID of the instance.
     */
    inline CreateAssociationBatchRequestEntry& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * The ID of the instance.
     */
    inline CreateAssociationBatchRequestEntry& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * The ID of the instance.
     */
    inline CreateAssociationBatchRequestEntry& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * A description of the parameters for a document.
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * A description of the parameters for a document.
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * A description of the parameters for a document.
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * A description of the parameters for a document.
     */
    inline CreateAssociationBatchRequestEntry& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * A description of the parameters for a document.
     */
    inline CreateAssociationBatchRequestEntry& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(value); return *this;}

    /**
     * A description of the parameters for a document.
     */
    inline CreateAssociationBatchRequestEntry& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * A description of the parameters for a document.
     */
    inline CreateAssociationBatchRequestEntry& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * A description of the parameters for a document.
     */
    inline CreateAssociationBatchRequestEntry& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * A description of the parameters for a document.
     */
    inline CreateAssociationBatchRequestEntry& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * A description of the parameters for a document.
     */
    inline CreateAssociationBatchRequestEntry& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * A description of the parameters for a document.
     */
    inline CreateAssociationBatchRequestEntry& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
