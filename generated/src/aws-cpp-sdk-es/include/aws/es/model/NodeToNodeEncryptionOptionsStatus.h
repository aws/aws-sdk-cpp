/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/NodeToNodeEncryptionOptions.h>
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
   * <p>Status of the node-to-node encryption options for the specified Elasticsearch
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/NodeToNodeEncryptionOptionsStatus">AWS
   * API Reference</a></p>
   */
  class NodeToNodeEncryptionOptionsStatus
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API NodeToNodeEncryptionOptionsStatus();
    AWS_ELASTICSEARCHSERVICE_API NodeToNodeEncryptionOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API NodeToNodeEncryptionOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the node-to-node encryption options for the specified Elasticsearch
     * domain.</p>
     */
    inline const NodeToNodeEncryptionOptions& GetOptions() const{ return m_options; }

    /**
     * <p>Specifies the node-to-node encryption options for the specified Elasticsearch
     * domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>Specifies the node-to-node encryption options for the specified Elasticsearch
     * domain.</p>
     */
    inline void SetOptions(const NodeToNodeEncryptionOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>Specifies the node-to-node encryption options for the specified Elasticsearch
     * domain.</p>
     */
    inline void SetOptions(NodeToNodeEncryptionOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>Specifies the node-to-node encryption options for the specified Elasticsearch
     * domain.</p>
     */
    inline NodeToNodeEncryptionOptionsStatus& WithOptions(const NodeToNodeEncryptionOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>Specifies the node-to-node encryption options for the specified Elasticsearch
     * domain.</p>
     */
    inline NodeToNodeEncryptionOptionsStatus& WithOptions(NodeToNodeEncryptionOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies the status of the node-to-node encryption options for the specified
     * Elasticsearch domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the status of the node-to-node encryption options for the specified
     * Elasticsearch domain.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies the status of the node-to-node encryption options for the specified
     * Elasticsearch domain.</p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the status of the node-to-node encryption options for the specified
     * Elasticsearch domain.</p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies the status of the node-to-node encryption options for the specified
     * Elasticsearch domain.</p>
     */
    inline NodeToNodeEncryptionOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the status of the node-to-node encryption options for the specified
     * Elasticsearch domain.</p>
     */
    inline NodeToNodeEncryptionOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    NodeToNodeEncryptionOptions m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
