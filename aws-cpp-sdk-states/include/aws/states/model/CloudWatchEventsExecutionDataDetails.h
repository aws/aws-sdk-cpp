/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>

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
namespace SFN
{
namespace Model
{

  /**
   * <p>Provides details about execution input or output.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/CloudWatchEventsExecutionDataDetails">AWS
   * API Reference</a></p>
   */
  class CloudWatchEventsExecutionDataDetails
  {
  public:
    AWS_SFN_API CloudWatchEventsExecutionDataDetails();
    AWS_SFN_API CloudWatchEventsExecutionDataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API CloudWatchEventsExecutionDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether input or output was included in the response. Always
     * <code>true</code> for API calls. </p>
     */
    inline bool GetIncluded() const{ return m_included; }

    /**
     * <p>Indicates whether input or output was included in the response. Always
     * <code>true</code> for API calls. </p>
     */
    inline bool IncludedHasBeenSet() const { return m_includedHasBeenSet; }

    /**
     * <p>Indicates whether input or output was included in the response. Always
     * <code>true</code> for API calls. </p>
     */
    inline void SetIncluded(bool value) { m_includedHasBeenSet = true; m_included = value; }

    /**
     * <p>Indicates whether input or output was included in the response. Always
     * <code>true</code> for API calls. </p>
     */
    inline CloudWatchEventsExecutionDataDetails& WithIncluded(bool value) { SetIncluded(value); return *this;}

  private:

    bool m_included;
    bool m_includedHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
