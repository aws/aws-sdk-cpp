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
    AWS_DATAPIPELINE_API Operator();
    AWS_DATAPIPELINE_API Operator(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Operator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const OperatorType& GetType() const{ return m_type; }

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
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

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
    inline void SetType(const OperatorType& value) { m_typeHasBeenSet = true; m_type = value; }

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
    inline void SetType(OperatorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

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
    inline Operator& WithType(const OperatorType& value) { SetType(value); return *this;}

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
    inline Operator& WithType(OperatorType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The value that the actual field value will be compared with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value that the actual field value will be compared with.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value that the actual field value will be compared with.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value that the actual field value will be compared with.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value that the actual field value will be compared with.</p>
     */
    inline Operator& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value that the actual field value will be compared with.</p>
     */
    inline Operator& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value that the actual field value will be compared with.</p>
     */
    inline Operator& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value that the actual field value will be compared with.</p>
     */
    inline Operator& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value that the actual field value will be compared with.</p>
     */
    inline Operator& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    OperatorType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
