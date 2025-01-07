﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure that describes a target catalog for resource
   * linking.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TargetRedshiftCatalog">AWS
   * API Reference</a></p>
   */
  class TargetRedshiftCatalog
  {
  public:
    AWS_GLUE_API TargetRedshiftCatalog();
    AWS_GLUE_API TargetRedshiftCatalog(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TargetRedshiftCatalog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the catalog resource.</p>
     */
    inline const Aws::String& GetCatalogArn() const{ return m_catalogArn; }
    inline bool CatalogArnHasBeenSet() const { return m_catalogArnHasBeenSet; }
    inline void SetCatalogArn(const Aws::String& value) { m_catalogArnHasBeenSet = true; m_catalogArn = value; }
    inline void SetCatalogArn(Aws::String&& value) { m_catalogArnHasBeenSet = true; m_catalogArn = std::move(value); }
    inline void SetCatalogArn(const char* value) { m_catalogArnHasBeenSet = true; m_catalogArn.assign(value); }
    inline TargetRedshiftCatalog& WithCatalogArn(const Aws::String& value) { SetCatalogArn(value); return *this;}
    inline TargetRedshiftCatalog& WithCatalogArn(Aws::String&& value) { SetCatalogArn(std::move(value)); return *this;}
    inline TargetRedshiftCatalog& WithCatalogArn(const char* value) { SetCatalogArn(value); return *this;}
    ///@}
  private:

    Aws::String m_catalogArn;
    bool m_catalogArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
