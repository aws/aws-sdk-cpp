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
   * <p>The result of a batch add facet to object operation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchAddFacetToObjectResponse">AWS
   * API Reference</a></p>
   */
  class BatchAddFacetToObjectResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchAddFacetToObjectResponse() = default;
    AWS_CLOUDDIRECTORY_API BatchAddFacetToObjectResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchAddFacetToObjectResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
