/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/BootstrapActionConfig.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Reports the configuration of a bootstrap action in a cluster (job
   * flow).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/BootstrapActionDetail">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API BootstrapActionDetail
  {
  public:
    BootstrapActionDetail();
    BootstrapActionDetail(Aws::Utils::Json::JsonView jsonValue);
    BootstrapActionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of the bootstrap action.</p>
     */
    inline const BootstrapActionConfig& GetBootstrapActionConfig() const{ return m_bootstrapActionConfig; }

    /**
     * <p>A description of the bootstrap action.</p>
     */
    inline bool BootstrapActionConfigHasBeenSet() const { return m_bootstrapActionConfigHasBeenSet; }

    /**
     * <p>A description of the bootstrap action.</p>
     */
    inline void SetBootstrapActionConfig(const BootstrapActionConfig& value) { m_bootstrapActionConfigHasBeenSet = true; m_bootstrapActionConfig = value; }

    /**
     * <p>A description of the bootstrap action.</p>
     */
    inline void SetBootstrapActionConfig(BootstrapActionConfig&& value) { m_bootstrapActionConfigHasBeenSet = true; m_bootstrapActionConfig = std::move(value); }

    /**
     * <p>A description of the bootstrap action.</p>
     */
    inline BootstrapActionDetail& WithBootstrapActionConfig(const BootstrapActionConfig& value) { SetBootstrapActionConfig(value); return *this;}

    /**
     * <p>A description of the bootstrap action.</p>
     */
    inline BootstrapActionDetail& WithBootstrapActionConfig(BootstrapActionConfig&& value) { SetBootstrapActionConfig(std::move(value)); return *this;}

  private:

    BootstrapActionConfig m_bootstrapActionConfig;
    bool m_bootstrapActionConfigHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
