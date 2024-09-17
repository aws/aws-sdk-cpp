/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/ImportStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p> Contains information about an import that was returned by a lookup request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ImportsListItem">AWS
   * API Reference</a></p>
   */
  class ImportsListItem
  {
  public:
    AWS_CLOUDTRAIL_API ImportsListItem();
    AWS_CLOUDTRAIL_API ImportsListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API ImportsListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the import. </p>
     */
    inline const Aws::String& GetImportId() const{ return m_importId; }
    inline bool ImportIdHasBeenSet() const { return m_importIdHasBeenSet; }
    inline void SetImportId(const Aws::String& value) { m_importIdHasBeenSet = true; m_importId = value; }
    inline void SetImportId(Aws::String&& value) { m_importIdHasBeenSet = true; m_importId = std::move(value); }
    inline void SetImportId(const char* value) { m_importIdHasBeenSet = true; m_importId.assign(value); }
    inline ImportsListItem& WithImportId(const Aws::String& value) { SetImportId(value); return *this;}
    inline ImportsListItem& WithImportId(Aws::String&& value) { SetImportId(std::move(value)); return *this;}
    inline ImportsListItem& WithImportId(const char* value) { SetImportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the import. </p>
     */
    inline const ImportStatus& GetImportStatus() const{ return m_importStatus; }
    inline bool ImportStatusHasBeenSet() const { return m_importStatusHasBeenSet; }
    inline void SetImportStatus(const ImportStatus& value) { m_importStatusHasBeenSet = true; m_importStatus = value; }
    inline void SetImportStatus(ImportStatus&& value) { m_importStatusHasBeenSet = true; m_importStatus = std::move(value); }
    inline ImportsListItem& WithImportStatus(const ImportStatus& value) { SetImportStatus(value); return *this;}
    inline ImportsListItem& WithImportStatus(ImportStatus&& value) { SetImportStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinations() const{ return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    inline void SetDestinations(const Aws::Vector<Aws::String>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }
    inline void SetDestinations(Aws::Vector<Aws::String>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }
    inline ImportsListItem& WithDestinations(const Aws::Vector<Aws::String>& value) { SetDestinations(value); return *this;}
    inline ImportsListItem& WithDestinations(Aws::Vector<Aws::String>&& value) { SetDestinations(std::move(value)); return *this;}
    inline ImportsListItem& AddDestinations(const Aws::String& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }
    inline ImportsListItem& AddDestinations(Aws::String&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }
    inline ImportsListItem& AddDestinations(const char* value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The timestamp of the import's creation. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline ImportsListItem& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline ImportsListItem& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of the import's last update. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }
    inline ImportsListItem& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}
    inline ImportsListItem& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_importId;
    bool m_importIdHasBeenSet = false;

    ImportStatus m_importStatus;
    bool m_importStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
