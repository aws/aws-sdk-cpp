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
   * <p>An Internet Control Message Protocol (ICMP) type and code.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/IcmpTypeCode">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API IcmpTypeCode
  {
  public:
    IcmpTypeCode();
    IcmpTypeCode(Aws::Utils::Json::JsonView jsonValue);
    IcmpTypeCode& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ICMP code for which to deny or allow access. To deny or allow all codes,
     * use the value -1.</p>
     */
    inline int GetCode() const{ return m_code; }

    /**
     * <p>The ICMP code for which to deny or allow access. To deny or allow all codes,
     * use the value -1.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The ICMP code for which to deny or allow access. To deny or allow all codes,
     * use the value -1.</p>
     */
    inline void SetCode(int value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The ICMP code for which to deny or allow access. To deny or allow all codes,
     * use the value -1.</p>
     */
    inline IcmpTypeCode& WithCode(int value) { SetCode(value); return *this;}


    /**
     * <p>The ICMP type for which to deny or allow access. To deny or allow all types,
     * use the value -1.</p>
     */
    inline int GetType() const{ return m_type; }

    /**
     * <p>The ICMP type for which to deny or allow access. To deny or allow all types,
     * use the value -1.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The ICMP type for which to deny or allow access. To deny or allow all types,
     * use the value -1.</p>
     */
    inline void SetType(int value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The ICMP type for which to deny or allow access. To deny or allow all types,
     * use the value -1.</p>
     */
    inline IcmpTypeCode& WithType(int value) { SetType(value); return *this;}

  private:

    int m_code;
    bool m_codeHasBeenSet;

    int m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
