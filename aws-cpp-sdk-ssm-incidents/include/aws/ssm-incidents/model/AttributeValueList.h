/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Use the AttributeValueList to filter by string or integer
   * values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/AttributeValueList">AWS
   * API Reference</a></p>
   */
  class AttributeValueList
  {
  public:
    AWS_SSMINCIDENTS_API AttributeValueList();
    AWS_SSMINCIDENTS_API AttributeValueList(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API AttributeValueList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of integer values that the filter matches.</p>
     */
    inline const Aws::Vector<int>& GetIntegerValues() const{ return m_integerValues; }

    /**
     * <p>The list of integer values that the filter matches.</p>
     */
    inline bool IntegerValuesHasBeenSet() const { return m_integerValuesHasBeenSet; }

    /**
     * <p>The list of integer values that the filter matches.</p>
     */
    inline void SetIntegerValues(const Aws::Vector<int>& value) { m_integerValuesHasBeenSet = true; m_integerValues = value; }

    /**
     * <p>The list of integer values that the filter matches.</p>
     */
    inline void SetIntegerValues(Aws::Vector<int>&& value) { m_integerValuesHasBeenSet = true; m_integerValues = std::move(value); }

    /**
     * <p>The list of integer values that the filter matches.</p>
     */
    inline AttributeValueList& WithIntegerValues(const Aws::Vector<int>& value) { SetIntegerValues(value); return *this;}

    /**
     * <p>The list of integer values that the filter matches.</p>
     */
    inline AttributeValueList& WithIntegerValues(Aws::Vector<int>&& value) { SetIntegerValues(std::move(value)); return *this;}

    /**
     * <p>The list of integer values that the filter matches.</p>
     */
    inline AttributeValueList& AddIntegerValues(int value) { m_integerValuesHasBeenSet = true; m_integerValues.push_back(value); return *this; }


    /**
     * <p>The list of string values that the filter matches.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringValues() const{ return m_stringValues; }

    /**
     * <p>The list of string values that the filter matches.</p>
     */
    inline bool StringValuesHasBeenSet() const { return m_stringValuesHasBeenSet; }

    /**
     * <p>The list of string values that the filter matches.</p>
     */
    inline void SetStringValues(const Aws::Vector<Aws::String>& value) { m_stringValuesHasBeenSet = true; m_stringValues = value; }

    /**
     * <p>The list of string values that the filter matches.</p>
     */
    inline void SetStringValues(Aws::Vector<Aws::String>&& value) { m_stringValuesHasBeenSet = true; m_stringValues = std::move(value); }

    /**
     * <p>The list of string values that the filter matches.</p>
     */
    inline AttributeValueList& WithStringValues(const Aws::Vector<Aws::String>& value) { SetStringValues(value); return *this;}

    /**
     * <p>The list of string values that the filter matches.</p>
     */
    inline AttributeValueList& WithStringValues(Aws::Vector<Aws::String>&& value) { SetStringValues(std::move(value)); return *this;}

    /**
     * <p>The list of string values that the filter matches.</p>
     */
    inline AttributeValueList& AddStringValues(const Aws::String& value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(value); return *this; }

    /**
     * <p>The list of string values that the filter matches.</p>
     */
    inline AttributeValueList& AddStringValues(Aws::String&& value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of string values that the filter matches.</p>
     */
    inline AttributeValueList& AddStringValues(const char* value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(value); return *this; }

  private:

    Aws::Vector<int> m_integerValues;
    bool m_integerValuesHasBeenSet = false;

    Aws::Vector<Aws::String> m_stringValues;
    bool m_stringValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
