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
    AWS_CUSTOMERPROFILES_API IncrementalPullConfig() = default;
    AWS_CUSTOMERPROFILES_API IncrementalPullConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API IncrementalPullConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A field that specifies the date time or timestamp field as the criteria to
     * use when importing incremental records from the source.</p>
     */
    inline const Aws::String& GetDatetimeTypeFieldName() const { return m_datetimeTypeFieldName; }
    inline bool DatetimeTypeFieldNameHasBeenSet() const { return m_datetimeTypeFieldNameHasBeenSet; }
    template<typename DatetimeTypeFieldNameT = Aws::String>
    void SetDatetimeTypeFieldName(DatetimeTypeFieldNameT&& value) { m_datetimeTypeFieldNameHasBeenSet = true; m_datetimeTypeFieldName = std::forward<DatetimeTypeFieldNameT>(value); }
    template<typename DatetimeTypeFieldNameT = Aws::String>
    IncrementalPullConfig& WithDatetimeTypeFieldName(DatetimeTypeFieldNameT&& value) { SetDatetimeTypeFieldName(std::forward<DatetimeTypeFieldNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datetimeTypeFieldName;
    bool m_datetimeTypeFieldNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
