/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>

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
namespace mgn
{
namespace Model
{

  /**
   * <p>Configure Licensing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/Licensing">AWS API
   * Reference</a></p>
   */
  class Licensing
  {
  public:
    AWS_MGN_API Licensing();
    AWS_MGN_API Licensing(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Licensing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configure BYOL OS licensing.</p>
     */
    inline bool GetOsByol() const{ return m_osByol; }

    /**
     * <p>Configure BYOL OS licensing.</p>
     */
    inline bool OsByolHasBeenSet() const { return m_osByolHasBeenSet; }

    /**
     * <p>Configure BYOL OS licensing.</p>
     */
    inline void SetOsByol(bool value) { m_osByolHasBeenSet = true; m_osByol = value; }

    /**
     * <p>Configure BYOL OS licensing.</p>
     */
    inline Licensing& WithOsByol(bool value) { SetOsByol(value); return *this;}

  private:

    bool m_osByol;
    bool m_osByolHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
