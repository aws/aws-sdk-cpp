/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>

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
namespace FMS
{
namespace Model
{

  /**
   * <p>ICMP protocol: The ICMP type and code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkAclIcmpTypeCode">AWS
   * API Reference</a></p>
   */
  class NetworkAclIcmpTypeCode
  {
  public:
    AWS_FMS_API NetworkAclIcmpTypeCode();
    AWS_FMS_API NetworkAclIcmpTypeCode(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkAclIcmpTypeCode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ICMP code. </p>
     */
    inline int GetCode() const{ return m_code; }

    /**
     * <p>ICMP code. </p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>ICMP code. </p>
     */
    inline void SetCode(int value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>ICMP code. </p>
     */
    inline NetworkAclIcmpTypeCode& WithCode(int value) { SetCode(value); return *this;}


    /**
     * <p>ICMP type. </p>
     */
    inline int GetType() const{ return m_type; }

    /**
     * <p>ICMP type. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>ICMP type. </p>
     */
    inline void SetType(int value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>ICMP type. </p>
     */
    inline NetworkAclIcmpTypeCode& WithType(int value) { SetType(value); return *this;}

  private:

    int m_code;
    bool m_codeHasBeenSet = false;

    int m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
