/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/ResponseSpecification.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Provides a setting that determines whether the post-fulfillment response is
   * sent to the user. For more information, see <a
   * href="https://docs.aws.amazon.com/lexv2/latest/dg/streaming-progress.html#progress-complete">https://docs.aws.amazon.com/lexv2/latest/dg/streaming-progress.html#progress-complete</a>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/PostFulfillmentStatusSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_LEXMODELSV2_API PostFulfillmentStatusSpecification
  {
  public:
    PostFulfillmentStatusSpecification();
    PostFulfillmentStatusSpecification(Aws::Utils::Json::JsonView jsonValue);
    PostFulfillmentStatusSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ResponseSpecification& GetSuccessResponse() const{ return m_successResponse; }

    
    inline bool SuccessResponseHasBeenSet() const { return m_successResponseHasBeenSet; }

    
    inline void SetSuccessResponse(const ResponseSpecification& value) { m_successResponseHasBeenSet = true; m_successResponse = value; }

    
    inline void SetSuccessResponse(ResponseSpecification&& value) { m_successResponseHasBeenSet = true; m_successResponse = std::move(value); }

    
    inline PostFulfillmentStatusSpecification& WithSuccessResponse(const ResponseSpecification& value) { SetSuccessResponse(value); return *this;}

    
    inline PostFulfillmentStatusSpecification& WithSuccessResponse(ResponseSpecification&& value) { SetSuccessResponse(std::move(value)); return *this;}


    
    inline const ResponseSpecification& GetFailureResponse() const{ return m_failureResponse; }

    
    inline bool FailureResponseHasBeenSet() const { return m_failureResponseHasBeenSet; }

    
    inline void SetFailureResponse(const ResponseSpecification& value) { m_failureResponseHasBeenSet = true; m_failureResponse = value; }

    
    inline void SetFailureResponse(ResponseSpecification&& value) { m_failureResponseHasBeenSet = true; m_failureResponse = std::move(value); }

    
    inline PostFulfillmentStatusSpecification& WithFailureResponse(const ResponseSpecification& value) { SetFailureResponse(value); return *this;}

    
    inline PostFulfillmentStatusSpecification& WithFailureResponse(ResponseSpecification&& value) { SetFailureResponse(std::move(value)); return *this;}


    
    inline const ResponseSpecification& GetTimeoutResponse() const{ return m_timeoutResponse; }

    
    inline bool TimeoutResponseHasBeenSet() const { return m_timeoutResponseHasBeenSet; }

    
    inline void SetTimeoutResponse(const ResponseSpecification& value) { m_timeoutResponseHasBeenSet = true; m_timeoutResponse = value; }

    
    inline void SetTimeoutResponse(ResponseSpecification&& value) { m_timeoutResponseHasBeenSet = true; m_timeoutResponse = std::move(value); }

    
    inline PostFulfillmentStatusSpecification& WithTimeoutResponse(const ResponseSpecification& value) { SetTimeoutResponse(value); return *this;}

    
    inline PostFulfillmentStatusSpecification& WithTimeoutResponse(ResponseSpecification&& value) { SetTimeoutResponse(std::move(value)); return *this;}

  private:

    ResponseSpecification m_successResponse;
    bool m_successResponseHasBeenSet;

    ResponseSpecification m_failureResponse;
    bool m_failureResponseHasBeenSet;

    ResponseSpecification m_timeoutResponse;
    bool m_timeoutResponseHasBeenSet;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
