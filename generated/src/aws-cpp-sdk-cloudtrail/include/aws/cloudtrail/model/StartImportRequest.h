/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/ImportSource.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class StartImportRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API StartImportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartImport"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ARN of the destination event data store. Use this parameter for a new
     * import. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<Aws::String>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<Aws::String>>
    StartImportRequest& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = Aws::String>
    StartImportRequest& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The source S3 bucket for the import. Use this parameter for a new import.
     * </p>
     */
    inline const ImportSource& GetImportSource() const { return m_importSource; }
    inline bool ImportSourceHasBeenSet() const { return m_importSourceHasBeenSet; }
    template<typename ImportSourceT = ImportSource>
    void SetImportSource(ImportSourceT&& value) { m_importSourceHasBeenSet = true; m_importSource = std::forward<ImportSourceT>(value); }
    template<typename ImportSourceT = ImportSource>
    StartImportRequest& WithImportSource(ImportSourceT&& value) { SetImportSource(std::forward<ImportSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Use with <code>EndEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. When you specify a time range, CloudTrail checks the
     * prefix and log file names to verify the names contain a date between the
     * specified <code>StartEventTime</code> and <code>EndEventTime</code> before
     * attempting to import events. </p>
     */
    inline const Aws::Utils::DateTime& GetStartEventTime() const { return m_startEventTime; }
    inline bool StartEventTimeHasBeenSet() const { return m_startEventTimeHasBeenSet; }
    template<typename StartEventTimeT = Aws::Utils::DateTime>
    void SetStartEventTime(StartEventTimeT&& value) { m_startEventTimeHasBeenSet = true; m_startEventTime = std::forward<StartEventTimeT>(value); }
    template<typename StartEventTimeT = Aws::Utils::DateTime>
    StartImportRequest& WithStartEventTime(StartEventTimeT&& value) { SetStartEventTime(std::forward<StartEventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Use with <code>StartEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. When you specify a time range, CloudTrail checks the
     * prefix and log file names to verify the names contain a date between the
     * specified <code>StartEventTime</code> and <code>EndEventTime</code> before
     * attempting to import events. </p>
     */
    inline const Aws::Utils::DateTime& GetEndEventTime() const { return m_endEventTime; }
    inline bool EndEventTimeHasBeenSet() const { return m_endEventTimeHasBeenSet; }
    template<typename EndEventTimeT = Aws::Utils::DateTime>
    void SetEndEventTime(EndEventTimeT&& value) { m_endEventTimeHasBeenSet = true; m_endEventTime = std::forward<EndEventTimeT>(value); }
    template<typename EndEventTimeT = Aws::Utils::DateTime>
    StartImportRequest& WithEndEventTime(EndEventTimeT&& value) { SetEndEventTime(std::forward<EndEventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the import. Use this parameter when you are retrying an import.
     * </p>
     */
    inline const Aws::String& GetImportId() const { return m_importId; }
    inline bool ImportIdHasBeenSet() const { return m_importIdHasBeenSet; }
    template<typename ImportIdT = Aws::String>
    void SetImportId(ImportIdT&& value) { m_importIdHasBeenSet = true; m_importId = std::forward<ImportIdT>(value); }
    template<typename ImportIdT = Aws::String>
    StartImportRequest& WithImportId(ImportIdT&& value) { SetImportId(std::forward<ImportIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_destinations;
    bool m_destinationsHasBeenSet = false;

    ImportSource m_importSource;
    bool m_importSourceHasBeenSet = false;

    Aws::Utils::DateTime m_startEventTime{};
    bool m_startEventTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endEventTime{};
    bool m_endEventTimeHasBeenSet = false;

    Aws::String m_importId;
    bool m_importIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
