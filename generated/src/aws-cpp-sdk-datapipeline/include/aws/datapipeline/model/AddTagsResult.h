/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>

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
namespace DataPipeline
{
namespace Model
{
  /**
   * <p>Contains the output of AddTags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/AddTagsOutput">AWS
   * API Reference</a></p>
   */
  class AddTagsResult
  {
  public:
    AWS_DATAPIPELINE_API AddTagsResult();
    AWS_DATAPIPELINE_API AddTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API AddTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
