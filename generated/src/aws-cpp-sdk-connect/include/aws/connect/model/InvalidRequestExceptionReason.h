/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AttachedFileInvalidRequestExceptionReason.h>
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
   * <p>Reason why the request was invalid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/InvalidRequestExceptionReason">AWS
   * API Reference</a></p>
   */
  class InvalidRequestExceptionReason
  {
  public:
    AWS_CONNECT_API InvalidRequestExceptionReason();
    AWS_CONNECT_API InvalidRequestExceptionReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API InvalidRequestExceptionReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reason why the StartAttachedFiledUpload request was invalid.</p>
     */
    inline const AttachedFileInvalidRequestExceptionReason& GetAttachedFileInvalidRequestExceptionReason() const{ return m_attachedFileInvalidRequestExceptionReason; }

    /**
     * <p>Reason why the StartAttachedFiledUpload request was invalid.</p>
     */
    inline bool AttachedFileInvalidRequestExceptionReasonHasBeenSet() const { return m_attachedFileInvalidRequestExceptionReasonHasBeenSet; }

    /**
     * <p>Reason why the StartAttachedFiledUpload request was invalid.</p>
     */
    inline void SetAttachedFileInvalidRequestExceptionReason(const AttachedFileInvalidRequestExceptionReason& value) { m_attachedFileInvalidRequestExceptionReasonHasBeenSet = true; m_attachedFileInvalidRequestExceptionReason = value; }

    /**
     * <p>Reason why the StartAttachedFiledUpload request was invalid.</p>
     */
    inline void SetAttachedFileInvalidRequestExceptionReason(AttachedFileInvalidRequestExceptionReason&& value) { m_attachedFileInvalidRequestExceptionReasonHasBeenSet = true; m_attachedFileInvalidRequestExceptionReason = std::move(value); }

    /**
     * <p>Reason why the StartAttachedFiledUpload request was invalid.</p>
     */
    inline InvalidRequestExceptionReason& WithAttachedFileInvalidRequestExceptionReason(const AttachedFileInvalidRequestExceptionReason& value) { SetAttachedFileInvalidRequestExceptionReason(value); return *this;}

    /**
     * <p>Reason why the StartAttachedFiledUpload request was invalid.</p>
     */
    inline InvalidRequestExceptionReason& WithAttachedFileInvalidRequestExceptionReason(AttachedFileInvalidRequestExceptionReason&& value) { SetAttachedFileInvalidRequestExceptionReason(std::move(value)); return *this;}

  private:

    AttachedFileInvalidRequestExceptionReason m_attachedFileInvalidRequestExceptionReason;
    bool m_attachedFileInvalidRequestExceptionReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
