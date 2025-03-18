/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/model/OperatorType.h>
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
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains a logical operation for comparing the value of a field with a
   * specified value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/Operator">AWS
   * API Reference</a></p>
   */
  class Operator
  {
  public:
    AWS_DATAPIPELINE_API Operator() = default;
    AWS_DATAPIPELINE_API Operator(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Operator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The logical operation to be performed: equal (<code>EQ</code>), equal
     * reference (<code>REF_EQ</code>), less than or equal (<code>LE</code>), greater
     * than or equal (<code>GE</code>), or between (<code>BETWEEN</code>). Equal
     * reference (<code>REF_EQ</code>) can be used only with reference fields. The
     * other comparison types can be used only with String fields. The comparison types
     * you can use apply only to certain object fields, as detailed below. </p> <p> The
     * comparison operators EQ and REF_EQ act on the following fields: </p> <ul>
     * <li>name</li> <li>@sphere</li> <li>parent</li> <li>@componentParent</li>
     * <li>@instanceParent</li> <li>@status</li> <li>@scheduledStartTime</li>
     * <li>@scheduledEndTime</li> <li>@actualStartTime</li> <li>@actualEndTime</li>
     * </ul> <p> The comparison operators <code>GE</code>, <code>LE</code>, and
     * <code>BETWEEN</code> act on the following fields: </p> <ul>
     * <li>@scheduledStartTime</li> <li>@scheduledEndTime</li>
     * <li>@actualStartTime</li> <li>@actualEndTime</li> </ul> <p>Note that fields
     * beginning with the at sign (@) are read-only and set by the web service. When
     * you name fields, you should choose names containing only alpha-numeric values,
     * as symbols may be reserved by AWS Data Pipeline. User-defined fields that you
     * add to a pipeline should prefix their name with the string "my".</p>
     */
    inline OperatorType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(OperatorType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Operator& WithType(OperatorType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that the actual field value will be compared with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    Operator& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    Operator& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    OperatorType m_type{OperatorType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
