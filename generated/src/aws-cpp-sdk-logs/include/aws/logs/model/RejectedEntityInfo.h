/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/EntityRejectionErrorType.h>
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
   * <p>If an entity is rejected when a <code>PutLogEvents</code> request was made,
   * this includes details about the reason for the rejection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/RejectedEntityInfo">AWS
   * API Reference</a></p>
   */
  class RejectedEntityInfo
  {
  public:
    AWS_CLOUDWATCHLOGS_API RejectedEntityInfo() = default;
    AWS_CLOUDWATCHLOGS_API RejectedEntityInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API RejectedEntityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of error that caused the rejection of the entity when calling
     * <code>PutLogEvents</code>.</p>
     */
    inline EntityRejectionErrorType GetErrorType() const { return m_errorType; }
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }
    inline void SetErrorType(EntityRejectionErrorType value) { m_errorTypeHasBeenSet = true; m_errorType = value; }
    inline RejectedEntityInfo& WithErrorType(EntityRejectionErrorType value) { SetErrorType(value); return *this;}
    ///@}
  private:

    EntityRejectionErrorType m_errorType{EntityRejectionErrorType::NOT_SET};
    bool m_errorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
