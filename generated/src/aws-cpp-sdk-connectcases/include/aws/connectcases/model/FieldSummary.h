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
    AWS_CONNECTCASES_API FieldSummary() = default;
    AWS_CONNECTCASES_API FieldSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API FieldSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the field.</p>
     */
    inline const Aws::String& GetFieldArn() const { return m_fieldArn; }
    inline bool FieldArnHasBeenSet() const { return m_fieldArnHasBeenSet; }
    template<typename FieldArnT = Aws::String>
    void SetFieldArn(FieldArnT&& value) { m_fieldArnHasBeenSet = true; m_fieldArn = std::forward<FieldArnT>(value); }
    template<typename FieldArnT = Aws::String>
    FieldSummary& WithFieldArn(FieldArnT&& value) { SetFieldArn(std::forward<FieldArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of a field.</p>
     */
    inline const Aws::String& GetFieldId() const { return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    template<typename FieldIdT = Aws::String>
    void SetFieldId(FieldIdT&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::forward<FieldIdT>(value); }
    template<typename FieldIdT = Aws::String>
    FieldSummary& WithFieldId(FieldIdT&& value) { SetFieldId(std::forward<FieldIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the field.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    FieldSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of a field.</p>
     */
    inline FieldNamespace GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(FieldNamespace value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline FieldSummary& WithNamespace(FieldNamespace value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of a field.</p>
     */
    inline FieldType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FieldType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FieldSummary& WithType(FieldType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_fieldArn;
    bool m_fieldArnHasBeenSet = false;

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FieldNamespace m_namespace{FieldNamespace::NOT_SET};
    bool m_namespaceHasBeenSet = false;

    FieldType m_type{FieldType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
