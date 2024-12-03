/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure that describes how data is partitioned on the
   * target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IntegrationPartition">AWS
   * API Reference</a></p>
   */
  class IntegrationPartition
  {
  public:
    AWS_GLUE_API IntegrationPartition();
    AWS_GLUE_API IntegrationPartition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API IntegrationPartition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field name used to partition data on the target.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }
    inline IntegrationPartition& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}
    inline IntegrationPartition& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}
    inline IntegrationPartition& WithFieldName(const char* value) { SetFieldName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a function used to partition data on the target.</p>
     */
    inline const Aws::String& GetFunctionSpec() const{ return m_functionSpec; }
    inline bool FunctionSpecHasBeenSet() const { return m_functionSpecHasBeenSet; }
    inline void SetFunctionSpec(const Aws::String& value) { m_functionSpecHasBeenSet = true; m_functionSpec = value; }
    inline void SetFunctionSpec(Aws::String&& value) { m_functionSpecHasBeenSet = true; m_functionSpec = std::move(value); }
    inline void SetFunctionSpec(const char* value) { m_functionSpecHasBeenSet = true; m_functionSpec.assign(value); }
    inline IntegrationPartition& WithFunctionSpec(const Aws::String& value) { SetFunctionSpec(value); return *this;}
    inline IntegrationPartition& WithFunctionSpec(Aws::String&& value) { SetFunctionSpec(std::move(value)); return *this;}
    inline IntegrationPartition& WithFunctionSpec(const char* value) { SetFunctionSpec(value); return *this;}
    ///@}
  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    Aws::String m_functionSpec;
    bool m_functionSpecHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
