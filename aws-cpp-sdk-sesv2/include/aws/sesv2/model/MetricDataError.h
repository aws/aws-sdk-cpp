/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/QueryErrorCode.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An error corresponding to the unsuccessful processing of a single metric data
   * query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/MetricDataError">AWS
   * API Reference</a></p>
   */
  class MetricDataError
  {
  public:
    AWS_SESV2_API MetricDataError();
    AWS_SESV2_API MetricDataError(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API MetricDataError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The query identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The query identifier.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The query identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The query identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The query identifier.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The query identifier.</p>
     */
    inline MetricDataError& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The query identifier.</p>
     */
    inline MetricDataError& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The query identifier.</p>
     */
    inline MetricDataError& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The query error code. Can be one of:</p> <ul> <li> <p>
     * <code>INTERNAL_FAILURE</code> – Amazon SES has failed to process one of the
     * queries.</p> </li> <li> <p> <code>ACCESS_DENIED</code> – You have insufficient
     * access to retrieve metrics based on the given query.</p> </li> </ul>
     */
    inline const QueryErrorCode& GetCode() const{ return m_code; }

    /**
     * <p>The query error code. Can be one of:</p> <ul> <li> <p>
     * <code>INTERNAL_FAILURE</code> – Amazon SES has failed to process one of the
     * queries.</p> </li> <li> <p> <code>ACCESS_DENIED</code> – You have insufficient
     * access to retrieve metrics based on the given query.</p> </li> </ul>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The query error code. Can be one of:</p> <ul> <li> <p>
     * <code>INTERNAL_FAILURE</code> – Amazon SES has failed to process one of the
     * queries.</p> </li> <li> <p> <code>ACCESS_DENIED</code> – You have insufficient
     * access to retrieve metrics based on the given query.</p> </li> </ul>
     */
    inline void SetCode(const QueryErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The query error code. Can be one of:</p> <ul> <li> <p>
     * <code>INTERNAL_FAILURE</code> – Amazon SES has failed to process one of the
     * queries.</p> </li> <li> <p> <code>ACCESS_DENIED</code> – You have insufficient
     * access to retrieve metrics based on the given query.</p> </li> </ul>
     */
    inline void SetCode(QueryErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The query error code. Can be one of:</p> <ul> <li> <p>
     * <code>INTERNAL_FAILURE</code> – Amazon SES has failed to process one of the
     * queries.</p> </li> <li> <p> <code>ACCESS_DENIED</code> – You have insufficient
     * access to retrieve metrics based on the given query.</p> </li> </ul>
     */
    inline MetricDataError& WithCode(const QueryErrorCode& value) { SetCode(value); return *this;}

    /**
     * <p>The query error code. Can be one of:</p> <ul> <li> <p>
     * <code>INTERNAL_FAILURE</code> – Amazon SES has failed to process one of the
     * queries.</p> </li> <li> <p> <code>ACCESS_DENIED</code> – You have insufficient
     * access to retrieve metrics based on the given query.</p> </li> </ul>
     */
    inline MetricDataError& WithCode(QueryErrorCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The error message associated with the current query error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error message associated with the current query error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The error message associated with the current query error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error message associated with the current query error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The error message associated with the current query error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The error message associated with the current query error.</p>
     */
    inline MetricDataError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error message associated with the current query error.</p>
     */
    inline MetricDataError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The error message associated with the current query error.</p>
     */
    inline MetricDataError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    QueryErrorCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
