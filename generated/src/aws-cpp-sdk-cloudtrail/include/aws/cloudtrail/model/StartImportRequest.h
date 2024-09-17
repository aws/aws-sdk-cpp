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
    AWS_CLOUDTRAIL_API StartImportRequest();

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
    inline const Aws::Vector<Aws::String>& GetDestinations() const{ return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    inline void SetDestinations(const Aws::Vector<Aws::String>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }
    inline void SetDestinations(Aws::Vector<Aws::String>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }
    inline StartImportRequest& WithDestinations(const Aws::Vector<Aws::String>& value) { SetDestinations(value); return *this;}
    inline StartImportRequest& WithDestinations(Aws::Vector<Aws::String>&& value) { SetDestinations(std::move(value)); return *this;}
    inline StartImportRequest& AddDestinations(const Aws::String& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }
    inline StartImportRequest& AddDestinations(Aws::String&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }
    inline StartImportRequest& AddDestinations(const char* value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The source S3 bucket for the import. Use this parameter for a new import.
     * </p>
     */
    inline const ImportSource& GetImportSource() const{ return m_importSource; }
    inline bool ImportSourceHasBeenSet() const { return m_importSourceHasBeenSet; }
    inline void SetImportSource(const ImportSource& value) { m_importSourceHasBeenSet = true; m_importSource = value; }
    inline void SetImportSource(ImportSource&& value) { m_importSourceHasBeenSet = true; m_importSource = std::move(value); }
    inline StartImportRequest& WithImportSource(const ImportSource& value) { SetImportSource(value); return *this;}
    inline StartImportRequest& WithImportSource(ImportSource&& value) { SetImportSource(std::move(value)); return *this;}
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
    inline const Aws::Utils::DateTime& GetStartEventTime() const{ return m_startEventTime; }
    inline bool StartEventTimeHasBeenSet() const { return m_startEventTimeHasBeenSet; }
    inline void SetStartEventTime(const Aws::Utils::DateTime& value) { m_startEventTimeHasBeenSet = true; m_startEventTime = value; }
    inline void SetStartEventTime(Aws::Utils::DateTime&& value) { m_startEventTimeHasBeenSet = true; m_startEventTime = std::move(value); }
    inline StartImportRequest& WithStartEventTime(const Aws::Utils::DateTime& value) { SetStartEventTime(value); return *this;}
    inline StartImportRequest& WithStartEventTime(Aws::Utils::DateTime&& value) { SetStartEventTime(std::move(value)); return *this;}
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
    inline const Aws::Utils::DateTime& GetEndEventTime() const{ return m_endEventTime; }
    inline bool EndEventTimeHasBeenSet() const { return m_endEventTimeHasBeenSet; }
    inline void SetEndEventTime(const Aws::Utils::DateTime& value) { m_endEventTimeHasBeenSet = true; m_endEventTime = value; }
    inline void SetEndEventTime(Aws::Utils::DateTime&& value) { m_endEventTimeHasBeenSet = true; m_endEventTime = std::move(value); }
    inline StartImportRequest& WithEndEventTime(const Aws::Utils::DateTime& value) { SetEndEventTime(value); return *this;}
    inline StartImportRequest& WithEndEventTime(Aws::Utils::DateTime&& value) { SetEndEventTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the import. Use this parameter when you are retrying an import.
     * </p>
     */
    inline const Aws::String& GetImportId() const{ return m_importId; }
    inline bool ImportIdHasBeenSet() const { return m_importIdHasBeenSet; }
    inline void SetImportId(const Aws::String& value) { m_importIdHasBeenSet = true; m_importId = value; }
    inline void SetImportId(Aws::String&& value) { m_importIdHasBeenSet = true; m_importId = std::move(value); }
    inline void SetImportId(const char* value) { m_importIdHasBeenSet = true; m_importId.assign(value); }
    inline StartImportRequest& WithImportId(const Aws::String& value) { SetImportId(value); return *this;}
    inline StartImportRequest& WithImportId(Aws::String&& value) { SetImportId(std::move(value)); return *this;}
    inline StartImportRequest& WithImportId(const char* value) { SetImportId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_destinations;
    bool m_destinationsHasBeenSet = false;

    ImportSource m_importSource;
    bool m_importSourceHasBeenSet = false;

    Aws::Utils::DateTime m_startEventTime;
    bool m_startEventTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endEventTime;
    bool m_endEventTimeHasBeenSet = false;

    Aws::String m_importId;
    bool m_importIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
