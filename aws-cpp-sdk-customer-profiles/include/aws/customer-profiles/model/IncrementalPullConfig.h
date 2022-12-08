/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Specifies the configuration used when importing incremental records from the
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/IncrementalPullConfig">AWS
   * API Reference</a></p>
   */
  class IncrementalPullConfig
  {
  public:
    AWS_CUSTOMERPROFILES_API IncrementalPullConfig();
    AWS_CUSTOMERPROFILES_API IncrementalPullConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API IncrementalPullConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A field that specifies the date time or timestamp field as the criteria to
     * use when importing incremental records from the source.</p>
     */
    inline const Aws::String& GetDatetimeTypeFieldName() const{ return m_datetimeTypeFieldName; }

    /**
     * <p>A field that specifies the date time or timestamp field as the criteria to
     * use when importing incremental records from the source.</p>
     */
    inline bool DatetimeTypeFieldNameHasBeenSet() const { return m_datetimeTypeFieldNameHasBeenSet; }

    /**
     * <p>A field that specifies the date time or timestamp field as the criteria to
     * use when importing incremental records from the source.</p>
     */
    inline void SetDatetimeTypeFieldName(const Aws::String& value) { m_datetimeTypeFieldNameHasBeenSet = true; m_datetimeTypeFieldName = value; }

    /**
     * <p>A field that specifies the date time or timestamp field as the criteria to
     * use when importing incremental records from the source.</p>
     */
    inline void SetDatetimeTypeFieldName(Aws::String&& value) { m_datetimeTypeFieldNameHasBeenSet = true; m_datetimeTypeFieldName = std::move(value); }

    /**
     * <p>A field that specifies the date time or timestamp field as the criteria to
     * use when importing incremental records from the source.</p>
     */
    inline void SetDatetimeTypeFieldName(const char* value) { m_datetimeTypeFieldNameHasBeenSet = true; m_datetimeTypeFieldName.assign(value); }

    /**
     * <p>A field that specifies the date time or timestamp field as the criteria to
     * use when importing incremental records from the source.</p>
     */
    inline IncrementalPullConfig& WithDatetimeTypeFieldName(const Aws::String& value) { SetDatetimeTypeFieldName(value); return *this;}

    /**
     * <p>A field that specifies the date time or timestamp field as the criteria to
     * use when importing incremental records from the source.</p>
     */
    inline IncrementalPullConfig& WithDatetimeTypeFieldName(Aws::String&& value) { SetDatetimeTypeFieldName(std::move(value)); return *this;}

    /**
     * <p>A field that specifies the date time or timestamp field as the criteria to
     * use when importing incremental records from the source.</p>
     */
    inline IncrementalPullConfig& WithDatetimeTypeFieldName(const char* value) { SetDatetimeTypeFieldName(value); return *this;}

  private:

    Aws::String m_datetimeTypeFieldName;
    bool m_datetimeTypeFieldNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
