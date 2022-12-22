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


    /**
     * <p> The ARN of the destination event data store. Use this parameter for a new
     * import. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinations() const{ return m_destinations; }

    /**
     * <p> The ARN of the destination event data store. Use this parameter for a new
     * import. </p>
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p> The ARN of the destination event data store. Use this parameter for a new
     * import. </p>
     */
    inline void SetDestinations(const Aws::Vector<Aws::String>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p> The ARN of the destination event data store. Use this parameter for a new
     * import. </p>
     */
    inline void SetDestinations(Aws::Vector<Aws::String>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p> The ARN of the destination event data store. Use this parameter for a new
     * import. </p>
     */
    inline StartImportRequest& WithDestinations(const Aws::Vector<Aws::String>& value) { SetDestinations(value); return *this;}

    /**
     * <p> The ARN of the destination event data store. Use this parameter for a new
     * import. </p>
     */
    inline StartImportRequest& WithDestinations(Aws::Vector<Aws::String>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p> The ARN of the destination event data store. Use this parameter for a new
     * import. </p>
     */
    inline StartImportRequest& AddDestinations(const Aws::String& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p> The ARN of the destination event data store. Use this parameter for a new
     * import. </p>
     */
    inline StartImportRequest& AddDestinations(Aws::String&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }

    /**
     * <p> The ARN of the destination event data store. Use this parameter for a new
     * import. </p>
     */
    inline StartImportRequest& AddDestinations(const char* value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }


    /**
     * <p> The source S3 bucket for the import. Use this parameter for a new import.
     * </p>
     */
    inline const ImportSource& GetImportSource() const{ return m_importSource; }

    /**
     * <p> The source S3 bucket for the import. Use this parameter for a new import.
     * </p>
     */
    inline bool ImportSourceHasBeenSet() const { return m_importSourceHasBeenSet; }

    /**
     * <p> The source S3 bucket for the import. Use this parameter for a new import.
     * </p>
     */
    inline void SetImportSource(const ImportSource& value) { m_importSourceHasBeenSet = true; m_importSource = value; }

    /**
     * <p> The source S3 bucket for the import. Use this parameter for a new import.
     * </p>
     */
    inline void SetImportSource(ImportSource&& value) { m_importSourceHasBeenSet = true; m_importSource = std::move(value); }

    /**
     * <p> The source S3 bucket for the import. Use this parameter for a new import.
     * </p>
     */
    inline StartImportRequest& WithImportSource(const ImportSource& value) { SetImportSource(value); return *this;}

    /**
     * <p> The source S3 bucket for the import. Use this parameter for a new import.
     * </p>
     */
    inline StartImportRequest& WithImportSource(ImportSource&& value) { SetImportSource(std::move(value)); return *this;}


    /**
     * <p> Use with <code>EndEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. When you specify a time range, CloudTrail checks the
     * prefix and log file names to verify the names contain a date between the
     * specified <code>StartEventTime</code> and <code>EndEventTime</code> before
     * attempting to import events. </p>
     */
    inline const Aws::Utils::DateTime& GetStartEventTime() const{ return m_startEventTime; }

    /**
     * <p> Use with <code>EndEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. When you specify a time range, CloudTrail checks the
     * prefix and log file names to verify the names contain a date between the
     * specified <code>StartEventTime</code> and <code>EndEventTime</code> before
     * attempting to import events. </p>
     */
    inline bool StartEventTimeHasBeenSet() const { return m_startEventTimeHasBeenSet; }

    /**
     * <p> Use with <code>EndEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. When you specify a time range, CloudTrail checks the
     * prefix and log file names to verify the names contain a date between the
     * specified <code>StartEventTime</code> and <code>EndEventTime</code> before
     * attempting to import events. </p>
     */
    inline void SetStartEventTime(const Aws::Utils::DateTime& value) { m_startEventTimeHasBeenSet = true; m_startEventTime = value; }

    /**
     * <p> Use with <code>EndEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. When you specify a time range, CloudTrail checks the
     * prefix and log file names to verify the names contain a date between the
     * specified <code>StartEventTime</code> and <code>EndEventTime</code> before
     * attempting to import events. </p>
     */
    inline void SetStartEventTime(Aws::Utils::DateTime&& value) { m_startEventTimeHasBeenSet = true; m_startEventTime = std::move(value); }

    /**
     * <p> Use with <code>EndEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. When you specify a time range, CloudTrail checks the
     * prefix and log file names to verify the names contain a date between the
     * specified <code>StartEventTime</code> and <code>EndEventTime</code> before
     * attempting to import events. </p>
     */
    inline StartImportRequest& WithStartEventTime(const Aws::Utils::DateTime& value) { SetStartEventTime(value); return *this;}

    /**
     * <p> Use with <code>EndEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. When you specify a time range, CloudTrail checks the
     * prefix and log file names to verify the names contain a date between the
     * specified <code>StartEventTime</code> and <code>EndEventTime</code> before
     * attempting to import events. </p>
     */
    inline StartImportRequest& WithStartEventTime(Aws::Utils::DateTime&& value) { SetStartEventTime(std::move(value)); return *this;}


    /**
     * <p> Use with <code>StartEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. When you specify a time range, CloudTrail checks the
     * prefix and log file names to verify the names contain a date between the
     * specified <code>StartEventTime</code> and <code>EndEventTime</code> before
     * attempting to import events. </p>
     */
    inline const Aws::Utils::DateTime& GetEndEventTime() const{ return m_endEventTime; }

    /**
     * <p> Use with <code>StartEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. When you specify a time range, CloudTrail checks the
     * prefix and log file names to verify the names contain a date between the
     * specified <code>StartEventTime</code> and <code>EndEventTime</code> before
     * attempting to import events. </p>
     */
    inline bool EndEventTimeHasBeenSet() const { return m_endEventTimeHasBeenSet; }

    /**
     * <p> Use with <code>StartEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. When you specify a time range, CloudTrail checks the
     * prefix and log file names to verify the names contain a date between the
     * specified <code>StartEventTime</code> and <code>EndEventTime</code> before
     * attempting to import events. </p>
     */
    inline void SetEndEventTime(const Aws::Utils::DateTime& value) { m_endEventTimeHasBeenSet = true; m_endEventTime = value; }

    /**
     * <p> Use with <code>StartEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. When you specify a time range, CloudTrail checks the
     * prefix and log file names to verify the names contain a date between the
     * specified <code>StartEventTime</code> and <code>EndEventTime</code> before
     * attempting to import events. </p>
     */
    inline void SetEndEventTime(Aws::Utils::DateTime&& value) { m_endEventTimeHasBeenSet = true; m_endEventTime = std::move(value); }

    /**
     * <p> Use with <code>StartEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. When you specify a time range, CloudTrail checks the
     * prefix and log file names to verify the names contain a date between the
     * specified <code>StartEventTime</code> and <code>EndEventTime</code> before
     * attempting to import events. </p>
     */
    inline StartImportRequest& WithEndEventTime(const Aws::Utils::DateTime& value) { SetEndEventTime(value); return *this;}

    /**
     * <p> Use with <code>StartEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. When you specify a time range, CloudTrail checks the
     * prefix and log file names to verify the names contain a date between the
     * specified <code>StartEventTime</code> and <code>EndEventTime</code> before
     * attempting to import events. </p>
     */
    inline StartImportRequest& WithEndEventTime(Aws::Utils::DateTime&& value) { SetEndEventTime(std::move(value)); return *this;}


    /**
     * <p> The ID of the import. Use this parameter when you are retrying an import.
     * </p>
     */
    inline const Aws::String& GetImportId() const{ return m_importId; }

    /**
     * <p> The ID of the import. Use this parameter when you are retrying an import.
     * </p>
     */
    inline bool ImportIdHasBeenSet() const { return m_importIdHasBeenSet; }

    /**
     * <p> The ID of the import. Use this parameter when you are retrying an import.
     * </p>
     */
    inline void SetImportId(const Aws::String& value) { m_importIdHasBeenSet = true; m_importId = value; }

    /**
     * <p> The ID of the import. Use this parameter when you are retrying an import.
     * </p>
     */
    inline void SetImportId(Aws::String&& value) { m_importIdHasBeenSet = true; m_importId = std::move(value); }

    /**
     * <p> The ID of the import. Use this parameter when you are retrying an import.
     * </p>
     */
    inline void SetImportId(const char* value) { m_importIdHasBeenSet = true; m_importId.assign(value); }

    /**
     * <p> The ID of the import. Use this parameter when you are retrying an import.
     * </p>
     */
    inline StartImportRequest& WithImportId(const Aws::String& value) { SetImportId(value); return *this;}

    /**
     * <p> The ID of the import. Use this parameter when you are retrying an import.
     * </p>
     */
    inline StartImportRequest& WithImportId(Aws::String&& value) { SetImportId(std::move(value)); return *this;}

    /**
     * <p> The ID of the import. Use this parameter when you are retrying an import.
     * </p>
     */
    inline StartImportRequest& WithImportId(const char* value) { SetImportId(value); return *this;}

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
