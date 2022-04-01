﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/ElasticsearchClusterConfig.h>
#include <aws/es/model/OptionStatus.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> Specifies the configuration status for the specified Elasticsearch
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ElasticsearchClusterConfigStatus">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API ElasticsearchClusterConfigStatus
  {
  public:
    ElasticsearchClusterConfigStatus();
    ElasticsearchClusterConfigStatus(Aws::Utils::Json::JsonView jsonValue);
    ElasticsearchClusterConfigStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the cluster configuration for the specified Elasticsearch
     * domain.</p>
     */
    inline const ElasticsearchClusterConfig& GetOptions() const{ return m_options; }

    /**
     * <p> Specifies the cluster configuration for the specified Elasticsearch
     * domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p> Specifies the cluster configuration for the specified Elasticsearch
     * domain.</p>
     */
    inline void SetOptions(const ElasticsearchClusterConfig& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p> Specifies the cluster configuration for the specified Elasticsearch
     * domain.</p>
     */
    inline void SetOptions(ElasticsearchClusterConfig&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p> Specifies the cluster configuration for the specified Elasticsearch
     * domain.</p>
     */
    inline ElasticsearchClusterConfigStatus& WithOptions(const ElasticsearchClusterConfig& value) { SetOptions(value); return *this;}

    /**
     * <p> Specifies the cluster configuration for the specified Elasticsearch
     * domain.</p>
     */
    inline ElasticsearchClusterConfigStatus& WithOptions(ElasticsearchClusterConfig&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p> Specifies the status of the configuration for the specified Elasticsearch
     * domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p> Specifies the status of the configuration for the specified Elasticsearch
     * domain.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Specifies the status of the configuration for the specified Elasticsearch
     * domain.</p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Specifies the status of the configuration for the specified Elasticsearch
     * domain.</p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Specifies the status of the configuration for the specified Elasticsearch
     * domain.</p>
     */
    inline ElasticsearchClusterConfigStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> Specifies the status of the configuration for the specified Elasticsearch
     * domain.</p>
     */
    inline ElasticsearchClusterConfigStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ElasticsearchClusterConfig m_options;
    bool m_optionsHasBeenSet;

    OptionStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
