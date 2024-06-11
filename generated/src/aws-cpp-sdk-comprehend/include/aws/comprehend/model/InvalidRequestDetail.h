﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/InvalidRequestDetailReason.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Provides additional detail about why the request failed.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/InvalidRequestDetail">AWS
   * API Reference</a></p>
   */
  class InvalidRequestDetail
  {
  public:
    AWS_COMPREHEND_API InvalidRequestDetail();
    AWS_COMPREHEND_API InvalidRequestDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API InvalidRequestDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Reason codes include the following values:</p> <ul> <li>
     * <p>DOCUMENT_SIZE_EXCEEDED - Document size is too large. Check the size of your
     * file and resubmit the request.</p> </li> <li> <p>UNSUPPORTED_DOC_TYPE - Document
     * type is not supported. Check the file type and resubmit the request.</p> </li>
     * <li> <p>PAGE_LIMIT_EXCEEDED - Too many pages in the document. Check the number
     * of pages in your file and resubmit the request.</p> </li> <li>
     * <p>TEXTRACT_ACCESS_DENIED - Access denied to Amazon Textract. Verify that your
     * account has permission to use Amazon Textract API operations and resubmit the
     * request.</p> </li> <li> <p>NOT_TEXTRACT_JSON - Document is not Amazon Textract
     * JSON format. Verify the format and resubmit the request.</p> </li> <li>
     * <p>MISMATCHED_TOTAL_PAGE_COUNT - Check the number of pages in your file and
     * resubmit the request.</p> </li> <li> <p>INVALID_DOCUMENT - Invalid document.
     * Check the file and resubmit the request.</p> </li> </ul>
     */
    inline const InvalidRequestDetailReason& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const InvalidRequestDetailReason& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(InvalidRequestDetailReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline InvalidRequestDetail& WithReason(const InvalidRequestDetailReason& value) { SetReason(value); return *this;}
    inline InvalidRequestDetail& WithReason(InvalidRequestDetailReason&& value) { SetReason(std::move(value)); return *this;}
    ///@}
  private:

    InvalidRequestDetailReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
