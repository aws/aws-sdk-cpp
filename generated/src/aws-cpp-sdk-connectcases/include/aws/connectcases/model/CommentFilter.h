/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>

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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>A filter for related items of type <code>Comment</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CommentFilter">AWS
   * API Reference</a></p>
   */
  class CommentFilter
  {
  public:
    AWS_CONNECTCASES_API CommentFilter();
    AWS_CONNECTCASES_API CommentFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API CommentFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
