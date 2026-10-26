/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/ContinuumRequest.h>
#include <aws/continuum/Continuum_EXPORTS.h>

namespace Aws {
namespace Continuum {
namespace Model {

/**
 * <p>Specifies no request parameters. The target account is derived exclusively
 * from the authenticated calling context.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ListCollectorsInput">AWS
 * API Reference</a></p>
 */
class ListCollectorsRequest : public ContinuumRequest {
 public:
  AWS_CONTINUUM_API ListCollectorsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListCollectors"; }

  AWS_CONTINUUM_API Aws::String SerializePayload() const override;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
