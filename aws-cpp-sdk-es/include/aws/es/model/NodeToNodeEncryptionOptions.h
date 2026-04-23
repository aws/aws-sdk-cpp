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
  class AWS_ELASTICSEARCHSERVICE_API NodeToNodeEncryptionOptions
  {
  public:
    NodeToNodeEncryptionOptions();
    NodeToNodeEncryptionOptions(Aws::Utils::Json::JsonView jsonValue);
    NodeToNodeEncryptionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
