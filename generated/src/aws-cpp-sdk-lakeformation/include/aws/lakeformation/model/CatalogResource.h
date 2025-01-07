﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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


    ///@{
    /**
     * <p>An identifier for the catalog resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CatalogResource& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CatalogResource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CatalogResource& WithId(const char* value) { SetId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
