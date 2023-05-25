/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/model/InstanceIdFilterOperator.h>
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
    AWS_CONNECTCAMPAIGNS_API InstanceIdFilter();
    AWS_CONNECTCAMPAIGNS_API InstanceIdFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API InstanceIdFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const InstanceIdFilterOperator& GetOperator() const{ return m_operator; }

    
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    
    inline void SetOperator(const InstanceIdFilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    
    inline void SetOperator(InstanceIdFilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    
    inline InstanceIdFilter& WithOperator(const InstanceIdFilterOperator& value) { SetOperator(value); return *this;}

    
    inline InstanceIdFilter& WithOperator(InstanceIdFilterOperator&& value) { SetOperator(std::move(value)); return *this;}


    
    inline const Aws::String& GetValue() const{ return m_value; }

    
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    
    inline InstanceIdFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    
    inline InstanceIdFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    
    inline InstanceIdFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    InstanceIdFilterOperator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
