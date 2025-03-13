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
    AWS_AUDITMANAGER_API AssessmentReportsDestination() = default;
    AWS_AUDITMANAGER_API AssessmentReportsDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AssessmentReportsDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The destination type, such as Amazon S3. </p>
     */
    inline AssessmentReportDestinationType GetDestinationType() const { return m_destinationType; }
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }
    inline void SetDestinationType(AssessmentReportDestinationType value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }
    inline AssessmentReportsDestination& WithDestinationType(AssessmentReportDestinationType value) { SetDestinationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The destination bucket where Audit Manager stores assessment reports. </p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    AssessmentReportsDestination& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}
  private:

    AssessmentReportDestinationType m_destinationType{AssessmentReportDestinationType::NOT_SET};
    bool m_destinationTypeHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
