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
#include <aws/datapipeline/model/Operator.h>
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
   * <p>A comparision that is used to determine whether a query should return this
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/Selector">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API Selector
  {
  public:
    Selector();
    Selector(Aws::Utils::Json::JsonView jsonValue);
    Selector& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the field that the operator will be applied to. The field name is
     * the "key" portion of the field definition in the pipeline definition syntax that
     * is used by the AWS Data Pipeline API. If the field is not set on the object, the
     * condition fails.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }

    /**
     * <p>The name of the field that the operator will be applied to. The field name is
     * the "key" portion of the field definition in the pipeline definition syntax that
     * is used by the AWS Data Pipeline API. If the field is not set on the object, the
     * condition fails.</p>
     */
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }

    /**
     * <p>The name of the field that the operator will be applied to. The field name is
     * the "key" portion of the field definition in the pipeline definition syntax that
     * is used by the AWS Data Pipeline API. If the field is not set on the object, the
     * condition fails.</p>
     */
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }

    /**
     * <p>The name of the field that the operator will be applied to. The field name is
     * the "key" portion of the field definition in the pipeline definition syntax that
     * is used by the AWS Data Pipeline API. If the field is not set on the object, the
     * condition fails.</p>
     */
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }

    /**
     * <p>The name of the field that the operator will be applied to. The field name is
     * the "key" portion of the field definition in the pipeline definition syntax that
     * is used by the AWS Data Pipeline API. If the field is not set on the object, the
     * condition fails.</p>
     */
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }

    /**
     * <p>The name of the field that the operator will be applied to. The field name is
     * the "key" portion of the field definition in the pipeline definition syntax that
     * is used by the AWS Data Pipeline API. If the field is not set on the object, the
     * condition fails.</p>
     */
    inline Selector& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}

    /**
     * <p>The name of the field that the operator will be applied to. The field name is
     * the "key" portion of the field definition in the pipeline definition syntax that
     * is used by the AWS Data Pipeline API. If the field is not set on the object, the
     * condition fails.</p>
     */
    inline Selector& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}

    /**
     * <p>The name of the field that the operator will be applied to. The field name is
     * the "key" portion of the field definition in the pipeline definition syntax that
     * is used by the AWS Data Pipeline API. If the field is not set on the object, the
     * condition fails.</p>
     */
    inline Selector& WithFieldName(const char* value) { SetFieldName(value); return *this;}


    
    inline const Operator& GetOperator() const{ return m_operator; }

    
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    
    inline void SetOperator(const Operator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    
    inline void SetOperator(Operator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    
    inline Selector& WithOperator(const Operator& value) { SetOperator(value); return *this;}

    
    inline Selector& WithOperator(Operator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet;

    Operator m_operator;
    bool m_operatorHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
