/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p> A partition dimension defined by a timestamp attribute. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/TimestampPartition">AWS
   * API Reference</a></p>
   */
  class TimestampPartition
  {
  public:
    AWS_IOTANALYTICS_API TimestampPartition();
    AWS_IOTANALYTICS_API TimestampPartition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API TimestampPartition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The attribute name of the partition defined by a timestamp. </p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p> The attribute name of the partition defined by a timestamp. </p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p> The attribute name of the partition defined by a timestamp. </p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p> The attribute name of the partition defined by a timestamp. </p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p> The attribute name of the partition defined by a timestamp. </p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p> The attribute name of the partition defined by a timestamp. </p>
     */
    inline TimestampPartition& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p> The attribute name of the partition defined by a timestamp. </p>
     */
    inline TimestampPartition& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p> The attribute name of the partition defined by a timestamp. </p>
     */
    inline TimestampPartition& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p> The timestamp format of a partition defined by a timestamp. The default
     * format is seconds since epoch (January 1, 1970 at midnight UTC time). </p>
     */
    inline const Aws::String& GetTimestampFormat() const{ return m_timestampFormat; }

    /**
     * <p> The timestamp format of a partition defined by a timestamp. The default
     * format is seconds since epoch (January 1, 1970 at midnight UTC time). </p>
     */
    inline bool TimestampFormatHasBeenSet() const { return m_timestampFormatHasBeenSet; }

    /**
     * <p> The timestamp format of a partition defined by a timestamp. The default
     * format is seconds since epoch (January 1, 1970 at midnight UTC time). </p>
     */
    inline void SetTimestampFormat(const Aws::String& value) { m_timestampFormatHasBeenSet = true; m_timestampFormat = value; }

    /**
     * <p> The timestamp format of a partition defined by a timestamp. The default
     * format is seconds since epoch (January 1, 1970 at midnight UTC time). </p>
     */
    inline void SetTimestampFormat(Aws::String&& value) { m_timestampFormatHasBeenSet = true; m_timestampFormat = std::move(value); }

    /**
     * <p> The timestamp format of a partition defined by a timestamp. The default
     * format is seconds since epoch (January 1, 1970 at midnight UTC time). </p>
     */
    inline void SetTimestampFormat(const char* value) { m_timestampFormatHasBeenSet = true; m_timestampFormat.assign(value); }

    /**
     * <p> The timestamp format of a partition defined by a timestamp. The default
     * format is seconds since epoch (January 1, 1970 at midnight UTC time). </p>
     */
    inline TimestampPartition& WithTimestampFormat(const Aws::String& value) { SetTimestampFormat(value); return *this;}

    /**
     * <p> The timestamp format of a partition defined by a timestamp. The default
     * format is seconds since epoch (January 1, 1970 at midnight UTC time). </p>
     */
    inline TimestampPartition& WithTimestampFormat(Aws::String&& value) { SetTimestampFormat(std::move(value)); return *this;}

    /**
     * <p> The timestamp format of a partition defined by a timestamp. The default
     * format is seconds since epoch (January 1, 1970 at midnight UTC time). </p>
     */
    inline TimestampPartition& WithTimestampFormat(const char* value) { SetTimestampFormat(value); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::String m_timestampFormat;
    bool m_timestampFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
