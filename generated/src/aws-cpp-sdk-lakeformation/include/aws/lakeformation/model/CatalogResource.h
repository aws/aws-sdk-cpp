/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>

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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure for the catalog object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/CatalogResource">AWS
   * API Reference</a></p>
   */
  class CatalogResource
  {
  public:
    AWS_LAKEFORMATION_API CatalogResource();
    AWS_LAKEFORMATION_API CatalogResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API CatalogResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
