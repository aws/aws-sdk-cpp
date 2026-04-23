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
#include <aws/datapipeline/model/ParameterAttribute.h>
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
   * <p>Contains information about a parameter object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ParameterObject">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API ParameterObject
  {
  public:
    ParameterObject();
    ParameterObject(Aws::Utils::Json::JsonView jsonValue);
    ParameterObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the parameter object. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the parameter object. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the parameter object. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the parameter object. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the parameter object. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the parameter object. </p>
     */
    inline ParameterObject& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the parameter object. </p>
     */
    inline ParameterObject& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the parameter object. </p>
     */
    inline ParameterObject& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The attributes of the parameter object.</p>
     */
    inline const Aws::Vector<ParameterAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes of the parameter object.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The attributes of the parameter object.</p>
     */
    inline void SetAttributes(const Aws::Vector<ParameterAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attributes of the parameter object.</p>
     */
    inline void SetAttributes(Aws::Vector<ParameterAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The attributes of the parameter object.</p>
     */
    inline ParameterObject& WithAttributes(const Aws::Vector<ParameterAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes of the parameter object.</p>
     */
    inline ParameterObject& WithAttributes(Aws::Vector<ParameterAttribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes of the parameter object.</p>
     */
    inline ParameterObject& AddAttributes(const ParameterAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The attributes of the parameter object.</p>
     */
    inline ParameterObject& AddAttributes(ParameterAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::Vector<ParameterAttribute> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
