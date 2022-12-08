/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/FieldItem.h>
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
   * <p>Object for a group of fields and associated properties.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/FieldGroup">AWS
   * API Reference</a></p>
   */
  class FieldGroup
  {
  public:
    AWS_CONNECTCASES_API FieldGroup();
    AWS_CONNECTCASES_API FieldGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API FieldGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents an ordered list containing field related information.</p>
     */
    inline const Aws::Vector<FieldItem>& GetFields() const{ return m_fields; }

    /**
     * <p>Represents an ordered list containing field related information.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>Represents an ordered list containing field related information.</p>
     */
    inline void SetFields(const Aws::Vector<FieldItem>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>Represents an ordered list containing field related information.</p>
     */
    inline void SetFields(Aws::Vector<FieldItem>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>Represents an ordered list containing field related information.</p>
     */
    inline FieldGroup& WithFields(const Aws::Vector<FieldItem>& value) { SetFields(value); return *this;}

    /**
     * <p>Represents an ordered list containing field related information.</p>
     */
    inline FieldGroup& WithFields(Aws::Vector<FieldItem>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>Represents an ordered list containing field related information.</p>
     */
    inline FieldGroup& AddFields(const FieldItem& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>Represents an ordered list containing field related information.</p>
     */
    inline FieldGroup& AddFields(FieldItem&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }


    /**
     * <p>Name of the field group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the field group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the field group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the field group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the field group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the field group.</p>
     */
    inline FieldGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the field group.</p>
     */
    inline FieldGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the field group.</p>
     */
    inline FieldGroup& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::Vector<FieldItem> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
