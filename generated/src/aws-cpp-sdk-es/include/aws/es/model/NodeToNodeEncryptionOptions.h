/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>

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
   * <p>Specifies the node-to-node encryption options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/NodeToNodeEncryptionOptions">AWS
   * API Reference</a></p>
   */
  class NodeToNodeEncryptionOptions
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API NodeToNodeEncryptionOptions();
    AWS_ELASTICSEARCHSERVICE_API NodeToNodeEncryptionOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API NodeToNodeEncryptionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify true to enable node-to-node encryption.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specify true to enable node-to-node encryption.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specify true to enable node-to-node encryption.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specify true to enable node-to-node encryption.</p>
     */
    inline NodeToNodeEncryptionOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
