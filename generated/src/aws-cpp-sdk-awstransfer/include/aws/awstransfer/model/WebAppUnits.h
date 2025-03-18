/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>

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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Contains an integer value that represents the value for number of concurrent
   * connections or the user sessions on your web app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/WebAppUnits">AWS
   * API Reference</a></p>
   */
  class WebAppUnits
  {
  public:
    AWS_TRANSFER_API WebAppUnits() = default;
    AWS_TRANSFER_API WebAppUnits(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API WebAppUnits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An integer that represents the number of units for your desired number of
     * concurrent connections, or the number of user sessions on your web app at the
     * same time.</p> <p>Each increment allows an additional 250 concurrent sessions: a
     * value of <code>1</code> sets the number of concurrent sessions to 250;
     * <code>2</code> sets a value of 500, and so on. </p>
     */
    inline int GetProvisioned() const { return m_provisioned; }
    inline bool ProvisionedHasBeenSet() const { return m_provisionedHasBeenSet; }
    inline void SetProvisioned(int value) { m_provisionedHasBeenSet = true; m_provisioned = value; }
    inline WebAppUnits& WithProvisioned(int value) { SetProvisioned(value); return *this;}
    ///@}
  private:

    int m_provisioned{0};
    bool m_provisionedHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
