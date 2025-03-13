/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/KeyUsageName.h>
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
namespace ACM
{
namespace Model
{

  /**
   * <p>The Key Usage X.509 v3 extension defines the purpose of the public key
   * contained in the certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/KeyUsage">AWS API
   * Reference</a></p>
   */
  class KeyUsage
  {
  public:
    AWS_ACM_API KeyUsage() = default;
    AWS_ACM_API KeyUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API KeyUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string value that contains a Key Usage extension name.</p>
     */
    inline KeyUsageName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(KeyUsageName value) { m_nameHasBeenSet = true; m_name = value; }
    inline KeyUsage& WithName(KeyUsageName value) { SetName(value); return *this;}
    ///@}
  private:

    KeyUsageName m_name{KeyUsageName::NOT_SET};
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
