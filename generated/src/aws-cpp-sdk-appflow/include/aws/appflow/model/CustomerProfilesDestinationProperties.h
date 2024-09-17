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

  /**
   * <p> The properties that are applied when Amazon Connect Customer Profiles is
   * used as a destination. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/CustomerProfilesDestinationProperties">AWS
   * API Reference</a></p>
   */
  class CustomerProfilesDestinationProperties
  {
  public:
    AWS_APPFLOW_API CustomerProfilesDestinationProperties();
    AWS_APPFLOW_API CustomerProfilesDestinationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API CustomerProfilesDestinationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique name of the Amazon Connect Customer Profiles domain. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline CustomerProfilesDestinationProperties& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline CustomerProfilesDestinationProperties& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline CustomerProfilesDestinationProperties& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The object specified in the Amazon Connect Customer Profiles flow
     * destination. </p>
     */
    inline const Aws::String& GetObjectTypeName() const{ return m_objectTypeName; }
    inline bool ObjectTypeNameHasBeenSet() const { return m_objectTypeNameHasBeenSet; }
    inline void SetObjectTypeName(const Aws::String& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = value; }
    inline void SetObjectTypeName(Aws::String&& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = std::move(value); }
    inline void SetObjectTypeName(const char* value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName.assign(value); }
    inline CustomerProfilesDestinationProperties& WithObjectTypeName(const Aws::String& value) { SetObjectTypeName(value); return *this;}
    inline CustomerProfilesDestinationProperties& WithObjectTypeName(Aws::String&& value) { SetObjectTypeName(std::move(value)); return *this;}
    inline CustomerProfilesDestinationProperties& WithObjectTypeName(const char* value) { SetObjectTypeName(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_objectTypeName;
    bool m_objectTypeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
