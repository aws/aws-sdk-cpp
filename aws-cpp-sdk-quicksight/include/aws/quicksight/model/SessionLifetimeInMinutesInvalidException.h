/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The number of minutes specified for the lifetime of a session isn't valid.
   * The session lifetime must be 15-600 minutes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SessionLifetimeInMinutesInvalidException">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API SessionLifetimeInMinutesInvalidException
  {
  public:
    SessionLifetimeInMinutesInvalidException();
    SessionLifetimeInMinutesInvalidException(Aws::Utils::Json::JsonView jsonValue);
    SessionLifetimeInMinutesInvalidException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline SessionLifetimeInMinutesInvalidException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline SessionLifetimeInMinutesInvalidException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline SessionLifetimeInMinutesInvalidException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The AWS request ID for this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The AWS request ID for this request.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>The AWS request ID for this request.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>The AWS request ID for this request.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>The AWS request ID for this request.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>The AWS request ID for this request.</p>
     */
    inline SessionLifetimeInMinutesInvalidException& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The AWS request ID for this request.</p>
     */
    inline SessionLifetimeInMinutesInvalidException& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The AWS request ID for this request.</p>
     */
    inline SessionLifetimeInMinutesInvalidException& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
