/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/ScheduledAutoTuneDetails.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Specifies details about a scheduled Auto-Tune action. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html">Auto-Tune
   * for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AutoTuneDetails">AWS
   * API Reference</a></p>
   */
  class AutoTuneDetails
  {
  public:
    AWS_OPENSEARCHSERVICE_API AutoTuneDetails();
    AWS_OPENSEARCHSERVICE_API AutoTuneDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AutoTuneDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Container for details about a scheduled Auto-Tune action.</p>
     */
    inline const ScheduledAutoTuneDetails& GetScheduledAutoTuneDetails() const{ return m_scheduledAutoTuneDetails; }

    /**
     * <p>Container for details about a scheduled Auto-Tune action.</p>
     */
    inline bool ScheduledAutoTuneDetailsHasBeenSet() const { return m_scheduledAutoTuneDetailsHasBeenSet; }

    /**
     * <p>Container for details about a scheduled Auto-Tune action.</p>
     */
    inline void SetScheduledAutoTuneDetails(const ScheduledAutoTuneDetails& value) { m_scheduledAutoTuneDetailsHasBeenSet = true; m_scheduledAutoTuneDetails = value; }

    /**
     * <p>Container for details about a scheduled Auto-Tune action.</p>
     */
    inline void SetScheduledAutoTuneDetails(ScheduledAutoTuneDetails&& value) { m_scheduledAutoTuneDetailsHasBeenSet = true; m_scheduledAutoTuneDetails = std::move(value); }

    /**
     * <p>Container for details about a scheduled Auto-Tune action.</p>
     */
    inline AutoTuneDetails& WithScheduledAutoTuneDetails(const ScheduledAutoTuneDetails& value) { SetScheduledAutoTuneDetails(value); return *this;}

    /**
     * <p>Container for details about a scheduled Auto-Tune action.</p>
     */
    inline AutoTuneDetails& WithScheduledAutoTuneDetails(ScheduledAutoTuneDetails&& value) { SetScheduledAutoTuneDetails(std::move(value)); return *this;}

  private:

    ScheduledAutoTuneDetails m_scheduledAutoTuneDetails;
    bool m_scheduledAutoTuneDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
