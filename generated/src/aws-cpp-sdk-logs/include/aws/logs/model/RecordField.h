/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>A structure that represents a valid record field header and whether it is
   * mandatory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/RecordField">AWS
   * API Reference</a></p>
   */
  class RecordField
  {
  public:
    AWS_CLOUDWATCHLOGS_API RecordField();
    AWS_CLOUDWATCHLOGS_API RecordField(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API RecordField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name to use when specifying this record field in a <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_CreateDelivery.html">CreateDelivery</a>
     * or <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateDeliveryConfiguration.html">UpdateDeliveryConfiguration</a>
     * operation. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RecordField& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RecordField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RecordField& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this is <code>true</code>, the record field must be present in the
     * <code>recordFields</code> parameter provided to a <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_CreateDelivery.html">CreateDelivery</a>
     * or <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateDeliveryConfiguration.html">UpdateDeliveryConfiguration</a>
     * operation.</p>
     */
    inline bool GetMandatory() const{ return m_mandatory; }
    inline bool MandatoryHasBeenSet() const { return m_mandatoryHasBeenSet; }
    inline void SetMandatory(bool value) { m_mandatoryHasBeenSet = true; m_mandatory = value; }
    inline RecordField& WithMandatory(bool value) { SetMandatory(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_mandatory;
    bool m_mandatoryHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
