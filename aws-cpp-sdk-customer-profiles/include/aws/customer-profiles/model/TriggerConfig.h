/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/TriggerType.h>
#include <aws/customer-profiles/model/TriggerProperties.h>
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
namespace CustomerProfiles
{
namespace Model
{

  class AWS_CUSTOMERPROFILES_API TriggerConfig
  {
  public:
    TriggerConfig();
    TriggerConfig(Aws::Utils::Json::JsonView jsonValue);
    TriggerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const TriggerType& GetTriggerType() const{ return m_triggerType; }

    
    inline bool TriggerTypeHasBeenSet() const { return m_triggerTypeHasBeenSet; }

    
    inline void SetTriggerType(const TriggerType& value) { m_triggerTypeHasBeenSet = true; m_triggerType = value; }

    
    inline void SetTriggerType(TriggerType&& value) { m_triggerTypeHasBeenSet = true; m_triggerType = std::move(value); }

    
    inline TriggerConfig& WithTriggerType(const TriggerType& value) { SetTriggerType(value); return *this;}

    
    inline TriggerConfig& WithTriggerType(TriggerType&& value) { SetTriggerType(std::move(value)); return *this;}


    
    inline const TriggerProperties& GetTriggerProperties() const{ return m_triggerProperties; }

    
    inline bool TriggerPropertiesHasBeenSet() const { return m_triggerPropertiesHasBeenSet; }

    
    inline void SetTriggerProperties(const TriggerProperties& value) { m_triggerPropertiesHasBeenSet = true; m_triggerProperties = value; }

    
    inline void SetTriggerProperties(TriggerProperties&& value) { m_triggerPropertiesHasBeenSet = true; m_triggerProperties = std::move(value); }

    
    inline TriggerConfig& WithTriggerProperties(const TriggerProperties& value) { SetTriggerProperties(value); return *this;}

    
    inline TriggerConfig& WithTriggerProperties(TriggerProperties&& value) { SetTriggerProperties(std::move(value)); return *this;}

  private:

    TriggerType m_triggerType;
    bool m_triggerTypeHasBeenSet;

    TriggerProperties m_triggerProperties;
    bool m_triggerPropertiesHasBeenSet;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
