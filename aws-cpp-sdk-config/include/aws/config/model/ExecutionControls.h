/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/SsmControls.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The controls that AWS Config uses for executing remediations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ExecutionControls">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API ExecutionControls
  {
  public:
    ExecutionControls();
    ExecutionControls(Aws::Utils::Json::JsonView jsonValue);
    ExecutionControls& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A SsmControls object.</p>
     */
    inline const SsmControls& GetSsmControls() const{ return m_ssmControls; }

    /**
     * <p>A SsmControls object.</p>
     */
    inline bool SsmControlsHasBeenSet() const { return m_ssmControlsHasBeenSet; }

    /**
     * <p>A SsmControls object.</p>
     */
    inline void SetSsmControls(const SsmControls& value) { m_ssmControlsHasBeenSet = true; m_ssmControls = value; }

    /**
     * <p>A SsmControls object.</p>
     */
    inline void SetSsmControls(SsmControls&& value) { m_ssmControlsHasBeenSet = true; m_ssmControls = std::move(value); }

    /**
     * <p>A SsmControls object.</p>
     */
    inline ExecutionControls& WithSsmControls(const SsmControls& value) { SetSsmControls(value); return *this;}

    /**
     * <p>A SsmControls object.</p>
     */
    inline ExecutionControls& WithSsmControls(SsmControls&& value) { SetSsmControls(std::move(value)); return *this;}

  private:

    SsmControls m_ssmControls;
    bool m_ssmControlsHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
