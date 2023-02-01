/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>

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
namespace drs
{
namespace Model
{

  /**
   * <p>Configuration of a machine's license.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/Licensing">AWS API
   * Reference</a></p>
   */
  class Licensing
  {
  public:
    AWS_DRS_API Licensing();
    AWS_DRS_API Licensing(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Licensing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether to enable "Bring your own license" or not.</p>
     */
    inline bool GetOsByol() const{ return m_osByol; }

    /**
     * <p>Whether to enable "Bring your own license" or not.</p>
     */
    inline bool OsByolHasBeenSet() const { return m_osByolHasBeenSet; }

    /**
     * <p>Whether to enable "Bring your own license" or not.</p>
     */
    inline void SetOsByol(bool value) { m_osByolHasBeenSet = true; m_osByol = value; }

    /**
     * <p>Whether to enable "Bring your own license" or not.</p>
     */
    inline Licensing& WithOsByol(bool value) { SetOsByol(value); return *this;}

  private:

    bool m_osByol;
    bool m_osByolHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
