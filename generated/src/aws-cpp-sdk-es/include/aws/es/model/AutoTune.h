/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/AutoTuneType.h>
#include <aws/es/model/AutoTuneDetails.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Specifies Auto-Tune type and Auto-Tune action details. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AutoTune">AWS API
   * Reference</a></p>
   */
  class AutoTune
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AutoTune();
    AWS_ELASTICSEARCHSERVICE_API AutoTune(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API AutoTune& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies Auto-Tune type. Valid value is SCHEDULED_ACTION. </p>
     */
    inline const AutoTuneType& GetAutoTuneType() const{ return m_autoTuneType; }

    /**
     * <p>Specifies Auto-Tune type. Valid value is SCHEDULED_ACTION. </p>
     */
    inline bool AutoTuneTypeHasBeenSet() const { return m_autoTuneTypeHasBeenSet; }

    /**
     * <p>Specifies Auto-Tune type. Valid value is SCHEDULED_ACTION. </p>
     */
    inline void SetAutoTuneType(const AutoTuneType& value) { m_autoTuneTypeHasBeenSet = true; m_autoTuneType = value; }

    /**
     * <p>Specifies Auto-Tune type. Valid value is SCHEDULED_ACTION. </p>
     */
    inline void SetAutoTuneType(AutoTuneType&& value) { m_autoTuneTypeHasBeenSet = true; m_autoTuneType = std::move(value); }

    /**
     * <p>Specifies Auto-Tune type. Valid value is SCHEDULED_ACTION. </p>
     */
    inline AutoTune& WithAutoTuneType(const AutoTuneType& value) { SetAutoTuneType(value); return *this;}

    /**
     * <p>Specifies Auto-Tune type. Valid value is SCHEDULED_ACTION. </p>
     */
    inline AutoTune& WithAutoTuneType(AutoTuneType&& value) { SetAutoTuneType(std::move(value)); return *this;}


    /**
     * <p>Specifies details of the Auto-Tune action. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information. </p>
     */
    inline const AutoTuneDetails& GetAutoTuneDetails() const{ return m_autoTuneDetails; }

    /**
     * <p>Specifies details of the Auto-Tune action. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information. </p>
     */
    inline bool AutoTuneDetailsHasBeenSet() const { return m_autoTuneDetailsHasBeenSet; }

    /**
     * <p>Specifies details of the Auto-Tune action. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information. </p>
     */
    inline void SetAutoTuneDetails(const AutoTuneDetails& value) { m_autoTuneDetailsHasBeenSet = true; m_autoTuneDetails = value; }

    /**
     * <p>Specifies details of the Auto-Tune action. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information. </p>
     */
    inline void SetAutoTuneDetails(AutoTuneDetails&& value) { m_autoTuneDetailsHasBeenSet = true; m_autoTuneDetails = std::move(value); }

    /**
     * <p>Specifies details of the Auto-Tune action. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information. </p>
     */
    inline AutoTune& WithAutoTuneDetails(const AutoTuneDetails& value) { SetAutoTuneDetails(value); return *this;}

    /**
     * <p>Specifies details of the Auto-Tune action. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information. </p>
     */
    inline AutoTune& WithAutoTuneDetails(AutoTuneDetails&& value) { SetAutoTuneDetails(std::move(value)); return *this;}

  private:

    AutoTuneType m_autoTuneType;
    bool m_autoTuneTypeHasBeenSet = false;

    AutoTuneDetails m_autoTuneDetails;
    bool m_autoTuneDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
