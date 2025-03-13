/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaigns/model/InstanceIdFilterOperator.h>
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
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>Connect instance identifier filter</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/InstanceIdFilter">AWS
   * API Reference</a></p>
   */
  class InstanceIdFilter
  {
  public:
    AWS_CONNECTCAMPAIGNS_API InstanceIdFilter() = default;
    AWS_CONNECTCAMPAIGNS_API InstanceIdFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API InstanceIdFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    InstanceIdFilter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    
    inline InstanceIdFilterOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(InstanceIdFilterOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline InstanceIdFilter& WithOperator(InstanceIdFilterOperator value) { SetOperator(value); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    InstanceIdFilterOperator m_operator{InstanceIdFilterOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
