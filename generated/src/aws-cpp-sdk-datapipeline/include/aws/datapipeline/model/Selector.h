/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Selector
  {
  public:
    AWS_DATAPIPELINE_API Selector();
    AWS_DATAPIPELINE_API Selector(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Selector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_fieldNameHasBeenSet = false;

    Operator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
