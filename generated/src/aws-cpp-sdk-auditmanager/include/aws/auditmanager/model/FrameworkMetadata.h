﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> The metadata of a framework, such as the name, ID, or description.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/FrameworkMetadata">AWS
   * API Reference</a></p>
   */
  class FrameworkMetadata
  {
  public:
    AWS_AUDITMANAGER_API FrameworkMetadata();
    AWS_AUDITMANAGER_API FrameworkMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API FrameworkMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the framework. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FrameworkMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FrameworkMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FrameworkMetadata& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the framework. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline FrameworkMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline FrameworkMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline FrameworkMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The logo that's associated with the framework. </p>
     */
    inline const Aws::String& GetLogo() const{ return m_logo; }
    inline bool LogoHasBeenSet() const { return m_logoHasBeenSet; }
    inline void SetLogo(const Aws::String& value) { m_logoHasBeenSet = true; m_logo = value; }
    inline void SetLogo(Aws::String&& value) { m_logoHasBeenSet = true; m_logo = std::move(value); }
    inline void SetLogo(const char* value) { m_logoHasBeenSet = true; m_logo.assign(value); }
    inline FrameworkMetadata& WithLogo(const Aws::String& value) { SetLogo(value); return *this;}
    inline FrameworkMetadata& WithLogo(Aws::String&& value) { SetLogo(std::move(value)); return *this;}
    inline FrameworkMetadata& WithLogo(const char* value) { SetLogo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The compliance standard that's associated with the framework. For example,
     * this could be PCI DSS or HIPAA. </p>
     */
    inline const Aws::String& GetComplianceType() const{ return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(const Aws::String& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline void SetComplianceType(Aws::String&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }
    inline void SetComplianceType(const char* value) { m_complianceTypeHasBeenSet = true; m_complianceType.assign(value); }
    inline FrameworkMetadata& WithComplianceType(const Aws::String& value) { SetComplianceType(value); return *this;}
    inline FrameworkMetadata& WithComplianceType(Aws::String&& value) { SetComplianceType(std::move(value)); return *this;}
    inline FrameworkMetadata& WithComplianceType(const char* value) { SetComplianceType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_logo;
    bool m_logoHasBeenSet = false;

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
