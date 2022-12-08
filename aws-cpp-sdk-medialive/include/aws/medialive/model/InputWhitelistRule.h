/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Whitelist rule<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputWhitelistRule">AWS
   * API Reference</a></p>
   */
  class InputWhitelistRule
  {
  public:
    AWS_MEDIALIVE_API InputWhitelistRule();
    AWS_MEDIALIVE_API InputWhitelistRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputWhitelistRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The IPv4 CIDR that's whitelisted.
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * The IPv4 CIDR that's whitelisted.
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * The IPv4 CIDR that's whitelisted.
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * The IPv4 CIDR that's whitelisted.
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * The IPv4 CIDR that's whitelisted.
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * The IPv4 CIDR that's whitelisted.
     */
    inline InputWhitelistRule& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * The IPv4 CIDR that's whitelisted.
     */
    inline InputWhitelistRule& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * The IPv4 CIDR that's whitelisted.
     */
    inline InputWhitelistRule& WithCidr(const char* value) { SetCidr(value); return *this;}

  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
