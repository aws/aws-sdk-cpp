/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/OpsItemEventFilterKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/OpsItemEventFilterOperator.h>
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
   * <p>Describes a filter for a specific list of OpsItem events. You can filter
   * event information by using tags. You specify tags by using a key-value pair
   * mapping. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsItemEventFilter">AWS
   * API Reference</a></p>
   */
  class OpsItemEventFilter
  {
  public:
    AWS_SSM_API OpsItemEventFilter();
    AWS_SSM_API OpsItemEventFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItemEventFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter key. Currently, the only supported value is
     * <code>OpsItemId</code>.</p>
     */
    inline const OpsItemEventFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The name of the filter key. Currently, the only supported value is
     * <code>OpsItemId</code>.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the filter key. Currently, the only supported value is
     * <code>OpsItemId</code>.</p>
     */
    inline void SetKey(const OpsItemEventFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the filter key. Currently, the only supported value is
     * <code>OpsItemId</code>.</p>
     */
    inline void SetKey(OpsItemEventFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the filter key. Currently, the only supported value is
     * <code>OpsItemId</code>.</p>
     */
    inline OpsItemEventFilter& WithKey(const OpsItemEventFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the filter key. Currently, the only supported value is
     * <code>OpsItemId</code>.</p>
     */
    inline OpsItemEventFilter& WithKey(OpsItemEventFilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The values for the filter, consisting of one or more OpsItem IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values for the filter, consisting of one or more OpsItem IDs.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values for the filter, consisting of one or more OpsItem IDs.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values for the filter, consisting of one or more OpsItem IDs.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values for the filter, consisting of one or more OpsItem IDs.</p>
     */
    inline OpsItemEventFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values for the filter, consisting of one or more OpsItem IDs.</p>
     */
    inline OpsItemEventFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values for the filter, consisting of one or more OpsItem IDs.</p>
     */
    inline OpsItemEventFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values for the filter, consisting of one or more OpsItem IDs.</p>
     */
    inline OpsItemEventFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values for the filter, consisting of one or more OpsItem IDs.</p>
     */
    inline OpsItemEventFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The operator used by the filter call. Currently, the only supported value is
     * <code>Equal</code>.</p>
     */
    inline const OpsItemEventFilterOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator used by the filter call. Currently, the only supported value is
     * <code>Equal</code>.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator used by the filter call. Currently, the only supported value is
     * <code>Equal</code>.</p>
     */
    inline void SetOperator(const OpsItemEventFilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator used by the filter call. Currently, the only supported value is
     * <code>Equal</code>.</p>
     */
    inline void SetOperator(OpsItemEventFilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator used by the filter call. Currently, the only supported value is
     * <code>Equal</code>.</p>
     */
    inline OpsItemEventFilter& WithOperator(const OpsItemEventFilterOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator used by the filter call. Currently, the only supported value is
     * <code>Equal</code>.</p>
     */
    inline OpsItemEventFilter& WithOperator(OpsItemEventFilterOperator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    OpsItemEventFilterKey m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    OpsItemEventFilterOperator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
