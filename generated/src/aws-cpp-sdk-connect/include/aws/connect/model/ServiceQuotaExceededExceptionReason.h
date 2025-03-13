/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AttachedFileServiceQuotaExceededExceptionReason.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The reason for the exception.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ServiceQuotaExceededExceptionReason">AWS
   * API Reference</a></p>
   */
  class ServiceQuotaExceededExceptionReason
  {
  public:
    AWS_CONNECT_API ServiceQuotaExceededExceptionReason() = default;
    AWS_CONNECT_API ServiceQuotaExceededExceptionReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ServiceQuotaExceededExceptionReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Total file size of all files or total number of files exceeds the service
     * quota</p>
     */
    inline AttachedFileServiceQuotaExceededExceptionReason GetAttachedFileServiceQuotaExceededExceptionReason() const { return m_attachedFileServiceQuotaExceededExceptionReason; }
    inline bool AttachedFileServiceQuotaExceededExceptionReasonHasBeenSet() const { return m_attachedFileServiceQuotaExceededExceptionReasonHasBeenSet; }
    inline void SetAttachedFileServiceQuotaExceededExceptionReason(AttachedFileServiceQuotaExceededExceptionReason value) { m_attachedFileServiceQuotaExceededExceptionReasonHasBeenSet = true; m_attachedFileServiceQuotaExceededExceptionReason = value; }
    inline ServiceQuotaExceededExceptionReason& WithAttachedFileServiceQuotaExceededExceptionReason(AttachedFileServiceQuotaExceededExceptionReason value) { SetAttachedFileServiceQuotaExceededExceptionReason(value); return *this;}
    ///@}
  private:

    AttachedFileServiceQuotaExceededExceptionReason m_attachedFileServiceQuotaExceededExceptionReason{AttachedFileServiceQuotaExceededExceptionReason::NOT_SET};
    bool m_attachedFileServiceQuotaExceededExceptionReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
