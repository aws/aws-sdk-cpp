/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{

  class AWS_CUSTOMERPROFILES_API SalesforceSourceProperties
  {
  public:
    SalesforceSourceProperties();
    SalesforceSourceProperties(Aws::Utils::Json::JsonView jsonValue);
    SalesforceSourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetObject() const{ return m_object; }

    
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }

    
    inline void SetObject(const Aws::String& value) { m_objectHasBeenSet = true; m_object = value; }

    
    inline void SetObject(Aws::String&& value) { m_objectHasBeenSet = true; m_object = std::move(value); }

    
    inline void SetObject(const char* value) { m_objectHasBeenSet = true; m_object.assign(value); }

    
    inline SalesforceSourceProperties& WithObject(const Aws::String& value) { SetObject(value); return *this;}

    
    inline SalesforceSourceProperties& WithObject(Aws::String&& value) { SetObject(std::move(value)); return *this;}

    
    inline SalesforceSourceProperties& WithObject(const char* value) { SetObject(value); return *this;}


    
    inline bool GetEnableDynamicFieldUpdate() const{ return m_enableDynamicFieldUpdate; }

    
    inline bool EnableDynamicFieldUpdateHasBeenSet() const { return m_enableDynamicFieldUpdateHasBeenSet; }

    
    inline void SetEnableDynamicFieldUpdate(bool value) { m_enableDynamicFieldUpdateHasBeenSet = true; m_enableDynamicFieldUpdate = value; }

    
    inline SalesforceSourceProperties& WithEnableDynamicFieldUpdate(bool value) { SetEnableDynamicFieldUpdate(value); return *this;}


    
    inline bool GetIncludeDeletedRecords() const{ return m_includeDeletedRecords; }

    
    inline bool IncludeDeletedRecordsHasBeenSet() const { return m_includeDeletedRecordsHasBeenSet; }

    
    inline void SetIncludeDeletedRecords(bool value) { m_includeDeletedRecordsHasBeenSet = true; m_includeDeletedRecords = value; }

    
    inline SalesforceSourceProperties& WithIncludeDeletedRecords(bool value) { SetIncludeDeletedRecords(value); return *this;}

  private:

    Aws::String m_object;
    bool m_objectHasBeenSet;

    bool m_enableDynamicFieldUpdate;
    bool m_enableDynamicFieldUpdateHasBeenSet;

    bool m_includeDeletedRecords;
    bool m_includeDeletedRecordsHasBeenSet;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
