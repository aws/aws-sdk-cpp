/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/SearchContactsTimeRangeType.h>
#include <aws/connect/model/SearchContactsTimeRangeConditionType.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The timestamp condition indicating which timestamp should be used and how it
   * should be filtered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchContactsTimestampCondition">AWS
   * API Reference</a></p>
   */
  class SearchContactsTimestampCondition
  {
  public:
    AWS_CONNECT_API SearchContactsTimestampCondition() = default;
    AWS_CONNECT_API SearchContactsTimestampCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SearchContactsTimestampCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type of the timestamps to use for the filter.</p>
     */
    inline SearchContactsTimeRangeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SearchContactsTimeRangeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SearchContactsTimestampCondition& WithType(SearchContactsTimeRangeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Condition of the timestamp on the contact.</p>
     */
    inline SearchContactsTimeRangeConditionType GetConditionType() const { return m_conditionType; }
    inline bool ConditionTypeHasBeenSet() const { return m_conditionTypeHasBeenSet; }
    inline void SetConditionType(SearchContactsTimeRangeConditionType value) { m_conditionTypeHasBeenSet = true; m_conditionType = value; }
    inline SearchContactsTimestampCondition& WithConditionType(SearchContactsTimeRangeConditionType value) { SetConditionType(value); return *this;}
    ///@}
  private:

    SearchContactsTimeRangeType m_type{SearchContactsTimeRangeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    SearchContactsTimeRangeConditionType m_conditionType{SearchContactsTimeRangeConditionType::NOT_SET};
    bool m_conditionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
