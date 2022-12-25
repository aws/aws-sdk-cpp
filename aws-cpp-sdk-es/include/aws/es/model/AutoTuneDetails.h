/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/ScheduledAutoTuneDetails.h>
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
   * <p>Specifies details of the Auto-Tune action. See the <a
   * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
   * target="_blank">Developer Guide</a> for more information. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AutoTuneDetails">AWS
   * API Reference</a></p>
   */
  class AutoTuneDetails
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AutoTuneDetails();
    AWS_ELASTICSEARCHSERVICE_API AutoTuneDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API AutoTuneDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ScheduledAutoTuneDetails& GetScheduledAutoTuneDetails() const{ return m_scheduledAutoTuneDetails; }

    
    inline bool ScheduledAutoTuneDetailsHasBeenSet() const { return m_scheduledAutoTuneDetailsHasBeenSet; }

    
    inline void SetScheduledAutoTuneDetails(const ScheduledAutoTuneDetails& value) { m_scheduledAutoTuneDetailsHasBeenSet = true; m_scheduledAutoTuneDetails = value; }

    
    inline void SetScheduledAutoTuneDetails(ScheduledAutoTuneDetails&& value) { m_scheduledAutoTuneDetailsHasBeenSet = true; m_scheduledAutoTuneDetails = std::move(value); }

    
    inline AutoTuneDetails& WithScheduledAutoTuneDetails(const ScheduledAutoTuneDetails& value) { SetScheduledAutoTuneDetails(value); return *this;}

    
    inline AutoTuneDetails& WithScheduledAutoTuneDetails(ScheduledAutoTuneDetails&& value) { SetScheduledAutoTuneDetails(std::move(value)); return *this;}

  private:

    ScheduledAutoTuneDetails m_scheduledAutoTuneDetails;
    bool m_scheduledAutoTuneDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
