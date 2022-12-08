/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ComplianceSummary.h>
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
   * <p>The number of Amazon Web Services resources of a specific type that are
   * compliant or noncompliant, up to a maximum of 100 for each.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ComplianceSummaryByResourceType">AWS
   * API Reference</a></p>
   */
  class ComplianceSummaryByResourceType
  {
  public:
    AWS_CONFIGSERVICE_API ComplianceSummaryByResourceType();
    AWS_CONFIGSERVICE_API ComplianceSummaryByResourceType(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ComplianceSummaryByResourceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline ComplianceSummaryByResourceType& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline ComplianceSummaryByResourceType& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline ComplianceSummaryByResourceType& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The number of Amazon Web Services resources that are compliant or
     * noncompliant, up to a maximum of 100 for each.</p>
     */
    inline const ComplianceSummary& GetComplianceSummary() const{ return m_complianceSummary; }

    /**
     * <p>The number of Amazon Web Services resources that are compliant or
     * noncompliant, up to a maximum of 100 for each.</p>
     */
    inline bool ComplianceSummaryHasBeenSet() const { return m_complianceSummaryHasBeenSet; }

    /**
     * <p>The number of Amazon Web Services resources that are compliant or
     * noncompliant, up to a maximum of 100 for each.</p>
     */
    inline void SetComplianceSummary(const ComplianceSummary& value) { m_complianceSummaryHasBeenSet = true; m_complianceSummary = value; }

    /**
     * <p>The number of Amazon Web Services resources that are compliant or
     * noncompliant, up to a maximum of 100 for each.</p>
     */
    inline void SetComplianceSummary(ComplianceSummary&& value) { m_complianceSummaryHasBeenSet = true; m_complianceSummary = std::move(value); }

    /**
     * <p>The number of Amazon Web Services resources that are compliant or
     * noncompliant, up to a maximum of 100 for each.</p>
     */
    inline ComplianceSummaryByResourceType& WithComplianceSummary(const ComplianceSummary& value) { SetComplianceSummary(value); return *this;}

    /**
     * <p>The number of Amazon Web Services resources that are compliant or
     * noncompliant, up to a maximum of 100 for each.</p>
     */
    inline ComplianceSummaryByResourceType& WithComplianceSummary(ComplianceSummary&& value) { SetComplianceSummary(std::move(value)); return *this;}

  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    ComplianceSummary m_complianceSummary;
    bool m_complianceSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
