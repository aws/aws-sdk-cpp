/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>

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
namespace KinesisAnalytics
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationOutputResponse">AWS
   * API Reference</a></p>
   */
  class DeleteApplicationOutputResult
  {
  public:
    AWS_KINESISANALYTICS_API DeleteApplicationOutputResult();
    AWS_KINESISANALYTICS_API DeleteApplicationOutputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICS_API DeleteApplicationOutputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
