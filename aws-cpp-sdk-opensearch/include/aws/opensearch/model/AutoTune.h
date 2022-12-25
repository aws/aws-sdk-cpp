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
   * <p>Information about an Auto-Tune action. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html">Auto-Tune
   * for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AutoTune">AWS
   * API Reference</a></p>
   */
  class AutoTune
  {
  public:
    AWS_OPENSEARCHSERVICE_API AutoTune();
    AWS_OPENSEARCHSERVICE_API AutoTune(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AutoTune& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of Auto-Tune action.</p>
     */
    inline const AutoTuneType& GetAutoTuneType() const{ return m_autoTuneType; }

    /**
     * <p>The type of Auto-Tune action.</p>
     */
    inline bool AutoTuneTypeHasBeenSet() const { return m_autoTuneTypeHasBeenSet; }

    /**
     * <p>The type of Auto-Tune action.</p>
     */
    inline void SetAutoTuneType(const AutoTuneType& value) { m_autoTuneTypeHasBeenSet = true; m_autoTuneType = value; }

    /**
     * <p>The type of Auto-Tune action.</p>
     */
    inline void SetAutoTuneType(AutoTuneType&& value) { m_autoTuneTypeHasBeenSet = true; m_autoTuneType = std::move(value); }

    /**
     * <p>The type of Auto-Tune action.</p>
     */
    inline AutoTune& WithAutoTuneType(const AutoTuneType& value) { SetAutoTuneType(value); return *this;}

    /**
     * <p>The type of Auto-Tune action.</p>
     */
    inline AutoTune& WithAutoTuneType(AutoTuneType&& value) { SetAutoTuneType(std::move(value)); return *this;}


    /**
     * <p>Details about an Auto-Tune action.</p>
     */
    inline const AutoTuneDetails& GetAutoTuneDetails() const{ return m_autoTuneDetails; }

    /**
     * <p>Details about an Auto-Tune action.</p>
     */
    inline bool AutoTuneDetailsHasBeenSet() const { return m_autoTuneDetailsHasBeenSet; }

    /**
     * <p>Details about an Auto-Tune action.</p>
     */
    inline void SetAutoTuneDetails(const AutoTuneDetails& value) { m_autoTuneDetailsHasBeenSet = true; m_autoTuneDetails = value; }

    /**
     * <p>Details about an Auto-Tune action.</p>
     */
    inline void SetAutoTuneDetails(AutoTuneDetails&& value) { m_autoTuneDetailsHasBeenSet = true; m_autoTuneDetails = std::move(value); }

    /**
     * <p>Details about an Auto-Tune action.</p>
     */
    inline AutoTune& WithAutoTuneDetails(const AutoTuneDetails& value) { SetAutoTuneDetails(value); return *this;}

    /**
     * <p>Details about an Auto-Tune action.</p>
     */
    inline AutoTune& WithAutoTuneDetails(AutoTuneDetails&& value) { SetAutoTuneDetails(std::move(value)); return *this;}

  private:

    AutoTuneType m_autoTuneType;
    bool m_autoTuneTypeHasBeenSet = false;

    AutoTuneDetails m_autoTuneDetails;
    bool m_autoTuneDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
