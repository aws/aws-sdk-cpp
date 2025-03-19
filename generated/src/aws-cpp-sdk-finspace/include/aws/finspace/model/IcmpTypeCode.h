/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>

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
namespace finspace
{
namespace Model
{

  /**
   * <p> Defines the ICMP protocol that consists of the ICMP type and code.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/IcmpTypeCode">AWS
   * API Reference</a></p>
   */
  class IcmpTypeCode
  {
  public:
    AWS_FINSPACE_API IcmpTypeCode() = default;
    AWS_FINSPACE_API IcmpTypeCode(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API IcmpTypeCode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ICMP type. A value of <i>-1</i> means all types. </p>
     */
    inline int GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(int value) { m_typeHasBeenSet = true; m_type = value; }
    inline IcmpTypeCode& WithType(int value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ICMP code. A value of <i>-1</i> means all codes for the specified ICMP
     * type. </p>
     */
    inline int GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(int value) { m_codeHasBeenSet = true; m_code = value; }
    inline IcmpTypeCode& WithCode(int value) { SetCode(value); return *this;}
    ///@}
  private:

    int m_type{0};
    bool m_typeHasBeenSet = false;

    int m_code{0};
    bool m_codeHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
