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
    AWS_CONNECTCASES_API RequiredField();
    AWS_CONNECTCASES_API RequiredField(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API RequiredField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier of a field.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline RequiredField& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline RequiredField& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline RequiredField& WithFieldId(const char* value) { SetFieldId(value); return *this;}

  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
