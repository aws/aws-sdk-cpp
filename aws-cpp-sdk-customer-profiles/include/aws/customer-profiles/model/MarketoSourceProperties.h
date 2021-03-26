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

  class AWS_CUSTOMERPROFILES_API MarketoSourceProperties
  {
  public:
    MarketoSourceProperties();
    MarketoSourceProperties(Aws::Utils::Json::JsonView jsonValue);
    MarketoSourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetObject() const{ return m_object; }

    
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }

    
    inline void SetObject(const Aws::String& value) { m_objectHasBeenSet = true; m_object = value; }

    
    inline void SetObject(Aws::String&& value) { m_objectHasBeenSet = true; m_object = std::move(value); }

    
    inline void SetObject(const char* value) { m_objectHasBeenSet = true; m_object.assign(value); }

    
    inline MarketoSourceProperties& WithObject(const Aws::String& value) { SetObject(value); return *this;}

    
    inline MarketoSourceProperties& WithObject(Aws::String&& value) { SetObject(std::move(value)); return *this;}

    
    inline MarketoSourceProperties& WithObject(const char* value) { SetObject(value); return *this;}

  private:

    Aws::String m_object;
    bool m_objectHasBeenSet;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
