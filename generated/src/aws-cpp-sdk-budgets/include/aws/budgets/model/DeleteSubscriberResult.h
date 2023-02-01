/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Budgets
{
namespace Model
{
  /**
   * <p> Response of DeleteSubscriber </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteSubscriberResponse">AWS
   * API Reference</a></p>
   */
  class DeleteSubscriberResult
  {
  public:
    AWS_BUDGETS_API DeleteSubscriberResult();
    AWS_BUDGETS_API DeleteSubscriberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BUDGETS_API DeleteSubscriberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
