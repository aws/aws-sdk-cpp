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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datapipeline/model/Field.h>
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
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains information about a pipeline object. This can be a logical,
   * physical, or physical attempt pipeline object. The complete set of components of
   * a pipeline defines the pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/PipelineObject">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API PipelineObject
  {
  public:
    PipelineObject();
    PipelineObject(Aws::Utils::Json::JsonView jsonValue);
    PipelineObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the object.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the object.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the object.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the object.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the object.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the object.</p>
     */
    inline PipelineObject& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the object.</p>
     */
    inline PipelineObject& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the object.</p>
     */
    inline PipelineObject& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the object.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the object.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the object.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the object.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the object.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the object.</p>
     */
    inline PipelineObject& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the object.</p>
     */
    inline PipelineObject& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the object.</p>
     */
    inline PipelineObject& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Key-value pairs that define the properties of the object.</p>
     */
    inline const Aws::Vector<Field>& GetFields() const{ return m_fields; }

    /**
     * <p>Key-value pairs that define the properties of the object.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>Key-value pairs that define the properties of the object.</p>
     */
    inline void SetFields(const Aws::Vector<Field>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>Key-value pairs that define the properties of the object.</p>
     */
    inline void SetFields(Aws::Vector<Field>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>Key-value pairs that define the properties of the object.</p>
     */
    inline PipelineObject& WithFields(const Aws::Vector<Field>& value) { SetFields(value); return *this;}

    /**
     * <p>Key-value pairs that define the properties of the object.</p>
     */
    inline PipelineObject& WithFields(Aws::Vector<Field>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs that define the properties of the object.</p>
     */
    inline PipelineObject& AddFields(const Field& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>Key-value pairs that define the properties of the object.</p>
     */
    inline PipelineObject& AddFields(Field&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Field> m_fields;
    bool m_fieldsHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
