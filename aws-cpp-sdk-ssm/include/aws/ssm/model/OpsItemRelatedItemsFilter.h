/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/OpsItemRelatedItemsFilterKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/OpsItemRelatedItemsFilterOperator.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes a filter for a specific list of related-item resources.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsItemRelatedItemsFilter">AWS
   * API Reference</a></p>
   */
  class OpsItemRelatedItemsFilter
  {
  public:
    AWS_SSM_API OpsItemRelatedItemsFilter();
    AWS_SSM_API OpsItemRelatedItemsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItemRelatedItemsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter key. Supported values include
     * <code>ResourceUri</code>, <code>ResourceType</code>, or
     * <code>AssociationId</code>.</p>
     */
    inline const OpsItemRelatedItemsFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The name of the filter key. Supported values include
     * <code>ResourceUri</code>, <code>ResourceType</code>, or
     * <code>AssociationId</code>.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the filter key. Supported values include
     * <code>ResourceUri</code>, <code>ResourceType</code>, or
     * <code>AssociationId</code>.</p>
     */
    inline void SetKey(const OpsItemRelatedItemsFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the filter key. Supported values include
     * <code>ResourceUri</code>, <code>ResourceType</code>, or
     * <code>AssociationId</code>.</p>
     */
    inline void SetKey(OpsItemRelatedItemsFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the filter key. Supported values include
     * <code>ResourceUri</code>, <code>ResourceType</code>, or
     * <code>AssociationId</code>.</p>
     */
    inline OpsItemRelatedItemsFilter& WithKey(const OpsItemRelatedItemsFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the filter key. Supported values include
     * <code>ResourceUri</code>, <code>ResourceType</code>, or
     * <code>AssociationId</code>.</p>
     */
    inline OpsItemRelatedItemsFilter& WithKey(OpsItemRelatedItemsFilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The values for the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values for the filter.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values for the filter.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values for the filter.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values for the filter.</p>
     */
    inline OpsItemRelatedItemsFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values for the filter.</p>
     */
    inline OpsItemRelatedItemsFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values for the filter.</p>
     */
    inline OpsItemRelatedItemsFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values for the filter.</p>
     */
    inline OpsItemRelatedItemsFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values for the filter.</p>
     */
    inline OpsItemRelatedItemsFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The operator used by the filter call. The only supported operator is
     * <code>EQUAL</code>.</p>
     */
    inline const OpsItemRelatedItemsFilterOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator used by the filter call. The only supported operator is
     * <code>EQUAL</code>.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator used by the filter call. The only supported operator is
     * <code>EQUAL</code>.</p>
     */
    inline void SetOperator(const OpsItemRelatedItemsFilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator used by the filter call. The only supported operator is
     * <code>EQUAL</code>.</p>
     */
    inline void SetOperator(OpsItemRelatedItemsFilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator used by the filter call. The only supported operator is
     * <code>EQUAL</code>.</p>
     */
    inline OpsItemRelatedItemsFilter& WithOperator(const OpsItemRelatedItemsFilterOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator used by the filter call. The only supported operator is
     * <code>EQUAL</code>.</p>
     */
    inline OpsItemRelatedItemsFilter& WithOperator(OpsItemRelatedItemsFilterOperator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    OpsItemRelatedItemsFilterKey m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    OpsItemRelatedItemsFilterOperator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
