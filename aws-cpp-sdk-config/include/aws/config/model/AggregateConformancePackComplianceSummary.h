/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/AggregateConformancePackComplianceCount.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Provides a summary of compliance based on either account ID or region.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/AggregateConformancePackComplianceSummary">AWS
   * API Reference</a></p>
   */
  class AggregateConformancePackComplianceSummary
  {
  public:
    AWS_CONFIGSERVICE_API AggregateConformancePackComplianceSummary();
    AWS_CONFIGSERVICE_API AggregateConformancePackComplianceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregateConformancePackComplianceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns an <code>AggregateConformancePackComplianceCount</code> object. </p>
     */
    inline const AggregateConformancePackComplianceCount& GetComplianceSummary() const{ return m_complianceSummary; }

    /**
     * <p>Returns an <code>AggregateConformancePackComplianceCount</code> object. </p>
     */
    inline bool ComplianceSummaryHasBeenSet() const { return m_complianceSummaryHasBeenSet; }

    /**
     * <p>Returns an <code>AggregateConformancePackComplianceCount</code> object. </p>
     */
    inline void SetComplianceSummary(const AggregateConformancePackComplianceCount& value) { m_complianceSummaryHasBeenSet = true; m_complianceSummary = value; }

    /**
     * <p>Returns an <code>AggregateConformancePackComplianceCount</code> object. </p>
     */
    inline void SetComplianceSummary(AggregateConformancePackComplianceCount&& value) { m_complianceSummaryHasBeenSet = true; m_complianceSummary = std::move(value); }

    /**
     * <p>Returns an <code>AggregateConformancePackComplianceCount</code> object. </p>
     */
    inline AggregateConformancePackComplianceSummary& WithComplianceSummary(const AggregateConformancePackComplianceCount& value) { SetComplianceSummary(value); return *this;}

    /**
     * <p>Returns an <code>AggregateConformancePackComplianceCount</code> object. </p>
     */
    inline AggregateConformancePackComplianceSummary& WithComplianceSummary(AggregateConformancePackComplianceCount&& value) { SetComplianceSummary(std::move(value)); return *this;}


    /**
     * <p>Groups the result based on Amazon Web Services account ID or Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>Groups the result based on Amazon Web Services account ID or Amazon Web
     * Services Region.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>Groups the result based on Amazon Web Services account ID or Amazon Web
     * Services Region.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>Groups the result based on Amazon Web Services account ID or Amazon Web
     * Services Region.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>Groups the result based on Amazon Web Services account ID or Amazon Web
     * Services Region.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>Groups the result based on Amazon Web Services account ID or Amazon Web
     * Services Region.</p>
     */
    inline AggregateConformancePackComplianceSummary& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>Groups the result based on Amazon Web Services account ID or Amazon Web
     * Services Region.</p>
     */
    inline AggregateConformancePackComplianceSummary& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>Groups the result based on Amazon Web Services account ID or Amazon Web
     * Services Region.</p>
     */
    inline AggregateConformancePackComplianceSummary& WithGroupName(const char* value) { SetGroupName(value); return *this;}

  private:

    AggregateConformancePackComplianceCount m_complianceSummary;
    bool m_complianceSummaryHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
