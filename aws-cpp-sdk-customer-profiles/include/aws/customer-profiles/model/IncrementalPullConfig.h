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

  class AWS_CUSTOMERPROFILES_API IncrementalPullConfig
  {
  public:
    IncrementalPullConfig();
    IncrementalPullConfig(Aws::Utils::Json::JsonView jsonValue);
    IncrementalPullConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetDatetimeTypeFieldName() const{ return m_datetimeTypeFieldName; }

    
    inline bool DatetimeTypeFieldNameHasBeenSet() const { return m_datetimeTypeFieldNameHasBeenSet; }

    
    inline void SetDatetimeTypeFieldName(const Aws::String& value) { m_datetimeTypeFieldNameHasBeenSet = true; m_datetimeTypeFieldName = value; }

    
    inline void SetDatetimeTypeFieldName(Aws::String&& value) { m_datetimeTypeFieldNameHasBeenSet = true; m_datetimeTypeFieldName = std::move(value); }

    
    inline void SetDatetimeTypeFieldName(const char* value) { m_datetimeTypeFieldNameHasBeenSet = true; m_datetimeTypeFieldName.assign(value); }

    
    inline IncrementalPullConfig& WithDatetimeTypeFieldName(const Aws::String& value) { SetDatetimeTypeFieldName(value); return *this;}

    
    inline IncrementalPullConfig& WithDatetimeTypeFieldName(Aws::String&& value) { SetDatetimeTypeFieldName(std::move(value)); return *this;}

    
    inline IncrementalPullConfig& WithDatetimeTypeFieldName(const char* value) { SetDatetimeTypeFieldName(value); return *this;}

  private:

    Aws::String m_datetimeTypeFieldName;
    bool m_datetimeTypeFieldNameHasBeenSet;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
