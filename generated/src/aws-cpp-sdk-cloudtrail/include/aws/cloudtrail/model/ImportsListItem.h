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
    AWS_CLOUDTRAIL_API ImportsListItem() = default;
    AWS_CLOUDTRAIL_API ImportsListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API ImportsListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the import. </p>
     */
    inline const Aws::String& GetImportId() const { return m_importId; }
    inline bool ImportIdHasBeenSet() const { return m_importIdHasBeenSet; }
    template<typename ImportIdT = Aws::String>
    void SetImportId(ImportIdT&& value) { m_importIdHasBeenSet = true; m_importId = std::forward<ImportIdT>(value); }
    template<typename ImportIdT = Aws::String>
    ImportsListItem& WithImportId(ImportIdT&& value) { SetImportId(std::forward<ImportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the import. </p>
     */
    inline ImportStatus GetImportStatus() const { return m_importStatus; }
    inline bool ImportStatusHasBeenSet() const { return m_importStatusHasBeenSet; }
    inline void SetImportStatus(ImportStatus value) { m_importStatusHasBeenSet = true; m_importStatus = value; }
    inline ImportsListItem& WithImportStatus(ImportStatus value) { SetImportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<Aws::String>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<Aws::String>>
    ImportsListItem& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = Aws::String>
    ImportsListItem& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The timestamp of the import's creation. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    ImportsListItem& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of the import's last update. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    ImportsListItem& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_importId;
    bool m_importIdHasBeenSet = false;

    ImportStatus m_importStatus{ImportStatus::NOT_SET};
    bool m_importStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
