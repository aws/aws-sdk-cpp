/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>List of fields that must have a value provided to create a
   * case.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/RequiredField">AWS
   * API Reference</a></p>
   */
  class RequiredField
  {
  public:
    AWS_CONNECTCASES_API RequiredField() = default;
    AWS_CONNECTCASES_API RequiredField(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API RequiredField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier of a field.</p>
     */
    inline const Aws::String& GetFieldId() const { return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    template<typename FieldIdT = Aws::String>
    void SetFieldId(FieldIdT&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::forward<FieldIdT>(value); }
    template<typename FieldIdT = Aws::String>
    RequiredField& WithFieldId(FieldIdT&& value) { SetFieldId(std::forward<FieldIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
