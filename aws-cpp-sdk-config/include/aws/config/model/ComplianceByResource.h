/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/Compliance.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Indicates whether an Amazon Web Services resource that is evaluated according
   * to one or more Config rules is compliant. A resource is compliant if it complies
   * with all of the rules that evaluate it. A resource is noncompliant if it does
   * not comply with one or more of these rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ComplianceByResource">AWS
   * API Reference</a></p>
   */
  class ComplianceByResource
  {
  public:
    AWS_CONFIGSERVICE_API ComplianceByResource();
    AWS_CONFIGSERVICE_API ComplianceByResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ComplianceByResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline ComplianceByResource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline ComplianceByResource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline ComplianceByResource& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline ComplianceByResource& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline ComplianceByResource& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline ComplianceByResource& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Indicates whether the Amazon Web Services resource complies with all of the
     * Config rules that evaluated it.</p>
     */
    inline const Compliance& GetCompliance() const{ return m_compliance; }

    /**
     * <p>Indicates whether the Amazon Web Services resource complies with all of the
     * Config rules that evaluated it.</p>
     */
    inline bool ComplianceHasBeenSet() const { return m_complianceHasBeenSet; }

    /**
     * <p>Indicates whether the Amazon Web Services resource complies with all of the
     * Config rules that evaluated it.</p>
     */
    inline void SetCompliance(const Compliance& value) { m_complianceHasBeenSet = true; m_compliance = value; }

    /**
     * <p>Indicates whether the Amazon Web Services resource complies with all of the
     * Config rules that evaluated it.</p>
     */
    inline void SetCompliance(Compliance&& value) { m_complianceHasBeenSet = true; m_compliance = std::move(value); }

    /**
     * <p>Indicates whether the Amazon Web Services resource complies with all of the
     * Config rules that evaluated it.</p>
     */
    inline ComplianceByResource& WithCompliance(const Compliance& value) { SetCompliance(value); return *this;}

    /**
     * <p>Indicates whether the Amazon Web Services resource complies with all of the
     * Config rules that evaluated it.</p>
     */
    inline ComplianceByResource& WithCompliance(Compliance&& value) { SetCompliance(std::move(value)); return *this;}

  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Compliance m_compliance;
    bool m_complianceHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
