﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/GlueConnectionInput.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The Amazon Web Services Glue properties of a connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GluePropertiesInput">AWS
   * API Reference</a></p>
   */
  class GluePropertiesInput
  {
  public:
    AWS_DATAZONE_API GluePropertiesInput();
    AWS_DATAZONE_API GluePropertiesInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GluePropertiesInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Glue connection.</p>
     */
    inline const GlueConnectionInput& GetGlueConnectionInput() const{ return m_glueConnectionInput; }
    inline bool GlueConnectionInputHasBeenSet() const { return m_glueConnectionInputHasBeenSet; }
    inline void SetGlueConnectionInput(const GlueConnectionInput& value) { m_glueConnectionInputHasBeenSet = true; m_glueConnectionInput = value; }
    inline void SetGlueConnectionInput(GlueConnectionInput&& value) { m_glueConnectionInputHasBeenSet = true; m_glueConnectionInput = std::move(value); }
    inline GluePropertiesInput& WithGlueConnectionInput(const GlueConnectionInput& value) { SetGlueConnectionInput(value); return *this;}
    inline GluePropertiesInput& WithGlueConnectionInput(GlueConnectionInput&& value) { SetGlueConnectionInput(std::move(value)); return *this;}
    ///@}
  private:

    GlueConnectionInput m_glueConnectionInput;
    bool m_glueConnectionInputHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
