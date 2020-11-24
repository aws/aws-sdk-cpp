/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/AdvancedFieldSelector.h>
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
namespace CloudTrail
{
namespace Model
{

  class AWS_CLOUDTRAIL_API AdvancedEventSelector
  {
  public:
    AdvancedEventSelector();
    AdvancedEventSelector(Aws::Utils::Json::JsonView jsonValue);
    AdvancedEventSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline AdvancedEventSelector& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline AdvancedEventSelector& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline AdvancedEventSelector& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::Vector<AdvancedFieldSelector>& GetFieldSelectors() const{ return m_fieldSelectors; }

    
    inline bool FieldSelectorsHasBeenSet() const { return m_fieldSelectorsHasBeenSet; }

    
    inline void SetFieldSelectors(const Aws::Vector<AdvancedFieldSelector>& value) { m_fieldSelectorsHasBeenSet = true; m_fieldSelectors = value; }

    
    inline void SetFieldSelectors(Aws::Vector<AdvancedFieldSelector>&& value) { m_fieldSelectorsHasBeenSet = true; m_fieldSelectors = std::move(value); }

    
    inline AdvancedEventSelector& WithFieldSelectors(const Aws::Vector<AdvancedFieldSelector>& value) { SetFieldSelectors(value); return *this;}

    
    inline AdvancedEventSelector& WithFieldSelectors(Aws::Vector<AdvancedFieldSelector>&& value) { SetFieldSelectors(std::move(value)); return *this;}

    
    inline AdvancedEventSelector& AddFieldSelectors(const AdvancedFieldSelector& value) { m_fieldSelectorsHasBeenSet = true; m_fieldSelectors.push_back(value); return *this; }

    
    inline AdvancedEventSelector& AddFieldSelectors(AdvancedFieldSelector&& value) { m_fieldSelectorsHasBeenSet = true; m_fieldSelectors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<AdvancedFieldSelector> m_fieldSelectors;
    bool m_fieldSelectorsHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
