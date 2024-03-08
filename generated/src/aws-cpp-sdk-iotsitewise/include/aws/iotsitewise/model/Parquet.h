/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>A parquet file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Parquet">AWS
   * API Reference</a></p>
   */
  class Parquet
  {
  public:
    AWS_IOTSITEWISE_API Parquet();
    AWS_IOTSITEWISE_API Parquet(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Parquet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
