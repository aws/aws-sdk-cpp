/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>

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
namespace DAX
{
namespace Model
{

  /**
   * <p>Represents the settings used to enable server-side encryption.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/SSESpecification">AWS
   * API Reference</a></p>
   */
  class SSESpecification
  {
  public:
    AWS_DAX_API SSESpecification();
    AWS_DAX_API SSESpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API SSESpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether server-side encryption is enabled (true) or disabled
     * (false) on the cluster.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether server-side encryption is enabled (true) or disabled
     * (false) on the cluster.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether server-side encryption is enabled (true) or disabled
     * (false) on the cluster.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether server-side encryption is enabled (true) or disabled
     * (false) on the cluster.</p>
     */
    inline SSESpecification& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
