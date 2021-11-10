/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
namespace Backup
{
namespace Model
{

  class AWS_BACKUP_API ConditionParameter
  {
  public:
    ConditionParameter();
    ConditionParameter(Aws::Utils::Json::JsonView jsonValue);
    ConditionParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetConditionKey() const{ return m_conditionKey; }

    
    inline bool ConditionKeyHasBeenSet() const { return m_conditionKeyHasBeenSet; }

    
    inline void SetConditionKey(const Aws::String& value) { m_conditionKeyHasBeenSet = true; m_conditionKey = value; }

    
    inline void SetConditionKey(Aws::String&& value) { m_conditionKeyHasBeenSet = true; m_conditionKey = std::move(value); }

    
    inline void SetConditionKey(const char* value) { m_conditionKeyHasBeenSet = true; m_conditionKey.assign(value); }

    
    inline ConditionParameter& WithConditionKey(const Aws::String& value) { SetConditionKey(value); return *this;}

    
    inline ConditionParameter& WithConditionKey(Aws::String&& value) { SetConditionKey(std::move(value)); return *this;}

    
    inline ConditionParameter& WithConditionKey(const char* value) { SetConditionKey(value); return *this;}


    
    inline const Aws::String& GetConditionValue() const{ return m_conditionValue; }

    
    inline bool ConditionValueHasBeenSet() const { return m_conditionValueHasBeenSet; }

    
    inline void SetConditionValue(const Aws::String& value) { m_conditionValueHasBeenSet = true; m_conditionValue = value; }

    
    inline void SetConditionValue(Aws::String&& value) { m_conditionValueHasBeenSet = true; m_conditionValue = std::move(value); }

    
    inline void SetConditionValue(const char* value) { m_conditionValueHasBeenSet = true; m_conditionValue.assign(value); }

    
    inline ConditionParameter& WithConditionValue(const Aws::String& value) { SetConditionValue(value); return *this;}

    
    inline ConditionParameter& WithConditionValue(Aws::String&& value) { SetConditionValue(std::move(value)); return *this;}

    
    inline ConditionParameter& WithConditionValue(const char* value) { SetConditionValue(value); return *this;}

  private:

    Aws::String m_conditionKey;
    bool m_conditionKeyHasBeenSet;

    Aws::String m_conditionValue;
    bool m_conditionValueHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
