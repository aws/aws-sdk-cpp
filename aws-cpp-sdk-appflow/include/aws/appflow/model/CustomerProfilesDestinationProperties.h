/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{

  class AWS_APPFLOW_API CustomerProfilesDestinationProperties
  {
  public:
    CustomerProfilesDestinationProperties();
    CustomerProfilesDestinationProperties(Aws::Utils::Json::JsonView jsonValue);
    CustomerProfilesDestinationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline CustomerProfilesDestinationProperties& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline CustomerProfilesDestinationProperties& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    
    inline CustomerProfilesDestinationProperties& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    
    inline const Aws::String& GetObjectTypeName() const{ return m_objectTypeName; }

    
    inline bool ObjectTypeNameHasBeenSet() const { return m_objectTypeNameHasBeenSet; }

    
    inline void SetObjectTypeName(const Aws::String& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = value; }

    
    inline void SetObjectTypeName(Aws::String&& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = std::move(value); }

    
    inline void SetObjectTypeName(const char* value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName.assign(value); }

    
    inline CustomerProfilesDestinationProperties& WithObjectTypeName(const Aws::String& value) { SetObjectTypeName(value); return *this;}

    
    inline CustomerProfilesDestinationProperties& WithObjectTypeName(Aws::String&& value) { SetObjectTypeName(std::move(value)); return *this;}

    
    inline CustomerProfilesDestinationProperties& WithObjectTypeName(const char* value) { SetObjectTypeName(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_objectTypeName;
    bool m_objectTypeNameHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
