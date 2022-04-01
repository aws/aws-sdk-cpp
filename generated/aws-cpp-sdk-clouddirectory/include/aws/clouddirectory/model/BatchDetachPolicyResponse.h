﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>

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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Represents the output of a <a>DetachPolicy</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchDetachPolicyResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchDetachPolicyResponse
  {
  public:
    BatchDetachPolicyResponse();
    BatchDetachPolicyResponse(Aws::Utils::Json::JsonView jsonValue);
    BatchDetachPolicyResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
