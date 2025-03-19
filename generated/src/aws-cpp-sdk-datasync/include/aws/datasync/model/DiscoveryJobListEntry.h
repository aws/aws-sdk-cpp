/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/DiscoveryJobStatus.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>The details about a specific DataSync discovery job.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DiscoveryJobListEntry">AWS
   * API Reference</a></p>
   */
  class DiscoveryJobListEntry
  {
  public:
    AWS_DATASYNC_API DiscoveryJobListEntry() = default;
    AWS_DATASYNC_API DiscoveryJobListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API DiscoveryJobListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a discovery job.</p>
     */
    inline const Aws::String& GetDiscoveryJobArn() const { return m_discoveryJobArn; }
    inline bool DiscoveryJobArnHasBeenSet() const { return m_discoveryJobArnHasBeenSet; }
    template<typename DiscoveryJobArnT = Aws::String>
    void SetDiscoveryJobArn(DiscoveryJobArnT&& value) { m_discoveryJobArnHasBeenSet = true; m_discoveryJobArn = std::forward<DiscoveryJobArnT>(value); }
    template<typename DiscoveryJobArnT = Aws::String>
    DiscoveryJobListEntry& WithDiscoveryJobArn(DiscoveryJobArnT&& value) { SetDiscoveryJobArn(std::forward<DiscoveryJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a discovery job. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#discovery-job-statuses-table">Discovery
     * job statuses</a>.</p>
     */
    inline DiscoveryJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DiscoveryJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DiscoveryJobListEntry& WithStatus(DiscoveryJobStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_discoveryJobArn;
    bool m_discoveryJobArnHasBeenSet = false;

    DiscoveryJobStatus m_status{DiscoveryJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
