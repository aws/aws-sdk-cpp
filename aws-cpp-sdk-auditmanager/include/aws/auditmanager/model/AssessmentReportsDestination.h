/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/AssessmentReportDestinationType.h>
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
   * <p> The location where Audit Manager saves assessment reports for the given
   * assessment. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/AssessmentReportsDestination">AWS
   * API Reference</a></p>
   */
  class AssessmentReportsDestination
  {
  public:
    AWS_AUDITMANAGER_API AssessmentReportsDestination();
    AWS_AUDITMANAGER_API AssessmentReportsDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AssessmentReportsDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The destination type, such as Amazon S3. </p>
     */
    inline const AssessmentReportDestinationType& GetDestinationType() const{ return m_destinationType; }

    /**
     * <p> The destination type, such as Amazon S3. </p>
     */
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }

    /**
     * <p> The destination type, such as Amazon S3. </p>
     */
    inline void SetDestinationType(const AssessmentReportDestinationType& value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }

    /**
     * <p> The destination type, such as Amazon S3. </p>
     */
    inline void SetDestinationType(AssessmentReportDestinationType&& value) { m_destinationTypeHasBeenSet = true; m_destinationType = std::move(value); }

    /**
     * <p> The destination type, such as Amazon S3. </p>
     */
    inline AssessmentReportsDestination& WithDestinationType(const AssessmentReportDestinationType& value) { SetDestinationType(value); return *this;}

    /**
     * <p> The destination type, such as Amazon S3. </p>
     */
    inline AssessmentReportsDestination& WithDestinationType(AssessmentReportDestinationType&& value) { SetDestinationType(std::move(value)); return *this;}


    /**
     * <p> The destination of the assessment report. </p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p> The destination of the assessment report. </p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p> The destination of the assessment report. </p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p> The destination of the assessment report. </p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p> The destination of the assessment report. </p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p> The destination of the assessment report. </p>
     */
    inline AssessmentReportsDestination& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p> The destination of the assessment report. </p>
     */
    inline AssessmentReportsDestination& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p> The destination of the assessment report. </p>
     */
    inline AssessmentReportsDestination& WithDestination(const char* value) { SetDestination(value); return *this;}

  private:

    AssessmentReportDestinationType m_destinationType;
    bool m_destinationTypeHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
