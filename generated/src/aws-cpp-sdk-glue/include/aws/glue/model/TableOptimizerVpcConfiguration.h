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
   * <p>An object that describes the VPC configuration for a table optimizer.</p>
   * <p>This configuration is necessary to perform optimization on tables that are in
   * a customer VPC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TableOptimizerVpcConfiguration">AWS
   * API Reference</a></p>
   */
  class TableOptimizerVpcConfiguration
  {
  public:
    AWS_GLUE_API TableOptimizerVpcConfiguration();
    AWS_GLUE_API TableOptimizerVpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TableOptimizerVpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Glue connection used for the VPC for the table optimizer.</p>
     */
    inline const Aws::String& GetGlueConnectionName() const{ return m_glueConnectionName; }
    inline bool GlueConnectionNameHasBeenSet() const { return m_glueConnectionNameHasBeenSet; }
    inline void SetGlueConnectionName(const Aws::String& value) { m_glueConnectionNameHasBeenSet = true; m_glueConnectionName = value; }
    inline void SetGlueConnectionName(Aws::String&& value) { m_glueConnectionNameHasBeenSet = true; m_glueConnectionName = std::move(value); }
    inline void SetGlueConnectionName(const char* value) { m_glueConnectionNameHasBeenSet = true; m_glueConnectionName.assign(value); }
    inline TableOptimizerVpcConfiguration& WithGlueConnectionName(const Aws::String& value) { SetGlueConnectionName(value); return *this;}
    inline TableOptimizerVpcConfiguration& WithGlueConnectionName(Aws::String&& value) { SetGlueConnectionName(std::move(value)); return *this;}
    inline TableOptimizerVpcConfiguration& WithGlueConnectionName(const char* value) { SetGlueConnectionName(value); return *this;}
    ///@}
  private:

    Aws::String m_glueConnectionName;
    bool m_glueConnectionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
