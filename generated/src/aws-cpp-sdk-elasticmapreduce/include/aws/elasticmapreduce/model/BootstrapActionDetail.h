/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BootstrapActionDetail
  {
  public:
    AWS_EMR_API BootstrapActionDetail();
    AWS_EMR_API BootstrapActionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API BootstrapActionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_bootstrapActionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
