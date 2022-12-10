/**
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
   * <p>Provides additional detail about why the request failed:</p> <ul> <li>
   * <p>Document size is too large - Check the size of your file and resubmit the
   * request.</p> </li> <li> <p>Document type is not supported - Check the file type
   * and resubmit the request.</p> </li> <li> <p>Too many pages in the document -
   * Check the number of pages in your file and resubmit the request.</p> </li> <li>
   * <p>Access denied to Amazon Textract - Verify that your account has permission to
   * use Amazon Textract API operations and resubmit the request.</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
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


    /**
     * <p>Reason code is <code>INVALID_DOCUMENT</code>.</p>
     */
    inline const InvalidRequestDetailReason& GetReason() const{ return m_reason; }

    /**
     * <p>Reason code is <code>INVALID_DOCUMENT</code>.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Reason code is <code>INVALID_DOCUMENT</code>.</p>
     */
    inline void SetReason(const InvalidRequestDetailReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Reason code is <code>INVALID_DOCUMENT</code>.</p>
     */
    inline void SetReason(InvalidRequestDetailReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Reason code is <code>INVALID_DOCUMENT</code>.</p>
     */
    inline InvalidRequestDetail& WithReason(const InvalidRequestDetailReason& value) { SetReason(value); return *this;}

    /**
     * <p>Reason code is <code>INVALID_DOCUMENT</code>.</p>
     */
    inline InvalidRequestDetail& WithReason(InvalidRequestDetailReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    InvalidRequestDetailReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
