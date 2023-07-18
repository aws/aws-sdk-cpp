/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/AutoTuneType.h>
#include <aws/opensearch/model/AutoTuneDetails.h>
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
   * <p>Specifies the Auto-Tune type and Auto-Tune action details.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AutoTune">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API AutoTune
  {
  public:
    AutoTune();
    AutoTune(Aws::Utils::Json::JsonView jsonValue);
    AutoTune& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the Auto-Tune type. Valid value is SCHEDULED_ACTION.</p>
     */
    inline const AutoTuneType& GetAutoTuneType() const{ return m_autoTuneType; }

    /**
     * <p>Specifies the Auto-Tune type. Valid value is SCHEDULED_ACTION.</p>
     */
    inline bool AutoTuneTypeHasBeenSet() const { return m_autoTuneTypeHasBeenSet; }

    /**
     * <p>Specifies the Auto-Tune type. Valid value is SCHEDULED_ACTION.</p>
     */
    inline void SetAutoTuneType(const AutoTuneType& value) { m_autoTuneTypeHasBeenSet = true; m_autoTuneType = value; }

    /**
     * <p>Specifies the Auto-Tune type. Valid value is SCHEDULED_ACTION.</p>
     */
    inline void SetAutoTuneType(AutoTuneType&& value) { m_autoTuneTypeHasBeenSet = true; m_autoTuneType = std::move(value); }

    /**
     * <p>Specifies the Auto-Tune type. Valid value is SCHEDULED_ACTION.</p>
     */
    inline AutoTune& WithAutoTuneType(const AutoTuneType& value) { SetAutoTuneType(value); return *this;}

    /**
     * <p>Specifies the Auto-Tune type. Valid value is SCHEDULED_ACTION.</p>
     */
    inline AutoTune& WithAutoTuneType(AutoTuneType&& value) { SetAutoTuneType(std::move(value)); return *this;}


    /**
     * <p>Specifies details about the Auto-Tune action. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline const AutoTuneDetails& GetAutoTuneDetails() const{ return m_autoTuneDetails; }

    /**
     * <p>Specifies details about the Auto-Tune action. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline bool AutoTuneDetailsHasBeenSet() const { return m_autoTuneDetailsHasBeenSet; }

    /**
     * <p>Specifies details about the Auto-Tune action. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline void SetAutoTuneDetails(const AutoTuneDetails& value) { m_autoTuneDetailsHasBeenSet = true; m_autoTuneDetails = value; }

    /**
     * <p>Specifies details about the Auto-Tune action. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline void SetAutoTuneDetails(AutoTuneDetails&& value) { m_autoTuneDetailsHasBeenSet = true; m_autoTuneDetails = std::move(value); }

    /**
     * <p>Specifies details about the Auto-Tune action. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline AutoTune& WithAutoTuneDetails(const AutoTuneDetails& value) { SetAutoTuneDetails(value); return *this;}

    /**
     * <p>Specifies details about the Auto-Tune action. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline AutoTune& WithAutoTuneDetails(AutoTuneDetails&& value) { SetAutoTuneDetails(std::move(value)); return *this;}

  private:

    AutoTuneType m_autoTuneType;
    bool m_autoTuneTypeHasBeenSet;

    AutoTuneDetails m_autoTuneDetails;
    bool m_autoTuneDetailsHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
