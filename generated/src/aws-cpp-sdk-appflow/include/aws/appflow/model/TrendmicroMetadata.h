/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>

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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The connector metadata specific to Trend Micro. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/TrendmicroMetadata">AWS
   * API Reference</a></p>
   */
  class TrendmicroMetadata
  {
  public:
    AWS_APPFLOW_API TrendmicroMetadata();
    AWS_APPFLOW_API TrendmicroMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API TrendmicroMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
