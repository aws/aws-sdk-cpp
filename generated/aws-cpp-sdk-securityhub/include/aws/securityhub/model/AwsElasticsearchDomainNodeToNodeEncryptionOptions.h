﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about the configuration for node-to-node encryption.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElasticsearchDomainNodeToNodeEncryptionOptions">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsElasticsearchDomainNodeToNodeEncryptionOptions
  {
  public:
    AwsElasticsearchDomainNodeToNodeEncryptionOptions();
    AwsElasticsearchDomainNodeToNodeEncryptionOptions(Aws::Utils::Json::JsonView jsonValue);
    AwsElasticsearchDomainNodeToNodeEncryptionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether node-to-node encryption is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether node-to-node encryption is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether node-to-node encryption is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether node-to-node encryption is enabled.</p>
     */
    inline AwsElasticsearchDomainNodeToNodeEncryptionOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
