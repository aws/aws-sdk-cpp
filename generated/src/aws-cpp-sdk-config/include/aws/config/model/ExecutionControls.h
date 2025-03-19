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
   * <p>The controls that Config uses for executing remediations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ExecutionControls">AWS
   * API Reference</a></p>
   */
  class ExecutionControls
  {
  public:
    AWS_CONFIGSERVICE_API ExecutionControls() = default;
    AWS_CONFIGSERVICE_API ExecutionControls(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ExecutionControls& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A SsmControls object.</p>
     */
    inline const SsmControls& GetSsmControls() const { return m_ssmControls; }
    inline bool SsmControlsHasBeenSet() const { return m_ssmControlsHasBeenSet; }
    template<typename SsmControlsT = SsmControls>
    void SetSsmControls(SsmControlsT&& value) { m_ssmControlsHasBeenSet = true; m_ssmControls = std::forward<SsmControlsT>(value); }
    template<typename SsmControlsT = SsmControls>
    ExecutionControls& WithSsmControls(SsmControlsT&& value) { SetSsmControls(std::forward<SsmControlsT>(value)); return *this;}
    ///@}
  private:

    SsmControls m_ssmControls;
    bool m_ssmControlsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
