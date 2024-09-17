/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * Provides a description of the operation failure error<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ErrorInfo">AWS
   * API Reference</a></p>
   */
  class ErrorInfo
  {
  public:
    AWS_KINESISANALYTICSV2_API ErrorInfo();
    AWS_KINESISANALYTICSV2_API ErrorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ErrorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetErrorString() const{ return m_errorString; }
    inline bool ErrorStringHasBeenSet() const { return m_errorStringHasBeenSet; }
    inline void SetErrorString(const Aws::String& value) { m_errorStringHasBeenSet = true; m_errorString = value; }
    inline void SetErrorString(Aws::String&& value) { m_errorStringHasBeenSet = true; m_errorString = std::move(value); }
    inline void SetErrorString(const char* value) { m_errorStringHasBeenSet = true; m_errorString.assign(value); }
    inline ErrorInfo& WithErrorString(const Aws::String& value) { SetErrorString(value); return *this;}
    inline ErrorInfo& WithErrorString(Aws::String&& value) { SetErrorString(std::move(value)); return *this;}
    inline ErrorInfo& WithErrorString(const char* value) { SetErrorString(value); return *this;}
    ///@}
  private:

    Aws::String m_errorString;
    bool m_errorStringHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
