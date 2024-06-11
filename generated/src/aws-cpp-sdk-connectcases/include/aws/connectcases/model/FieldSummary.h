/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/FieldNamespace.h>
#include <aws/connectcases/model/FieldType.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Object for the summarized details of the field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/FieldSummary">AWS
   * API Reference</a></p>
   */
  class FieldSummary
  {
  public:
    AWS_CONNECTCASES_API FieldSummary();
    AWS_CONNECTCASES_API FieldSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API FieldSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the field.</p>
     */
    inline const Aws::String& GetFieldArn() const{ return m_fieldArn; }
    inline bool FieldArnHasBeenSet() const { return m_fieldArnHasBeenSet; }
    inline void SetFieldArn(const Aws::String& value) { m_fieldArnHasBeenSet = true; m_fieldArn = value; }
    inline void SetFieldArn(Aws::String&& value) { m_fieldArnHasBeenSet = true; m_fieldArn = std::move(value); }
    inline void SetFieldArn(const char* value) { m_fieldArnHasBeenSet = true; m_fieldArn.assign(value); }
    inline FieldSummary& WithFieldArn(const Aws::String& value) { SetFieldArn(value); return *this;}
    inline FieldSummary& WithFieldArn(Aws::String&& value) { SetFieldArn(std::move(value)); return *this;}
    inline FieldSummary& WithFieldArn(const char* value) { SetFieldArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of a field.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }
    inline FieldSummary& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}
    inline FieldSummary& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}
    inline FieldSummary& WithFieldId(const char* value) { SetFieldId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the field.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FieldSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FieldSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FieldSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of a field.</p>
     */
    inline const FieldNamespace& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const FieldNamespace& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(FieldNamespace&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline FieldSummary& WithNamespace(const FieldNamespace& value) { SetNamespace(value); return *this;}
    inline FieldSummary& WithNamespace(FieldNamespace&& value) { SetNamespace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of a field.</p>
     */
    inline const FieldType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FieldType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FieldType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline FieldSummary& WithType(const FieldType& value) { SetType(value); return *this;}
    inline FieldSummary& WithType(FieldType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldArn;
    bool m_fieldArnHasBeenSet = false;

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FieldNamespace m_namespace;
    bool m_namespaceHasBeenSet = false;

    FieldType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
