/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/FieldValueUnion.h>
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
   * <p>Object for case field values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/FieldValue">AWS
   * API Reference</a></p>
   */
  class FieldValue
  {
  public:
    AWS_CONNECTCASES_API FieldValue();
    AWS_CONNECTCASES_API FieldValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API FieldValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier of a field.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline FieldValue& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline FieldValue& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline FieldValue& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Union of potential field value types.</p>
     */
    inline const FieldValueUnion& GetValue() const{ return m_value; }

    /**
     * <p>Union of potential field value types.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Union of potential field value types.</p>
     */
    inline void SetValue(const FieldValueUnion& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Union of potential field value types.</p>
     */
    inline void SetValue(FieldValueUnion&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Union of potential field value types.</p>
     */
    inline FieldValue& WithValue(const FieldValueUnion& value) { SetValue(value); return *this;}

    /**
     * <p>Union of potential field value types.</p>
     */
    inline FieldValue& WithValue(FieldValueUnion&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    FieldValueUnion m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
